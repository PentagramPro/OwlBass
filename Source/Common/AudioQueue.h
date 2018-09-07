#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class CAudioQueue {
public:
	CAudioQueue(int channels, double lengthSeconds, int sampleRate);

	void AdvancePointer();
	void SetSample(int channel,double sample);

	double GetRelativeToFront(double timeSeconds, int channel) const;
	double GetLastSample(int channel) const;

	int GetNumChannels() const;
	void SetLength(double lengthSeconds);

private:
	AudioSampleBuffer mBuffer;
	int mCurrentSample = 0;
	int mSampleRate = 0;
	int mChannels = 0;
	double mLength = 0;
};