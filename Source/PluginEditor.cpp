/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
AdditiveVstAudioProcessorEditor::AdditiveVstAudioProcessorEditor (AdditiveVstAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (300, 300);

	// these define the parameters of our slider object

	// this function adds the slider to the editor
	addAndMakeVisible(mGui);
	mGui.SetListener(this);
}

AdditiveVstAudioProcessorEditor::~AdditiveVstAudioProcessorEditor()
{
}

//==============================================================================
void AdditiveVstAudioProcessorEditor::paint(Graphics& g)
{

	// fill the whole window white
	g.fillAll(Colours::white);
	// set the current drawing colour to black
	g.setColour(Colours::black);
	// set the font size and draw text to the screen
	g.setFont(15.0f);
	g.drawFittedText("Filter Cutoff", 0, 0, getWidth(), 30, Justification::centred, 1);
}

void AdditiveVstAudioProcessorEditor::resized()
{
	
}

void AdditiveVstAudioProcessorEditor::OnValueChanged(const std::string & name, float value)
{
	processor.GetPropertiesRegistry().SetProperty(name, value);
}


