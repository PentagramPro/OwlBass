#include "MultiModeOscillator.h"
#include "../Common/ProperiesRegistry.h"

CMultiModeOscillator::CMultiModeOscillator(const std::string & name, IVoiceModuleHost & host, IVoltageController & referenceSawtooth) : CVoiceModuleBase(name,host)
, mReferenceSawtooth(referenceSawtooth)
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

	const auto& referenceBuffer = mReferenceSawtooth.GetVoltageBuffer();
	while (--samplesCount >= 0) {
		const double reference = referenceBuffer.getSample(0, currentSample);

		if (reference == 0.0) {
			mDividerCounter++;
			if (mDividerCounter >= mDividerMax) {
				mDividerCounter = 0;
			}
		}

		const double sawtoothDivided = ((double)mDividerCounter + reference) / (double)mDividerMax;
		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, sawtoothDivided);
		}

		currentSample++;
	}
}

void CMultiModeOscillator::InitProperties(CPropertiesRegistry & registry)
{
	//registry.AddProperty("divider")
}
