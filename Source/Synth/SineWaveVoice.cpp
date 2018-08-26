
#include "SineWaveVoice.h"
#include "../Common/ProperiesRegistry.h"

CSineLfoVoice::CSineLfoVoice(const std::string& name, IVoiceModuleHost& host)
		: CVoiceModuleBase(name, host){

}




  void CSineLfoVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int)
  {
	  
	  StartSound();
  }

  void CSineLfoVoice::OnNoteStop(float, bool allowTailOff)
  {
	  StopSound();
  }

  void CSineLfoVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
  {
	  UpdateFrequency();
	  if (angleDelta == 0.0)
	  {
		  return;
	  }
	  while (--numSamples >= 0) 
	  {
		  auto currentSample = (float)(std::sin(currentAngle));

		  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
			  outputBuffer.addSample(i, startSample, currentSample);

		  currentAngle += angleDelta;
		  ++startSample;
	  }
		  
	  
  }

  void CSineLfoVoice::InitProperties(CPropertiesRegistry & registry)
  {
	  registry.AddProperty(GetPropName("Frequency"), new CPropertySquareDouble01(mFrequency, 0.1, 5.0));
  }

  void CSineLfoVoice::UpdateFrequency()
  {
	  currentAngle = 0.0;
	  

	  auto cyclesPerSecond = mFrequency;
	  auto cyclesPerSample = cyclesPerSecond / GetSampleRate();

	  angleDelta = cyclesPerSample * 2.0 * MathConstants<double>::pi;
  }


