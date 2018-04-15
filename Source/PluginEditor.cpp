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
	midiVolume.setSliderStyle(Slider::LinearBarVertical);
	midiVolume.setRange(0.0, 10000, 10);
	midiVolume.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
	midiVolume.setPopupDisplayEnabled(true, false, this);
	midiVolume.setTextValueSuffix(" Cutoff");
	midiVolume.setName("Filter.CutoffFreq");
	midiVolume.addListener(this);
	midiVolume.setValue(1000.0);
	// this function adds the slider to the editor
	addAndMakeVisible(&midiVolume);
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
	midiVolume.setBounds(40, 30, 20, getHeight() - 60);
}

void AdditiveVstAudioProcessorEditor::sliderValueChanged(Slider * slider)
{
	processor.GetPropertiesRegistry().SetProperty(slider->getName().toStdString(), slider->getValue());
}
