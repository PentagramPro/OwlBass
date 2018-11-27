#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/CMultiChannelIir.h"

class CStereoEffectsVoice : public CVoiceModuleBase {
public:
	CStereoEffectsVoice(const std::string& name, IVoiceModuleHost& host);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

	virtual void InitProperties(CPropertiesRegistry & registry) override;
private:
	double mPan = 0;
	
};