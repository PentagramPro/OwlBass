#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class MixerVoice : public CVoiceModuleBase {

public:
    MixerVoice(const std::string& name, IVoiceModuleHost& host, const std::vector<IVoiceModule*>& subvoices);


    void OnNoteStart(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) override;

    void OnNoteStop(float velocity, bool allowTailOff) override;


    void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;
private:
    std::vector<std::unique_ptr<IVoiceModule>> mSubvoices;

	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
};

