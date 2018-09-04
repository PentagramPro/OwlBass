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


	  while (--samplesCount >= 0) {
		  

		  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
			  outputBuffer.setSample(i, currentSample, mRandom.nextDouble());

		  currentSample++;
	  }
  }

  void CNoiseVoice::InitProperties(CPropertiesRegistry & registry)
  {
  }
