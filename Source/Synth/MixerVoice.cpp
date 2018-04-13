
#include "MixerVoice.h"


MixerVoice::MixerVoice(const std::vector<IVoiceModule*>& subvoices) {
    for(auto subvoice: subvoices) {
        mSubvoices.emplace_back(subvoice);
    }
}




void MixerVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    for(auto& voice : mSubvoices) {
        voice->OnNoteStart(midiNoteNumber, velocity, sound, currentPitchWheelPosition);
    }
}

void MixerVoice::OnNoteStop(float velocity, bool allowTailOff) {
    for(auto& voice : mSubvoices) {
        voice->OnNoteStop(velocity,allowTailOff);
    }
}


void MixerVoice::ProcessBlock(AudioSampleBuffer &outputBuffer, int startSample, int numSamples) {


    for(auto& voice : mSubvoices) {
        voice->ProcessBlock(outputBuffer, startSample, numSamples);
    }

}
