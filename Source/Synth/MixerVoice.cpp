
#include "MixerVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

CMixerVoice::CMixerVoice(const std::string& name, IVoiceModuleHost& host) : CVoiceModuleBase(name, host) {
    
}




void CMixerVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
    for(auto& voice : mSubvoices) {
        voice->OnNoteStart(midiNoteNumber, velocity, sound, currentPitchWheelPosition);
    }
}

void CMixerVoice::OnNoteStop(float velocity, bool allowTailOff) {
    for(auto& voice : mSubvoices) {
        voice->OnNoteStop(velocity,allowTailOff);
    }
}

void CMixerVoice::AddModule(IVoiceModule * voice)
{
	mSubvoices.emplace_back(voice);
}

bool CMixerVoice::IsBusy() const
{
	for (const auto& voice : mSubvoices) {
		if (voice->IsBusy()) {
			return true;
		}
	}
	return false;
}


void CMixerVoice::ProcessBlock(AudioSampleBuffer &outputBuffer, int startSample, int numSamples) {

	mBuffer.setSize(2, outputBuffer.getNumSamples(), false, false, true);
	mBuffer.clear();

    for(auto& voice : mSubvoices) {
        voice->ProcessBlockOfSound(mBuffer, startSample, numSamples);
    }
	
	
	outputBuffer.applyGain(startSample,numSamples,2 - mVolume);

	for (int i = 0; i < outputBuffer.getNumChannels(); i++) {
		outputBuffer.addFrom(i, startSample, mBuffer, 0,startSample, numSamples, mVolume);
	}
	
}

void CMixerVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Volume"), new CPropertyDouble01(mVolume, 0, 1));
	for (auto& voice : mSubvoices) {
		voice->InitProperties(registry);
	}
}
