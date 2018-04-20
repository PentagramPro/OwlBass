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
	registry.AddProperty(GetPropName("Release"), mReleaseTime, 0.001, 10);
}

void EnvelopeVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    mSoundLevel = 0;
    mState = EState::Attack;
	StartSound();
}

void EnvelopeVoice::OnNoteStop(float velocity, bool allowTailOff) {
    mState = EState::Release;
	StopSound();
}



void EnvelopeVoice::ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) {
    int samplesCount = numSamples;
    int currentSample = startSample;

	const double attackSamples = 1 / (GetSampleRate()*mAttackTime);
	const double releaseSamples = 1 / (GetSampleRate()*mReleaseTime);

    while (--samplesCount >= 0){


        if(mState == EState::Attack) {

            mSoundLevel+= attackSamples;
            if (mSoundLevel > 1) {
                mSoundLevel = 1;
                mState = EState::Sustain;
            }
        }
		else if (mState == EState::Release) {
			mSoundLevel -= releaseSamples;
			if (mSoundLevel <= 0) {
				mSoundLevel = 0;
				mState = EState::Idle;
			}
		}
		else if (mState == EState::Idle) {
			mSoundLevel = 0;
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

