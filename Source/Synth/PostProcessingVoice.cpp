#include "PostProcessingVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

CPostProcessingVoice::CPostProcessingVoice(const std::string & name, IVoiceModuleHost & host)
	: CVoiceModuleBase(name, host) 
{
	mFilters.emplace_back(juce::IIRCoefficients::makeLowPass(GetSampleRate(), 6324, 1.1));
	mFilters.emplace_back(juce::IIRCoefficients::makeLowPass(GetSampleRate(), 6324, 1.1));
	mFilters.emplace_back(juce::IIRCoefficients::makeHighPass(GetSampleRate(), 56, 2.2));
	mFilters.emplace_back(juce::IIRCoefficients::makeHighPass(GetSampleRate(), 56, 2.2));
	mFilters.emplace_back(juce::IIRCoefficients::makePeakFilter(GetSampleRate(),1326,1,0.75));
}

void CPostProcessingVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	StartSound();
	
}

void CPostProcessingVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	StopSound();
}

void CPostProcessingVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	if (mEnabled == 0)
		return;

	for (auto& f : mFilters) {
		f.ProcessBlock(outputBuffer, startSample, numSamples);
	}

}

void CPostProcessingVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Enabled"), new CPropertyInt(mEnabled, 0, 1));
}
