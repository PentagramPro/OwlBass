//
// Created by Maxim.Machekhin on 2018-04-13.
//

#include "EnvelopeVoice.h"
#include "../Common/ProperiesRegistry.h"
#include <algorithm>
#include <string>

void EnvelopeVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Attack"), mAttackTime, 0.001, 10);
}

void EnvelopeVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    mSoundLevel = 0;
    mState = EState::Attack;
}

void EnvelopeVoice::OnNoteStop(float velocity, bool allowTailOff) {
    mState = EState::Idle;
}



void EnvelopeVoice::ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) {
    int samplesCount = numSamples;
    int currentSample = startSample;

    if(mState==EState::Idle) {
        return;
    }

    while (--samplesCount >= 0){


        if(mState == EState::Attack) {

            mSoundLevel+= 1 / (GetHost().GetSampleRate()*mAttackTime);
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
            outputBuffer.setSample(i, currentSample, scaledSampleValue);
        }
        currentSample++;
    }
}

