#include "LimiterVoice.h"
#include "../Common/Toolbox.h"

void CLimiterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	
	while (--samplesCount >= 0) {


		

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			double scaledSampleValue = outputBuffer.getSample(i, currentSample)*mPreVolume;
			scaledSampleValue = Toolbox::clamp(scaledSampleValue,-1.0,1.0);
			outputBuffer.setSample(i, currentSample, scaledSampleValue);
		}
		currentSample++;
	}
}
