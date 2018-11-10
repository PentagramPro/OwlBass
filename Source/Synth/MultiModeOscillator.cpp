#include "MultiModeOscillator.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

CMultiModeOscillator::CMultiModeOscillator(const std::string & name, IVoiceModuleHost & host, IVoltageController & referenceSawtooth, double pan) : CVoiceModuleBase(name,host)
, mReferenceSawtooth(referenceSawtooth), mPan(pan)
{
}

void CMultiModeOscillator::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	StartSound();
}

void CMultiModeOscillator::OnNoteStop(float velocity, bool allowTailOff)
{
	StopSound();
}

void CMultiModeOscillator::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	if (outputBuffer.getNumChannels() < 2) {
		jassertfalse;
	}

	
	while (--samplesCount >= 0) {
		double reference = mReferenceSawtooth.GetValue(currentSample)+mPhase;
		if (reference > 1) {
			reference -= 1;
		}

		if (reference < mLastReference) {
			mDividerCounter++;
			if (mDividerCounter >= mDividerMax) { 
				mDividerCounter = 0;
			}
		}
		mLastReference = reference;

		const double sawtoothDivided = ((double)mDividerCounter + reference) / (double)mDividerMax * 2.0 - 1.0;
		
		
		double result = 0;
		switch (mWaveform) {
		case 2:
			// triangle
			result = std::abs(sawtoothDivided)*2.0 - 1.0;
			break;
		case 3:
			// square
			result = sawtoothDivided > 0 ? 1.0 : -1.0;
			break;
		default:
			result = sawtoothDivided;
		}

		result *= mVolume;
		const double panLeft = -mPan / 2 + 0.5;
		const double panRight = mPan / 2 + 0.5;
		outputBuffer.addSample(0, currentSample, result*panLeft);
		outputBuffer.addSample(1, currentSample, result*panRight);

		currentSample++;
	}
}

void CMultiModeOscillator::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Volume"), new CPropertyDouble01(mVolume, 0.0, 1.0));
	registry.AddProperty(GetPropName("Phase"), new CPropertyDouble01(mPhase, 0.0, 1.0));
	registry.AddProperty(GetPropName("Divider"), new CPropertyInt(mDividerMax, 1, 4));
	registry.AddProperty(GetPropName("Waveform"), new CPropertyInt(mWaveform, 1, 3));
}
