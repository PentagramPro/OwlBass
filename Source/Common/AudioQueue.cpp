#include "AudioQueue.h"

CAudioQueue::CAudioQueue(int channels, int samples) : mBuffer(channels, samples)
{
	mBuffer.clear();
}

void CAudioQueue::PushToFront(const double * sample)
{
	for (int i = 0; i < mBuffer.getNumChannels(); i++) {
		mBuffer.setSample(i, mCurrentSample, sample[i]);
	}
	mCurrentSample++;
	if (mCurrentSample >= mBuffer.getNumSamples()) {
		mCurrentSample = 0;
	}
}

double CAudioQueue::GetRelativeToFront(int offset, int channel) const 
{
	const int bufferSize = mBuffer.getNumSamples();
	int samplePos = (mCurrentSample - 1 - offset) % bufferSize;
	if (samplePos < 0) {
		samplePos += bufferSize;
	}
	return mBuffer.getSample(channel,samplePos);
}

int CAudioQueue::GetNumChannels() const
{
	return mBuffer.getNumChannels();
}
