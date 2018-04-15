
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class SineWaveVoice : public CVoiceModuleBase
{
public:
	SineWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int /*currentPitchWheelPosition*/) override;

	void OnNoteStop(float /*velocity*/, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	double currentAngle = 0.0, angleDelta = 0.0, level = 0.0, tailOff = 0.0;
	float mFreqRate = 1;


};