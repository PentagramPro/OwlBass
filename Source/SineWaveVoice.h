
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

struct SineWaveVoice : public SynthesiserVoice
{
	SineWaveVoice(float freqRate);

	bool canPlaySound(SynthesiserSound* sound) override;

	void startNote(int midiNoteNumber, float velocity,
		SynthesiserSound*, int /*currentPitchWheelPosition*/) override;

	void stopNote(float /*velocity*/, bool allowTailOff) override;

	void pitchWheelMoved(int newPitchWheelValue) override;
	void controllerMoved(int controllerNumber, int newControllerValue) override;

	void renderNextBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	double currentAngle = 0.0, angleDelta = 0.0, level = 0.0, tailOff = 0.0;
	float mFreqRate = 1;
};