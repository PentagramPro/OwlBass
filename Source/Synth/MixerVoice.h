#pragma once
#include "JuceHeader.h"
#include <vector>
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"

class CMixerVoice : public CVoiceModuleBase {

public:
    CMixerVoice(const std::string& name, IVoiceModuleHost& host);

    void OnNoteStart(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) override;

    void OnNoteStop(float velocity, bool allowTailOff) override;
	void AddModule(IVoiceModule* voice);

	virtual bool IsBusy() const override;

    void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;
private:
    std::vector<std::unique_ptr<IVoiceModule>> mSubvoices;
	AudioBuffer<float> mBuffer;

	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	double mVolume = 1;
};

