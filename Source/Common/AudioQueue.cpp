#include "AudioQueue.h"
#include <cmath>

CAudioQueue::CAudioQueue(int channels, double lengthSeconds, int sampleRate)
	: mSampleRate(sampleRate)
	, mChannels(channels)
{
	SetLength(lengthSeconds);
	mBuffer.clear();
}

void CAudioQueue::SetLength(double lengthSeconds) {
	if (mLength >= lengthSeconds) {
		return;
	}
	const int samples = lengthSeconds * mSampleRate+10;
	mBuffer.setSize(mChannels, samples, true, true);
	mLength = lengthSeconds;
}

void CAudioQueue::AdvancePointer()
{
	mCurrentSample++;
	if (mCurrentSample >= mBuffer.getNumSamples()) {
		mCurrentSample = 0;
	}
}

void CAudioQueue::SetSample(int channel, double sample)
{
	mBuffer.setSample(channel, mCurrentSample, sample);
}


double CAudioQueue::GetRelativeToFront(double timeSeconds, int channel) const 
{
	const int bufferSize = mBuffer.getNumSamples();
	const double offset = timeSeconds * mSampleRate;
	const int offsetMax = std::ceil(offset);
	const int offsetMin = std::floor(offset);

	int sampleMax = (mCurrentSample - 1 - offsetMax);
	if (sampleMax < 0) { sampleMax += bufferSize; }

	int sampleMin = (mCurrentSample - 1 - offsetMin);
	if (sampleMin < 0) { sampleMin += bufferSize; }

	const double distanceFromMax = offsetMax - offset;

	return mBuffer.getSample(channel,sampleMax)*(1-distanceFromMax)+ mBuffer.getSample(channel, sampleMin)*distanceFromMax;
}

double CAudioQueue::GetLastSample(int channel) const
{
	return mBuffer.getSample(channel, mCurrentSample < mBuffer.getNumSamples()-1 ? mCurrentSample + 1 : 0);
}

int CAudioQueue::GetNumChannels() const
{
	return mBuffer.getNumChannels();
}
