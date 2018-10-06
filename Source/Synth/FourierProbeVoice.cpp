
#include "FourierProbeVoice.h"
#include "../modules/juce_dsp/juce_dsp.h"

CFourierProbeVoice::CFourierProbeVoice(const std::string & name, IVoiceModuleHost & host, int sizeInPowersOfTwo) 
	: CVoiceModuleBase(name, host)
	, mFullSize(std::pow(2,sizeInPowersOfTwo)*2)
	, mFft(sizeInPowersOfTwo)
{
	mInputBuffer.setSize(1, mFullSize);
	mOutputBuffer.setSize(1, mFullSize / 4,false,true,false);
}

void CFourierProbeVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
}

void CFourierProbeVoice::OnNoteStop(float velocity, bool allowTailOff)
{
}

void CFourierProbeVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	const float mixRate = 0.1;
	while (numSamples > 0) {
		const int sizeToCopy = std::min(mInputBuffer.getNumSamples() - mInputBufferPos, numSamples);
		mInputBuffer.copyFrom(0, mInputBufferPos, outputBuffer, 2, startSample, sizeToCopy);
		mInputBufferPos += sizeToCopy;
		startSample += sizeToCopy;
		numSamples -= sizeToCopy;
		if (mInputBufferPos >= mInputBuffer.getNumSamples()) {

			mFft.performFrequencyOnlyForwardTransform(mInputBuffer.getWritePointer(0));
			const int quarterSize = mFullSize / 4;

			for (int i = 0; i < quarterSize; i++) {
				double sample = mInputBuffer.getSample(0, quarterSize + i);
				const double outputSample = mOutputBuffer.getSample(0, i);

				sample = std::log10l(sample);
				mOutputBuffer.setSample(0, i, sample*mixRate + outputSample*(1 - mixRate));
			}
			
			mInputBufferPos = 0;
		}
	}

}

void CFourierProbeVoice::InitProperties(CPropertiesRegistry & registry)
{
}
