
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class CSineLfoVoice : public CVoiceModuleBase
{
public:
	CSineLfoVoice(const std::string& name, IVoiceModuleHost& host);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int /*currentPitchWheelPosition*/) override;

	void OnNoteStop(float /*velocity*/, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	void UpdateFrequency();

	double currentAngle = 0.0, angleDelta = 0.0;
	double mFrequency = 1;
	double mVolume = 0;

};