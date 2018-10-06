#include "NoiseVoice.h"

void CNoiseVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
  {
	StartSound();
	mRandom.setSeedRandomly();
  }

  void CNoiseVoice::OnNoteStop(float velocity, bool allowTailOff)
  {
	  StopSound();
  }

  void CNoiseVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
  {
	  int samplesCount = numSamples;
	  int currentSample = startSample;
	  if (outputBuffer.getNumChannels() < 3) {
		  return;
	  }

	  while (--samplesCount >= 0) {
		  outputBuffer.setSample(2, currentSample, mRandom.nextDouble());

		  currentSample++;
	  }
  }

  void CNoiseVoice::InitProperties(CPropertiesRegistry & registry)
  {
  }
