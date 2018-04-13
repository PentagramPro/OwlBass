
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/IVoiceModule.h"
#include "../Common/IVoiceModuleHost.h"

class SineWaveVoice : public IVoiceModule
{
public:
	SineWaveVoice(IVoiceModuleHost& host, float freqRate);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int /*currentPitchWheelPosition*/) override;

	void OnNoteStop(float /*velocity*/, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	double currentAngle = 0.0, angleDelta = 0.0, level = 0.0, tailOff = 0.0;
	float mFreqRate = 1;
	IVoiceModuleHost& mHost;
};