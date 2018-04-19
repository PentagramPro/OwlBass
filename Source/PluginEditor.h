
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "UI/MainSynthGui.h"
#include "UI/IGuiListener.h"
//==============================================================================
/**
*/
class AdditiveVstAudioProcessorEditor  : public AudioProcessorEditor, private IGuiListener
{
public:
    AdditiveVstAudioProcessorEditor (AdditiveVstAudioProcessor&);
    ~AdditiveVstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AdditiveVstAudioProcessor& processor;

	MainSynthGui mGui;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AdditiveVstAudioProcessorEditor)

		// Inherited via IGuiListener
		virtual void OnValueChanged(const std::string & name, float value) override;
};
