#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class CAudioQueue {
public:
	CAudioQueue(int channels, int samples);

	void AdvancePointer();
	void SetSample(int channel,double sample);

	double GetRelativeToFront(int offset, int channel) const;
	double GetLastSample(int channel) const;

	int GetNumChannels() const;
private:
	AudioSampleBuffer mBuffer;
	int mCurrentSample = 0;
};