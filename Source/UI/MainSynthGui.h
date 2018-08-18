/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../../JuceLibraryCode/JuceHeader.h"
#include "IGuiListener.h"
#include "AdvancedSlider.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainSynthGui  : public Component,
                      public Slider::Listener
{
public:
    //==============================================================================
    MainSynthGui ();
    ~MainSynthGui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void SetListener(IGuiListener* listener);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	IGuiListener * mListener = nullptr;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Slider> slider2;
    std::unique_ptr<Slider> slider3;
    std::unique_ptr<Label> label;
    std::unique_ptr<Label> label2;
    std::unique_ptr<Label> label3;
    std::unique_ptr<Slider> slider4;
    std::unique_ptr<Slider> slider5;
    std::unique_ptr<Label> label4;
    std::unique_ptr<Label> label5;
    std::unique_ptr<Slider> slider6;
    std::unique_ptr<Label> label6;
    std::unique_ptr<Slider> slider7;
    std::unique_ptr<Label> label7;
    std::unique_ptr<Slider> slider8;
    std::unique_ptr<Label> label8;
    std::unique_ptr<Label> label9;
    std::unique_ptr<Slider> slider10;
    std::unique_ptr<Label> label10;
    std::unique_ptr<Label> label12;
    std::unique_ptr<Label> label13;
    std::unique_ptr<Slider> slider11;
    std::unique_ptr<Slider> slider12;
    std::unique_ptr<Slider> slider14;
    std::unique_ptr<Label> label14;
    std::unique_ptr<Label> label16;
    std::unique_ptr<Label> label17;
    std::unique_ptr<Slider> slider15;
    std::unique_ptr<Slider> slider16;
    std::unique_ptr<Slider> slider17;
    std::unique_ptr<Slider> slider18;
    std::unique_ptr<Slider> slider19;
    std::unique_ptr<Slider> slider20;
    std::unique_ptr<Slider> slider9;
    std::unique_ptr<Label> label11;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainSynthGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
