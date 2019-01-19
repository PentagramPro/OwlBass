
#pragma once

#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "UI/MainSynthGuiImpl.h"
#include "VSTComponents/OwlUI/IGuiListener.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include "VSTComponents/Owl/ListenerHandle.h"

//==============================================================================
/**
*/
class AdditiveVstAudioProcessorEditor  : public AudioProcessorEditor, private IGuiListener, public IPropertiesRegistryListener
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

	CMainSynthGuiImpl mGui;

	std::string mCurrentPresetPath = "";

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AdditiveVstAudioProcessorEditor)

		// Inherited via IGuiListener
		virtual void OnValueChanged(const std::string & name, float value) override;
	IListenerHandle mRegistryListenerHandle;

	// Inherited via IPropertiesRegistryListener
	virtual void OnPropertiesFromSynthState() override;

	// Inherited via IGuiListener
	virtual void OnLoadPreset(const std::string & filePath) override;

	// Inherited via IGuiListener
	virtual void OnSavePreset(const std::string & name, const std::string & category) override;
};
