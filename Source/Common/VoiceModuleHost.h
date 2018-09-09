#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "IVoiceModule.h"
#include "VoiceModuleBase.h"
#include "IVoiceModuleHost.h"

class CPropertiesRegistry;

class CVoiceModuleHost : public SynthesiserVoice, public IVoiceModuleHost {
public:
    CVoiceModuleHost(CPropertiesRegistry& propRegistry);
    void AddModule(IVoiceModule* module);
	

    bool canPlaySound(SynthesiserSound* sound) override;

    void startNote(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) override;

    void stopNote(float velocity, bool allowTailOff) override;

    void pitchWheelMoved(int newPitchWheelValue) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;

    void renderNextBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;


    double GetSampleRate() const override;

    void SoundEnded() override;

	IVoiceModule* GetVoiceByName(const std::string& name) const ;

private:
    std::vector<std::unique_ptr<IVoiceModule>> mVoiceModules;
	CPropertiesRegistry & mPropRegistry;
};