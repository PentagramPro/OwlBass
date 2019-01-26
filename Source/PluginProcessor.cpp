/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "VSTComponents/OwlVoices/MixerVoice.h"
#include "VSTComponents/OwlVoices/EnvelopeVoice.h"
#include "VSTComponents/OwlVoices/LfoOscillatorVoice.h"
#include "VSTComponents/OwlVoices/FilterVoice.h"
#include "VSTComponents/OwlVoices/LimiterVoice.h"
#include "VSTComponents/OwlVoices/ControlVoltageSource.h"
#include "VSTComponents/OwlVoices/SawtoothVoice.h"
#include "VSTComponents/OwlVoices/MultiModeOscillator.h"
#include "Synth/ChorusVoice.h"
#include "Synth/FourierProbeVoice.h"
#include "VSTComponents/OwlVoices/DelayVoice.h"
#include "VSTComponents/OwlVoices/NoiseVoice.h"
#include "Synth/PostProcessingVoice.h"
#include "Synth/StereoEffectsVoice.h"
#include "Synth/CompressorVoice.h"

#include "VSTComponents/Owl/VoiceModuleHost.h"
#include "VSTComponents/Owl/VoiceModuleHostSound.h"
#include "VSTComponents/Owl/SynthState.h"

//==============================================================================
AdditiveVstAudioProcessor::AdditiveVstAudioProcessor()
     : AudioProcessor (BusesProperties() .withOutput ("Output", AudioChannelSet::stereo(), true)
                       )
	, mStateManager(mPropRegistry)

{

	auto voiceModuleHost = new CVoiceModuleHost(mPropRegistry);
	mRootHost = voiceModuleHost;
    //voiceModuleHost->AddModule(new SineWaveVoice("OSC1",*voiceModuleHost,2));

	std::shared_ptr<EnvelopeVoice> envelopeCutoff(new EnvelopeVoice("ADSRFilter", *voiceModuleHost));
	CControlVoltageSource* cvEnvelopeCutoff = new CControlVoltageSource("CVS1", *voiceModuleHost, envelopeCutoff,1.0);
	voiceModuleHost->AddModule(cvEnvelopeCutoff);

	//===========================================================
	// OSC1 + OSC2 + Unison + ADSR1
	{
		CMixerVoice* oscSectionMixer(new CMixerVoice("OscSectionMixer", *voiceModuleHost));

		const std::vector<std::string> oscNames{ "OSC1", "OSC2" };
		const double detuneScale = 2;

		AddBlockOfOscillators(oscSectionMixer, *voiceModuleHost, oscNames, detuneScale * 0, 0);

		CMixerVoice* unisonMixer(new CMixerVoice("UnisonMixer", *voiceModuleHost));

		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*0.3, -1);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*0.6, 1);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale * 0.9, 0.6);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale * 1.2, -0.6);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*1.5, -0.4);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*1.8, 0.4);

		oscSectionMixer->AddModule(unisonMixer);

		oscSectionMixer->AddModule(new EnvelopeVoice("ADSR1", *voiceModuleHost));
		mPropRegistry.ForceProperty("ADSR1.Retrigger", 0);

		oscSectionMixer->AddModule(new CStereoEffectsVoice("Stereo1", *voiceModuleHost));
		mPropRegistry.ForceProperty("Stereo1.Pan", 0.5);

		voiceModuleHost->AddModule(oscSectionMixer);
	}

	//===========================================================
	// OSC3 + OSC4 + Unison + ADSR2

	{
		CMixerVoice* oscSectionMixer(new CMixerVoice("OscSectionMixer", *voiceModuleHost));

		const std::vector<std::string> oscNames{ "OSC3", "OSC4" };
		const double detuneScale = 2;

		AddBlockOfOscillators(oscSectionMixer, *voiceModuleHost, oscNames, detuneScale * 0, 0);

		CMixerVoice* unisonMixer(new CMixerVoice("UnisonMixer", *voiceModuleHost));

		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*0.3, -1);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*0.6, 1);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale * 0.9, 0.6);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale * 1.2, -0.6);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*1.5, -0.4);
		AddBlockOfOscillators(unisonMixer, *voiceModuleHost, oscNames, detuneScale*1.8, 0.4);

		oscSectionMixer->AddModule(unisonMixer);

		oscSectionMixer->AddModule(new EnvelopeVoice("ADSR2", *voiceModuleHost));
		mPropRegistry.ForceProperty("ADSR2.Retrigger", 0);

		oscSectionMixer->AddModule(new CStereoEffectsVoice("Stereo2", *voiceModuleHost));
		mPropRegistry.ForceProperty("Stereo2.Pan", -0.5);

		voiceModuleHost->AddModule(oscSectionMixer);
	}
	
    
	
	{
		std::shared_ptr<CLfoOscillatorVoice> lfoCutoff(new CLfoOscillatorVoice("FilterCutoffLfo", *voiceModuleHost, {
			CLfoOscillatorVoice::EWaveform::Triangle,
			CLfoOscillatorVoice::EWaveform::Square,
			CLfoOscillatorVoice::EWaveform::RandomSquare
			}));
		CControlVoltageSource* cvLfoCutoff = new CControlVoltageSource("CVFilterCutoffLfo", *voiceModuleHost, lfoCutoff, 0);
		voiceModuleHost->AddModule(cvLfoCutoff);
		
		static int filterMode = 1;
		mPropRegistry.AddProperty("Filter.Mode", new CPropertyInt(filterMode, 1, 3));

		auto& filter1 = voiceModuleHost->AddModule(new CFilterVoice("Filter", *voiceModuleHost, *cvEnvelopeCutoff));
		filter1.SetLfo(*cvLfoCutoff);
		

		auto& filter2 = voiceModuleHost->AddModule(new CFilterVoice("Filter", *voiceModuleHost, *cvEnvelopeCutoff));
		filter2.SetLfo(*cvLfoCutoff);
		filter2.AddMuteRule([](const IVoiceModule& m) { return filterMode < 2; });

		auto& filter3 = voiceModuleHost->AddModule(new CFilterVoice("Filter", *voiceModuleHost, *cvEnvelopeCutoff));
		filter3.SetLfo(*cvLfoCutoff);
		filter3.AddMuteRule([](const IVoiceModule& m) { return filterMode < 3; });
	}
	
	


	voiceModuleHost->AddModule(new CDelayVoice("Delay", *voiceModuleHost));
	


	//voiceModuleHost->AddModule(new CNoiseVoice("Noise", *voiceModuleHost));
	voiceModuleHost->AddModule(new CPostProcessingVoice("PostProcessing", *voiceModuleHost));
	//voiceModuleHost->AddModule(new CFourierProbeVoice("FourierProbe", *voiceModuleHost, 11));

    voiceModuleHost->AddModule(new CCompressorVoice("Compressor1", *voiceModuleHost,0.15f));
    mPropRegistry.ForceProperty("Compressor.Threshold", 0.7);
    mPropRegistry.ForceProperty("Compressor.Rate", 2);
    voiceModuleHost->AddModule(new CCompressorVoice("Compressor2", *voiceModuleHost,1));
    mPropRegistry.ForceProperty("Compressor.Threshold", 0.85);
    mPropRegistry.ForceProperty("Compressor.Rate", 5);

	voiceModuleHost->AddModule(new CLimiterVoice("Limiter", *voiceModuleHost, 1));

	sineSynth.addVoice(voiceModuleHost);
	sineSynth.addSound(new CVoiceModuleHostSound());

	
}


