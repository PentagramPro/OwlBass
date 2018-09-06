#include "AudioQueue.h"

CAudioQueue::CAudioQueue(int channels, int samples) : mBuffer(channels, samples)
{
	mBuffer.clear();
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


double CAudioQueue::GetRelativeToFront(int offset, int channel) const 
{
	const int bufferSize = mBuffer.getNumSamples();
	int samplePos = (mCurrentSample - 1 - offset) % bufferSize;
	if (samplePos < 0) {
		samplePos += bufferSize;
	}
	return mBuffer.getSample(channel,samplePos);
}

double CAudioQueue::GetLastSample(int channel) const
{
	return mBuffer.getSample(channel, mCurrentSample < mBuffer.getNumSamples()-1 ? mCurrentSample + 1 : 0);
}

int CAudioQueue::GetNumChannels() const
{
	return mBuffer.getNumChannels();
}
