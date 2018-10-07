#include "CMultiChannelIir.h"

CMultiChannelIir::CMultiChannelIir(juce::IIRCoefficients & coefficients)
{
	mIirFilters.emplace_back();
	mIirFilters.back().setCoefficients(coefficients);
}

void CMultiChannelIir::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	while (mIirFilters.size() < outputBuffer.getNumChannels()) {
		mIirFilters.emplace_back(mIirFilters.front());
	}

	int channel = 0;
	for (auto& f : mIirFilters) {
		f.processSamples(outputBuffer.getWritePointer(channel,startSample),numSamples);
		channel++;
	}
}
