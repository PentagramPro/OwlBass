
#include "CompressorVoice.h"

CCompressorVoice::CCompressorVoice(const std::string &name, IVoiceModuleHost &host, float volumePrescale) : CVoiceModuleBase(name, host)
, mVolumePrescale(volumePrescale){

}

void CCompressorVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition) {
    StartSound();
}

void CCompressorVoice::OnNoteStop(float velocity, bool allowTailOff) {
    StopSound();
}

void CCompressorVoice::ProcessBlock(AudioSampleBuffer &outputBuffer, int startSample, int numSamples) {
    int samplesCount = numSamples;
    int currentSample = startSample;

    while (--samplesCount >= 0) {
        for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
            double sample = outputBuffer.getSample(i, currentSample)*mVolumePrescale*mPreGain;

            if(sample>mThreshold) {
                sample = (sample-mThreshold)/mRate+mThreshold;
            }
            sample*=mPostGain;
            outputBuffer.setSample(i, currentSample, sample);
        }

        currentSample++;
    }
}

void CCompressorVoice::InitProperties(CPropertiesRegistry &registry) {
    registry.AddProperty(GetPropName("Threshold"), new CPropertyDouble01(mThreshold, 0,1));
    registry.AddProperty(GetPropName("Rate"), new CPropertyDouble01(mRate, 1,50));
}
