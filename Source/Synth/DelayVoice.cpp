#include "DelayVoice.h"
#include "../Common/ProperiesRegistry.h"

void CDelayVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Wet"), new CPropertyDouble01(mWet, 0, 1));
	registry.AddProperty(GetPropName("Delay"), new CPropertyDouble01(mLengthSec, 0, 2));
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

	if (mLengthSec != mBufferLengthSec || !mBuffer) {
		const int bufferSize = GetSampleRate()*mLengthSec;
		mBuffer.reset(new CAudioQueue(outputBuffer.getNumChannels(), bufferSize));
		mBufferLengthSec = mLengthSec;
		if (mLastSample.size() < outputBuffer.getNumChannels()) {
			mLastSample.resize(outputBuffer.getNumChannels());
			std::fill(mLastSample.begin(), mLastSample.end(), 0);
		}
	}

	const int channels = outputBuffer.getNumChannels();
	const double dry = 1 - mWet;
	const double feedbackDry = 1 - mFeedback;
	while (--samplesCount >= 0) {

		mBuffer->AdvancePointer();

		for (int channel = 0; channel < channels; channel++) {
			const double sourceSample = outputBuffer.getSample(channel, currentSample);
			double resSample = sourceSample *dry + mBuffer->GetLastSample(channel)*mWet;
			
			//resSample = resSample * feedbackDry + mLastSample[channel] * mFeedback;

			outputBuffer.setSample(channel, currentSample, resSample);

			//mLastSample[channel] = resSample;
			mBuffer->SetSample(channel, sourceSample*feedbackDry+resSample*mFeedback);
		}

		currentSample++;
	}

}
