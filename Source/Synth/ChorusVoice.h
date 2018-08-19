#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../Common/AudioQueue.h"
#include "IVoltageController.h"
#include <vector>

class CChorusVoice : public CVoiceModuleBase {
public:
	CChorusVoice(const std::string& name, IVoiceModuleHost& host, IVoltageController& phaseLfo, double lengthSec, int voices)
		: CVoiceModuleBase(name, host), mLengthSec(lengthSec), mVoices(voices), mPhaseLfo(phaseLfo) {}


	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	virtual void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition) override;

	virtual void OnNoteStop(float velocity, bool allowTailOff) override;

	virtual void ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples) override;
private:
	std::unique_ptr<CAudioQueue> mBuffer;
	std::vector<int> mVoiceOffsets;
	IVoltageController& mPhaseLfo;
	double mLengthSec;
	double mWet = 0;
	
	int mVoices;
};


