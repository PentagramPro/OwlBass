#include "ControlVoltageSource.h"

CControlVoltageSource::CControlVoltageSource(const std::string & name, IVoiceModuleHost & host, std::shared_ptr<CVoiceModuleBase> wrappedVoice, double initialValue)
	: CVoiceModuleBase(name, host), mWrappedVoice(wrappedVoice), mInitialValue(initialValue)
{
	mWrappedVoice->ReplaceHost(*this);
}

CControlVoltageSource::~CControlVoltageSource()
{

}

void CControlVoltageSource::InitProperties(CPropertiesRegistry & registry)
{
	mWrappedVoice->InitProperties(registry);
}

void CControlVoltageSource::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	StartSound();
	mWrappedVoice->OnNoteStart(midiNoteNumber, velocity, sound, currentPitchWheelPosition);
}

void CControlVoltageSource::OnNoteStop(float velocity, bool allowTailOff)
{
	mWrappedVoice->OnNoteStop(velocity, allowTailOff);
}

void CControlVoltageSource::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	mBuffer.setSize(1, outputBuffer.getNumSamples(), false, false, true);
	FloatVectorOperations::fill(mBuffer.getWritePointer(0), mInitialValue, mBuffer.getNumSamples());
	
	mWrappedVoice->ProcessBlock(mBuffer, startSample, numSamples);
}

const AudioBuffer<float> &CControlVoltageSource::GetVoltageBuffer() const
{
	return mBuffer;
}

double CControlVoltageSource::GetSampleRate() const
{
	return CVoiceModuleBase::GetSampleRate();
}

void CControlVoltageSource::SoundEnded()
{
	StopSound();
}
