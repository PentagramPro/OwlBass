#pragma once


#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/CMultiChannelIir.h"

class CCompressorVoice : public CVoiceModuleBase {
public:
	CCompressorVoice(const std::string& name, IVoiceModuleHost& host, float volumePrescale);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

	virtual void InitProperties(CPropertiesRegistry & registry) override;
private:
	double mThreshold = 1;
	double mRate = 1;
	double mPreGain = 1;
	double mPostGain = 1;
	const double mVolumePrescale;
};