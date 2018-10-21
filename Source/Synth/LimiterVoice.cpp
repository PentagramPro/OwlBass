#include "LimiterVoice.h"
#include "VSTComponents/Owl/Toolbox.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

void CLimiterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;
	const double fullVolume = mPreVolume * mVolume;
	double magnitudeChannel0 = 0;
	double magnitudeChannel1 = 0;
	if (outputBuffer.getNumChannels() >= 2) {
		magnitudeChannel0 = outputBuffer.getMagnitude(0, startSample, numSamples)*fullVolume;
		magnitudeChannel1 = outputBuffer.getMagnitude(1, startSample, numSamples)*fullVolume;
	} 
	
	while (--samplesCount >= 0) {

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			double scaledSampleValue = outputBuffer.getSample(i, currentSample)*fullVolume;
			scaledSampleValue = Toolbox::clamp(scaledSampleValue,-1.0,1.0);
			outputBuffer.setSample(i, currentSample, scaledSampleValue);
		}

		mLevelChannel0 = mDelayChannel0.Next(magnitudeChannel0);
		mLevelChannel1 = mDelayChannel1.Next(magnitudeChannel1);
		currentSample++;
	}

}

CLimiterVoice::CLimiterVoice(const std::string & name, IVoiceModuleHost & host, double preVolume) : CVoiceModuleBase(name, host)
, mPreVolume(preVolume)
{
	mDelayChannel0.Reset(GetSampleRate(), 0.5);
	mDelayChannel1.Reset(GetSampleRate(), 0.5);
}

void CLimiterVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Volume"), new CPropertyDouble01(mVolume, 0.1, 1), false);
	registry.AddProperty(GetPropName("LevelChannel0"), new CPropertyDouble01(mLevelChannel0,0,2),false);
	registry.AddProperty(GetPropName("LevelChannel1"), new CPropertyDouble01(mLevelChannel1,0,2), false);
}