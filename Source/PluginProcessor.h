/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include "SynthStateManager.h"

class CVoiceModuleHost;
class CMixerVoice;
class IVoiceModule;
//==============================================================================
/**
*/
class AdditiveVstAudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    AdditiveVstAudioProcessor();
    ~AdditiveVstAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioBuffer<float>&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;


	Synthesiser sineSynth;
	AudioBuffer<float> mInternalBuffer;
	IVoiceModule* GetModuleByName(const std::string& name) const;

	CPropertiesRegistry& GetPropertiesRegistry() { return mPropRegistry; }
	
	CSynthStateManager& GetStateManager() { return mStateManager; }
private:
	void AddBlockOfOscillators(CMixerVoice* mixerVoice, CVoiceModuleHost& host, const std::vector<std::string>& oscNames, double detuneScale, double pan);

	CSynthStateManager mStateManager;
	CPropertiesRegistry mPropRegistry;
	double mSampleRate;
	int mSampleCounter = 0;
	CVoiceModuleHost* mRootHost = nullptr;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AdditiveVstAudioProcessor)
};
