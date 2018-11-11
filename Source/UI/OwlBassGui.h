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

    // Binary resources:
    static const char* case_main_png;
    static const int case_main_pngSize;
    static const char* case_effects_png;
    static const int case_effects_pngSize;
    static const char* levelIndicator_png;
    static const int levelIndicator_pngSize;
    static const char* presetsPanel_png;
    static const int presetsPanel_pngSize;
    static const char* icon_saw_png;
    static const int icon_saw_pngSize;
    static const char* icon_square_png;
    static const int icon_square_pngSize;
    static const char* icon_triangle_png;
    static const int icon_triangle_pngSize;
    static const char* icon_rnd_png;
    static const int icon_rnd_pngSize;


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
    std::unique_ptr<Slider> mOsc1Waveform;
    std::unique_ptr<Slider> slider7;
    std::unique_ptr<Slider> slider8;
    std::unique_ptr<Slider> slider9;
    std::unique_ptr<Slider> slider10;
    std::unique_ptr<Slider> slider11;
    std::unique_ptr<Slider> slider12;
    std::unique_ptr<Slider> mSliderFilterMode;
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
    std::unique_ptr<Slider> slider35;
    std::unique_ptr<Slider> slider36;
    std::unique_ptr<Slider> slider37;
    std::unique_ptr<Slider> slider38;
    std::unique_ptr<Slider> slider39;
    std::unique_ptr<Slider> slider26;
    std::unique_ptr<Slider> slider27;
    std::unique_ptr<Slider> slider28;
    std::unique_ptr<Slider> slider29;
    std::unique_ptr<ToggleButton> toggleButton;
    std::unique_ptr<Slider> slider40;
    std::unique_ptr<LevelIndicator> component;
    std::unique_ptr<LevelIndicator> component2;
    std::unique_ptr<Label> label;
    std::unique_ptr<Label> label2;
    std::unique_ptr<Label> label3;
    std::unique_ptr<Label> label4;
    std::unique_ptr<Label> label5;
    std::unique_ptr<Label> label6;
    std::unique_ptr<Label> label7;
    std::unique_ptr<Label> label8;
    std::unique_ptr<Label> label9;
    std::unique_ptr<Label> label10;
    std::unique_ptr<Label> label11;
    std::unique_ptr<Label> label12;
    std::unique_ptr<Label> label13;
    std::unique_ptr<Label> label14;
    std::unique_ptr<Label> label15;
    std::unique_ptr<Label> label16;
    std::unique_ptr<Label> label17;
    std::unique_ptr<Label> label18;
    std::unique_ptr<Label> label19;
    std::unique_ptr<Label> label20;
    std::unique_ptr<Label> label21;
    std::unique_ptr<Label> label22;
    std::unique_ptr<Label> label23;
    std::unique_ptr<Label> label24;
    std::unique_ptr<Label> label25;
    std::unique_ptr<Label> label26;
    std::unique_ptr<Label> label27;
    std::unique_ptr<Label> label28;
    std::unique_ptr<Label> label29;
    std::unique_ptr<Label> label30;
    std::unique_ptr<Label> label31;
    std::unique_ptr<Label> label32;
    std::unique_ptr<Label> label33;
    std::unique_ptr<Label> label34;
    std::unique_ptr<Label> label35;
    std::unique_ptr<Label> label36;
    std::unique_ptr<Label> label37;
    std::unique_ptr<Label> label38;
    std::unique_ptr<Label> label39;
    std::unique_ptr<Label> label40;
    std::unique_ptr<Label> label41;
    std::unique_ptr<Label> label42;
    Image cachedImage_case_main_png_1;
    Image cachedImage_case_effects_png_2;
    Image cachedImage_levelIndicator_png_3;
    Image cachedImage_levelIndicator_png_4;
    Image cachedImage_presetsPanel_png_5;
    Image cachedImage_icon_saw_png_6;
    Image cachedImage_icon_triangle_png_7;
    Image cachedImage_icon_square_png_8;
    Image cachedImage_icon_saw_png_9;
    Image cachedImage_icon_triangle_png_10;
    Image cachedImage_icon_square_png_11;
    Image cachedImage_icon_saw_png_12;
    Image cachedImage_icon_triangle_png_13;
    Image cachedImage_icon_square_png_14;
    Image cachedImage_icon_saw_png_15;
    Image cachedImage_icon_triangle_png_16;
    Image cachedImage_icon_square_png_17;
    Image cachedImage_icon_triangle_png_18;
    Image cachedImage_icon_square_png_19;
    Image cachedImage_icon_rnd_png_20;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OwlBassGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
