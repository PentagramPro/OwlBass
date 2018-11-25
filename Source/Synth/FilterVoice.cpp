#include "FilterVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include "VSTComponents/Owl/Toolbox.h"

#include <cmath>
CFilterVoice::CFilterVoice(const std::string & name, IVoiceModuleHost & host, IVoltageController& cutoffEnvelope)
	: CVoiceModuleBase(name, host)
	, mCutoffEnvelope(cutoffEnvelope)
{
	
	mCutoffDelay.Reset(GetSampleRate(), 0.1);
}
void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	
	for (auto& filter : mFilter) {
		filter.SetParams(mCutoffFreq, mQ);
	}
	
	StartSound();
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	
	StopSound();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;
	
	if (mFilter.size() < outputBuffer.getNumChannels()) {
		mFilter.resize(outputBuffer.getNumChannels());
		for (auto& filter : mFilter) {
			filter.Reset(GetSampleRate());
			filter.SetParams(mCutoffFreq, mQ);
		}
	}

	
	const float halfRange = (mCutoffFreqMax - mCutoffFreqMin)/2;
	while (--samplesCount >= 0) {

		const double freqEnvelopeVal = mCutoffEnvelope.GetValue(currentSample)*mEnvelopeScale;
		const double lfoCutoff = mCutoffLfo->GetValue(currentSample)*halfRange;
		const double currentCutoff = mCutoffFreq
			+ std::abs(mEnvelopeScale > 0 ? mCutoffFreqMax : mCutoffFreqMin - mCutoffFreq)*freqEnvelopeVal
			+lfoCutoff;
		const double clampedCutoff = Toolbox::clamp(currentCutoff, mCutoffFreqMin, mCutoffFreqMax);
		const double cutoff = mCutoffDelay.Next(clampedCutoff);


		

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {

			mFilter[i].SetParams(cutoff, mQ);

			double res = outputBuffer.getSample(i, currentSample);

			res = mFilter[i].Next(res);
			outputBuffer.setSample(i, currentSample, res);
		}
		currentSample++;
	}
}

void CFilterVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("CutoffFreq"), new CPropertySquareDouble01(mCutoffFreq, mCutoffFreqMin, mCutoffFreqMax));
	registry.AddProperty(GetPropName("Q"), new CPropertyDouble01(mQ, 0.6, 3.0));
	registry.AddProperty(GetPropName("EnvelopeScale"), new CPropertyInt(mEnvelopeScale, -1, 1));
}
