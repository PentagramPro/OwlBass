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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "OwlBassGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
OwlBassGui::OwlBassGui ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	setLookAndFeel(&mLookAndFeel);
    //[/Constructor_pre]

    slider.reset (new Slider ("OSC1.Volume"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 1, 0);
    slider->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (222, 120, 110, 110);

    slider2.reset (new Slider ("OSC2.Volume"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (198, 240, 110, 110);

    slider3.reset (new Slider ("OSC3.Volume"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (618, 120, 110, 110);

    slider4.reset (new Slider ("OSC4.Volume"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->addListener (this);

    slider4->setBounds (634, 240, 110, 110);

    slider5.reset (new Slider ("OSC1.Divider"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (1, 4, 1);
    slider5->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->addListener (this);

    slider5->setBounds (150, 141, 70, 70);

    slider6.reset (new Slider ("OSC1.Waveform"));
    addAndMakeVisible (slider6.get());
    slider6->setRange (1, 3, 1);
    slider6->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider6->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider6->addListener (this);

    slider6->setBounds (78, 141, 70, 70);

    slider7.reset (new Slider ("OSC2.Divider"));
    addAndMakeVisible (slider7.get());
    slider7->setRange (1, 4, 1);
    slider7->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->addListener (this);

    slider7->setBounds (128, 261, 70, 70);

    slider8.reset (new Slider ("OSC2.Waveform"));
    addAndMakeVisible (slider8.get());
    slider8->setRange (1, 3, 1);
    slider8->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->addListener (this);

    slider8->setBounds (56, 261, 70, 70);

    slider9.reset (new Slider ("OSC3.Waveform"));
    addAndMakeVisible (slider9.get());
    slider9->setRange (1, 3, 1);
    slider9->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider9->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider9->addListener (this);

    slider9->setBounds (812, 141, 70, 70);

    slider10.reset (new Slider ("OSC3.Divider"));
    addAndMakeVisible (slider10.get());
    slider10->setRange (1, 4, 1);
    slider10->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider10->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider10->addListener (this);

    slider10->setBounds (740, 141, 70, 70);

    slider11.reset (new Slider ("OSC4.Waveform"));
    addAndMakeVisible (slider11.get());
    slider11->setRange (1, 3, 1);
    slider11->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider11->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider11->addListener (this);

    slider11->setBounds (817, 261, 70, 70);

    slider12.reset (new Slider ("new slider"));
    addAndMakeVisible (slider12.get());
    slider12->setRange (1, 4, 1);
    slider12->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider12->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider12->addListener (this);

    slider12->setBounds (745, 261, 70, 70);

    slider13.reset (new Slider ("Filter.Mode"));
    addAndMakeVisible (slider13.get());
    slider13->setTooltip (TRANS("switch;\n"));
    slider13->setRange (1, 3, 1);
    slider13->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider13->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider13->addListener (this);

    slider13->setBounds (416, 72, 110, 110);

    slider14.reset (new Slider ("Filter.CutoffFreq"));
    addAndMakeVisible (slider14.get());
    slider14->setRange (0, 1, 0);
    slider14->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider14->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider14->addListener (this);

    slider14->setBounds (360, 192, 110, 110);

    slider15.reset (new Slider ("Filter.Q"));
    addAndMakeVisible (slider15.get());
    slider15->setRange (0, 1, 0);
    slider15->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider15->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider15->addListener (this);

    slider15->setBounds (480, 192, 110, 110);

    slider16.reset (new Slider ("ADSRFilter.Attack"));
    addAndMakeVisible (slider16.get());
    slider16->setRange (0, 1, 0);
    slider16->setSliderStyle (Slider::LinearVertical);
    slider16->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider16->addListener (this);

    slider16->setBounds (400, 314, 40, 126);

    slider17.reset (new Slider ("ADSRFilter.Sustain"));
    addAndMakeVisible (slider17.get());
    slider17->setRange (0, 1, 0);
    slider17->setSliderStyle (Slider::LinearVertical);
    slider17->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider17->addListener (this);

    slider17->setBounds (456, 314, 40, 126);

    slider18.reset (new Slider ("ADSRFilter.Release"));
    addAndMakeVisible (slider18.get());
    slider18->setRange (0, 1, 0);
    slider18->setSliderStyle (Slider::LinearVertical);
    slider18->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider18->addListener (this);

    slider18->setBounds (512, 314, 40, 126);

    slider19.reset (new Slider ("FilterCutoffLfo.Volume"));
    addAndMakeVisible (slider19.get());
    slider19->setRange (0, 1, 0);
    slider19->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider19->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider19->addListener (this);

    slider19->setBounds (438, 455, 70, 70);

    slider20.reset (new Slider ("FilterCutoffLfo.Frequency"));
    addAndMakeVisible (slider20.get());
    slider20->setRange (0, 1, 0);
    slider20->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider20->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider20->addListener (this);

    slider20->setBounds (366, 455, 70, 70);

    slider21.reset (new Slider ("FilterCutoffLfo.Mode"));
    addAndMakeVisible (slider21.get());
    slider21->setRange (0, 1, 0);
    slider21->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider21->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider21->addListener (this);

    slider21->setBounds (512, 456, 70, 70);

    slider22.reset (new Slider ("ADSR1.Attack"));
    addAndMakeVisible (slider22.get());
    slider22->setRange (0, 1, 0);
    slider22->setSliderStyle (Slider::LinearVertical);
    slider22->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider22->addListener (this);

    slider22->setBounds (107, 360, 30, 100);

    slider23.reset (new Slider ("ADSR1.Decay"));
    addAndMakeVisible (slider23.get());
    slider23->setRange (0, 1, 0);
    slider23->setSliderStyle (Slider::LinearVertical);
    slider23->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider23->addListener (this);

    slider23->setBounds (147, 360, 30, 100);

    slider24.reset (new Slider ("ADSR1.Sustain"));
    addAndMakeVisible (slider24.get());
    slider24->setRange (0, 1, 0);
    slider24->setSliderStyle (Slider::LinearVertical);
    slider24->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider24->addListener (this);

    slider24->setBounds (187, 360, 30, 100);

    slider25.reset (new Slider ("ADSR1.Release"));
    addAndMakeVisible (slider25.get());
    slider25->setRange (0, 1, 0);
    slider25->setSliderStyle (Slider::LinearVertical);
    slider25->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider25->addListener (this);

    slider25->setBounds (227, 360, 30, 100);

    mPresetDescr.reset (new Label ("new label",
                                   TRANS("Bass / Wah wah sound")));
    addAndMakeVisible (mPresetDescr.get());
    mPresetDescr->setFont (Font (Font::getDefaultMonospacedFontName(), 16.0f, Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (-0.046f));
    mPresetDescr->setJustificationType (Justification::centred);
    mPresetDescr->setEditable (false, false, false);
    mPresetDescr->setColour (Label::textColourId, Colour (0xff2d0334));
    mPresetDescr->setColour (TextEditor::textColourId, Colours::black);
    mPresetDescr->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    mPresetDescr->setBounds (590, 30, 312, 24);

    openPresetBrowser.reset (new TextButton ("new button"));
    addAndMakeVisible (openPresetBrowser.get());
    openPresetBrowser->setTooltip (TRANS("no_background;\n"
    "\n"));
    openPresetBrowser->setButtonText (String());
    openPresetBrowser->addListener (this);
    openPresetBrowser->setColour (TextButton::buttonColourId, Colour (0x00a45c94));
    openPresetBrowser->setColour (TextButton::buttonOnColourId, Colour (0x00181f22));
    openPresetBrowser->setColour (TextButton::textColourOffId, Colour (0xff0d0d0d));
    openPresetBrowser->setColour (TextButton::textColourOnId, Colours::black);

    openPresetBrowser->setBounds (599, 29, 298, 24);

    mBtnPresetNext.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetNext.get());
    mBtnPresetNext->addListener (this);

    mBtnPresetNext->setBounds (750, 69, 88, 24);

    mBtnPresetPrev.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetPrev.get());
    mBtnPresetPrev->setButtonText (TRANS("Previous"));
    mBtnPresetPrev->addListener (this);

    mBtnPresetPrev->setBounds (652, 69, 88, 24);

    slider30.reset (new Slider ("ReferenceOscillator.Detune"));
    addAndMakeVisible (slider30.get());
    slider30->setRange (0, 1, 0);
    slider30->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider30->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider30->addListener (this);

    slider30->setBounds (202, 561, 70, 70);

    slider31.reset (new Slider ("UnisonMixer.Volume"));
    addAndMakeVisible (slider31.get());
    slider31->setRange (0, 1, 0);
    slider31->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider31->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider31->addListener (this);

    slider31->setBounds (130, 561, 70, 70);

    slider32.reset (new Slider ("Delay.Delay"));
    addAndMakeVisible (slider32.get());
    slider32->setRange (0, 1, 0);
    slider32->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider32->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider32->addListener (this);

    slider32->setBounds (386, 561, 70, 70);

    slider33.reset (new Slider ("Delay.Wet"));
    addAndMakeVisible (slider33.get());
    slider33->setRange (0, 1, 0);
    slider33->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider33->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider33->addListener (this);

    slider33->setBounds (314, 561, 70, 70);

    slider34.reset (new Slider ("Delay.Feedback"));
    addAndMakeVisible (slider34.get());
    slider34->setRange (0, 1, 0);
    slider34->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider34->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider34->addListener (this);

    slider34->setBounds (460, 562, 70, 70);

    component.reset (new LevelIndicator());
    addAndMakeVisible (component.get());
    component->setName ("Limiter.LevelChannel0");

    component->setBounds (656, 576, 156, 8);

    component2.reset (new LevelIndicator());
    addAndMakeVisible (component2.get());
    component2->setName ("Limiter.LevelChannel1");

    component2->setBounds (656, 605, 156, 8);

    slider35.reset (new Slider ("Limiter.Volume"));
    addAndMakeVisible (slider35.get());
    slider35->setRange (0, 1, 0);
    slider35->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider35->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider35->addListener (this);

    slider35->setBounds (568, 560, 70, 70);

    slider36.reset (new Slider ("ADSR2.Attack"));
    addAndMakeVisible (slider36.get());
    slider36->setRange (0, 1, 0);
    slider36->setSliderStyle (Slider::LinearVertical);
    slider36->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider36->addListener (this);

    slider36->setBounds (687, 360, 30, 100);

    slider37.reset (new Slider ("ADSR2.Decay"));
    addAndMakeVisible (slider37.get());
    slider37->setRange (0, 1, 0);
    slider37->setSliderStyle (Slider::LinearVertical);
    slider37->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider37->addListener (this);

    slider37->setBounds (727, 360, 30, 100);

    slider38.reset (new Slider ("ADSR2.Sustain"));
    addAndMakeVisible (slider38.get());
    slider38->setRange (0, 1, 0);
    slider38->setSliderStyle (Slider::LinearVertical);
    slider38->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider38->addListener (this);

    slider38->setBounds (767, 360, 30, 100);

    slider39.reset (new Slider ("ADSR2.Release"));
    addAndMakeVisible (slider39.get());
    slider39->setRange (0, 1, 0);
    slider39->setSliderStyle (Slider::LinearVertical);
    slider39->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider39->addListener (this);

    slider39->setBounds (807, 360, 30, 100);

    slider26.reset (new Slider ("OSC1.Phase"));
    addAndMakeVisible (slider26.get());
    slider26->setRange (0, 1, 0);
    slider26->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider26->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider26->addListener (this);

    slider26->setBounds (24, 152, 50, 50);

    slider27.reset (new Slider ("OSC2.Phase"));
    addAndMakeVisible (slider27.get());
    slider27->setRange (0, 1, 0);
    slider27->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider27->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider27->addListener (this);

    slider27->setBounds (0, 272, 50, 50);

    slider28.reset (new Slider ("OSC3.Phase"));
    addAndMakeVisible (slider28.get());
    slider28->setRange (0, 1, 0);
    slider28->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider28->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider28->addListener (this);

    slider28->setBounds (888, 152, 50, 50);

    slider29.reset (new Slider ("OSC1.Phase"));
    addAndMakeVisible (slider29.get());
    slider29->setRange (0, 1, 0);
    slider29->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider29->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider29->addListener (this);

    slider29->setBounds (893, 272, 50, 50);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 700);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

OwlBassGui::~OwlBassGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    slider6 = nullptr;
    slider7 = nullptr;
    slider8 = nullptr;
    slider9 = nullptr;
    slider10 = nullptr;
    slider11 = nullptr;
    slider12 = nullptr;
    slider13 = nullptr;
    slider14 = nullptr;
    slider15 = nullptr;
    slider16 = nullptr;
    slider17 = nullptr;
    slider18 = nullptr;
    slider19 = nullptr;
    slider20 = nullptr;
    slider21 = nullptr;
    slider22 = nullptr;
    slider23 = nullptr;
    slider24 = nullptr;
    slider25 = nullptr;
    mPresetDescr = nullptr;
    openPresetBrowser = nullptr;
    mBtnPresetNext = nullptr;
    mBtnPresetPrev = nullptr;
    slider30 = nullptr;
    slider31 = nullptr;
    slider32 = nullptr;
    slider33 = nullptr;
    slider34 = nullptr;
    component = nullptr;
    component2 = nullptr;
    slider35 = nullptr;
    slider36 = nullptr;
    slider37 = nullptr;
    slider38 = nullptr;
    slider39 = nullptr;
    slider26 = nullptr;
    slider27 = nullptr;
    slider28 = nullptr;
    slider29 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void OwlBassGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void OwlBassGui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void OwlBassGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5.get())
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        //[/UserSliderCode_slider5]
    }
    else if (sliderThatWasMoved == slider6.get())
    {
        //[UserSliderCode_slider6] -- add your slider handling code here..
        //[/UserSliderCode_slider6]
    }
    else if (sliderThatWasMoved == slider7.get())
    {
        //[UserSliderCode_slider7] -- add your slider handling code here..
        //[/UserSliderCode_slider7]
    }
    else if (sliderThatWasMoved == slider8.get())
    {
        //[UserSliderCode_slider8] -- add your slider handling code here..
        //[/UserSliderCode_slider8]
    }
    else if (sliderThatWasMoved == slider9.get())
    {
        //[UserSliderCode_slider9] -- add your slider handling code here..
        //[/UserSliderCode_slider9]
    }
    else if (sliderThatWasMoved == slider10.get())
    {
        //[UserSliderCode_slider10] -- add your slider handling code here..
        //[/UserSliderCode_slider10]
    }
    else if (sliderThatWasMoved == slider11.get())
    {
        //[UserSliderCode_slider11] -- add your slider handling code here..
        //[/UserSliderCode_slider11]
    }
    else if (sliderThatWasMoved == slider12.get())
    {
        //[UserSliderCode_slider12] -- add your slider handling code here..
        //[/UserSliderCode_slider12]
    }
    else if (sliderThatWasMoved == slider13.get())
    {
        //[UserSliderCode_slider13] -- add your slider handling code here..
        //[/UserSliderCode_slider13]
    }
    else if (sliderThatWasMoved == slider14.get())
    {
        //[UserSliderCode_slider14] -- add your slider handling code here..
        //[/UserSliderCode_slider14]
    }
    else if (sliderThatWasMoved == slider15.get())
    {
        //[UserSliderCode_slider15] -- add your slider handling code here..
        //[/UserSliderCode_slider15]
    }
    else if (sliderThatWasMoved == slider16.get())
    {
        //[UserSliderCode_slider16] -- add your slider handling code here..
        //[/UserSliderCode_slider16]
    }
    else if (sliderThatWasMoved == slider17.get())
    {
        //[UserSliderCode_slider17] -- add your slider handling code here..
        //[/UserSliderCode_slider17]
    }
    else if (sliderThatWasMoved == slider18.get())
    {
        //[UserSliderCode_slider18] -- add your slider handling code here..
        //[/UserSliderCode_slider18]
    }
    else if (sliderThatWasMoved == slider19.get())
    {
        //[UserSliderCode_slider19] -- add your slider handling code here..
        //[/UserSliderCode_slider19]
    }
    else if (sliderThatWasMoved == slider20.get())
    {
        //[UserSliderCode_slider20] -- add your slider handling code here..
        //[/UserSliderCode_slider20]
    }
    else if (sliderThatWasMoved == slider21.get())
    {
        //[UserSliderCode_slider21] -- add your slider handling code here..
        //[/UserSliderCode_slider21]
    }
    else if (sliderThatWasMoved == slider22.get())
    {
        //[UserSliderCode_slider22] -- add your slider handling code here..
        //[/UserSliderCode_slider22]
    }
    else if (sliderThatWasMoved == slider23.get())
    {
        //[UserSliderCode_slider23] -- add your slider handling code here..
        //[/UserSliderCode_slider23]
    }
    else if (sliderThatWasMoved == slider24.get())
    {
        //[UserSliderCode_slider24] -- add your slider handling code here..
        //[/UserSliderCode_slider24]
    }
    else if (sliderThatWasMoved == slider25.get())
    {
        //[UserSliderCode_slider25] -- add your slider handling code here..
        //[/UserSliderCode_slider25]
    }
    else if (sliderThatWasMoved == slider30.get())
    {
        //[UserSliderCode_slider30] -- add your slider handling code here..
        //[/UserSliderCode_slider30]
    }
    else if (sliderThatWasMoved == slider31.get())
    {
        //[UserSliderCode_slider31] -- add your slider handling code here..
        //[/UserSliderCode_slider31]
    }
    else if (sliderThatWasMoved == slider32.get())
    {
        //[UserSliderCode_slider32] -- add your slider handling code here..
        //[/UserSliderCode_slider32]
    }
    else if (sliderThatWasMoved == slider33.get())
    {
        //[UserSliderCode_slider33] -- add your slider handling code here..
        //[/UserSliderCode_slider33]
    }
    else if (sliderThatWasMoved == slider34.get())
    {
        //[UserSliderCode_slider34] -- add your slider handling code here..
        //[/UserSliderCode_slider34]
    }
    else if (sliderThatWasMoved == slider35.get())
    {
        //[UserSliderCode_slider35] -- add your slider handling code here..
        //[/UserSliderCode_slider35]
    }
    else if (sliderThatWasMoved == slider36.get())
    {
        //[UserSliderCode_slider36] -- add your slider handling code here..
        //[/UserSliderCode_slider36]
    }
    else if (sliderThatWasMoved == slider37.get())
    {
        //[UserSliderCode_slider37] -- add your slider handling code here..
        //[/UserSliderCode_slider37]
    }
    else if (sliderThatWasMoved == slider38.get())
    {
        //[UserSliderCode_slider38] -- add your slider handling code here..
        //[/UserSliderCode_slider38]
    }
    else if (sliderThatWasMoved == slider39.get())
    {
        //[UserSliderCode_slider39] -- add your slider handling code here..
        //[/UserSliderCode_slider39]
    }
    else if (sliderThatWasMoved == slider26.get())
    {
        //[UserSliderCode_slider26] -- add your slider handling code here..
        //[/UserSliderCode_slider26]
    }
    else if (sliderThatWasMoved == slider27.get())
    {
        //[UserSliderCode_slider27] -- add your slider handling code here..
        //[/UserSliderCode_slider27]
    }
    else if (sliderThatWasMoved == slider28.get())
    {
        //[UserSliderCode_slider28] -- add your slider handling code here..
        //[/UserSliderCode_slider28]
    }
    else if (sliderThatWasMoved == slider29.get())
    {
        //[UserSliderCode_slider29] -- add your slider handling code here..
        //[/UserSliderCode_slider29]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void OwlBassGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == openPresetBrowser.get())
    {
        //[UserButtonCode_openPresetBrowser] -- add your button handler code here..
        //[/UserButtonCode_openPresetBrowser]
    }
    else if (buttonThatWasClicked == mBtnPresetNext.get())
    {
        //[UserButtonCode_mBtnPresetNext] -- add your button handler code here..
        //[/UserButtonCode_mBtnPresetNext]
    }
    else if (buttonThatWasClicked == mBtnPresetPrev.get())
    {
        //[UserButtonCode_mBtnPresetPrev] -- add your button handler code here..
        //[/UserButtonCode_mBtnPresetPrev]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="OwlBassGui" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="1000" initialHeight="700">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="OSC1.Volume" id="a3679e39b3ca9aa0" memberName="slider"
          virtualName="" explicitFocusOrder="0" pos="222 120 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Volume" id="995566f65765c2eb" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="198 240 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Volume" id="3b5eb21fc2082bb" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="618 120 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC4.Volume" id="a17a53d967d4ab66" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="634 240 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Divider" id="2c08caa873912912" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="150 141 70 70" min="1.0"
          max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Waveform" id="c93a5c777e89390" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="78 141 70 70" min="1.0"
          max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Divider" id="348346d13236bf5f" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="128 261 70 70" min="1.0"
          max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Waveform" id="bb384bd95d8593a8" memberName="slider8"
          virtualName="" explicitFocusOrder="0" pos="56 261 70 70" min="1.0"
          max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Waveform" id="50ddd2f6ccb0b007" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="812 141 70 70" min="1.0"
          max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Divider" id="a05366187850a3f3" memberName="slider10"
          virtualName="" explicitFocusOrder="0" pos="740 141 70 70" min="1.0"
          max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC4.Waveform" id="69358086a1303136" memberName="slider11"
          virtualName="" explicitFocusOrder="0" pos="817 261 70 70" min="1.0"
          max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="648ffc9ff30d14ba" memberName="slider12"
          virtualName="" explicitFocusOrder="0" pos="745 261 70 70" min="1.0"
          max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.Mode" id="500e770e434081df" memberName="slider13"
          virtualName="" explicitFocusOrder="0" pos="416 72 110 110" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.CutoffFreq" id="513b91f5ae1bd693" memberName="slider14"
          virtualName="" explicitFocusOrder="0" pos="360 192 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.Q" id="be0bf92848c827a1" memberName="slider15" virtualName=""
          explicitFocusOrder="0" pos="480 192 110 110" min="0.0" max="1.0"
          int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Attack" id="b7c6f52502efa9c4" memberName="slider16"
          virtualName="" explicitFocusOrder="0" pos="400 314 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Sustain" id="538b89ad7b7117ce" memberName="slider17"
          virtualName="" explicitFocusOrder="0" pos="456 314 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Release" id="f3160444db7676a9" memberName="slider18"
          virtualName="" explicitFocusOrder="0" pos="512 314 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Volume" id="f9ef9f642b0fceb2" memberName="slider19"
          virtualName="" explicitFocusOrder="0" pos="438 455 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Frequency" id="16bbf472a1fc85ba" memberName="slider20"
          virtualName="" explicitFocusOrder="0" pos="366 455 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Mode" id="172855be44414814" memberName="slider21"
          virtualName="" explicitFocusOrder="0" pos="512 456 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Attack" id="228b9abc269e48a4" memberName="slider22"
          virtualName="" explicitFocusOrder="0" pos="107 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Decay" id="cdf403e980dc6e15" memberName="slider23"
          virtualName="" explicitFocusOrder="0" pos="147 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Sustain" id="e60b0778eb38d289" memberName="slider24"
          virtualName="" explicitFocusOrder="0" pos="187 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Release" id="f5fde9e12978abb6" memberName="slider25"
          virtualName="" explicitFocusOrder="0" pos="227 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="149006776a721cd6" memberName="mPresetDescr"
         virtualName="" explicitFocusOrder="0" pos="590 30 312 24" textCol="ff2d0334"
         edTextCol="ff000000" edBkgCol="0" labelText="Bass / Wah wah sound"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16.0" kerning="-0.04599999999999999922"
         bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="new button" id="86c8cb20f64737f6" memberName="openPresetBrowser"
              virtualName="" explicitFocusOrder="0" pos="599 29 298 24" tooltip="no_background;&#10;&#10;"
              bgColOff="a45c94" bgColOn="181f22" textCol="ff0d0d0d" textColOn="ff000000"
              buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="7f2dcf690d640765" memberName="mBtnPresetNext"
              virtualName="" explicitFocusOrder="0" pos="750 69 88 24" buttonText="Next"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="731168668bd98da4" memberName="mBtnPresetPrev"
              virtualName="" explicitFocusOrder="0" pos="652 69 88 24" buttonText="Previous"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="ReferenceOscillator.Detune" id="14d7a0bddcdfb29" memberName="slider30"
          virtualName="" explicitFocusOrder="0" pos="202 561 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="UnisonMixer.Volume" id="a80ff1604b13e5d8" memberName="slider31"
          virtualName="" explicitFocusOrder="0" pos="130 561 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Delay" id="6acc910924aa9904" memberName="slider32"
          virtualName="" explicitFocusOrder="0" pos="386 561 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Wet" id="3e51784dc694ef6a" memberName="slider33"
          virtualName="" explicitFocusOrder="0" pos="314 561 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Feedback" id="5798c0f055b0143e" memberName="slider34"
          virtualName="" explicitFocusOrder="0" pos="460 562 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <GENERICCOMPONENT name="Limiter.LevelChannel0" id="3f5e527f49885cf" memberName="component"
                    virtualName="" explicitFocusOrder="0" pos="656 576 156 8" class="LevelIndicator"
                    params=""/>
  <GENERICCOMPONENT name="Limiter.LevelChannel1" id="4df1d334df446ddc" memberName="component2"
                    virtualName="" explicitFocusOrder="0" pos="656 605 156 8" class="LevelIndicator"
                    params=""/>
  <SLIDER name="Limiter.Volume" id="b5cc91d820dcaec" memberName="slider35"
          virtualName="" explicitFocusOrder="0" pos="568 560 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Attack" id="a876cc069610807e" memberName="slider36"
          virtualName="" explicitFocusOrder="0" pos="687 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Decay" id="e92825ec520d8f63" memberName="slider37"
          virtualName="" explicitFocusOrder="0" pos="727 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Sustain" id="d23ab82982cf58a2" memberName="slider38"
          virtualName="" explicitFocusOrder="0" pos="767 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Release" id="55c0f3eac09d48a5" memberName="slider39"
          virtualName="" explicitFocusOrder="0" pos="807 360 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Phase" id="a097c0adb4bc2693" memberName="slider26"
          virtualName="" explicitFocusOrder="0" pos="24 152 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Phase" id="4efa37d2939989af" memberName="slider27"
          virtualName="" explicitFocusOrder="0" pos="0 272 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Phase" id="c7b2077e593df4ed" memberName="slider28"
          virtualName="" explicitFocusOrder="0" pos="888 152 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Phase" id="802932c5c29c4cd2" memberName="slider29"
          virtualName="" explicitFocusOrder="0" pos="893 272 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
