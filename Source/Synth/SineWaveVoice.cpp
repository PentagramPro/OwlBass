
#include "SineWaveVoice.h"
#include "Common/ProperiesRegistry.h"

CSineLfoVoice::CSineLfoVoice(const std::string& name, IVoiceModuleHost& host)
		: CVoiceModuleBase(name, host){
	currentAngle = 0;
}




  void CSineLfoVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int)
  {
	  if (mRetrigger == 1) {
		  currentAngle = 0;
	  }
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
		  auto currentSample = (float)(std::sin(currentAngle))*mVolume;

		  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
			  outputBuffer.addSample(i, startSample, currentSample);

		  currentAngle += angleDelta;
		  ++startSample;
	  }
		  
	  
  }

  void CSineLfoVoice::InitProperties(CPropertiesRegistry & registry)
  {
	  registry.AddProperty(GetPropName("Frequency"), new CPropertySquareDouble01(mFrequency, 0.1, 5.0));
	  registry.AddProperty(GetPropName("Volume"), new CPropertySquareDouble01(mVolume, 0, 1));
  }

  void CSineLfoVoice::UpdateFrequency()
  {
	  auto cyclesPerSecond = mFrequency;
	  auto cyclesPerSample = cyclesPerSecond / GetSampleRate();

	  angleDelta = cyclesPerSample * 2.0 * MathConstants<double>::pi;
  }


