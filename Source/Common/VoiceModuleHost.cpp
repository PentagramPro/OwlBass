

#include "VoiceModuleHost.h"
#include "VoiceModuleHostSound.h"
#include <string>

CVoiceModuleHost::CVoiceModuleHost(CPropertiesRegistry& propRegistry) : mPropRegistry(propRegistry) {

}

void CVoiceModuleHost::AddModule(IVoiceModule *module) {
    mVoiceModules.emplace_back(module);
	module->InitProperties(mPropRegistry);
}




bool CVoiceModuleHost::canPlaySound(SynthesiserSound *sound) {
    auto voiceModuleSound = dynamic_cast<CVoiceModuleHostSound*> (sound);
    return voiceModuleSound!= nullptr;
}

void CVoiceModuleHost::startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) {
	DBG("= New note " << midiNoteNumber << " (" << MidiMessage::getMidiNoteInHertz(midiNoteNumber) << ") =");
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

double CVoiceModuleHost::GetSampleRate() const {
    return getSampleRate();
}

void CVoiceModuleHost::SoundEnded() {
	for (auto& voice : mVoiceModules) {
		if (voice->IsBusy()) {
			return;
		}
	}
    clearCurrentNote();
}

IVoiceModule * CVoiceModuleHost::GetVoiceByName(const std::string & name) const
{
	auto res = std::find_if(mVoiceModules.begin(), mVoiceModules.end(), [&](const std::unique_ptr<IVoiceModule>& m) {
		return m->GetName() == name;
	});

	if (res == mVoiceModules.end()) {
		return nullptr;
	}
	return res->get();
}
