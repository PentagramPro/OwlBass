//
// Created by Maxim.Machekhin on 2018-04-13.
//

#include "EnvelopeVoice.h"
#include <algorithm>

bool EnvelopeVoice::canPlaySound(SynthesiserSound *sound) {
    true;
}

void EnvelopeVoice::startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    mSoundLevel = 0;
    mAttackPerSample = mAttackTime/getSampleRate();
    mState = EState::Attack;
}

void EnvelopeVoice::stopNote(float velocity, bool allowTailOff) {
    mState = EState::Idle;
}

void EnvelopeVoice::pitchWheelMoved(int newPitchWheelValue) {

}

void EnvelopeVoice::controllerMoved(int controllerNumber, int newControllerValue) {

}

void EnvelopeVoice::renderNextBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) {
    int samplesCount = numSamples;
    int currentSample = startSample;

    if(mState==EState::Idle) {
        return;
    }

    while (--samplesCount >= 0){


        if(mState == EState::Attack) {

            mSoundLevel+=mAttackPerSample;
            if (mSoundLevel > 1) {
                mSoundLevel = 1;
                mState = EState::Sustain;
            }
        }
        else {
            mSoundLevel = 1;
        }
        

        for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
            const double scaledSampleValue = outputBuffer.getSample(i, currentSample)*mSoundLevel;
            if(mState==EState::Attack) {
                Logger::writeToLog(std::to_string(scaledSampleValue));
            }
            outputBuffer.setSample(i, currentSample, scaledSampleValue);
        }
        currentSample++;
    }
}