AdditiveVstAudioProcessor::~AdditiveVstAudioProcessor()
{
}

void AdditiveVstAudioProcessor::AddBlockOfOscillators( CMixerVoice* mixerVoice, CVoiceModuleHost& host, const std::vector<std::string>& oscNames, double detuneScale, double pan) {
	
	
	std::shared_ptr<CSawtoothVoice> referenceSawtooth(new CSawtoothVoice("ReferenceOscillator", host, detuneScale));
	CControlVoltageSource* cvReferenceSawtooth = new CControlVoltageSource("ReferenceOscillatorCV", host, referenceSawtooth, 0.0);
	host.AddModule(cvReferenceSawtooth);

	for (const auto& oscName : oscNames) {
		if (mixerVoice) {
			mixerVoice->AddModule(new CMultiModeOscillator(oscName, host, *cvReferenceSawtooth, pan));
		}
		else {
			host.AddModule(new CMultiModeOscillator(oscName, host, *cvReferenceSawtooth, pan));
		}
	}
		
	
}


//==============================================================================
const String AdditiveVstAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool AdditiveVstAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool AdditiveVstAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool AdditiveVstAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double AdditiveVstAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int AdditiveVstAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int AdditiveVstAudioProcessor::getCurrentProgram()
{
    return 0;
}

void AdditiveVstAudioProcessor::setCurrentProgram (int index)
{
}

const String AdditiveVstAudioProcessor::getProgramName (int index)
{
    return {};
}

void AdditiveVstAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void AdditiveVstAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
	mSampleRate = sampleRate;
	sineSynth.setCurrentPlaybackSampleRate(sampleRate);
}

void AdditiveVstAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

bool AdditiveVstAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
 
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;


    return true;
}


void AdditiveVstAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
	if (mInternalBuffer.getNumSamples() < buffer.getNumSamples()) {
		mInternalBuffer.setSize(3, buffer.getNumSamples());
	}
	mInternalBuffer.clear();
	//buffer.setSize(3, buffer.getNumChannels(), true, false, true);
	sineSynth.renderNextBlock(mInternalBuffer, midiMessages, 0, buffer.getNumSamples());
	buffer.copyFrom(0, 0, mInternalBuffer, 0, 0, buffer.getNumSamples());
	buffer.copyFrom(1, 0, mInternalBuffer, 1, 0, buffer.getNumSamples());
}

//==============================================================================
bool AdditiveVstAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* AdditiveVstAudioProcessor::createEditor()
{
    return new AdditiveVstAudioProcessorEditor (*this);
}

//==============================================================================
void AdditiveVstAudioProcessor::getStateInformation (MemoryBlock& destData)
{
	mStateManager.SaveStateToMemory(destData);
}

void AdditiveVstAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
	mStateManager.LoadStateFromMemory(MemoryBlock(data, sizeInBytes));
}

IVoiceModule* AdditiveVstAudioProcessor::GetModuleByName(const std::string & name) const
{
	return mRootHost->GetVoiceByName(name);
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AdditiveVstAudioProcessor();
}
