#include "EnvelopeVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include <algorithm>
#include <string>
#include <cmath>

const double MaxVolume = 1.0;
const double MinDecay = 0.01;

void EnvelopeVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Attack"), new CPropertySquareDouble01(mAttackTime, 0.0004, 5.0));
	registry.AddProperty(GetPropName("Decay"), new CPropertySquareDouble01(mDecayTime, 0.001, 3.0));
	registry.AddProperty(GetPropName("Release"), new CPropertySquareDouble01(mReleaseTime, 0.001, 10.0));
	registry.AddProperty(GetPropName("Sustain"), new CPropertyDouble01(mSustainLevel, 0.0, 1.0));
	registry.AddProperty(GetPropName("Retrigger"), new CPropertyInt(mRetrigger, 0, 1));
}

void EnvelopeVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    //mSoundLevel = 0;

	mState = EState::Attack;
	if (mRetrigger == 1) {
		mSoundLevel = 0;
	}
	StartSound();
}

void EnvelopeVoice::OnNoteStop(float velocity, bool allowTailOff) {
    mState = EState::Release;
	const double sampleRate = GetSampleRate();
	if (sampleRate > 0) {
		mReleaseStep = mSoundLevel / (sampleRate*mReleaseTime);
	}
	else {
		mReleaseStep = 1;
	}
}



void EnvelopeVoice::ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) {
    int samplesCount = numSamples;
    int currentSample = startSample;
	const bool hasDecay = mDecayTime > MinDecay;
	const double maxAttack = hasDecay ? MaxVolume : mSustainLevel;

	const double attackSamples = maxAttack / (GetSampleRate()*mAttackTime);
	
	const double decaySamples = hasDecay ? (maxAttack-mSustainLevel) / (GetSampleRate()*mDecayTime) : 0;

    while (--samplesCount >= 0){


        if(mState == EState::Attack) {
            mSoundLevel+= attackSamples;
			if (mSoundLevel > maxAttack) {
				mSoundLevel = maxAttack;
				mState = hasDecay ? EState::Decay : EState::Sustain;
			}
        }
		else if (mState == EState::Decay) {
			mSoundLevel -= decaySamples;
			if (mSoundLevel < mSustainLevel) {
				mSoundLevel = mSustainLevel;
				mState = EState::Sustain;
			}
		}
		else if (mState == EState::Release) {
			mSoundLevel -= mReleaseStep;
			if (mSoundLevel <= 0) {
				mSoundLevel = 0;
				mState = EState::Idle;
				StopSound();
			}
		}
		else if (mState == EState::Idle) {
			mSoundLevel = 0;
		}
        else {
            mSoundLevel = mSustainLevel;
        }
		

        for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
            const double scaledSampleValue = outputBuffer.getSample(i, currentSample)*mSoundLevel;
            outputBuffer.setSample(i, currentSample, scaledSampleValue);
        }
        currentSample++;
    }
}

