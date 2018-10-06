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
#include "Synth/FourierProbeVoice.h"
#include "Synth/DelayVoice.h"
#include "Synth/NoiseVoice.h"

#include "Common/VoiceModuleHost.h"
#include "Common/VoiceModuleHostSound.h"
#include "Common/SynthState.h"

//==============================================================================
AdditiveVstAudioProcessor::AdditiveVstAudioProcessor()
     : AudioProcessor (BusesProperties() .withOutput ("Output", AudioChannelSet::stereo(), true)
                       )

{

	auto voiceModuleHost = new CVoiceModuleHost(mPropRegistry);
	mRootHost = voiceModuleHost;
    //voiceModuleHost->AddModule(new SineWaveVoice("OSC1",*voiceModuleHost,2));

	std::shared_ptr<EnvelopeVoice> envelopeCutoff(new EnvelopeVoice("ADSRFilter", *voiceModuleHost));
	CControlVoltageSource* cvEnvelopeCutoff = new CControlVoltageSource("CVS1", *voiceModuleHost, envelopeCutoff,1.0);
	voiceModuleHost->AddModule(cvEnvelopeCutoff);

	const double detuneScale = 2;
	AddBlockOfOscillators(nullptr, *voiceModuleHost, detuneScale*0,0);

	CMixerVoice* unisonMixer(new CMixerVoice("UnisonMixer", *voiceModuleHost));
	

	AddBlockOfOscillators(unisonMixer,*voiceModuleHost, detuneScale*0.3,-1);
	AddBlockOfOscillators(unisonMixer,*voiceModuleHost, detuneScale*0.6,1);
	AddBlockOfOscillators(unisonMixer, *voiceModuleHost, detuneScale * 1,0.6);
	AddBlockOfOscillators(unisonMixer, *voiceModuleHost, detuneScale * 1, -0.6);
	AddBlockOfOscillators(unisonMixer, *voiceModuleHost, detuneScale*1.2, -0.4);
	AddBlockOfOscillators(unisonMixer, *voiceModuleHost, detuneScale*1.4,0.4);
	
	voiceModuleHost->AddModule(unisonMixer);

    voiceModuleHost->AddModule(new EnvelopeVoice("ADSRVol",*voiceModuleHost));
	
	voiceModuleHost->AddModule(new CNoiseVoice("Noise", *voiceModuleHost));

	voiceModuleHost->AddModule(new CFilterVoice("Filter",*voiceModuleHost, *cvEnvelopeCutoff));
	voiceModuleHost->AddModule(new CFilterVoice("Filter", *voiceModuleHost, *cvEnvelopeCutoff));
	voiceModuleHost->AddModule(new CFourierProbeVoice("FourierProbe", *voiceModuleHost, 10));
	voiceModuleHost->AddModule(new CLimiterVoice("Limiter", *voiceModuleHost,0.08));


	voiceModuleHost->AddModule(new CDelayVoice("Delay", *voiceModuleHost));
	
	
	
	sineSynth.addVoice(voiceModuleHost);
	sineSynth.addSound(new CVoiceModuleHostSound());

	
}


AdditiveVstAudioProcessor::~AdditiveVstAudioProcessor()
{
}

void AdditiveVstAudioProcessor::AddBlockOfOscillators( CMixerVoice* mixerVoice, CVoiceModuleHost& host, double detuneScale, double pan) {
	std::shared_ptr<CSawtoothVoice> referenceSawtooth(new CSawtoothVoice("ReferenceOscillator", host, detuneScale));
	CControlVoltageSource* cvReferenceSawtooth = new CControlVoltageSource("ReferenceOscillatorCV", host, referenceSawtooth, 0.0);


	host.AddModule(cvReferenceSawtooth);
	if (mixerVoice) {
		mixerVoice->AddModule(new CMultiModeOscillator("OSC1", host, *cvReferenceSawtooth,pan));
		mixerVoice->AddModule(new CMultiModeOscillator("OSC2", host, *cvReferenceSawtooth, pan));
		mixerVoice->AddModule(new CMultiModeOscillator("OSC3", host, *cvReferenceSawtooth, pan));
	}
	else {
		host.AddModule(new CMultiModeOscillator("OSC1", host, *cvReferenceSawtooth, pan));
		host.AddModule(new CMultiModeOscillator("OSC2", host, *cvReferenceSawtooth, pan));
		host.AddModule(new CMultiModeOscillator("OSC3", host, *cvReferenceSawtooth, pan));
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
