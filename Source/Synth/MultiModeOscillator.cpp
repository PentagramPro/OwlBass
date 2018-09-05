#include "MultiModeOscillator.h"
#include "../Common/ProperiesRegistry.h"

CMultiModeOscillator::CMultiModeOscillator(const std::string & name, IVoiceModuleHost & host, IVoltageController & referenceSawtooth) : CVoiceModuleBase(name,host)
, mReferenceSawtooth(referenceSawtooth)
{
}

void CMultiModeOscillator::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	DBG("Oscillator mode " << mWaveform);
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

	const auto& referenceBuffer = mReferenceSawtooth.GetVoltageBuffer();
	while (--samplesCount >= 0) {
		const double reference = referenceBuffer.getSample(0, currentSample);

		if (reference == 0.0) {
			mDividerCounter++;
			if (mDividerCounter >= mDividerMax) { 
				mDividerCounter = 0;
			}
		}

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
		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, result*mVolume);
		}

		currentSample++;
	}
}

void CMultiModeOscillator::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Volume"), new CPropertyDouble01(mVolume, 0.0, 1.0));
	registry.AddProperty(GetPropName("Divider"), new CPropertyInt(mDividerMax, 1, 4));
	registry.AddProperty(GetPropName("Waveform"), new CPropertyInt(mWaveform, 1, 3));
}
