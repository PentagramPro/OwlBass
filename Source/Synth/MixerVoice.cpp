//
// Created by Maxim.Machekhin on 2018-04-13.
//

#include "MixerVoice.h"


MixerVoice::MixerVoice(const std::vector<SynthesiserVoice *> &subvoices) {
    for(auto subvoice: subvoices) {
        mSubvoices.emplace_back(subvoice);
    }
}



bool MixerVoice::canPlaySound(SynthesiserSound *sound) {
    bool res = false;
    for(auto& voice : mSubvoices) {
        res = res || voice->canPlaySound(sound);
    }
    return res;
}

void MixerVoice::startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    for(auto& voice : mSubvoices) {
        voice->startNote(midiNoteNumber, velocity, sound, currentPitchWheelPosition);
    }
}

void MixerVoice::stopNote(float velocity, bool allowTailOff) {
    for(auto& voice : mSubvoices) {
        voice->stopNote(velocity,allowTailOff);
    }
}

void MixerVoice::pitchWheelMoved(int newPitchWheelValue) {
    for(auto& voice : mSubvoices) {
        voice->pitchWheelMoved(newPitchWheelValue);
    }
}

void MixerVoice::controllerMoved(int controllerNumber, int newControllerValue) {
    for(auto& voice : mSubvoices) {
        voice->controllerMoved(controllerNumber, newControllerValue);
    }
}

void MixerVoice::renderNextBlock(AudioSampleBuffer &outputBuffer, int startSample, int numSamples) {


    for(auto& voice : mSubvoices) {
        voice->renderNextBlock(outputBuffer, startSample, numSamples);
    }

}
