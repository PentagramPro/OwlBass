
#include "SineWaveVoice.h"

SineWaveVoice::SineWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate)
		: CVoiceModuleBase(name, host), mFreqRate(freqRate){

}




  void SineWaveVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int)
  {
	  currentAngle = 0.0;
	  level = velocity * 0.15;
	  tailOff = 0.0;

	  auto cyclesPerSecond = mFreqRate*MidiMessage::getMidiNoteInHertz(midiNoteNumber);
	  auto cyclesPerSample = cyclesPerSecond / GetSampleRate();

	  angleDelta = cyclesPerSample * 2.0 * MathConstants<double>::pi;
	  StartSound();
  }

  void SineWaveVoice::OnNoteStop(float, bool allowTailOff)
  {/*
	  if (allowTailOff)
	  {
		  if (tailOff == 0.0)
			  tailOff = 1.0;
	  }
	  else
	  {
		  StopSound();
		  angleDelta = 0.0;
	  }*/
  }

  void SineWaveVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
  {
	  if (angleDelta != 0.0)
	  {
		  if (tailOff > 0.0) // [7]
		  {
			  while (--numSamples >= 0)
			  {
				  auto currentSample = (float)(std::sin(currentAngle) * level * tailOff);

				  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
					  outputBuffer.addSample(i, startSample, currentSample);

				  currentAngle += angleDelta;
				  ++startSample;

				  tailOff *= 0.99; // [8]

				  if (tailOff <= 0.005)
				  {
					  StopSound(); // [9]

					  angleDelta = 0.0;
					  break;
				  }
			  }
		  }
		  else
		  {
			  while (--numSamples >= 0) // [6]
			  {
				  auto currentSample = (float)(std::sin(currentAngle) * level);

				  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
					  outputBuffer.addSample(i, startSample, currentSample);

				  currentAngle += angleDelta;
				  ++startSample;
			  }
		  }
	  }
  }

  void SineWaveVoice::InitProperties(CPropertiesRegistry & registry)
  {
  }


