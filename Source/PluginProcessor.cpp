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
#include "Synth/LimiterVoice.h"
#include "Synth/ControlVoltageSource.h"
#include "Synth/SawtoothVoice.h"
#include "Synth/MultiModeOscillator.h"
#include "Synth/ChorusVoice.h"
#include "Common/VoiceModuleHost.h"
#include "Common/VoiceModuleHostSound.h"
#include "Common/SynthState.h"

//==============================================================================
AdditiveVstAudioProcessor::AdditiveVstAudioProcessor()
     : AudioProcessor (BusesProperties() .withOutput ("Output", AudioChannelSet::stereo(), true)
                       )

{

	auto voiceModuleHost = new CVoiceModuleHost(mPropRegistry);
    //voiceModuleHost->AddModule(new SineWaveVoice("OSC1",*voiceModuleHost,2));

	std::shared_ptr<EnvelopeVoice> envelopeCutoff(new EnvelopeVoice("ADSRFilter", *voiceModuleHost));
	CControlVoltageSource* cvEnvelopeCutoff = new CControlVoltageSource("CVS1", *voiceModuleHost, envelopeCutoff,1.0);

	std::shared_ptr<CSawtoothVoice> referenceSawtooth(new CSawtoothVoice("OSC0", *voiceModuleHost));
	CControlVoltageSource* cvReferenceSawtooth = new CControlVoltageSource("CVS2", *voiceModuleHost, referenceSawtooth,0.0);

	voiceModuleHost->AddModule(cvEnvelopeCutoff);
	voiceModuleHost->AddModule(cvReferenceSawtooth);
	

	voiceModuleHost->AddModule(new CMultiModeOscillator("OSC1",*voiceModuleHost, *cvReferenceSawtooth));
	voiceModuleHost->AddModule(new CMultiModeOscillator("OSC2", *voiceModuleHost, *cvReferenceSawtooth));
	voiceModuleHost->AddModule(new CMultiModeOscillator("OSC3", *voiceModuleHost, *cvReferenceSawtooth));
    voiceModuleHost->AddModule(new EnvelopeVoice("ADSRVol",*voiceModuleHost));
	voiceModuleHost->AddModule(new CFilterVoice("Filter",*voiceModuleHost, *cvEnvelopeCutoff));
	voiceModuleHost->AddModule(new CLimiterVoice("Limiter", *voiceModuleHost,0.3));

	voiceModuleHost->AddModule(new CChorusVoice("Chorus", *voiceModuleHost,0.1,5));

	
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
	CSynthState state;
	mPropRegistry.ToSynthState(state);
	state.Serialize(destData);
}

void AdditiveVstAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
	CSynthState state;
	state.Deserialize((const char*)data, sizeInBytes);
	mPropRegistry.FromSynthState(state);
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AdditiveVstAudioProcessor();
}
