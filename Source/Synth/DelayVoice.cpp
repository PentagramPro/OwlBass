#include "DelayVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

const double MaxDelayLength = 2;

CDelayVoice::CDelayVoice(const std::string & name, IVoiceModuleHost & host) : CVoiceModuleBase(name, host)
{

}

void CDelayVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Wet"), new CPropertyDouble01(mWet, 0, 1));
	registry.AddProperty(GetPropName("Delay"), new CPropertyDouble01(mLengthSec, 0, MaxDelayLength));
	registry.AddProperty(GetPropName("Feedback"), new CPropertyDouble01(mFeedback, 0, 1));
}

void CDelayVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
}

void CDelayVoice::OnNoteStop(float velocity, bool allowTailOff)
{
}

void CDelayVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	if (!mBuffer) {
		mBuffer.reset(new CAudioQueue(outputBuffer.getNumChannels(), MaxDelayLength,GetSampleRate()));
	}
	if (mFilter.size() < outputBuffer.getNumChannels()) {
		mFilter.resize(outputBuffer.getNumChannels());
		for (auto& filter : mFilter) {
			filter.Reset(GetSampleRate());
			filter.SetParams(2500, 1);
		}
	}

	const int channels = outputBuffer.getNumChannels();
	const double dry = 1 - mWet;
	const double feedbackDry = 1 - mFeedback;
	while (--samplesCount >= 0) {

		mBuffer->AdvancePointer();

		for (int channel = 0; channel < channels; channel++) {
			const double sourceSample = outputBuffer.getSample(channel, currentSample);
			double resSample = sourceSample + mFilter[channel].Next(mBuffer->GetRelativeToFront(mLengthSec,channel)*mWet);


			outputBuffer.setSample(channel, currentSample, resSample);
			const double sampleForDelayBuffer =sourceSample*feedbackDry + resSample * mFeedback;
			mBuffer->SetSample(channel, sampleForDelayBuffer);
		}

		currentSample++;
	}

}
