

#include "VoiceModuleHost.h"
#include "VoiceModuleHostSound.h"

CVoiceModuleHost::CVoiceModuleHost(const std::vector<IVoiceModule *> &modules) {
    for(auto m: modules) {
        mVoiceModules.emplace_back(m);
    }
}

bool CVoiceModuleHost::canPlaySound(SynthesiserSound *sound) {
    auto voiceModuleSound = dynamic_cast<CVoiceModuleHostSound*> (sound);
    return voiceModuleSound!= nullptr;
}

void CVoiceModuleHost::startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    for(auto& voice : mVoiceModules) {
        voice->OnNoteStart(midiNoteNumber, velocity, sound, currentPitchWheelPosition);
    }
}

void CVoiceModuleHost::stopNote(float velocity, bool allowTailOff) {
    for(auto& voice : mVoiceModules) {
        voice->OnNoteStop(velocity, allowTailOff);
    }
}

void CVoiceModuleHost::pitchWheelMoved(int newPitchWheelValue) {
    for(auto& voice : mVoiceModules) {

    }
}

void CVoiceModuleHost::controllerMoved(int controllerNumber, int newControllerValue) {
    for(auto& voice : mVoiceModules) {

    }
}

void CVoiceModuleHost::renderNextBlock(AudioSampleBuffer &outputBuffer, int startSample, int numSamples) {
    for(auto& voice : mVoiceModules) {
        voice->ProcessBlock(outputBuffer, startSample, numSamples);
    }
}
