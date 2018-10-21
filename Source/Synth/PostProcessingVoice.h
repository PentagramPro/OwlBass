#pragma once
#include "JuceHeader.h"
#include "Common/VoiceModuleBase.h"
#include "Common/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/CMultiChannelIir.h"

class CPostProcessingVoice : public CVoiceModuleBase {
public:
	CPostProcessingVoice(const std::string& name, IVoiceModuleHost& host);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

	virtual void InitProperties(CPropertiesRegistry & registry) override;
private:
	int mEnabled = 1;
	std::vector<CMultiChannelIir> mFilters;
	
};