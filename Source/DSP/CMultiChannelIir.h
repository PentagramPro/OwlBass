#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class CMultiChannelIir {
public:
	CMultiChannelIir(juce::IIRCoefficients& coefficients);

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples);
private:

	std::vector<juce::IIRFilter> mIirFilters;
};