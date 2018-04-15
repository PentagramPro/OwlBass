/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Synth/MixerVoice.h"
#include "Synth/EnvelopeVoice.h"
#include "Synth/SineWaveVoice.h"
#include "Synth/FilterVoice.h"
#include "Synth/SquareWaveVoice.h"
#include "Common/VoiceModuleHost.h"
#include "Common/VoiceModuleHostSound.h"

//==============================================================================
AdditiveVstAudioProcessor::AdditiveVstAudioProcessor()
     : AudioProcessor (BusesProperties() .withOutput ("Output", AudioChannelSet::stereo(), true)
                       )

{

	auto voiceModuleHost = new CVoiceModuleHost();
  //  voiceModuleHost->AddModule(new SineWaveVoice(*voiceModuleHost,2));
	voiceModuleHost->AddModule(new CSquareWaveVoice(*voiceModuleHost, 1));
    voiceModuleHost->AddModule(new EnvelopeVoice(*voiceModuleHost));
	voiceModuleHost->AddModule(new CFilterVoice(*voiceModuleHost));


	sineSynth.addVoice(voiceModuleHost);
	sineSynth.addSound(new CVoiceModuleHostSound());
}

AdditiveVstAudioProcessor::~AdditiveVstAudioProcessor()
{
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
	sineSynth.setCurrentPlaybackSampleRate(sampleRate);
}

void AdditiveVstAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool AdditiveVstAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void AdditiveVstAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
	
	sineSynth.renderNextBlock(buffer, midiMessages, 0, buffer.getNumSamples());
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
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void AdditiveVstAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AdditiveVstAudioProcessor();
}
