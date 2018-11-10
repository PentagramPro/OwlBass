/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"

#include "LevelIndicator.h"
#include "LookAndFeel/LafBlackKnob.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class OwlBassGui  : public Component,
                    public Slider::Listener,
                    public Button::Listener
{
public:
    //==============================================================================
    OwlBassGui ();
    ~OwlBassGui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	CLafBlackKnob mLookAndFeel;
protected:
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Slider> slider;
    std::unique_ptr<Slider> slider2;
    std::unique_ptr<Slider> slider3;
    std::unique_ptr<Slider> slider4;
    std::unique_ptr<Slider> slider5;
    std::unique_ptr<Slider> slider6;
    std::unique_ptr<Slider> slider7;
    std::unique_ptr<Slider> slider8;
    std::unique_ptr<Slider> slider9;
    std::unique_ptr<Slider> slider10;
    std::unique_ptr<Slider> slider11;
    std::unique_ptr<Slider> slider12;
    std::unique_ptr<Slider> slider13;
    std::unique_ptr<Slider> slider14;
    std::unique_ptr<Slider> slider15;
    std::unique_ptr<Slider> slider16;
    std::unique_ptr<Slider> slider17;
    std::unique_ptr<Slider> slider18;
    std::unique_ptr<Slider> slider19;
    std::unique_ptr<Slider> slider20;
    std::unique_ptr<Slider> slider21;
    std::unique_ptr<Slider> slider22;
    std::unique_ptr<Slider> slider23;
    std::unique_ptr<Slider> slider24;
    std::unique_ptr<Slider> slider25;
    std::unique_ptr<Label> mPresetDescr;
    std::unique_ptr<TextButton> openPresetBrowser;
    std::unique_ptr<TextButton> mBtnPresetNext;
    std::unique_ptr<TextButton> mBtnPresetPrev;
    std::unique_ptr<Slider> slider30;
    std::unique_ptr<Slider> slider31;
    std::unique_ptr<Slider> slider32;
    std::unique_ptr<Slider> slider33;
    std::unique_ptr<Slider> slider34;
    std::unique_ptr<LevelIndicator> component;
    std::unique_ptr<LevelIndicator> component2;
    std::unique_ptr<Slider> slider35;
    std::unique_ptr<Slider> slider36;
    std::unique_ptr<Slider> slider37;
    std::unique_ptr<Slider> slider38;
    std::unique_ptr<Slider> slider39;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OwlBassGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
