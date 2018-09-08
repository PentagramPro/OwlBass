#include "DelayVoice.h"
#include "../Common/ProperiesRegistry.h"

const double MaxDelayLength = 2;

CDelayVoice::CDelayVoice(const std::string & name, IVoiceModuleHost & host) : CVoiceModuleBase(name, host)
{
	mFilter.Reset(GetSampleRate());
	mFilter.SetParams(4000, 1);
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

	const int channels = outputBuffer.getNumChannels();
	const double dry = 1 - mWet;
	const double feedbackDry = 1 - mFeedback;
	while (--samplesCount >= 0) {

		mBuffer->AdvancePointer();

		for (int channel = 0; channel < channels; channel++) {
			const double sourceSample = outputBuffer.getSample(channel, currentSample);
			double resSample = sourceSample + mBuffer->GetRelativeToFront(mLengthSec,channel)*mWet;


			outputBuffer.setSample(channel, currentSample, resSample);

			mBuffer->SetSample(channel, sourceSample*feedbackDry+resSample*mFeedback);
		}

		currentSample++;
	}

}
