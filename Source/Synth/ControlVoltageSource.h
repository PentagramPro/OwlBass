#pragma once

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "IVoltageController.h"

class CControlVoltageSource : public CVoiceModuleBase, public IVoltageController, public IVoiceModuleHost {
public:
	CControlVoltageSource(const std::string& name, IVoiceModuleHost& host, std::shared_ptr<CVoiceModuleBase> wrappedVoice);
	virtual ~CControlVoltageSource();
	void InitProperties(CPropertiesRegistry& registry);
	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	std::shared_ptr<CVoiceModuleBase> mWrappedVoice;
	AudioBuffer<float> mBuffer;

	// Inherited via IVoltageController
	virtual const AudioBuffer<float>& GetVoltageBuffer() const override;

	// Inherited via IVoiceModuleHost
	virtual double GetSampleRate() const override;
	virtual void SoundEnded() override;
};

