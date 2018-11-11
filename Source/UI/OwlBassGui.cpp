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

    slider->setBounds (267, 109, 110, 110);

    slider2.reset (new Slider ("OSC2.Volume"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (243, 241, 110, 110);

    slider3.reset (new Slider ("OSC3.Volume"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (650, 109, 110, 110);

    slider4.reset (new Slider ("OSC4.Volume"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->addListener (this);

    slider4->setBounds (666, 241, 110, 110);

    slider5.reset (new Slider ("OSC1.Divider"));
    addAndMakeVisible (slider5.get());
    slider5->setTooltip (TRANS("switch;\n"));
    slider5->setRange (1, 4, 1);
    slider5->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->addListener (this);

    slider5->setBounds (176, 120, 90, 90);

    mOsc1Waveform.reset (new Slider ("OSC1.Waveform"));
    addAndMakeVisible (mOsc1Waveform.get());
    mOsc1Waveform->setTooltip (TRANS("switch;\n"));
    mOsc1Waveform->setRange (1, 3, 1);
    mOsc1Waveform->setSliderStyle (Slider::RotaryHorizontalDrag);
    mOsc1Waveform->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    mOsc1Waveform->addListener (this);

    mOsc1Waveform->setBounds (84, 120, 90, 90);

    slider7.reset (new Slider ("OSC2.Divider"));
    addAndMakeVisible (slider7.get());
    slider7->setTooltip (TRANS("switch;\n"));
    slider7->setRange (1, 4, 1);
    slider7->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->addListener (this);

    slider7->setBounds (154, 252, 90, 90);

    slider8.reset (new Slider ("OSC2.Waveform"));
    addAndMakeVisible (slider8.get());
    slider8->setTooltip (TRANS("switch;\n"));
    slider8->setRange (1, 3, 1);
    slider8->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->addListener (this);

    slider8->setBounds (62, 252, 90, 90);

    slider9.reset (new Slider ("OSC3.Waveform"));
    addAndMakeVisible (slider9.get());
    slider9->setTooltip (TRANS("switch;\n"));
    slider9->setRange (1, 3, 1);
    slider9->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider9->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider9->addListener (this);

    slider9->setBounds (855, 125, 90, 90);

    slider10.reset (new Slider ("OSC3.Divider"));
    addAndMakeVisible (slider10.get());
    slider10->setTooltip (TRANS("switch;\n"));
    slider10->setRange (1, 4, 1);
    slider10->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider10->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider10->addListener (this);

    slider10->setBounds (763, 125, 90, 90);

    slider11.reset (new Slider ("OSC4.Waveform"));
    addAndMakeVisible (slider11.get());
    slider11->setTooltip (TRANS("switch;\n"));
    slider11->setRange (1, 3, 1);
    slider11->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider11->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider11->addListener (this);

    slider11->setBounds (868, 252, 90, 90);

    slider12.reset (new Slider ("new slider"));
    addAndMakeVisible (slider12.get());
    slider12->setTooltip (TRANS("switch;\n"));
    slider12->setRange (1, 4, 1);
    slider12->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider12->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider12->addListener (this);

    slider12->setBounds (776, 252, 90, 90);

    mSliderFilterMode.reset (new Slider ("Filter.Mode"));
    addAndMakeVisible (mSliderFilterMode.get());
    mSliderFilterMode->setTooltip (TRANS("switch;\n"));
    mSliderFilterMode->setRange (1, 3, 1);
    mSliderFilterMode->setSliderStyle (Slider::RotaryHorizontalDrag);
    mSliderFilterMode->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    mSliderFilterMode->addListener (this);

    mSliderFilterMode->setBounds (449, 67, 130, 130);

    slider14.reset (new Slider ("Filter.CutoffFreq"));
    addAndMakeVisible (slider14.get());
    slider14->setRange (0, 1, 0);
    slider14->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider14->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider14->addListener (this);

    slider14->setBounds (398, 184, 110, 110);

    slider15.reset (new Slider ("Filter.Q"));
    addAndMakeVisible (slider15.get());
    slider15->setRange (0, 1, 0);
    slider15->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider15->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider15->addListener (this);

    slider15->setBounds (518, 184, 110, 110);

    slider16.reset (new Slider ("ADSRFilter.Attack"));
    addAndMakeVisible (slider16.get());
    slider16->setRange (0, 1, 0);
    slider16->setSliderStyle (Slider::LinearVertical);
    slider16->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider16->addListener (this);

    slider16->setBounds (438, 315, 40, 126);

    slider17.reset (new Slider ("ADSRFilter.Sustain"));
    addAndMakeVisible (slider17.get());
    slider17->setRange (0, 1, 0);
    slider17->setSliderStyle (Slider::LinearVertical);
    slider17->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider17->addListener (this);

    slider17->setBounds (494, 315, 40, 126);

    slider18.reset (new Slider ("ADSRFilter.Release"));
    addAndMakeVisible (slider18.get());
    slider18->setRange (0, 1, 0);
    slider18->setSliderStyle (Slider::LinearVertical);
    slider18->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider18->addListener (this);

    slider18->setBounds (550, 315, 40, 126);

    slider19.reset (new Slider ("FilterCutoffLfo.Volume"));
    addAndMakeVisible (slider19.get());
    slider19->setRange (0, 1, 0);
    slider19->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider19->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider19->addListener (this);

    slider19->setBounds (476, 450, 70, 70);

    slider20.reset (new Slider ("FilterCutoffLfo.Frequency"));
    addAndMakeVisible (slider20.get());
    slider20->setRange (0, 1, 0);
    slider20->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider20->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider20->addListener (this);

    slider20->setBounds (404, 450, 70, 70);

    slider21.reset (new Slider ("FilterCutoffLfo.Mode"));
    addAndMakeVisible (slider21.get());
    slider21->setTooltip (TRANS("switch;\n"));
    slider21->setRange (0, 1, 0);
    slider21->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider21->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider21->addListener (this);

    slider21->setBounds (552, 444, 85, 85);

    slider22.reset (new Slider ("ADSR1.Attack"));
    addAndMakeVisible (slider22.get());
    slider22->setRange (0, 1, 0);
    slider22->setSliderStyle (Slider::LinearVertical);
    slider22->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider22->addListener (this);

    slider22->setBounds (135, 361, 30, 100);

    slider23.reset (new Slider ("ADSR1.Decay"));
    addAndMakeVisible (slider23.get());
    slider23->setRange (0, 1, 0);
    slider23->setSliderStyle (Slider::LinearVertical);
    slider23->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider23->addListener (this);

    slider23->setBounds (175, 361, 30, 100);

    slider24.reset (new Slider ("ADSR1.Sustain"));
    addAndMakeVisible (slider24.get());
    slider24->setRange (0, 1, 0);
    slider24->setSliderStyle (Slider::LinearVertical);
    slider24->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider24->addListener (this);

    slider24->setBounds (215, 361, 30, 100);

    slider25.reset (new Slider ("ADSR1.Release"));
    addAndMakeVisible (slider25.get());
    slider25->setRange (0, 1, 0);
    slider25->setSliderStyle (Slider::LinearVertical);
    slider25->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider25->addListener (this);

    slider25->setBounds (255, 361, 30, 100);

    mPresetDescr.reset (new Label ("new label",
                                   TRANS("Bass / Wah wah sound")));
    addAndMakeVisible (mPresetDescr.get());
    mPresetDescr->setFont (Font (Font::getDefaultMonospacedFontName(), 16.0f, Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (-0.046f));
    mPresetDescr->setJustificationType (Justification::centred);
    mPresetDescr->setEditable (false, false, false);
    mPresetDescr->setColour (Label::textColourId, Colour (0xff2d0334));
    mPresetDescr->setColour (TextEditor::textColourId, Colours::black);
    mPresetDescr->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    mPresetDescr->setBounds (674, 24, 312, 24);

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

    openPresetBrowser->setBounds (683, 23, 298, 24);

    mBtnPresetNext.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetNext.get());
    mBtnPresetNext->addListener (this);

    mBtnPresetNext->setBounds (898, 61, 88, 24);

    mBtnPresetPrev.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetPrev.get());
    mBtnPresetPrev->setButtonText (TRANS("Previous"));
    mBtnPresetPrev->addListener (this);

    mBtnPresetPrev->setBounds (800, 61, 88, 24);

    slider30.reset (new Slider ("ReferenceOscillator.Detune"));
    addAndMakeVisible (slider30.get());
    slider30->setTooltip (TRANS("effect;\n"));
    slider30->setRange (0, 1, 0);
    slider30->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider30->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider30->addListener (this);

    slider30->setBounds (240, 564, 70, 70);

    slider31.reset (new Slider ("UnisonMixer.Volume"));
    addAndMakeVisible (slider31.get());
    slider31->setTooltip (TRANS("effect;\n"));
    slider31->setRange (0, 1, 0);
    slider31->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider31->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider31->addListener (this);

    slider31->setBounds (168, 564, 70, 70);

    slider32.reset (new Slider ("Delay.Delay"));
    addAndMakeVisible (slider32.get());
    slider32->setTooltip (TRANS("effect;\n"));
    slider32->setRange (0, 1, 0);
    slider32->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider32->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider32->addListener (this);

    slider32->setBounds (424, 564, 70, 70);

    slider33.reset (new Slider ("Delay.Wet"));
    addAndMakeVisible (slider33.get());
    slider33->setTooltip (TRANS("effect;\n"));
    slider33->setRange (0, 1, 0);
    slider33->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider33->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider33->addListener (this);

    slider33->setBounds (352, 564, 70, 70);

    slider34.reset (new Slider ("Delay.Feedback"));
    addAndMakeVisible (slider34.get());
    slider34->setTooltip (TRANS("effect;\n"));
    slider34->setRange (0, 1, 0);
    slider34->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider34->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider34->addListener (this);

    slider34->setBounds (498, 565, 70, 70);

    slider35.reset (new Slider ("Limiter.Volume"));
    addAndMakeVisible (slider35.get());
    slider35->setTooltip (TRANS("effect;\n"));
    slider35->setRange (0, 1, 0);
    slider35->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider35->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider35->addListener (this);

    slider35->setBounds (606, 563, 70, 70);

    slider36.reset (new Slider ("ADSR2.Attack"));
    addAndMakeVisible (slider36.get());
    slider36->setRange (0, 1, 0);
    slider36->setSliderStyle (Slider::LinearVertical);
    slider36->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider36->addListener (this);

    slider36->setBounds (736, 361, 30, 100);

    slider37.reset (new Slider ("ADSR2.Decay"));
    addAndMakeVisible (slider37.get());
    slider37->setRange (0, 1, 0);
    slider37->setSliderStyle (Slider::LinearVertical);
    slider37->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider37->addListener (this);

    slider37->setBounds (776, 361, 30, 100);

    slider38.reset (new Slider ("ADSR2.Sustain"));
    addAndMakeVisible (slider38.get());
    slider38->setRange (0, 1, 0);
    slider38->setSliderStyle (Slider::LinearVertical);
    slider38->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider38->addListener (this);

    slider38->setBounds (816, 361, 30, 100);

    slider39.reset (new Slider ("ADSR2.Release"));
    addAndMakeVisible (slider39.get());
    slider39->setRange (0, 1, 0);
    slider39->setSliderStyle (Slider::LinearVertical);
    slider39->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider39->addListener (this);

    slider39->setBounds (856, 361, 30, 100);

    slider26.reset (new Slider ("OSC1.Phase"));
    addAndMakeVisible (slider26.get());
    slider26->setRange (0, 1, 0);
    slider26->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider26->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider26->addListener (this);

    slider26->setBounds (35, 141, 50, 50);

    slider27.reset (new Slider ("OSC2.Phase"));
    addAndMakeVisible (slider27.get());
    slider27->setRange (0, 1, 0);
    slider27->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider27->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider27->addListener (this);

    slider27->setBounds (11, 273, 50, 50);

    slider28.reset (new Slider ("OSC3.Phase"));
    addAndMakeVisible (slider28.get());
    slider28->setRange (0, 1, 0);
    slider28->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider28->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider28->addListener (this);

    slider28->setBounds (945, 141, 50, 50);

    slider29.reset (new Slider ("OSC4.Phase"));
    addAndMakeVisible (slider29.get());
    slider29->setRange (0, 1, 0);
    slider29->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider29->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider29->addListener (this);

    slider29->setBounds (958, 273, 50, 50);

    toggleButton.reset (new ToggleButton ("ADSRFilter.Retrigger"));
    addAndMakeVisible (toggleButton.get());
    toggleButton->setButtonText (String());
    toggleButton->addListener (this);

    toggleButton->setBounds (606, 349, 40, 40);

    slider40.reset (new Slider ("Filter.EnvelopeScale"));
    addAndMakeVisible (slider40.get());
    slider40->setRange (-1, 1, 1);
    slider40->setSliderStyle (Slider::LinearVertical);
    slider40->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider40->addListener (this);

    slider40->setBounds (388, 336, 40, 64);

    component.reset (new LevelIndicator());
    addAndMakeVisible (component.get());
    component->setName ("Limiter.LevelChannel0");

    component->setBounds (694, 579, 156, 8);

    component2.reset (new LevelIndicator());
    addAndMakeVisible (component2.get());
    component2->setName ("Limiter.LevelChannel1");

    component2->setBounds (694, 608, 156, 8);

    label.reset (new Label ("labelOsc1",
                            TRANS("OSC-1")));
    addAndMakeVisible (label.get());
    label->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (274, 90, 98, 24);

    label2.reset (new Label ("labelOsc1",
                             TRANS("SUB")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (250, 222, 98, 24);

    label3.reset (new Label ("labelOsc1",
                             TRANS("Cutoff")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (406, 280, 98, 24);

    label4.reset (new Label ("labelOsc1",
                             TRANS("Res")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (524, 280, 98, 24);

    label5.reset (new Label ("labelOsc1",
                             TRANS("OSC-2")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (658, 90, 98, 24);

    label6.reset (new Label ("labelOsc1",
                             TRANS("SUB")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (672, 222, 98, 24);

    label7.reset (new Label ("labelOsc1",
                             TRANS("Filter")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (466, 32, 98, 24);

    label8.reset (new Label ("labelOsc1",
                             TRANS("A")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (442, 434, 30, 24);

    label9.reset (new Label ("labelOsc1",
                             TRANS("S")));
    addAndMakeVisible (label9.get());
    label9->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label9->setJustificationType (Justification::centred);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label9->setBounds (499, 434, 30, 24);

    label10.reset (new Label ("labelOsc1",
                              TRANS("R")));
    addAndMakeVisible (label10.get());
    label10->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label10->setBounds (556, 434, 30, 24);

    label11.reset (new Label ("labelOsc1",
                              TRANS("Retrigger")));
    addAndMakeVisible (label11.get());
    label11->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label11->setBounds (590, 390, 74, 24);

    label12.reset (new Label ("labelOsc1",
                              TRANS("LFO")));
    addAndMakeVisible (label12.get());
    label12->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label12->setJustificationType (Justification::centred);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label12->setBounds (402, 506, 74, 24);

    label13.reset (new Label ("labelOsc1",
                              TRANS("Frequency")));
    addAndMakeVisible (label13.get());
    label13->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label13->setBounds (470, 506, 84, 24);

    label14.reset (new Label ("labelOsc1",
                              TRANS("Phase")));
    addAndMakeVisible (label14.get());
    label14->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label14->setBounds (22, 184, 74, 24);

    label15.reset (new Label ("labelOsc1",
                              TRANS("Phase")));
    addAndMakeVisible (label15.get());
    label15->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label15->setJustificationType (Justification::centred);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label15->setBounds (-4, 314, 74, 24);

    label16.reset (new Label ("labelOsc1",
                              TRANS("Phase")));
    addAndMakeVisible (label16.get());
    label16->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label16->setBounds (934, 182, 74, 24);

    label17.reset (new Label ("labelOsc1",
                              TRANS("Phase")));
    addAndMakeVisible (label17.get());
    label17->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label17->setBounds (946, 316, 74, 24);

    label18.reset (new Label ("labelOsc1",
                              TRANS("-")));
    addAndMakeVisible (label18.get());
    label18->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label18->setJustificationType (Justification::centred);
    label18->setEditable (false, false, false);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label18->setBounds (371, 400, 74, 24);

    label19.reset (new Label ("labelOsc1",
                              TRANS("+")));
    addAndMakeVisible (label19.get());
    label19->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label19->setJustificationType (Justification::centred);
    label19->setEditable (false, false, false);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label19->setBounds (371, 316, 74, 24);

    label20.reset (new Label ("labelOsc1",
                              TRANS("off")));
    addAndMakeVisible (label20.get());
    label20->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label20->setBounds (364, 356, 31, 24);

    cachedImage_case_main_png_1 = ImageCache::getFromMemory (case_main_png, case_main_pngSize);
    cachedImage_case_effects_png_2 = ImageCache::getFromMemory (case_effects_png, case_effects_pngSize);
    cachedImage_levelIndicator_png_3 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_levelIndicator_png_4 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_presetsPanel_png_5 = ImageCache::getFromMemory (presetsPanel_png, presetsPanel_pngSize);
    cachedImage_icon_saw_png_6 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_7 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_8 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_9 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_10 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_11 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_12 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_13 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_14 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_15 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_16 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_17 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (1020, 668);


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
    mOsc1Waveform = nullptr;
    slider7 = nullptr;
    slider8 = nullptr;
    slider9 = nullptr;
    slider10 = nullptr;
    slider11 = nullptr;
    slider12 = nullptr;
    mSliderFilterMode = nullptr;
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
    slider35 = nullptr;
    slider36 = nullptr;
    slider37 = nullptr;
    slider38 = nullptr;
    slider39 = nullptr;
    slider26 = nullptr;
    slider27 = nullptr;
    slider28 = nullptr;
    slider29 = nullptr;
    toggleButton = nullptr;
    slider40 = nullptr;
    component = nullptr;
    component2 = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label10 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    label20 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void OwlBassGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 1020, height = 668;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_main_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_case_main_png_1.getWidth(), cachedImage_case_main_png_1.getHeight());
    }

    {
        int x = -36, y = 506, width = 1096, height = 192;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_effects_png_2,
                     x, y, width, height,
                     0, 0, cachedImage_case_effects_png_2.getWidth(), cachedImage_case_effects_png_2.getHeight());
    }

    {
        int x = 688, y = 572, width = 168, height = 20;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_3,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_3.getWidth(), cachedImage_levelIndicator_png_3.getHeight());
    }

    {
        int x = 688, y = 601, width = 168, height = 20;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_4,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_4.getWidth(), cachedImage_levelIndicator_png_4.getHeight());
    }

    {
        int x = 664, y = 14, width = 332, height = 44;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_presetsPanel_png_5,
                     x, y, width, height,
                     0, 0, cachedImage_presetsPanel_png_5.getWidth(), cachedImage_presetsPanel_png_5.getHeight());
    }

    {
        int x = 167, y = 139, width = 28, height = 30;
        String text (TRANS("1\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 189, y = 110, width = 28, height = 30;
        String text (TRANS("2\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 231, y = 110, width = 28, height = 30;
        String text (TRANS("4\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 249, y = 139, width = 28, height = 30;
        String text (TRANS("8\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 145, y = 271, width = 28, height = 30;
        String text (TRANS("1\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 167, y = 242, width = 28, height = 30;
        String text (TRANS("2\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 209, y = 242, width = 28, height = 30;
        String text (TRANS("4\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 227, y = 271, width = 28, height = 30;
        String text (TRANS("8\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 767, y = 271, width = 28, height = 30;
        String text (TRANS("1\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 789, y = 242, width = 28, height = 30;
        String text (TRANS("2\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 831, y = 242, width = 28, height = 30;
        String text (TRANS("4\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 849, y = 271, width = 28, height = 30;
        String text (TRANS("8\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 753, y = 145, width = 28, height = 30;
        String text (TRANS("1\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 775, y = 116, width = 28, height = 30;
        String text (TRANS("2\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 817, y = 116, width = 28, height = 30;
        String text (TRANS("4\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 835, y = 145, width = 28, height = 30;
        String text (TRANS("8\'"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 64, y = 270, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_6,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_6.getWidth(), cachedImage_icon_saw_png_6.getHeight());
    }

    {
        int x = 100, y = 250, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_7,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_7.getWidth(), cachedImage_icon_triangle_png_7.getHeight());
    }

    {
        int x = 134, y = 270, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_8,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_8.getWidth(), cachedImage_icon_square_png_8.getHeight());
    }

    {
        int x = 86, y = 136, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_9,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_9.getWidth(), cachedImage_icon_saw_png_9.getHeight());
    }

    {
        int x = 122, y = 116, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_10,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_10.getWidth(), cachedImage_icon_triangle_png_10.getHeight());
    }

    {
        int x = 156, y = 136, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_11,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_11.getWidth(), cachedImage_icon_square_png_11.getHeight());
    }

    {
        int x = 858, y = 142, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_12,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_12.getWidth(), cachedImage_icon_saw_png_12.getHeight());
    }

    {
        int x = 894, y = 122, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_13,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_13.getWidth(), cachedImage_icon_triangle_png_13.getHeight());
    }

    {
        int x = 928, y = 142, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_14,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_14.getWidth(), cachedImage_icon_square_png_14.getHeight());
    }

    {
        int x = 872, y = 270, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_15,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_15.getWidth(), cachedImage_icon_saw_png_15.getHeight());
    }

    {
        int x = 908, y = 250, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_16,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_16.getWidth(), cachedImage_icon_triangle_png_16.getHeight());
    }

    {
        int x = 942, y = 270, width = 14, height = 8;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_17,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_17.getWidth(), cachedImage_icon_square_png_17.getHeight());
    }

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
    else if (sliderThatWasMoved == mOsc1Waveform.get())
    {
        //[UserSliderCode_mOsc1Waveform] -- add your slider handling code here..
        //[/UserSliderCode_mOsc1Waveform]
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
    else if (sliderThatWasMoved == mSliderFilterMode.get())
    {
        //[UserSliderCode_mSliderFilterMode] -- add your slider handling code here..
        //[/UserSliderCode_mSliderFilterMode]
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
    else if (sliderThatWasMoved == slider40.get())
    {
        //[UserSliderCode_slider40] -- add your slider handling code here..
        //[/UserSliderCode_slider40]
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
    else if (buttonThatWasClicked == toggleButton.get())
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
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
                 snapPixels="2" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="1020" initialHeight="668">
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 1020 668" resource="case_main_png" opacity="1.0" mode="0"/>
    <IMAGE pos="-36 506 1096 192" resource="case_effects_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="688 572 168 20" resource="levelIndicator_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="688 601 168 20" resource="levelIndicator_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="664 14 332 44" resource="presetsPanel_png" opacity="1.0"
           mode="0"/>
    <TEXT pos="167 139 28 30" fill="solid: ffffffff" hasStroke="0" text="1'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="189 110 28 30" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="231 110 28 30" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="249 139 28 30" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="145 271 28 30" fill="solid: ffffffff" hasStroke="0" text="1'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="167 242 28 30" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="209 242 28 30" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="227 271 28 30" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="767 271 28 30" fill="solid: ffffffff" hasStroke="0" text="1'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="789 242 28 30" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="831 242 28 30" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="849 271 28 30" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="753 145 28 30" fill="solid: ffffffff" hasStroke="0" text="1'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="775 116 28 30" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="817 116 28 30" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="835 145 28 30" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <IMAGE pos="64 270 14 8" resource="icon_saw_png" opacity="1.0" mode="0"/>
    <IMAGE pos="100 250 14 8" resource="icon_triangle_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="134 270 14 8" resource="icon_square_png" opacity="1.0" mode="0"/>
    <IMAGE pos="86 136 14 8" resource="icon_saw_png" opacity="1.0" mode="0"/>
    <IMAGE pos="122 116 14 8" resource="icon_triangle_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="156 136 14 8" resource="icon_square_png" opacity="1.0" mode="0"/>
    <IMAGE pos="858 142 14 8" resource="icon_saw_png" opacity="1.0" mode="0"/>
    <IMAGE pos="894 122 14 8" resource="icon_triangle_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="928 142 14 8" resource="icon_square_png" opacity="1.0" mode="0"/>
    <IMAGE pos="872 270 14 8" resource="icon_saw_png" opacity="1.0" mode="0"/>
    <IMAGE pos="908 250 14 8" resource="icon_triangle_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="942 270 14 8" resource="icon_square_png" opacity="1.0" mode="0"/>
  </BACKGROUND>
  <SLIDER name="OSC1.Volume" id="a3679e39b3ca9aa0" memberName="slider"
          virtualName="" explicitFocusOrder="0" pos="267 109 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Volume" id="995566f65765c2eb" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="243 241 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Volume" id="3b5eb21fc2082bb" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="650 109 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC4.Volume" id="a17a53d967d4ab66" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="666 241 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Divider" id="2c08caa873912912" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="176 120 90 90" tooltip="switch;&#10;"
          min="1.0" max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Waveform" id="c93a5c777e89390" memberName="mOsc1Waveform"
          virtualName="" explicitFocusOrder="0" pos="84 120 90 90" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Divider" id="348346d13236bf5f" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="154 252 90 90" tooltip="switch;&#10;"
          min="1.0" max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Waveform" id="bb384bd95d8593a8" memberName="slider8"
          virtualName="" explicitFocusOrder="0" pos="62 252 90 90" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Waveform" id="50ddd2f6ccb0b007" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="855 125 90 90" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Divider" id="a05366187850a3f3" memberName="slider10"
          virtualName="" explicitFocusOrder="0" pos="763 125 90 90" tooltip="switch;&#10;"
          min="1.0" max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC4.Waveform" id="69358086a1303136" memberName="slider11"
          virtualName="" explicitFocusOrder="0" pos="868 252 90 90" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="648ffc9ff30d14ba" memberName="slider12"
          virtualName="" explicitFocusOrder="0" pos="776 252 90 90" tooltip="switch;&#10;"
          min="1.0" max="4.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.Mode" id="500e770e434081df" memberName="mSliderFilterMode"
          virtualName="" explicitFocusOrder="0" pos="449 67 130 130" tooltip="switch;&#10;"
          min="1.0" max="3.0" int="1.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.CutoffFreq" id="513b91f5ae1bd693" memberName="slider14"
          virtualName="" explicitFocusOrder="0" pos="398 184 110 110" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Filter.Q" id="be0bf92848c827a1" memberName="slider15" virtualName=""
          explicitFocusOrder="0" pos="518 184 110 110" min="0.0" max="1.0"
          int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Attack" id="b7c6f52502efa9c4" memberName="slider16"
          virtualName="" explicitFocusOrder="0" pos="438 315 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Sustain" id="538b89ad7b7117ce" memberName="slider17"
          virtualName="" explicitFocusOrder="0" pos="494 315 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSRFilter.Release" id="f3160444db7676a9" memberName="slider18"
          virtualName="" explicitFocusOrder="0" pos="550 315 40 126" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Volume" id="f9ef9f642b0fceb2" memberName="slider19"
          virtualName="" explicitFocusOrder="0" pos="476 450 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Frequency" id="16bbf472a1fc85ba" memberName="slider20"
          virtualName="" explicitFocusOrder="0" pos="404 450 70 70" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Mode" id="172855be44414814" memberName="slider21"
          virtualName="" explicitFocusOrder="0" pos="552 444 85 85" tooltip="switch;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Attack" id="228b9abc269e48a4" memberName="slider22"
          virtualName="" explicitFocusOrder="0" pos="135 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Decay" id="cdf403e980dc6e15" memberName="slider23"
          virtualName="" explicitFocusOrder="0" pos="175 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Sustain" id="e60b0778eb38d289" memberName="slider24"
          virtualName="" explicitFocusOrder="0" pos="215 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR1.Release" id="f5fde9e12978abb6" memberName="slider25"
          virtualName="" explicitFocusOrder="0" pos="255 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="149006776a721cd6" memberName="mPresetDescr"
         virtualName="" explicitFocusOrder="0" pos="674 24 312 24" textCol="ff2d0334"
         edTextCol="ff000000" edBkgCol="0" labelText="Bass / Wah wah sound"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16.0" kerning="-0.04599999999999999922"
         bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="new button" id="86c8cb20f64737f6" memberName="openPresetBrowser"
              virtualName="" explicitFocusOrder="0" pos="683 23 298 24" tooltip="no_background;&#10;&#10;"
              bgColOff="a45c94" bgColOn="181f22" textCol="ff0d0d0d" textColOn="ff000000"
              buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="7f2dcf690d640765" memberName="mBtnPresetNext"
              virtualName="" explicitFocusOrder="0" pos="898 61 88 24" buttonText="Next"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="731168668bd98da4" memberName="mBtnPresetPrev"
              virtualName="" explicitFocusOrder="0" pos="800 61 88 24" buttonText="Previous"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="ReferenceOscillator.Detune" id="14d7a0bddcdfb29" memberName="slider30"
          virtualName="" explicitFocusOrder="0" pos="240 564 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="UnisonMixer.Volume" id="a80ff1604b13e5d8" memberName="slider31"
          virtualName="" explicitFocusOrder="0" pos="168 564 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Delay" id="6acc910924aa9904" memberName="slider32"
          virtualName="" explicitFocusOrder="0" pos="424 564 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Wet" id="3e51784dc694ef6a" memberName="slider33"
          virtualName="" explicitFocusOrder="0" pos="352 564 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Delay.Feedback" id="5798c0f055b0143e" memberName="slider34"
          virtualName="" explicitFocusOrder="0" pos="498 565 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="Limiter.Volume" id="b5cc91d820dcaec" memberName="slider35"
          virtualName="" explicitFocusOrder="0" pos="606 563 70 70" tooltip="effect;&#10;"
          min="0.0" max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Attack" id="a876cc069610807e" memberName="slider36"
          virtualName="" explicitFocusOrder="0" pos="736 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Decay" id="e92825ec520d8f63" memberName="slider37"
          virtualName="" explicitFocusOrder="0" pos="776 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Sustain" id="d23ab82982cf58a2" memberName="slider38"
          virtualName="" explicitFocusOrder="0" pos="816 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ADSR2.Release" id="55c0f3eac09d48a5" memberName="slider39"
          virtualName="" explicitFocusOrder="0" pos="856 361 30 100" min="0.0"
          max="1.0" int="0.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC1.Phase" id="a097c0adb4bc2693" memberName="slider26"
          virtualName="" explicitFocusOrder="0" pos="35 141 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC2.Phase" id="4efa37d2939989af" memberName="slider27"
          virtualName="" explicitFocusOrder="0" pos="11 273 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC3.Phase" id="c7b2077e593df4ed" memberName="slider28"
          virtualName="" explicitFocusOrder="0" pos="945 141 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="OSC4.Phase" id="802932c5c29c4cd2" memberName="slider29"
          virtualName="" explicitFocusOrder="0" pos="958 273 50 50" min="0.0"
          max="1.0" int="0.0" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <TOGGLEBUTTON name="ADSRFilter.Retrigger" id="4bbf329f139fd5b1" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="606 349 40 40" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Filter.EnvelopeScale" id="df0151a088ac94c9" memberName="slider40"
          virtualName="" explicitFocusOrder="0" pos="388 336 40 64" min="-1.0"
          max="1.0" int="1.0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <GENERICCOMPONENT name="Limiter.LevelChannel0" id="3f5e527f49885cf" memberName="component"
                    virtualName="" explicitFocusOrder="0" pos="694 579 156 8" class="LevelIndicator"
                    params=""/>
  <GENERICCOMPONENT name="Limiter.LevelChannel1" id="4df1d334df446ddc" memberName="component2"
                    virtualName="" explicitFocusOrder="0" pos="694 608 156 8" class="LevelIndicator"
                    params=""/>
  <LABEL name="labelOsc1" id="345a1b876e439ba9" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="274 90 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC-1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="b1c441e10e800f74" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="250 222 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="SUB" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="3b5b64392bc2f065" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="406 280 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Cutoff" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="e0c2f0afc6b44d16" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="524 280 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Res" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="498a9e6dbb32bf2b" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="658 90 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC-2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="f6c9266d62d94cc5" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="672 222 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="SUB" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="353a5c75b4234ce0" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="466 32 98 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="78705df71cd95f2a" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="442 434 30 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="12b34d290f9be735" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="499 434 30 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="c17c4957e6a36401" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="556 434 30 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="eed37e4cbe797a1f" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="590 390 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Retrigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="48a549ac9501b73f" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="402 506 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="LFO" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="4f79d2a103127b07" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="470 506 84 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="3d26b70f71d188a7" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="22 184 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="eb3e74a88e933489" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="-4 314 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="3f2dc31fde89c18f" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="934 182 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="f2739283f2cddd55" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="946 316 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Phase" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="634ae97f568f6aa4" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="371 400 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="-" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="3128cbab9cb9f06" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="371 316 74 24" edTextCol="ff000000"
         edBkgCol="0" labelText="+" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="labelOsc1" id="637d38813dcee59b" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="364 356 31 24" edTextCol="ff000000"
         edBkgCol="0" labelText="off" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: case_main_png, 65490, "../../Resources/case_main.png"
static const unsigned char resource_OwlBassGui_case_main_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,244,0,0,1,119,8,6,0,0,0,83,242,185,252,0,0,32,0,73,68,65,84,120,156,236,189,75,186,
36,171,206,44,8,249,221,238,157,64,141,163,90,53,133,154,255,16,106,4,183,255,83,141,112,192,100,50,9,240,240,88,143,220,169,115,114,47,127,128,16,32,100,146,28,247,168,255,207,255,253,255,254,127,165,
148,255,93,254,67,84,197,181,6,247,26,252,229,242,243,90,45,173,180,82,235,188,219,218,235,46,94,155,247,74,169,138,169,106,100,147,144,157,191,186,102,24,245,81,178,192,243,132,125,239,103,107,190,72,
43,112,175,218,242,178,29,117,223,136,89,93,255,55,68,244,50,139,186,253,124,103,122,148,190,180,18,207,4,151,87,164,244,144,239,241,177,234,67,84,239,93,90,169,8,202,160,174,225,245,213,24,71,227,155,
213,81,124,117,223,55,102,163,145,220,213,220,10,117,238,50,7,179,252,85,192,148,219,25,196,149,221,104,165,180,90,74,109,246,214,249,132,191,26,179,213,44,3,213,215,72,23,93,31,162,115,110,42,180,45,
211,222,42,91,107,174,181,117,199,51,125,85,235,247,169,181,243,65,250,63,255,171,148,242,127,125,183,20,95,69,74,225,148,14,85,250,59,38,23,21,165,94,128,210,154,4,112,172,104,64,137,139,46,80,39,91,
147,118,173,79,70,10,232,144,151,228,137,0,187,208,92,101,184,42,241,64,195,213,176,226,138,144,81,153,227,22,13,147,90,116,53,40,175,108,98,47,219,68,221,38,234,238,80,11,254,70,115,153,233,165,42,159,
201,149,201,121,210,7,229,40,168,118,179,246,121,92,79,228,81,124,20,191,200,217,81,203,77,59,63,182,164,156,171,58,239,14,25,174,53,141,237,85,234,232,112,90,89,46,33,32,226,143,25,43,44,23,121,67,93,
190,171,12,45,33,67,185,14,84,81,198,66,94,54,246,33,239,29,111,184,151,3,38,108,87,106,245,246,22,207,13,144,87,49,176,212,28,158,179,109,136,156,80,33,230,79,162,255,253,191,74,41,255,167,252,135,34,
244,200,155,70,82,139,122,148,151,209,247,75,169,94,10,23,180,153,185,131,9,173,20,167,129,89,202,64,192,200,82,230,66,49,205,119,199,35,114,191,203,92,31,224,215,140,131,40,58,239,134,174,93,141,254,
169,157,45,44,70,221,28,245,85,95,231,186,171,5,200,199,217,226,125,138,148,209,80,101,148,76,253,26,242,89,141,151,138,216,34,245,75,245,189,172,245,73,57,84,92,111,103,92,51,7,34,146,57,226,17,245,35,
146,45,114,0,236,253,249,95,52,3,102,13,24,249,154,185,63,156,211,174,255,173,56,115,226,130,75,88,163,13,215,107,187,218,226,9,192,78,113,39,176,188,40,186,38,4,252,55,86,74,166,88,32,95,150,185,99,112,
31,199,106,64,95,5,28,171,204,217,195,114,202,143,250,161,244,127,254,215,119,75,240,85,196,19,161,156,194,12,228,75,226,29,182,214,0,212,139,213,152,40,180,16,66,237,123,126,194,169,200,74,177,28,43,
180,4,65,134,209,40,218,249,237,247,13,152,131,91,93,75,7,114,181,136,208,64,88,153,119,12,49,119,143,143,213,185,34,229,165,71,199,44,79,63,231,113,80,141,140,97,193,168,170,31,67,35,236,100,149,2,60,
57,106,9,58,131,115,239,248,245,246,58,15,60,134,54,187,172,93,167,157,62,193,169,57,230,242,158,165,169,167,230,55,115,6,238,64,73,230,236,102,114,168,101,140,117,114,153,170,171,107,150,24,12,182,113,
16,24,212,169,110,41,4,238,84,0,215,172,185,23,120,118,134,143,104,91,19,167,230,95,204,86,235,205,220,95,217,33,174,88,202,21,133,191,206,57,253,158,166,228,187,253,222,108,78,57,121,153,14,253,20,250,
243,221,2,124,5,69,96,192,24,203,127,251,113,244,76,38,76,181,99,3,134,81,46,99,10,202,131,193,129,143,136,197,35,237,132,83,142,12,84,83,108,120,58,120,191,198,2,254,138,38,153,216,200,227,191,66,199,
220,45,197,135,143,83,170,179,47,40,39,94,115,215,175,127,21,11,84,28,135,9,126,78,144,213,128,68,157,194,249,138,60,155,38,202,247,99,53,56,217,0,51,31,135,214,112,188,42,3,229,122,122,186,20,24,47,28,
51,24,219,94,118,252,163,250,220,188,34,229,76,48,69,221,143,134,36,154,18,244,223,43,157,71,50,205,243,190,94,106,169,48,160,163,207,205,214,101,249,218,117,19,101,236,152,215,212,92,70,157,161,114,209,
248,42,63,1,251,162,156,115,164,229,250,140,116,54,57,238,145,121,127,4,58,174,149,98,141,90,173,33,187,72,94,44,119,162,127,223,69,127,125,132,142,11,161,138,191,43,26,139,147,192,219,40,78,173,203,231,
206,158,161,191,220,229,181,74,183,175,54,3,104,86,157,35,96,104,151,241,104,173,152,72,155,7,111,14,65,133,255,106,182,217,117,94,84,145,225,88,121,250,204,195,44,60,184,96,248,35,224,246,62,177,16,171,
177,227,243,200,114,175,44,134,24,227,240,62,119,48,2,241,93,185,162,62,174,172,48,47,162,136,191,146,153,249,71,50,70,168,64,160,94,26,232,164,224,181,187,38,51,167,81,221,219,209,115,5,254,204,155,239,
119,104,239,119,58,88,99,153,63,229,178,61,181,184,108,16,174,217,161,34,80,198,60,10,83,158,71,95,19,112,159,215,210,202,217,65,219,208,168,84,54,166,166,252,238,90,236,34,119,155,85,155,112,88,170,179,
213,102,89,137,64,109,181,108,89,188,104,57,124,7,253,245,128,206,58,203,246,113,53,33,10,200,231,243,242,102,141,202,168,68,76,189,43,235,138,119,89,253,213,53,177,145,91,90,155,64,35,17,212,251,173,
145,194,10,229,180,215,98,199,36,38,133,23,120,174,142,241,66,79,25,71,247,71,35,17,179,29,39,136,235,237,148,143,6,44,48,164,174,46,234,78,11,234,50,223,82,116,63,35,175,42,66,156,21,88,243,245,76,231,
148,92,167,142,81,52,214,56,30,217,28,39,60,28,240,119,176,92,136,140,226,121,96,139,235,236,56,16,106,138,199,80,143,77,96,179,206,203,49,181,3,158,61,78,238,89,17,3,248,220,166,24,203,113,169,205,250,
138,148,45,107,226,78,191,187,4,195,160,128,21,113,158,181,210,157,158,9,230,195,118,99,93,145,125,85,203,45,163,159,2,230,165,252,229,128,174,240,180,147,194,55,99,63,130,215,33,240,58,42,208,17,40,8,
89,236,241,154,73,184,240,20,243,90,198,51,183,118,93,139,94,27,251,83,95,175,227,97,239,86,118,82,201,182,227,181,58,91,127,93,232,199,75,71,37,51,230,170,140,106,184,208,125,5,62,145,12,11,197,66,195,
185,228,165,72,237,218,205,24,84,24,117,86,144,74,51,130,3,62,206,185,253,72,46,125,127,72,180,161,143,163,126,228,1,98,217,235,158,227,159,57,53,124,63,115,44,196,208,142,75,56,68,48,175,60,116,153,127,
20,137,151,93,199,38,178,153,55,247,71,74,89,213,136,201,56,47,59,1,1,52,129,25,174,97,91,210,22,253,8,109,129,97,100,128,130,123,117,108,252,232,206,132,110,101,216,246,146,99,2,202,25,45,149,159,0,234,
127,53,160,119,82,0,19,217,156,104,82,178,247,31,151,141,111,211,94,97,99,139,147,42,195,115,239,197,209,51,191,174,241,6,182,215,223,58,235,39,188,179,118,85,25,35,50,200,21,70,135,106,133,69,141,101,
150,84,77,126,230,28,68,228,12,135,40,12,151,66,21,169,86,156,188,205,121,211,26,13,59,103,214,144,171,58,112,143,193,62,104,86,206,113,181,135,17,126,70,117,172,136,77,223,235,164,152,103,136,24,89,85,
158,219,12,37,51,135,160,31,10,71,193,69,195,200,23,202,245,227,157,141,103,12,234,222,241,143,205,128,5,162,106,203,66,74,98,100,229,232,28,143,97,31,154,23,144,218,108,230,32,38,255,106,237,122,67,157,
108,59,91,59,176,115,176,146,222,187,215,221,58,171,214,182,213,131,69,248,9,160,254,87,3,186,90,155,17,94,152,53,79,171,179,191,142,102,158,33,103,6,96,39,250,34,234,10,158,41,133,193,144,68,179,204,
59,178,194,216,244,246,152,29,119,229,142,162,74,167,9,172,142,28,150,204,144,174,60,177,213,121,231,33,239,163,96,55,38,237,38,101,221,81,190,13,151,223,153,11,129,57,143,211,169,108,254,254,98,188,21,
72,70,168,226,125,25,115,219,17,47,126,213,230,202,178,115,155,43,100,21,206,80,197,19,209,68,230,28,23,186,207,235,85,13,73,95,245,179,141,230,222,90,233,12,6,239,171,176,25,178,166,101,31,109,138,62,
229,212,1,222,107,72,168,95,41,152,195,95,114,82,100,113,204,194,194,70,162,83,171,112,103,173,62,73,127,53,160,151,18,175,71,127,47,255,242,219,220,197,220,181,31,152,220,2,112,27,57,169,133,235,22,61,
51,0,10,69,64,35,82,39,144,115,155,202,64,88,57,3,185,68,219,149,181,90,81,102,44,185,33,60,14,193,153,37,20,167,233,0,177,54,88,177,50,226,113,88,169,67,118,63,154,230,0,23,210,107,39,247,223,169,163,
166,76,233,70,164,71,17,191,149,131,187,37,165,185,141,86,189,245,112,21,208,201,215,117,95,120,68,193,248,120,229,12,40,49,88,78,104,79,233,160,90,6,92,6,203,225,177,22,121,218,31,252,62,68,47,208,20,
51,166,160,31,166,79,36,103,60,167,145,182,28,128,57,223,167,241,110,48,223,209,30,41,110,55,83,1,85,246,187,232,175,3,244,72,247,250,64,171,107,19,52,253,84,88,128,143,61,60,39,196,130,16,204,149,10,
27,79,87,85,166,69,196,128,138,81,186,133,113,37,71,30,200,176,76,242,56,178,62,145,220,60,81,43,235,46,27,58,163,21,200,236,2,204,138,255,174,28,143,209,26,245,190,148,50,231,99,117,222,41,118,188,99,
103,51,42,167,74,244,20,236,11,176,170,41,97,120,142,91,77,43,13,11,219,22,122,178,10,4,2,3,198,223,13,80,0,29,173,101,229,184,51,217,177,158,32,255,234,191,119,120,150,118,48,2,254,166,157,13,95,236,
245,223,29,103,218,148,9,58,105,237,227,202,206,55,188,49,118,194,103,230,44,58,15,229,252,16,253,117,128,94,74,60,240,81,80,136,15,146,26,238,130,164,119,66,106,183,0,236,25,32,115,92,120,37,154,196,
154,46,192,72,86,85,56,76,169,195,115,161,19,69,90,226,170,18,110,229,186,70,161,22,51,221,240,150,118,64,151,207,179,49,216,5,152,213,61,11,22,216,50,72,69,15,166,213,171,178,145,167,161,236,188,236,
19,220,116,155,184,144,154,173,210,212,73,52,136,161,55,20,185,210,175,107,213,85,138,105,103,30,50,128,202,36,193,186,172,27,161,116,168,155,184,190,141,0,47,180,90,62,189,81,247,178,8,88,57,240,77,28,
139,102,86,160,178,23,120,3,216,153,90,129,152,221,225,96,143,140,156,146,136,230,173,104,246,124,155,70,127,153,122,1,225,5,33,120,243,51,245,241,33,26,124,245,45,22,59,108,246,164,206,187,244,87,2,186,
208,127,243,151,175,55,64,197,122,157,207,215,181,218,101,28,197,180,68,30,118,74,234,11,75,112,23,21,94,44,4,92,40,230,51,172,181,23,241,209,56,251,27,234,158,151,178,232,190,40,185,50,132,9,67,40,203,
28,55,201,100,227,179,129,125,196,215,95,215,83,84,253,233,194,5,31,198,139,64,180,149,82,234,181,33,103,152,129,4,160,93,71,34,43,208,231,155,101,11,172,178,139,92,176,76,213,183,26,220,227,243,84,215,
175,53,226,49,222,50,27,176,206,14,130,82,208,204,161,232,75,54,216,93,150,3,148,191,158,249,168,209,48,251,150,171,45,224,168,237,121,35,74,16,17,48,56,149,85,192,9,60,86,96,30,250,219,116,173,5,53,250,
116,184,253,59,236,61,145,205,168,165,140,79,21,199,56,31,143,122,234,34,70,158,91,31,159,32,136,224,212,187,15,238,246,72,77,217,158,75,123,143,254,58,64,87,74,171,236,95,247,188,138,250,30,48,144,219,
141,25,45,68,90,203,221,33,84,133,20,112,25,150,145,71,82,138,13,20,0,216,255,16,111,110,103,69,21,14,66,239,57,112,50,92,195,142,241,90,130,29,99,18,81,92,54,64,99,49,240,21,129,57,225,102,230,78,12,
246,112,178,170,240,95,26,21,87,19,20,88,93,55,188,74,63,34,203,129,199,171,144,1,22,76,83,114,37,128,36,69,231,126,87,171,107,146,196,52,245,11,174,91,156,46,119,125,222,51,159,153,175,178,35,238,113,
43,174,65,193,65,57,109,153,48,17,120,245,42,112,93,249,82,138,157,106,110,178,169,36,222,245,223,14,234,21,120,116,112,15,156,18,243,45,137,5,176,171,237,115,202,198,187,27,74,119,233,184,85,241,121,
88,198,5,241,238,58,116,101,214,163,102,89,164,79,208,95,1,232,56,103,106,174,162,107,5,210,40,234,53,134,94,193,121,153,170,97,226,175,165,180,164,130,146,136,244,46,205,235,19,171,155,232,23,217,132,
16,115,213,10,81,222,182,171,159,67,108,228,104,172,176,38,226,52,34,195,220,123,139,5,41,9,152,35,192,193,181,166,116,129,58,145,130,48,159,147,50,184,119,216,51,171,27,45,128,72,62,174,219,79,149,5,
143,172,122,116,79,201,67,101,164,190,11,153,27,223,235,215,46,222,156,225,215,227,13,55,51,131,238,42,175,87,165,26,94,230,160,244,93,1,145,228,48,46,181,61,196,93,33,28,235,16,129,232,202,22,97,63,122,
89,107,14,170,121,37,14,219,88,92,114,13,100,192,174,190,200,158,250,171,217,186,99,179,112,121,156,47,204,158,246,101,180,132,63,2,3,187,224,35,223,139,151,163,243,55,31,166,191,234,91,238,60,153,153,
93,115,145,56,60,39,121,241,106,241,108,100,70,174,216,73,67,47,32,242,212,42,22,67,13,161,25,87,96,174,218,101,69,81,74,62,192,66,173,44,188,199,114,56,11,85,197,63,205,146,217,103,101,164,48,125,33,
245,21,63,206,83,6,126,133,173,40,242,56,88,161,20,175,72,134,128,198,88,92,245,42,116,213,176,163,115,85,175,154,10,73,131,253,80,245,175,18,11,28,122,197,7,39,83,57,19,60,217,145,146,246,107,66,239,
93,25,92,39,60,23,209,220,240,120,194,245,174,74,246,124,254,46,129,93,44,145,158,251,129,143,112,67,13,145,230,128,53,72,49,178,10,43,253,45,186,7,56,247,145,109,233,199,81,124,83,199,127,175,191,245,
250,44,54,59,170,204,91,13,107,245,101,133,200,206,18,70,56,176,36,210,29,254,246,136,47,95,221,99,38,53,46,253,122,52,45,79,210,95,17,161,71,182,193,0,38,18,68,226,209,100,57,184,12,163,81,172,195,138,
95,195,123,253,34,219,58,183,145,196,138,172,101,19,50,44,49,88,209,202,16,140,251,213,241,141,100,201,206,249,206,200,100,85,226,157,78,38,68,109,157,21,175,102,229,225,240,241,166,245,53,236,200,64,
134,145,199,6,101,6,40,59,223,31,227,117,187,199,215,15,26,39,213,113,25,145,218,175,193,32,166,250,197,74,173,218,22,32,223,138,47,27,69,250,174,175,46,178,135,10,188,176,64,121,149,104,209,208,97,51,
81,242,192,60,6,148,186,186,136,146,213,57,240,192,31,132,201,158,109,71,115,227,76,24,166,56,65,182,241,133,186,42,214,14,233,65,169,69,110,151,152,151,230,166,203,149,79,232,24,36,11,42,250,237,245,
113,12,191,184,201,213,213,113,100,151,159,162,191,2,208,59,153,181,86,132,146,148,110,252,231,238,69,243,141,95,74,181,27,38,199,150,90,87,168,120,160,22,82,96,108,106,128,196,139,181,153,123,133,89,
158,168,87,66,129,5,128,225,241,222,16,9,47,134,110,243,169,1,108,101,237,34,99,174,156,163,68,200,147,126,236,24,233,59,148,183,191,99,2,52,4,216,22,190,158,118,176,95,169,184,43,7,198,31,159,199,183,
180,18,92,87,225,20,159,119,156,222,81,6,161,135,198,57,73,245,61,10,38,244,223,163,53,134,188,85,251,25,144,33,254,94,231,249,134,53,75,74,206,249,225,172,41,219,112,224,27,213,237,115,208,196,50,14,
128,125,118,205,235,127,42,183,2,8,154,207,161,22,34,93,128,247,250,174,120,101,86,119,85,242,93,250,107,0,125,211,102,143,1,52,138,2,160,46,1,220,121,230,154,55,122,139,170,205,248,194,60,231,157,161,
195,241,112,109,104,86,238,92,129,223,194,43,245,45,172,97,34,103,81,221,24,98,164,86,75,153,63,10,3,11,185,223,79,101,198,191,13,154,16,118,244,46,80,231,101,148,107,179,203,233,78,251,239,246,226,9,
183,227,132,212,120,188,103,194,14,253,52,87,121,72,212,143,35,163,206,199,153,16,160,163,67,143,163,122,202,35,25,109,199,99,19,245,55,114,11,36,88,96,244,30,57,241,248,23,250,82,169,142,50,39,141,254,
42,249,175,23,128,71,41,51,12,228,112,152,32,167,59,76,232,112,73,234,54,171,133,178,24,82,1,12,219,224,110,159,137,27,254,76,171,250,153,109,133,55,81,28,245,4,184,255,53,128,222,73,6,151,157,232,213,
180,81,199,124,72,160,172,189,215,3,114,38,94,89,163,50,129,188,22,186,95,235,178,121,5,234,174,176,44,64,247,170,189,137,124,247,0,177,202,195,136,159,19,77,25,147,77,126,36,186,43,190,63,109,251,37,
231,152,188,161,32,71,237,60,75,193,102,221,167,91,217,188,118,151,34,243,24,211,114,182,200,217,28,156,217,34,239,58,198,172,199,129,167,249,194,248,26,135,120,7,175,232,81,224,171,75,27,57,168,116,16,
112,152,234,205,94,90,141,190,247,115,230,23,56,75,105,242,151,223,218,117,162,191,181,81,140,243,239,219,211,146,185,171,193,124,152,57,238,115,228,156,176,142,250,211,219,80,63,201,106,252,56,33,139,
151,242,30,253,122,64,87,115,193,30,17,222,47,144,94,151,169,246,82,228,68,158,75,35,238,4,6,65,167,246,192,249,40,249,196,59,31,33,26,20,101,36,74,49,171,229,220,115,172,102,17,186,118,225,216,69,46,
221,235,173,69,46,88,99,232,138,30,221,124,122,62,1,131,231,220,87,17,5,222,103,144,117,155,209,128,79,180,97,136,239,71,31,31,98,121,88,78,122,245,182,244,104,197,213,43,215,252,44,12,44,183,245,140,
51,241,142,51,165,50,43,27,156,221,130,179,28,249,117,45,115,95,205,69,95,31,74,68,213,48,44,136,215,124,228,178,115,83,146,204,75,236,187,149,160,177,102,231,63,179,25,42,90,109,195,142,180,33,142,211,
195,40,204,93,180,199,119,21,102,135,2,170,243,113,249,149,107,112,31,167,129,244,59,75,129,127,115,41,239,209,175,7,116,158,156,172,156,122,231,156,255,206,194,197,107,102,106,47,206,193,188,123,159,
101,94,18,17,159,173,22,245,173,86,81,40,211,92,16,10,111,113,228,172,199,214,174,164,166,42,236,8,94,189,120,153,178,71,103,95,65,221,192,184,29,186,116,77,253,82,21,242,120,21,130,57,163,58,165,144,
190,136,118,120,171,71,55,166,67,77,169,46,27,71,213,15,183,121,90,88,35,225,255,121,163,43,28,16,69,145,211,193,78,141,50,236,207,101,21,86,206,128,50,0,121,227,110,189,208,92,201,177,65,229,79,64,203,
44,59,99,170,234,156,127,183,24,227,232,84,67,120,165,130,109,207,166,240,252,7,195,196,166,213,171,217,76,148,227,220,219,143,103,137,246,74,49,159,196,141,92,156,254,227,208,97,192,194,131,210,111,10,
21,224,77,213,252,33,154,14,234,138,101,129,107,79,90,179,95,15,232,76,17,246,190,140,212,252,149,161,108,50,36,248,221,53,34,168,16,180,56,181,7,103,33,61,90,120,166,238,202,147,17,86,38,235,146,102,
87,73,153,193,128,168,10,201,53,221,239,172,27,31,0,112,26,255,97,8,84,4,85,166,65,113,21,232,180,27,161,118,181,209,104,2,107,45,99,135,247,48,82,189,14,222,103,3,2,128,173,148,66,102,76,251,120,3,47,
99,240,200,193,96,190,149,234,184,118,0,84,250,179,206,208,233,193,246,96,156,240,92,253,229,99,62,239,109,119,7,73,241,52,114,31,173,229,169,153,179,58,43,71,12,33,17,55,190,16,58,196,137,143,97,193,
155,0,169,77,123,214,186,50,145,136,170,25,217,3,222,132,179,107,107,10,140,127,51,127,162,226,228,39,216,202,184,174,162,12,7,58,19,209,140,240,143,180,110,1,234,170,0,53,134,24,211,21,111,87,75,234,
65,89,69,191,26,208,25,244,210,201,129,231,231,243,146,24,54,116,29,201,120,197,56,31,66,96,46,168,83,80,255,141,247,116,98,35,128,137,250,0,21,240,114,174,212,212,113,2,163,208,190,81,147,251,144,124,
31,188,179,180,242,88,91,189,59,32,167,1,33,4,80,180,99,151,17,117,192,64,224,226,238,101,150,147,116,96,108,12,44,197,14,187,154,215,94,93,232,150,1,115,230,149,240,83,158,21,202,227,234,195,177,210,
33,44,175,210,244,131,63,204,137,201,52,16,95,94,15,67,116,148,65,128,72,197,235,166,241,226,55,79,178,190,136,46,235,158,172,244,54,54,207,216,7,148,89,214,226,102,120,112,174,107,232,100,249,175,38,
105,89,216,156,248,59,193,224,50,235,90,194,73,99,147,20,129,252,52,137,147,145,1,245,21,131,82,228,206,252,87,251,182,31,178,76,52,157,206,190,117,155,141,136,142,6,229,42,211,154,155,87,53,76,94,214,
51,250,213,128,222,73,216,98,61,73,215,64,171,185,50,153,37,53,242,212,70,25,127,3,48,239,5,9,196,155,173,108,36,148,114,237,240,102,49,12,160,228,166,40,6,243,170,199,64,187,189,14,188,246,96,121,93,
202,116,17,1,24,68,49,169,57,20,21,214,149,117,156,44,168,115,186,210,1,87,165,182,168,33,185,232,12,80,216,129,100,112,105,112,189,155,24,252,189,250,105,151,237,254,96,211,87,144,53,51,4,22,216,175,
103,128,116,221,76,117,181,50,12,176,24,28,105,223,111,245,109,163,129,28,170,43,192,210,128,40,1,92,63,48,96,64,250,169,230,157,65,27,157,52,59,71,210,14,203,244,254,189,231,255,171,213,61,103,128,151,
114,84,35,45,88,172,78,216,201,133,73,68,197,15,216,121,41,97,50,149,166,57,143,171,152,177,30,107,47,168,198,102,109,140,74,107,38,97,96,222,8,18,54,8,251,161,204,174,128,98,87,70,84,50,215,135,56,244,
40,215,84,165,212,59,222,139,204,247,93,250,43,0,189,20,111,140,220,160,208,243,243,82,250,36,92,134,83,1,22,49,217,89,195,217,100,32,168,244,117,84,175,5,102,48,24,142,29,224,170,14,114,33,180,190,192,
7,89,8,187,89,6,168,116,69,85,139,36,64,139,119,1,60,114,44,106,241,62,73,239,154,17,75,128,129,3,234,75,246,113,253,58,55,96,216,141,5,200,99,162,249,62,87,8,18,197,31,179,1,169,240,95,223,199,90,236,
80,219,31,170,169,97,57,26,147,128,184,206,212,43,47,213,138,175,159,39,255,22,134,210,45,55,86,60,198,112,221,214,157,32,247,154,51,111,134,187,174,226,135,105,156,145,14,22,175,113,206,168,158,89,106,
176,110,87,155,12,247,159,245,239,140,118,94,66,150,84,246,128,239,69,157,19,237,226,28,197,18,53,59,249,220,30,201,196,54,46,34,83,189,218,23,209,150,89,148,141,70,48,5,31,22,227,1,32,197,238,143,180,
80,39,195,13,215,109,150,202,236,135,106,122,135,126,45,160,115,71,215,64,186,128,28,70,83,106,75,15,168,231,153,2,48,205,92,173,108,14,83,49,52,194,43,109,8,192,60,54,220,24,29,78,86,165,131,123,212,
94,175,29,14,237,30,204,247,146,209,51,208,17,73,183,216,123,190,54,151,78,163,35,44,115,7,226,6,215,248,81,76,7,106,51,212,213,247,36,3,65,195,190,236,45,198,93,128,222,29,209,93,249,118,101,168,65,153,
172,237,8,87,24,83,34,35,246,58,158,103,54,195,2,144,143,78,64,37,125,175,109,56,210,120,29,191,127,16,173,39,174,135,117,21,169,117,192,27,33,207,72,1,188,214,40,182,57,199,109,245,53,86,58,200,21,183,
144,114,119,163,79,66,179,5,24,84,113,14,175,107,145,141,138,157,171,254,219,13,22,216,165,163,213,197,66,91,226,248,111,194,102,102,7,219,133,49,181,200,183,14,94,109,199,239,170,203,242,201,189,136,
126,45,160,151,162,177,140,85,126,220,135,8,221,123,77,196,196,24,14,61,205,238,87,216,250,245,192,237,26,77,116,32,7,208,85,253,194,246,205,129,2,117,146,44,226,21,150,235,58,198,96,167,59,190,80,178,
61,21,228,5,22,237,146,110,88,182,179,103,79,25,228,31,38,169,78,195,164,192,66,141,49,235,211,89,143,226,178,167,139,242,111,161,59,78,202,157,177,226,249,179,115,168,191,227,48,214,53,60,198,40,165,
77,160,167,58,242,109,134,164,108,169,211,25,232,106,25,246,173,129,243,144,98,138,114,171,242,80,195,172,103,85,133,88,58,151,129,83,138,81,27,238,106,41,238,69,245,216,152,142,113,203,128,157,237,122,
171,211,10,135,160,206,78,132,148,185,95,139,4,20,252,34,163,82,139,219,112,221,156,145,139,41,91,35,59,78,218,175,254,113,22,101,136,149,238,242,247,120,13,128,247,74,98,36,227,65,244,133,3,22,6,204,
57,194,88,121,163,142,241,42,212,38,133,169,37,146,171,218,155,188,138,1,48,199,174,227,132,87,75,238,142,230,136,151,185,13,139,17,187,137,99,50,186,78,11,106,238,138,198,246,95,199,43,59,150,1,78,210,
155,7,105,213,66,77,254,241,125,230,169,202,102,109,103,101,119,100,253,126,202,122,20,223,7,219,48,86,101,29,255,27,250,93,85,141,220,200,26,125,110,22,176,76,57,88,27,67,54,161,227,154,148,94,196,119,
43,242,86,232,214,50,179,88,173,96,97,185,228,142,82,203,203,222,212,58,229,211,128,59,171,76,118,182,13,222,79,227,24,4,118,62,58,11,11,119,27,25,8,41,127,75,29,30,245,246,199,7,202,198,241,241,166,100,
165,148,95,26,161,103,248,198,101,70,74,149,119,68,245,191,73,180,155,69,230,225,66,102,161,0,196,70,116,78,13,70,14,115,250,251,220,166,29,255,26,154,52,223,24,50,176,23,212,104,40,106,166,64,123,75,
128,159,199,99,90,188,82,25,92,216,150,225,235,205,209,90,106,105,85,207,184,130,161,204,145,222,145,125,143,158,0,185,187,60,86,238,136,186,183,2,245,172,108,116,109,135,92,190,140,142,185,141,157,88,
228,121,82,210,205,123,21,238,85,177,62,172,87,60,214,47,129,75,95,11,165,88,224,194,0,216,204,64,180,176,195,33,98,201,93,204,237,74,53,230,121,85,49,50,161,233,224,206,45,68,179,217,76,24,16,86,53,242,
228,171,24,63,238,21,182,241,186,208,224,90,209,147,90,193,38,9,222,44,144,194,27,211,125,161,222,173,203,223,111,93,81,187,201,20,151,120,106,163,89,92,173,142,95,9,232,81,231,120,112,94,10,249,66,146,
9,32,23,64,32,90,38,160,190,109,94,2,231,96,120,139,195,0,160,97,72,20,149,13,70,232,178,85,119,219,117,197,109,239,246,13,118,5,236,202,170,135,35,55,232,232,132,32,96,143,166,96,124,204,235,89,213,222,
243,59,175,235,184,190,150,98,71,82,35,49,29,103,203,234,7,208,247,225,221,27,116,226,124,68,215,20,69,142,193,18,245,82,58,149,182,223,233,96,111,50,81,0,50,227,17,80,157,31,55,25,146,130,26,178,207,
141,143,1,6,16,25,68,206,122,170,28,180,0,220,105,109,246,95,90,27,215,16,228,175,206,25,59,75,252,24,239,204,93,254,69,56,188,221,206,52,192,86,125,9,205,31,42,82,12,209,97,200,132,89,250,78,2,220,103,
166,192,238,122,47,165,76,80,23,175,179,41,58,177,68,191,50,229,222,199,79,123,210,47,50,14,217,229,25,141,221,237,232,17,40,87,168,120,165,236,87,67,92,69,193,136,215,44,152,71,210,174,77,213,152,241,
6,173,240,90,111,33,31,208,108,65,124,133,174,131,185,231,26,115,102,193,199,152,183,50,210,139,99,158,184,115,134,229,252,237,105,222,155,176,104,249,128,120,164,107,112,172,202,63,208,228,170,92,38,
18,27,14,165,244,138,135,186,199,3,26,221,83,237,43,185,87,125,250,40,69,29,81,215,162,1,120,191,229,236,90,191,99,159,212,115,74,255,85,217,56,191,215,127,198,95,0,57,204,224,246,186,166,181,101,247,
242,49,24,169,111,228,141,246,66,118,190,119,96,222,140,86,156,187,219,141,132,42,124,29,171,38,35,91,252,167,84,0,212,69,69,193,59,26,29,141,9,158,95,191,86,175,11,161,24,224,153,101,162,86,58,207,232,
87,70,232,165,120,236,236,215,198,223,107,70,221,175,225,244,18,141,43,204,227,8,116,165,2,41,160,234,222,236,117,44,95,187,10,218,112,239,85,134,149,226,95,96,155,253,168,246,189,119,2,4,245,20,66,75,
170,201,25,32,184,46,154,131,177,213,207,33,213,116,220,167,51,147,123,196,150,5,86,129,226,137,69,136,92,112,30,64,149,214,81,247,120,32,21,15,212,51,230,133,127,177,124,70,110,178,111,156,227,245,136,
63,31,223,166,168,225,71,152,167,173,249,169,168,174,107,47,27,214,10,110,212,234,224,238,222,72,129,202,104,71,48,74,93,75,53,90,240,119,251,122,22,186,214,184,112,45,5,115,248,145,218,84,188,59,223,
251,74,215,66,127,203,37,178,251,40,90,133,10,46,90,199,174,86,203,195,243,159,119,118,181,98,100,54,200,89,224,79,140,247,231,232,125,231,187,50,29,202,217,200,180,244,87,1,250,142,45,232,247,102,222,
200,167,60,92,97,50,100,188,184,154,107,61,16,142,149,164,205,186,60,1,17,8,59,94,14,237,166,28,177,173,157,87,178,5,29,247,104,13,124,234,245,144,33,54,24,157,138,5,2,238,103,48,251,12,220,167,118,123,
5,206,202,27,81,101,201,208,54,188,134,50,68,43,56,83,114,165,35,141,110,71,242,71,206,44,83,228,12,70,78,3,215,139,64,126,37,83,196,23,175,43,121,50,71,135,219,151,180,51,40,76,247,157,0,238,46,251,90,
211,144,64,201,218,230,61,248,120,185,243,207,132,56,145,45,152,67,228,7,157,109,76,67,97,185,19,88,161,21,174,37,91,112,192,30,13,35,2,36,21,227,42,147,119,189,30,87,52,219,239,8,189,211,105,180,55,205,
25,117,202,165,248,65,7,221,7,104,220,123,147,190,47,59,38,160,211,175,74,185,227,248,167,118,132,223,45,190,6,175,117,77,176,171,70,187,125,64,217,128,142,186,192,139,159,15,103,246,36,156,74,105,91,
54,12,77,173,35,202,31,59,199,185,191,69,201,148,27,179,122,253,71,189,241,215,204,65,153,158,231,213,176,122,125,236,140,42,252,123,131,5,11,193,44,213,121,41,75,253,40,53,150,204,189,245,3,93,233,99,
234,248,211,185,25,251,133,28,40,72,133,118,176,251,227,253,95,82,130,10,199,179,97,226,143,6,123,133,97,104,141,148,65,85,192,128,134,123,197,43,48,154,174,189,168,237,59,248,237,136,25,222,103,172,84,
209,115,197,100,125,117,115,168,140,100,215,131,142,177,230,141,19,169,187,179,69,222,192,59,228,112,40,79,114,96,135,176,193,160,191,253,138,249,129,44,118,40,129,119,54,202,178,165,90,237,90,12,132,
201,45,205,98,62,213,92,208,245,185,33,18,126,24,172,120,88,194,107,204,146,150,138,161,95,21,161,119,90,5,8,165,20,153,106,175,209,104,4,110,208,212,167,68,25,5,143,250,106,246,82,160,106,110,171,121,
14,211,236,137,108,69,93,22,207,232,77,71,174,74,222,14,38,6,168,206,254,68,98,213,82,174,44,27,182,63,121,221,183,151,155,53,163,121,116,3,93,112,82,195,102,70,177,102,235,140,113,168,246,184,180,226,
119,10,131,17,141,112,107,136,123,253,103,196,94,164,55,166,11,181,148,190,235,159,167,109,92,135,193,96,144,48,70,254,106,117,94,176,111,19,188,230,149,246,40,215,50,203,52,207,183,95,192,126,155,161,
225,185,242,202,232,143,85,189,104,93,240,61,197,191,22,223,190,18,86,213,93,57,49,78,224,104,65,111,51,146,92,249,202,107,108,155,213,75,56,198,53,204,155,221,70,10,63,20,201,91,217,74,183,93,224,64,
99,87,107,185,126,235,221,90,7,221,100,125,109,28,84,78,163,88,171,42,80,73,44,154,182,221,253,47,84,208,9,131,10,43,213,242,52,250,221,137,231,226,186,208,10,100,142,251,2,130,177,89,153,178,136,126,
13,160,179,81,204,58,104,63,237,106,185,240,183,118,21,147,173,229,198,133,128,71,43,104,48,99,219,99,174,51,218,27,190,213,53,89,125,161,23,176,248,155,175,18,82,19,52,128,163,141,111,5,192,28,128,203,
98,163,255,116,109,153,85,54,97,249,0,246,177,49,5,208,124,190,178,161,100,200,199,174,226,58,135,191,175,197,249,252,114,126,93,111,142,109,19,232,54,69,54,198,194,53,204,240,139,229,248,154,30,43,253,
9,149,21,217,58,236,6,84,42,51,13,101,77,222,134,16,6,149,203,214,238,128,12,55,194,125,78,183,148,190,134,219,188,150,89,106,86,192,208,171,128,235,74,104,165,75,153,1,58,194,230,172,3,170,241,125,142,
99,254,72,31,199,26,86,227,82,38,168,163,158,71,45,181,241,95,186,83,161,154,48,84,13,111,214,110,72,108,168,100,205,95,87,134,54,111,98,103,217,105,163,98,120,121,250,25,160,75,232,199,22,24,131,13,218,
250,0,13,201,84,71,91,213,94,188,26,239,187,222,149,195,163,52,38,50,105,191,6,208,121,62,51,208,24,216,216,83,26,151,54,187,119,192,3,64,94,17,234,25,242,24,6,103,8,84,237,61,213,156,178,193,102,182,
44,15,101,242,157,135,77,141,69,96,110,35,58,95,30,65,172,148,50,119,218,14,80,175,166,73,13,62,17,109,12,56,23,201,180,187,95,139,148,129,120,214,82,108,244,98,170,51,140,245,126,51,220,177,136,10,166,
51,170,7,101,191,134,78,100,81,70,231,172,45,28,103,114,10,25,253,179,54,204,13,208,234,254,188,249,4,116,51,199,48,107,95,1,230,110,125,199,108,37,212,110,109,56,27,186,251,114,156,120,35,157,217,111,
177,28,47,187,248,148,31,149,86,67,143,25,106,168,37,141,194,180,222,13,44,4,235,153,219,86,114,140,248,250,98,155,125,153,239,196,103,203,250,140,254,149,129,31,12,60,155,142,250,119,240,14,233,215,0,
58,146,26,104,211,73,64,160,25,145,95,37,34,47,91,240,151,55,249,114,103,219,163,183,1,128,54,145,29,249,14,67,73,217,157,188,250,161,196,156,125,157,0,226,188,238,90,236,35,6,41,252,188,57,156,67,225,
250,97,58,13,151,94,45,225,232,36,109,222,44,30,44,100,89,30,188,111,244,137,140,135,60,206,109,245,220,75,223,133,233,125,218,41,203,58,112,140,17,11,158,239,150,187,7,230,145,193,125,151,108,126,129,
49,164,140,118,155,137,254,11,148,27,246,62,178,21,43,15,134,209,37,177,53,166,220,146,225,86,225,160,118,183,21,214,125,117,203,168,205,53,211,199,192,61,167,39,238,149,110,244,101,214,108,49,233,232,
188,214,40,122,24,40,51,216,155,10,178,162,141,66,155,217,252,208,43,158,125,103,192,255,12,33,168,2,56,250,241,2,136,126,171,77,52,136,52,250,116,82,184,31,0,0,32,0,73,68,65,84,61,247,116,241,55,222,
149,233,83,240,192,77,181,242,203,0,61,50,108,60,183,165,148,130,207,206,167,39,4,21,240,111,208,134,42,16,173,99,149,197,103,16,23,107,193,42,41,254,133,247,19,37,118,97,142,75,232,84,21,50,65,109,115,
36,203,217,117,111,106,156,25,221,7,129,156,174,191,158,203,21,187,144,97,21,178,227,243,20,157,128,234,29,0,86,246,69,29,255,4,202,12,40,150,137,12,172,138,74,62,209,199,234,142,181,17,64,159,15,13,118,
119,6,97,143,185,151,147,45,47,240,76,191,44,118,132,215,187,11,36,227,80,109,71,75,51,89,184,82,138,11,6,204,151,30,179,112,20,100,50,103,200,15,198,200,218,90,114,174,204,85,8,110,240,27,241,66,129,
212,23,224,164,29,165,62,99,61,51,60,65,83,212,149,227,169,171,151,151,201,143,136,27,1,123,102,189,248,222,175,217,229,174,58,199,222,202,107,225,204,15,227,227,64,153,231,230,29,253,69,27,43,195,132,
60,240,227,41,182,144,127,202,228,203,4,231,98,246,28,110,227,59,97,56,8,112,205,47,123,237,219,245,5,202,209,200,76,71,215,241,55,242,14,61,177,96,73,255,50,166,24,29,224,226,234,11,177,155,230,113,207,
238,0,206,153,199,146,175,142,79,76,168,143,59,162,1,152,29,213,223,198,175,139,127,101,241,215,30,55,113,77,181,211,194,50,179,127,241,120,212,81,134,251,18,213,203,34,171,239,32,212,168,113,94,231,157,
81,238,2,187,90,72,103,59,0,178,213,199,99,53,24,219,157,142,116,33,46,205,228,244,173,150,249,171,132,101,218,130,252,55,70,172,78,56,9,149,218,99,255,71,161,157,53,59,12,128,181,125,253,46,85,87,113,
207,171,234,101,41,42,218,20,81,88,216,212,41,126,117,197,67,162,121,158,206,162,238,239,203,121,1,29,83,247,137,237,175,138,208,217,177,229,49,71,194,111,231,246,243,149,43,181,109,168,9,64,225,117,208,
151,243,144,240,52,139,61,240,232,163,84,123,53,12,172,12,88,65,192,182,94,34,106,145,153,118,199,111,25,57,89,52,109,90,161,104,2,47,205,28,143,46,168,82,133,119,112,231,116,198,109,238,72,195,234,16,
233,128,141,36,240,10,41,195,22,69,229,212,245,83,158,209,223,29,254,59,114,41,190,165,196,253,143,248,171,113,211,112,222,76,185,125,119,42,83,179,247,8,141,172,237,51,46,71,92,144,233,55,1,148,96,74,
232,204,176,4,242,237,244,214,154,30,92,235,109,102,22,48,138,5,128,83,209,250,76,194,139,148,254,142,68,221,175,32,123,102,135,196,190,105,161,10,174,218,178,118,206,134,231,195,254,16,127,254,184,205,
4,245,69,175,188,55,241,26,167,102,129,189,81,102,153,163,117,36,133,17,191,38,66,143,192,220,156,83,62,200,252,92,42,46,8,2,64,77,12,39,190,193,241,14,39,217,184,136,173,82,144,210,117,146,42,165,0,154,
52,224,165,206,1,97,180,3,117,95,11,182,26,14,57,167,117,59,102,204,89,185,105,76,90,255,123,13,238,116,146,252,123,177,119,41,131,144,46,108,115,189,103,64,218,1,195,255,10,221,237,191,26,211,104,188,
163,50,124,239,69,173,96,134,225,158,140,167,53,244,250,171,195,128,191,206,64,139,5,226,237,238,182,78,186,174,101,144,13,78,66,155,51,215,155,103,131,246,42,11,170,173,5,17,18,160,163,226,178,24,185,
77,25,48,23,20,193,183,113,176,136,239,35,203,11,215,85,225,176,201,42,142,138,28,63,174,38,127,153,141,142,187,56,222,153,176,44,127,5,160,103,131,143,145,177,122,37,77,166,218,55,93,116,167,8,2,5,134,
30,86,91,227,160,25,112,10,108,79,157,113,96,199,164,153,187,194,152,16,86,86,58,86,218,49,76,206,46,5,43,89,217,144,197,128,188,128,27,147,229,185,20,217,93,127,207,10,164,193,58,55,34,239,211,73,108,
248,126,28,249,223,162,149,179,213,215,195,142,211,48,233,104,13,167,247,121,49,212,169,239,35,240,232,120,70,168,193,201,9,37,20,174,229,16,187,207,215,83,43,211,161,230,251,227,91,242,204,0,80,44,11,
110,20,208,142,155,61,19,64,246,208,227,64,45,38,26,25,209,175,149,133,219,98,211,135,111,92,140,13,206,149,228,66,167,35,236,149,37,215,127,149,81,224,34,34,40,237,197,217,172,114,191,126,5,160,243,56,
226,121,52,182,248,187,231,225,38,142,197,196,200,177,239,60,25,16,23,236,213,179,96,229,98,197,34,81,250,74,216,35,37,10,42,118,248,12,172,150,215,71,31,178,246,37,231,0,204,21,169,133,112,173,197,215,
2,68,103,232,125,96,181,99,145,27,237,175,163,147,182,243,249,56,189,190,219,250,167,93,154,73,187,80,249,142,99,179,235,86,71,102,50,115,18,158,38,0,250,254,95,88,227,108,127,164,40,74,116,41,246,153,
19,59,147,190,162,92,163,127,253,26,1,41,175,105,204,12,26,177,192,184,55,83,200,182,61,249,82,116,133,142,15,137,187,202,124,116,231,224,21,28,90,182,12,64,190,39,37,185,226,26,178,99,213,94,109,207,
159,87,189,110,209,135,102,86,252,107,249,37,128,222,73,57,161,175,147,26,122,53,195,211,227,127,225,168,111,44,90,94,52,77,223,118,178,18,152,43,208,137,29,21,250,161,21,200,123,89,113,132,242,167,253,
157,96,26,255,148,2,202,184,48,0,78,70,50,70,0,224,214,132,217,86,162,214,215,180,99,172,162,16,231,57,98,123,170,32,67,185,25,238,222,229,244,96,16,210,165,13,97,8,234,24,254,149,228,169,116,76,66,113,
155,200,11,235,152,126,80,187,49,237,102,129,222,1,209,119,64,184,47,26,53,83,126,230,78,180,39,26,83,15,90,180,193,19,39,12,65,20,69,98,96,221,22,76,175,23,223,219,142,212,94,57,248,245,54,245,90,104,
129,30,153,43,134,87,11,34,97,61,74,227,111,180,27,78,148,102,226,215,207,234,85,95,190,178,7,211,113,91,191,106,177,31,251,169,116,179,148,137,99,156,117,38,86,40,249,143,7,244,200,48,26,93,141,126,128,
133,39,35,75,89,101,50,224,98,1,214,99,39,184,120,214,225,228,16,139,171,218,255,4,170,129,207,144,125,229,83,117,26,187,218,75,41,106,13,4,181,66,233,148,125,171,120,29,21,183,118,35,165,160,108,77,126,
201,41,56,203,106,175,194,27,77,89,233,72,63,213,56,184,241,238,54,186,130,253,170,83,218,177,37,164,217,236,10,59,168,120,222,72,216,97,44,217,128,80,161,177,52,48,101,217,202,120,127,219,216,22,94,15,
84,6,199,5,101,118,142,70,213,117,120,183,248,248,27,139,255,33,82,156,201,170,111,30,43,92,40,65,141,72,134,87,185,254,209,156,43,85,95,161,132,202,192,117,219,179,179,68,68,155,209,253,46,139,225,75,
29,27,58,155,180,225,70,179,82,141,46,191,88,187,186,75,85,15,118,157,199,145,60,83,252,102,152,119,145,156,93,111,65,251,73,43,78,14,196,148,190,246,97,51,92,19,233,101,142,214,177,165,31,15,232,220,
29,181,156,76,7,241,99,50,10,192,51,155,46,72,22,107,74,89,237,139,82,102,90,185,253,96,129,105,123,251,242,29,199,119,128,89,209,138,80,52,234,0,238,176,157,78,16,74,204,125,57,32,209,31,22,117,62,27,
231,22,50,243,21,17,15,92,116,188,170,23,148,32,91,210,23,179,169,205,64,19,117,75,204,111,191,238,140,58,34,29,129,158,187,239,70,114,106,93,165,243,222,129,214,230,235,86,99,158,186,215,80,224,43,109,
245,218,95,80,95,25,27,52,102,12,20,198,71,197,185,23,125,55,131,0,145,207,80,157,46,46,24,188,114,93,199,157,213,168,251,52,100,118,52,170,184,6,60,23,102,247,128,34,71,209,30,55,115,221,182,186,147,
78,157,247,95,35,134,154,128,243,52,204,94,163,177,140,252,144,144,226,245,98,123,118,173,235,168,120,151,71,178,242,54,1,117,97,200,141,19,218,59,90,212,168,7,198,189,230,183,92,251,96,173,120,159,64,
227,131,170,186,182,17,104,9,99,223,216,27,31,215,141,171,145,210,175,120,109,45,3,46,188,54,63,243,26,48,136,152,56,142,98,96,89,41,84,180,173,216,15,75,57,11,180,82,224,195,13,193,212,99,189,209,110,
157,31,120,112,109,11,181,98,224,184,234,142,31,216,128,90,177,2,46,198,2,120,71,245,163,192,112,205,54,67,133,236,190,230,173,106,195,208,142,155,149,110,154,232,184,215,172,13,248,244,115,252,24,174,
111,217,204,25,156,224,115,51,238,147,87,17,152,49,57,176,202,68,137,186,206,16,121,211,90,225,235,34,30,130,106,113,142,76,233,195,118,61,49,29,136,130,38,215,102,211,108,255,166,151,220,51,19,221,192,
178,102,140,15,10,193,48,184,177,170,197,126,42,20,111,3,203,145,9,145,125,81,87,179,243,222,15,85,174,137,243,62,98,123,20,189,38,103,65,30,154,199,1,136,150,141,238,40,21,142,37,156,62,3,188,90,10,209,
107,195,174,246,230,218,172,155,189,230,102,91,65,6,118,173,245,49,48,87,212,15,168,67,32,182,194,147,185,6,166,83,25,237,199,226,81,74,160,98,94,36,92,152,182,165,132,145,57,99,28,143,215,143,5,116,53,
177,187,230,123,188,199,87,54,82,241,217,13,28,248,235,188,131,49,71,18,161,186,71,104,6,171,206,155,189,82,228,47,95,8,48,207,228,54,58,33,228,205,199,51,113,52,2,158,51,234,154,159,69,172,37,111,7,89,
52,211,64,102,226,214,154,208,231,199,112,233,246,0,28,37,253,140,172,223,236,229,251,160,219,1,181,0,130,209,49,210,198,72,239,61,247,112,148,253,56,138,111,99,159,175,118,65,116,137,248,174,129,23,144,
99,173,13,77,58,11,32,85,159,139,107,2,106,181,78,145,217,252,169,166,131,78,107,41,198,161,27,235,167,140,38,76,70,110,13,190,130,153,92,9,122,140,118,90,80,181,150,210,128,61,51,235,131,129,94,54,31,
223,68,48,197,223,54,111,84,188,3,57,155,165,121,220,127,95,2,202,71,254,82,41,18,97,221,252,112,25,7,160,186,238,60,246,51,110,190,145,225,48,0,57,168,223,101,35,57,184,113,104,206,254,22,201,188,198,
77,163,132,63,54,229,30,56,86,238,250,184,15,169,246,113,124,33,240,248,82,211,174,27,124,81,197,17,131,195,86,138,249,146,26,46,85,252,27,45,211,42,180,193,148,69,111,193,234,199,26,204,251,21,229,199,
116,3,88,178,148,80,0,193,184,158,201,13,29,207,104,75,231,95,232,40,38,255,197,50,110,240,156,48,157,107,56,53,48,40,104,173,113,112,77,84,201,131,174,199,38,87,171,248,213,157,119,233,254,8,125,154,
238,75,230,127,127,171,4,70,177,207,197,165,117,144,147,231,47,67,54,40,223,96,46,199,254,5,133,48,117,234,117,87,11,92,87,102,157,135,203,101,119,28,184,127,53,248,151,215,82,228,86,35,172,213,166,88,
179,255,233,154,141,156,16,95,45,181,50,129,153,241,82,95,50,161,45,103,70,129,147,56,55,240,209,141,96,224,44,222,96,120,81,141,158,184,61,10,112,184,222,88,28,52,140,227,94,203,208,95,245,203,161,222,
197,152,211,248,99,1,93,17,101,40,70,10,162,152,197,11,3,208,23,100,132,25,97,43,84,236,106,152,163,61,111,122,132,174,12,15,160,80,250,47,213,104,226,209,210,95,5,98,150,94,233,187,108,25,184,160,60,
205,94,66,140,83,213,138,114,19,78,35,108,165,166,204,203,123,227,99,163,21,115,230,40,13,116,193,62,138,240,158,222,106,81,6,195,27,210,167,129,247,171,128,253,157,118,118,235,218,85,49,204,169,41,227,
181,96,213,234,212,235,234,20,154,51,43,221,144,78,30,232,192,99,81,101,215,165,102,47,211,35,39,235,134,121,237,184,205,179,191,209,110,150,209,52,47,67,185,238,19,160,134,163,110,159,213,166,204,134,
21,12,40,10,71,1,129,142,229,45,133,38,199,223,78,132,180,252,131,66,149,202,117,255,130,212,168,148,250,2,212,163,173,202,2,212,26,153,164,104,211,53,138,208,255,253,88,64,71,97,163,251,124,220,55,95,
73,138,0,201,115,209,141,148,23,32,219,212,91,2,144,44,160,1,145,133,17,26,31,79,238,178,71,41,72,193,71,120,216,106,172,114,18,165,82,38,9,210,167,109,168,25,214,209,152,53,186,30,184,75,177,11,179,213,
126,78,136,222,249,49,210,3,215,175,6,232,119,249,125,42,3,240,100,59,187,117,119,52,233,79,114,79,213,22,90,67,69,252,218,239,186,211,10,62,2,152,247,91,133,8,23,235,212,34,1,98,127,133,100,86,15,203,
204,198,69,8,18,144,77,69,132,208,206,203,66,100,42,109,65,127,181,87,124,1,77,247,128,112,129,210,63,98,19,69,160,78,142,142,174,181,233,178,253,24,189,126,74,126,178,104,150,7,143,89,153,153,190,182,
163,215,27,243,66,76,140,236,66,153,212,168,247,107,63,22,208,51,66,149,199,45,254,134,88,97,74,57,183,72,203,242,9,68,139,186,100,19,10,127,152,114,62,187,5,229,171,109,128,178,246,211,196,165,102,160,
171,244,218,177,1,73,156,32,49,142,181,84,136,140,119,225,72,149,227,137,9,12,4,92,30,135,206,73,154,133,57,222,126,253,55,176,28,63,128,190,10,144,127,3,169,177,200,92,190,251,99,183,112,170,225,216,
186,121,254,145,82,83,155,25,250,250,232,198,10,151,52,181,148,237,23,88,19,167,14,162,186,177,13,232,235,25,215,88,152,134,146,134,142,61,0,224,11,45,143,99,224,53,218,117,160,166,121,226,105,227,13,
127,148,173,245,71,36,31,182,77,73,201,121,105,254,158,197,171,205,162,9,120,52,248,175,106,215,245,39,152,182,169,95,26,103,208,162,253,248,8,189,20,107,238,209,185,146,49,28,63,59,191,42,152,73,175,
230,79,113,55,174,22,248,126,159,196,1,59,23,162,188,254,135,187,157,5,127,234,4,171,124,81,101,75,121,185,127,53,219,247,89,237,33,53,222,140,114,173,76,4,105,52,87,112,199,184,136,117,49,205,140,235,
4,0,94,10,56,12,112,157,230,161,20,120,86,106,188,37,140,60,234,184,114,10,230,63,15,250,255,209,215,145,133,241,82,216,238,76,164,230,205,120,93,175,93,228,92,167,154,26,93,38,19,165,55,190,122,9,172,
28,113,31,86,28,26,172,103,195,13,141,71,100,120,149,39,147,146,117,184,91,41,114,175,82,196,179,194,65,29,175,58,0,66,52,95,62,116,250,8,132,189,125,153,60,46,104,53,78,137,217,72,137,114,201,206,28,
90,147,193,251,114,15,232,1,126,228,212,254,56,64,71,15,41,27,18,249,177,21,193,160,226,87,250,47,242,11,51,57,191,38,40,250,108,42,226,53,122,75,200,202,126,70,48,3,232,139,195,80,74,5,67,1,48,33,30,
95,26,183,255,236,238,226,201,3,207,62,67,45,165,191,44,162,54,42,233,43,106,73,249,148,137,122,120,209,68,245,87,42,93,205,153,88,244,111,66,242,191,200,249,31,33,161,94,121,163,141,143,113,184,34,92,
199,253,62,221,134,117,231,245,42,134,143,245,44,75,230,29,33,33,86,90,59,178,182,55,240,94,121,214,100,36,82,124,113,84,55,252,27,152,59,29,39,72,238,115,72,122,158,179,129,108,211,136,217,163,171,54,
218,15,132,135,32,233,105,125,153,89,31,157,0,1,27,130,211,130,196,52,26,95,161,218,159,29,198,111,236,247,170,63,14,208,153,194,249,29,95,155,0,3,223,119,59,121,188,72,249,211,116,81,59,190,89,171,44,
94,186,58,139,4,231,67,5,109,67,181,22,126,111,116,75,49,146,126,234,167,252,194,181,100,129,92,208,94,7,183,213,62,121,61,107,156,130,154,75,173,94,139,164,71,38,214,76,85,24,192,90,120,190,126,27,85,
214,89,89,6,255,209,254,9,186,142,247,237,113,63,231,251,188,102,168,225,98,121,201,103,120,65,155,70,199,137,215,127,145,86,143,163,94,106,109,215,202,120,37,10,192,253,122,234,150,164,230,117,220,173,
203,110,32,230,37,187,153,55,210,65,211,76,8,234,129,109,236,252,241,130,11,219,185,186,231,55,116,176,117,115,5,3,85,57,63,130,78,75,211,237,110,57,19,214,62,143,122,140,57,21,218,186,46,44,179,132,110,
44,1,151,174,12,52,47,53,118,56,126,212,123,232,10,83,170,56,238,231,253,147,175,246,25,3,24,170,150,232,219,224,131,51,65,31,65,161,73,239,10,152,45,35,98,110,189,184,113,153,167,182,247,188,93,255,191,
222,169,21,15,108,156,124,202,225,168,204,59,34,113,143,16,117,64,111,141,220,151,140,16,184,23,174,189,91,196,125,81,174,114,53,223,76,21,71,165,129,159,201,10,120,45,111,248,76,177,121,181,234,122,143,
186,25,237,2,243,39,242,146,166,132,65,85,177,114,28,216,182,41,39,56,145,86,95,51,231,195,166,154,103,186,210,58,21,200,9,35,139,249,222,56,174,185,102,50,97,242,99,47,193,245,223,65,194,243,225,124,
33,234,206,245,87,217,16,107,131,244,252,104,180,58,25,188,249,69,137,82,202,124,143,93,9,18,82,214,230,117,15,186,203,102,143,231,91,127,188,9,214,96,96,110,164,107,81,187,189,133,251,141,116,117,94,
134,246,161,153,102,217,105,154,216,178,28,127,146,191,103,51,240,83,176,21,23,30,245,241,71,69,232,172,126,133,206,167,109,84,211,3,96,67,10,177,167,116,175,33,231,104,195,4,252,230,90,50,61,108,203,
71,84,111,141,177,175,132,101,212,206,246,184,43,38,98,42,201,7,13,20,167,112,161,90,121,114,158,231,80,95,75,177,73,149,107,156,94,11,5,17,30,103,225,123,193,124,70,174,133,54,206,118,48,183,99,198,147,
104,193,17,61,240,126,41,235,39,154,151,203,180,57,116,107,3,176,39,64,170,247,49,42,29,87,168,27,3,14,183,53,29,131,23,31,219,93,152,191,218,199,174,59,9,88,170,27,171,62,174,117,240,154,89,6,72,105,
95,3,143,25,136,56,147,160,29,140,159,67,85,252,235,215,219,144,191,21,28,159,89,172,175,161,184,107,161,197,160,182,178,186,215,124,244,203,50,186,138,216,196,33,149,137,93,217,6,205,248,38,93,242,85,
221,159,158,163,185,57,195,3,92,159,164,23,117,92,118,236,102,77,187,79,107,20,194,230,154,173,65,201,242,164,51,243,184,231,113,221,112,211,243,95,108,246,71,1,186,2,241,82,132,73,17,95,206,105,165,239,
99,110,86,25,142,90,173,78,169,252,158,58,63,136,230,126,102,135,139,253,53,102,75,83,96,222,31,48,189,112,170,201,11,160,226,225,10,16,2,65,92,127,81,41,163,25,194,213,136,199,83,168,74,227,134,11,117,
26,169,201,63,78,47,238,92,125,159,134,45,168,22,88,108,171,166,55,9,98,68,206,144,183,36,30,152,148,17,152,19,231,1,152,140,176,202,135,203,246,119,203,240,61,252,135,70,75,149,83,124,33,246,9,199,175,
153,191,147,27,135,97,49,192,179,35,49,202,124,74,129,30,33,92,129,248,234,28,244,158,76,22,46,35,222,24,26,162,206,137,68,12,128,216,176,196,171,120,128,173,155,240,98,60,29,251,50,65,94,218,224,106,
175,141,75,32,132,136,210,157,52,108,67,177,188,103,49,112,102,198,234,80,150,213,127,52,200,239,51,197,227,206,95,243,155,223,233,199,182,166,35,207,214,246,71,1,58,82,163,191,165,88,225,21,153,221,237,
221,191,89,230,231,230,44,140,146,52,235,168,43,168,70,184,60,76,149,30,157,11,13,210,17,61,230,89,34,121,73,171,3,190,231,78,140,190,93,151,163,141,188,216,135,180,215,42,94,102,106,120,136,22,65,129,
84,90,253,152,94,198,15,35,64,4,110,126,44,146,71,184,235,93,5,119,145,227,9,196,249,42,212,146,38,115,163,60,214,139,156,19,252,107,129,105,26,216,200,252,94,229,218,140,114,219,101,57,39,80,150,98,162,
249,226,157,128,167,104,159,93,163,51,155,182,237,0,223,1,109,62,246,152,127,227,25,97,7,124,103,238,208,250,145,51,180,149,64,203,218,184,250,132,246,224,18,107,103,188,108,153,110,168,103,76,174,39,
113,160,230,148,0,131,193,166,36,182,207,194,57,251,157,187,237,18,45,194,126,224,51,115,249,102,118,243,209,251,143,2,244,19,227,28,125,163,157,163,201,181,33,157,131,60,60,61,84,42,103,107,70,30,64,
203,221,230,242,80,30,66,38,77,247,185,50,5,146,141,94,183,213,222,91,79,130,15,104,5,14,43,185,57,161,196,254,120,163,101,99,133,250,248,127,14,120,198,20,130,209,246,91,19,185,253,19,99,247,143,190,
142,120,133,244,255,10,167,0,253,224,90,166,179,86,173,41,180,153,12,1,0,98,223,131,219,176,184,73,251,118,206,247,211,131,3,233,103,237,206,200,196,170,102,234,100,82,237,160,178,5,245,106,47,37,49,9,
174,53,197,255,117,159,63,71,219,55,188,249,37,56,251,109,184,142,40,191,131,58,121,57,69,172,248,158,169,169,32,225,98,94,103,164,62,55,243,58,254,46,179,128,180,86,156,225,52,65,32,169,112,15,251,255,
163,0,189,138,99,30,168,174,172,182,30,128,129,140,248,178,214,2,13,4,47,109,126,89,208,3,38,123,72,120,221,158,217,20,205,144,161,214,210,31,206,187,197,1,156,216,105,224,94,116,197,214,106,130,139,191,
216,174,35,207,75,128,57,246,17,144,173,61,205,81,187,47,148,10,227,88,63,9,221,36,197,101,196,231,151,227,252,198,171,39,247,6,124,7,41,55,100,171,222,193,60,220,221,169,254,53,163,23,181,194,143,48,
178,227,105,7,102,21,216,192,88,250,24,180,9,150,109,238,155,248,218,244,125,212,15,127,205,238,85,208,174,144,182,182,123,237,207,175,192,137,34,142,93,206,127,218,113,18,250,213,16,25,193,42,142,38,
62,180,210,237,141,182,239,245,106,207,100,60,58,47,246,61,4,96,187,224,41,234,154,52,45,59,46,29,149,185,236,216,11,143,154,115,44,187,35,243,163,0,29,125,205,40,110,122,77,20,253,2,13,228,76,230,19,
142,85,190,6,253,214,106,47,87,61,228,125,10,57,102,107,243,230,235,94,7,15,131,161,184,8,224,200,252,114,140,45,51,85,49,86,0,84,174,53,161,144,197,142,205,24,170,221,248,129,23,74,95,34,166,165,233,
24,117,227,26,121,38,15,144,15,170,102,39,237,243,46,251,250,214,151,185,23,11,0,29,110,146,139,2,135,55,98,202,184,126,212,57,131,149,174,57,163,87,74,41,13,30,114,116,126,36,39,202,163,204,190,233,15,
245,143,229,254,217,164,16,40,235,177,221,112,55,238,222,140,218,159,161,58,54,65,150,82,198,239,107,107,76,84,125,61,95,143,48,26,152,108,75,34,245,168,253,41,99,183,36,253,189,235,85,85,254,77,71,124,
140,50,21,60,207,83,212,171,172,203,57,198,241,30,241,171,201,194,152,151,180,67,165,132,169,102,74,218,245,157,89,249,253,15,192,194,31,3,232,170,107,56,150,62,226,133,186,114,226,247,159,105,142,215,
196,216,155,237,206,103,157,229,204,51,57,18,73,165,90,10,212,165,75,88,181,244,188,141,95,102,22,40,153,73,199,72,101,142,28,169,134,135,7,122,98,133,120,180,189,179,210,224,214,4,16,174,243,140,229,
155,184,113,141,161,99,75,238,246,87,80,213,249,141,70,32,139,247,135,30,116,22,253,122,107,165,162,87,142,250,126,129,178,254,252,113,143,56,253,160,12,23,178,59,1,148,182,104,92,15,158,215,245,123,6,
176,107,45,21,202,32,223,238,36,20,184,199,206,75,104,100,15,174,127,29,121,203,61,190,80,9,87,121,151,125,41,74,55,31,150,108,240,175,35,3,213,215,4,187,39,94,20,135,130,123,109,70,232,149,157,135,188,
196,149,200,110,153,11,124,52,247,194,52,123,195,84,238,218,215,131,178,10,32,90,161,104,22,96,234,19,150,177,23,113,46,131,38,118,20,187,109,67,125,51,207,71,95,235,236,199,0,58,83,184,152,131,21,209,
247,17,239,2,147,223,78,0,247,26,164,108,2,201,28,68,176,215,120,105,200,52,218,60,67,57,184,76,24,215,147,222,219,140,123,145,121,127,150,173,189,148,201,229,13,153,115,174,10,0,172,217,165,211,172,151,
244,14,1,40,66,171,215,209,53,114,97,170,245,70,115,139,235,149,228,169,165,148,10,0,217,129,175,142,95,116,176,6,104,234,208,5,166,227,205,141,82,10,47,92,0,216,81,134,65,25,120,99,91,163,13,148,215,
188,228,59,53,160,159,59,71,1,219,26,159,90,38,217,152,119,173,211,0,13,15,20,158,125,6,89,4,99,68,209,65,114,243,159,59,6,95,65,83,30,64,208,32,188,195,97,18,190,214,187,146,20,3,88,0,106,61,123,152,
15,18,22,64,235,178,172,8,54,177,119,176,216,191,69,157,199,60,241,247,23,156,233,0,209,248,33,161,149,182,209,85,148,20,175,86,115,193,4,103,117,242,243,22,25,118,189,195,92,186,29,239,162,119,43,122,
109,122,107,2,58,252,152,181,159,150,114,231,238,161,161,67,240,228,223,135,197,52,35,146,2,89,186,59,142,107,159,193,112,140,103,90,54,82,235,241,142,104,65,93,75,126,18,4,12,242,74,165,229,29,12,129,
131,186,78,90,22,230,26,164,161,144,75,115,168,164,169,226,8,75,15,116,95,240,222,39,63,227,175,142,173,151,200,62,255,149,180,198,182,240,111,22,99,36,221,65,241,82,16,212,15,158,123,188,86,145,31,124,
185,165,17,136,214,17,134,205,58,195,129,96,25,161,253,238,209,143,104,123,22,156,253,3,195,209,203,217,71,93,112,159,94,37,197,29,184,227,30,57,8,214,174,59,171,229,34,16,46,135,227,132,25,6,156,63,52,
196,166,94,221,117,253,79,41,70,175,1,174,13,187,225,81,239,233,40,190,191,241,99,30,65,137,54,170,59,99,248,202,35,119,220,203,100,54,204,37,118,53,106,189,243,24,61,168,130,141,12,143,173,206,22,131,
15,185,133,224,240,107,137,201,163,100,157,210,162,127,188,104,99,205,153,215,192,107,46,95,25,229,106,237,206,229,48,255,24,64,47,69,15,98,120,220,250,55,131,218,21,252,221,121,118,69,173,209,88,79,253,
159,169,246,116,146,5,88,174,168,214,104,153,116,37,137,87,222,109,147,100,186,188,250,245,239,160,113,244,156,241,22,158,172,221,212,99,98,48,159,70,106,110,113,185,207,119,48,181,252,19,227,63,70,163,
131,21,167,193,130,232,19,169,113,121,149,30,231,104,152,234,178,215,62,140,25,182,143,192,90,38,72,219,14,205,17,70,32,238,125,180,0,105,191,219,197,242,25,80,173,117,124,187,124,184,94,221,225,161,62,
161,35,131,240,141,237,112,102,129,157,31,238,191,235,163,248,202,150,43,249,54,178,206,17,208,25,37,188,223,141,179,109,254,145,132,86,4,34,215,227,128,145,142,31,118,69,81,14,230,92,118,238,1,55,130,
132,18,198,119,146,246,4,115,180,56,163,215,93,53,164,164,232,96,67,237,74,133,174,107,58,0,131,128,66,137,43,187,176,49,142,181,235,58,92,170,181,84,218,67,54,164,104,237,103,1,122,39,132,140,140,198,
71,100,234,60,30,207,185,239,44,4,194,31,31,227,122,35,96,142,251,130,168,83,189,192,119,211,133,91,49,209,66,43,70,61,70,121,149,110,138,127,139,173,75,29,140,160,182,94,186,108,232,81,122,247,163,139,
214,219,246,31,61,57,35,54,104,211,249,185,70,213,89,187,189,182,92,186,150,254,42,144,49,70,130,34,241,10,215,7,112,66,68,93,161,108,131,127,60,67,61,114,102,32,53,178,93,237,12,192,237,252,225,89,58,
166,195,71,250,190,78,144,54,27,224,32,83,212,160,13,28,43,51,22,208,247,161,227,17,234,112,14,18,198,21,65,185,130,12,72,29,148,95,50,52,147,141,104,112,191,143,27,142,243,24,179,102,204,180,91,103,253,
26,206,137,210,42,5,199,119,41,7,105,31,193,243,35,157,251,164,65,25,129,200,91,141,59,237,10,123,23,41,216,22,55,52,2,48,54,18,93,173,46,205,30,67,118,12,144,62,235,221,180,227,125,109,106,241,57,229,
111,76,181,48,195,213,205,195,158,67,211,198,59,124,150,126,228,166,184,82,200,144,4,101,164,98,183,82,122,180,238,210,20,105,75,16,1,171,42,205,14,57,47,106,23,127,66,224,128,166,88,149,139,180,90,26,
11,10,72,246,215,152,40,8,221,173,116,164,73,153,194,14,96,215,149,113,114,45,154,195,5,27,182,60,3,57,21,84,237,147,208,135,104,41,153,249,198,148,57,243,130,232,178,225,117,4,86,228,223,35,108,78,99,
119,94,244,232,104,0,63,166,201,35,121,49,139,192,128,86,250,130,7,16,7,26,64,70,14,136,113,92,176,239,212,191,134,117,200,3,107,4,190,21,254,105,25,175,117,213,29,149,222,94,22,77,43,135,68,148,199,177,
226,180,63,206,147,25,15,161,112,74,246,103,200,190,177,48,123,57,53,226,253,136,93,89,48,28,203,121,98,231,201,64,148,45,232,238,247,43,4,114,188,224,100,63,54,129,13,111,144,40,221,162,187,71,164,224,
32,253,207,80,22,219,127,222,212,200,139,46,210,225,198,71,214,255,16,150,62,245,72,116,209,90,230,47,135,146,172,72,63,2,208,151,64,9,132,207,13,198,196,1,131,17,181,223,36,246,86,199,181,82,76,60,60,
202,85,48,190,197,79,143,20,101,40,72,44,168,154,46,103,95,67,101,200,7,96,53,198,49,191,62,226,144,254,180,54,103,22,187,105,238,250,251,188,214,120,77,67,119,43,82,225,205,98,24,41,22,138,244,166,32,
83,158,2,230,21,162,95,127,189,184,73,114,99,44,54,153,85,0,68,222,57,62,100,81,78,201,117,157,159,31,143,168,182,71,226,148,1,50,109,19,200,179,83,80,16,172,69,230,98,212,41,197,142,201,136,172,197,88,
212,203,236,86,235,236,42,135,0,235,32,159,200,20,162,115,97,28,174,254,23,247,8,116,62,213,126,195,129,255,14,135,77,201,32,156,36,188,246,126,100,237,184,187,172,213,51,188,231,110,240,158,9,67,0,243,
48,134,20,89,18,97,47,185,89,87,52,110,135,71,218,68,234,11,154,102,170,103,114,250,63,226,137,160,222,237,116,83,142,129,106,1,198,172,118,187,144,149,70,75,28,79,100,171,253,113,30,243,240,117,126,4,
160,103,243,17,170,208,240,204,95,134,244,222,150,168,38,15,177,241,190,252,229,237,86,198,79,27,150,82,92,42,7,159,128,27,223,175,161,1,9,140,109,119,84,172,109,117,32,39,133,94,128,233,196,221,19,107,
64,222,124,191,52,100,122,13,70,107,247,54,102,160,189,228,37,166,174,74,30,116,140,35,81,233,122,7,63,3,70,149,158,211,190,14,94,127,160,126,163,186,147,192,217,132,127,35,130,102,224,160,212,189,145,
29,28,9,115,141,193,158,142,185,14,83,6,48,6,128,71,198,192,182,169,254,97,255,72,73,77,95,198,8,93,198,41,202,6,116,103,100,212,239,117,10,174,17,159,249,234,101,91,177,206,5,246,155,125,207,2,188,113,
12,184,190,123,253,142,156,164,158,25,28,142,68,191,31,109,2,60,166,87,239,102,64,3,119,222,6,245,222,39,27,180,244,91,54,80,13,173,85,137,122,200,225,128,187,120,83,236,233,8,250,155,243,183,61,224,42,
233,192,235,196,197,215,197,232,214,134,124,92,68,234,216,27,132,99,214,31,39,207,87,168,173,12,63,2,208,145,120,16,140,247,222,137,116,2,62,194,55,34,188,29,50,209,189,177,238,180,96,22,73,147,193,102,
20,155,198,199,251,94,175,171,195,219,163,110,25,51,34,148,254,182,146,0,88,174,129,156,161,113,254,117,17,15,149,233,222,253,125,33,175,177,107,52,56,91,213,201,172,32,64,195,223,86,202,124,173,172,120,
208,24,146,64,132,56,140,57,166,157,177,205,205,124,104,69,240,251,129,228,95,7,59,102,16,242,149,25,136,40,251,64,247,251,124,168,102,236,90,180,206,132,50,232,88,135,239,53,50,240,202,248,35,224,207,
236,200,235,190,114,4,163,55,113,238,80,29,134,99,92,25,231,239,168,212,124,44,3,203,0,148,159,199,146,101,240,110,47,222,197,208,6,108,95,175,226,153,59,30,150,151,181,97,42,10,174,5,71,6,174,215,49,
85,165,217,20,68,104,109,140,120,109,254,241,174,77,50,1,242,150,9,19,226,186,165,59,154,215,155,72,162,104,191,244,99,126,15,221,45,190,162,23,19,111,215,159,158,244,137,54,11,132,108,203,33,53,114,153,
169,104,126,190,86,139,119,120,245,171,58,60,40,254,112,159,106,111,119,181,179,157,37,1,15,190,21,179,232,167,145,188,111,77,102,58,119,254,70,246,29,227,100,126,204,160,120,208,198,94,101,1,130,217,
49,141,252,74,49,186,7,21,206,133,253,71,103,164,82,219,215,245,113,60,138,174,129,187,148,130,74,236,158,171,23,99,91,96,205,183,102,206,199,113,160,107,236,136,188,79,214,121,46,165,209,154,92,131,131,
228,106,50,36,116,19,108,99,173,165,244,12,99,96,13,183,218,87,32,233,111,108,212,230,193,30,252,0,240,77,152,196,191,124,88,221,58,87,172,250,126,52,101,175,45,176,79,129,208,78,142,196,21,52,61,31,93,
238,205,151,179,50,204,175,254,144,215,214,162,57,84,131,167,94,221,121,221,111,182,96,74,103,10,31,1,65,151,155,117,202,155,152,2,119,237,145,134,78,93,253,89,216,176,178,236,240,102,165,28,169,246,131,
241,84,89,230,254,124,232,100,87,188,52,238,66,26,54,238,210,241,130,84,56,110,134,26,251,52,40,170,252,169,209,245,127,142,222,156,7,53,151,102,45,171,140,194,6,79,228,147,57,142,174,238,142,208,162,
150,93,55,125,15,193,45,102,70,18,120,17,225,117,245,90,26,126,181,179,53,203,98,93,168,31,46,200,126,61,238,132,145,129,23,191,137,215,4,94,40,167,206,177,242,191,141,129,34,49,54,121,151,192,54,197,
96,222,153,156,77,211,108,188,150,215,235,107,230,113,86,251,33,175,173,41,56,200,32,2,193,189,148,171,115,171,188,9,145,1,206,160,78,198,74,202,87,237,61,195,186,206,59,214,95,100,126,149,47,188,174,
86,228,155,47,152,232,114,20,183,104,72,214,3,227,203,238,131,112,41,110,253,128,81,61,83,237,200,91,238,60,251,53,222,105,141,18,187,247,157,149,183,33,34,192,127,244,247,17,130,183,2,110,220,129,206,
14,62,27,213,126,189,80,57,230,53,206,147,123,39,244,234,67,1,7,228,29,96,175,131,31,60,105,146,229,60,101,214,123,110,170,29,171,126,139,5,143,153,152,35,81,23,131,174,85,125,213,18,59,31,141,120,59,
192,15,248,182,34,108,231,105,34,165,94,129,107,123,253,109,197,127,168,233,71,0,186,34,158,136,72,209,251,235,106,251,92,241,111,217,12,48,247,38,159,175,169,201,27,125,170,65,57,226,179,42,179,148,177,
242,201,249,10,71,156,179,222,255,27,48,215,222,51,94,23,139,224,70,240,72,193,116,100,26,104,115,239,199,210,79,151,239,191,67,102,83,96,41,165,191,98,167,226,84,149,254,151,159,232,45,214,1,125,67,186,
240,202,61,21,191,156,99,17,96,212,138,173,121,219,146,53,183,255,136,52,179,189,208,122,141,236,65,244,168,102,98,140,106,194,130,179,13,178,92,22,176,152,219,121,44,228,145,0,0,32,0,73,68,65,84,24,94,
78,74,167,245,134,77,14,130,173,111,5,244,157,110,112,52,206,245,240,215,213,214,192,222,99,227,188,92,181,243,103,239,209,223,86,202,235,167,57,203,84,144,27,142,23,69,242,192,27,228,121,221,62,156,124,
242,42,14,98,233,41,78,131,49,25,233,246,125,78,35,114,232,231,229,204,120,201,5,73,199,81,180,110,100,120,29,168,155,91,114,124,47,189,107,232,79,233,55,140,201,15,32,12,131,41,36,110,165,20,245,124,
246,85,116,99,124,223,202,14,77,32,110,180,118,239,242,114,233,227,69,196,126,212,92,218,201,1,189,91,108,162,128,223,61,2,169,115,140,84,121,117,214,3,26,180,215,42,91,216,168,252,83,212,55,199,141,125,
1,213,186,15,223,10,232,59,105,245,82,252,4,105,160,61,133,42,127,109,103,224,93,250,134,83,9,227,98,162,163,228,205,27,37,83,249,161,119,232,152,87,45,188,44,94,224,139,138,127,202,212,187,247,12,242,
153,52,119,244,164,167,66,255,61,239,254,46,250,111,142,187,2,20,245,174,127,248,77,123,164,32,125,207,237,101,119,187,193,127,47,253,222,129,196,6,59,35,224,48,37,79,96,156,236,228,13,249,250,200,246,
72,59,122,124,24,97,72,127,218,23,75,13,50,178,99,116,32,111,54,246,71,221,134,182,205,142,247,203,201,248,113,41,119,215,185,26,188,3,14,255,43,165,148,86,147,79,80,186,84,144,46,119,203,131,21,117,56,
5,99,238,81,4,110,143,231,106,97,15,240,22,85,223,243,205,106,182,52,122,230,231,34,152,87,68,44,143,53,195,200,249,114,92,120,243,27,62,31,255,245,160,190,167,215,207,210,187,25,129,175,206,40,252,32,
130,148,124,203,174,93,148,5,47,142,245,77,145,250,14,248,183,64,29,90,31,209,122,225,153,142,98,228,152,235,59,183,79,72,101,246,74,169,227,167,210,79,131,200,2,65,142,183,73,213,92,71,108,137,156,142,
45,234,227,222,102,164,222,74,187,250,240,67,118,185,35,185,142,6,187,16,95,101,33,245,208,178,1,201,141,75,244,28,197,183,56,21,216,164,218,193,107,197,191,28,49,178,40,168,250,236,100,116,111,216,42,
225,185,97,199,231,58,123,181,240,235,92,197,100,32,232,155,33,219,132,139,255,105,26,243,209,224,83,171,98,83,219,207,163,19,185,162,53,32,204,130,137,6,227,54,222,25,149,83,147,189,199,241,239,164,116,
131,221,78,125,58,103,208,217,117,155,230,219,27,87,219,245,238,186,156,179,207,143,209,86,206,250,150,179,194,202,229,140,145,170,7,58,159,216,241,59,143,66,29,83,178,245,81,179,174,173,154,156,186,192,
43,33,82,128,158,129,121,97,210,15,217,229,30,145,234,228,4,205,30,211,86,115,126,171,29,88,25,203,212,72,157,170,85,101,147,43,112,141,190,12,167,203,175,123,181,86,133,168,132,246,18,167,177,105,40,
192,205,116,187,201,60,188,9,5,178,38,108,110,219,253,184,203,207,32,157,119,210,228,157,189,180,20,60,210,24,127,11,124,216,165,204,84,169,125,6,103,231,9,55,126,205,177,157,94,236,188,175,1,106,119,
42,126,203,140,61,73,209,142,122,14,6,118,31,55,109,54,58,219,46,19,223,119,31,55,18,179,241,10,219,168,218,120,46,247,244,150,32,121,141,150,1,15,62,220,114,32,22,229,119,86,228,142,219,204,43,204,208,
249,83,138,50,118,187,211,43,182,223,242,97,153,93,207,50,54,92,24,163,156,169,245,59,3,218,74,49,233,153,90,102,148,190,106,103,76,40,120,120,16,252,46,105,123,189,29,24,209,176,219,112,115,70,189,71,
82,88,122,40,237,29,173,243,31,157,82,119,3,61,47,224,59,239,211,162,214,96,110,200,56,170,15,220,132,205,87,210,187,235,205,16,202,155,214,104,142,49,162,188,254,195,63,52,51,100,175,83,182,215,231,5,
234,240,14,219,37,175,223,12,57,127,134,181,215,175,87,187,209,198,201,147,183,91,118,237,205,79,162,187,145,248,9,255,225,180,195,223,183,120,61,36,83,169,36,79,176,126,78,9,131,63,180,189,24,179,68,
182,124,53,31,59,18,97,224,168,219,218,235,27,175,161,158,114,111,229,27,0,61,18,25,175,71,199,157,120,33,107,35,145,73,192,252,162,59,222,223,116,114,109,32,242,168,83,103,241,12,204,181,119,190,9,90,
32,32,64,199,17,167,202,157,60,218,209,254,170,99,128,227,128,118,22,143,109,236,243,180,90,102,47,253,235,199,221,24,137,95,86,171,253,177,5,70,19,185,127,31,198,241,135,125,103,155,200,143,96,78,157,
34,5,230,35,210,9,222,36,200,28,176,177,22,174,129,106,173,188,126,180,134,61,96,100,73,222,180,25,247,241,249,180,50,157,23,248,110,197,59,25,189,167,201,124,153,240,146,51,182,73,15,181,121,205,87,109,
126,36,118,33,211,124,46,23,42,105,251,181,41,83,159,153,27,184,109,230,149,157,2,34,182,173,89,66,222,217,178,250,178,145,253,135,169,78,196,148,101,13,152,220,163,94,243,203,83,238,145,200,161,67,22,
208,187,6,233,132,34,0,62,201,240,162,55,188,67,251,177,71,126,57,122,95,49,139,0,199,253,134,87,246,104,164,225,174,65,59,77,131,239,120,190,95,189,123,221,27,87,56,26,105,76,8,120,43,233,35,221,219,
109,111,103,173,236,242,186,67,219,35,124,54,197,121,91,215,66,121,233,79,21,5,84,165,235,180,150,242,135,7,186,207,197,149,45,232,175,253,96,145,67,9,63,71,32,59,110,160,251,180,235,193,254,229,49,16,
7,149,234,248,239,161,179,232,14,152,197,65,128,145,92,51,54,253,206,88,67,225,183,30,47,13,63,97,127,172,186,46,51,253,184,103,232,44,162,242,30,221,6,178,187,249,162,74,198,186,194,49,201,192,105,153,
40,17,168,234,207,200,196,242,244,37,224,222,169,253,168,197,172,29,45,201,93,58,141,222,122,157,103,77,145,154,251,207,147,143,166,231,179,233,175,150,101,159,42,253,189,67,95,29,195,102,17,252,46,69,
145,109,165,181,209,191,78,24,127,176,138,117,237,123,34,122,247,17,155,211,250,235,6,240,207,237,141,175,88,169,149,34,192,241,28,212,77,141,205,225,223,251,216,140,102,153,101,22,92,166,83,116,135,101,
94,217,96,45,219,94,71,249,43,113,157,126,4,160,171,101,19,57,103,239,120,172,110,104,155,60,148,105,106,117,101,215,143,152,50,199,239,67,70,20,131,24,93,131,129,137,160,116,181,164,56,40,42,226,124,
85,191,148,43,74,135,29,181,143,209,107,119,215,178,253,103,154,226,141,101,47,238,127,96,64,194,0,98,83,158,175,112,7,158,128,161,79,203,153,25,82,44,115,34,71,100,172,75,241,14,3,3,230,120,181,172,194,
253,82,45,184,214,83,137,30,160,27,160,126,146,233,171,59,19,177,224,162,18,114,119,226,243,102,79,195,114,91,60,146,82,198,86,158,62,118,194,147,230,177,41,76,175,167,60,207,117,106,188,192,93,127,200,
107,107,231,250,163,127,11,118,77,247,77,194,187,241,38,71,231,20,80,63,74,17,148,198,89,133,185,0,188,147,178,47,33,86,125,34,120,93,1,102,214,254,167,40,90,176,177,87,191,199,235,73,122,34,55,242,149,
177,233,14,255,119,83,207,91,143,244,192,113,227,191,50,34,3,103,239,203,178,53,220,214,99,237,230,25,139,61,22,213,253,160,75,41,229,134,165,222,3,228,188,118,118,205,110,60,93,217,225,204,167,112,153,
160,67,249,110,247,177,194,55,88,250,255,126,202,143,179,40,226,5,152,14,212,77,37,68,190,235,120,124,213,172,78,176,52,184,131,74,148,41,249,180,33,155,253,18,197,190,39,65,88,202,52,10,207,24,154,175,
122,29,109,140,117,245,17,220,25,159,239,167,59,207,222,119,246,46,172,232,19,125,255,9,227,185,69,155,111,29,60,69,239,164,225,55,152,223,230,123,167,158,6,224,85,194,122,179,181,171,136,199,16,8,98,
224,126,148,164,152,56,225,199,102,3,41,204,89,244,88,232,152,4,131,31,11,232,165,120,79,230,105,229,189,27,201,156,24,70,117,77,41,77,236,181,109,36,115,229,134,148,55,210,71,69,167,206,118,120,252,224,
199,202,131,94,114,218,8,172,127,105,240,93,19,249,132,158,102,155,226,78,162,217,70,231,59,188,179,72,246,171,50,14,95,153,29,120,140,62,5,174,101,145,169,122,244,183,214,177,161,155,159,139,173,117,
216,1,93,213,195,234,50,53,158,198,7,123,160,190,178,162,227,120,209,225,104,141,240,30,171,52,226,7,39,67,222,127,67,147,126,28,160,71,139,249,221,197,18,237,246,30,188,69,180,205,103,149,142,117,59,
158,191,58,231,73,215,6,246,112,177,38,131,180,26,63,223,210,115,81,246,41,165,63,164,242,0,239,6,199,179,189,217,214,83,128,124,82,246,84,215,183,158,215,21,111,96,86,58,199,169,72,54,84,171,246,34,25,
86,50,242,249,19,48,181,149,102,127,146,132,190,62,253,253,5,255,68,236,147,107,180,222,243,23,46,4,142,117,122,158,101,209,42,6,62,222,70,47,68,184,177,138,199,90,89,0,46,10,18,109,188,219,29,182,167,
103,239,199,1,122,4,122,239,47,200,132,195,98,84,85,132,115,144,237,73,22,181,184,94,241,240,72,131,211,122,241,243,243,231,232,81,163,249,65,67,37,63,199,9,199,159,52,254,234,81,82,100,176,251,189,40,
186,230,251,88,15,255,98,74,113,85,63,142,26,180,220,43,176,198,118,212,90,86,125,203,28,225,172,46,94,103,7,68,141,243,167,230,153,159,169,127,22,114,193,49,253,64,91,110,3,225,77,62,58,96,200,238,219,
50,39,118,87,113,208,243,61,95,20,83,107,43,150,70,223,203,177,74,143,227,211,58,248,227,0,189,148,184,179,50,162,216,54,252,59,9,160,125,218,73,63,102,41,245,200,8,223,146,203,231,225,182,43,185,170,
97,170,108,131,227,3,32,92,75,121,224,55,161,129,159,216,232,164,232,233,133,149,1,227,10,112,148,110,68,215,42,157,51,88,175,244,110,37,35,214,83,198,142,71,52,3,249,29,103,1,207,35,71,68,101,16,184,
141,221,76,25,182,243,52,205,13,117,126,135,252,142,78,238,16,102,155,218,213,86,41,239,1,187,155,15,120,156,112,43,96,127,168,108,13,5,136,109,59,59,2,170,100,230,108,236,91,82,155,13,99,231,202,29,195,
133,39,117,239,71,2,250,10,236,190,154,216,139,243,158,112,188,136,94,215,154,171,167,12,225,190,52,171,202,121,4,154,85,125,41,219,217,136,247,221,190,143,208,195,207,34,119,63,145,154,242,56,44,155,
149,87,32,187,210,9,165,119,120,47,2,85,4,245,93,135,49,146,165,95,139,34,234,40,211,160,50,0,39,14,251,206,61,213,14,203,150,209,87,101,103,92,187,245,228,11,151,251,252,212,47,186,157,144,198,204,123,
235,135,245,226,156,203,59,81,250,161,29,131,127,209,186,145,188,175,130,89,164,175,214,198,210,121,217,32,182,107,63,18,208,59,49,136,62,73,59,169,66,85,126,183,142,157,200,189,5,102,21,232,238,2,210,
245,182,251,249,149,22,13,200,164,41,31,114,14,198,226,76,58,181,211,82,22,9,246,99,142,96,163,40,55,2,143,200,0,48,136,71,14,64,4,236,220,14,203,172,248,68,217,165,200,137,88,25,109,229,200,162,193,84,
242,113,230,65,221,59,89,187,236,224,224,61,110,47,226,241,27,232,228,151,220,62,77,209,39,126,161,196,226,190,40,21,41,76,24,165,91,224,85,209,184,212,135,122,150,185,233,95,200,236,60,120,253,103,50,
10,145,182,203,178,109,251,209,128,30,121,249,167,20,129,220,87,40,61,27,166,230,238,76,74,127,1,118,163,145,253,234,91,126,231,30,167,3,229,139,121,60,63,19,227,85,183,197,59,194,59,122,21,69,149,74,
47,51,143,28,143,149,17,57,1,23,21,13,100,117,179,76,0,215,197,243,8,172,35,71,91,157,51,160,70,253,69,89,149,188,202,177,225,40,74,57,15,138,135,234,203,106,206,50,167,254,174,125,250,216,43,153,31,120,
55,190,150,27,162,46,51,110,187,46,245,115,246,122,207,105,187,27,80,237,215,12,245,169,117,94,107,78,223,22,161,103,70,36,90,120,43,3,244,46,181,5,115,52,104,119,228,121,97,221,250,189,197,40,106,11,
56,134,20,213,221,150,247,198,138,125,39,162,31,6,53,249,205,251,91,124,205,87,124,246,5,92,129,117,216,158,168,167,116,90,181,163,234,115,89,5,110,89,116,173,34,209,34,174,113,180,172,174,103,89,133,
76,230,12,56,179,54,84,127,50,218,145,135,219,138,238,101,109,178,115,195,114,190,163,179,163,238,135,28,219,39,31,135,181,59,81,199,59,95,96,27,215,240,237,148,147,154,59,118,59,136,210,3,94,213,156,
121,153,118,109,71,252,106,95,231,115,110,92,191,12,208,35,209,184,243,106,193,133,64,245,132,162,58,230,53,188,61,22,174,41,162,189,199,227,172,66,149,135,111,147,31,191,167,189,246,251,252,90,209,6,
231,201,244,102,219,212,145,40,77,22,1,70,100,0,20,72,102,247,85,20,202,192,183,2,84,118,130,25,32,85,36,155,201,200,188,89,126,5,102,17,104,243,249,31,33,99,212,15,150,135,101,92,129,249,10,164,249,58,
143,213,174,115,182,239,144,199,100,126,119,254,3,244,212,71,104,106,109,183,99,215,12,80,145,86,217,159,187,99,252,178,55,7,78,224,97,71,21,86,249,117,23,59,29,190,238,158,0,168,51,95,158,114,223,29,
163,45,64,124,224,129,239,106,253,40,15,94,138,146,212,245,247,125,163,59,147,46,169,162,17,242,245,206,70,232,208,147,94,185,152,139,150,158,50,94,106,247,48,182,179,43,79,246,55,139,238,162,118,222,
73,11,103,14,67,4,160,220,118,166,179,44,131,50,158,74,182,157,117,201,142,17,59,14,153,195,130,242,102,227,59,234,45,126,254,51,114,12,34,176,200,168,209,63,150,119,117,109,139,174,95,71,249,200,231,
100,31,121,190,126,241,56,222,56,219,70,195,39,24,192,109,191,59,34,81,54,37,251,189,140,211,57,220,93,163,208,4,31,222,166,111,251,249,212,72,120,101,236,162,178,111,121,106,9,223,72,174,221,251,13,46,
42,227,162,228,121,39,109,247,174,91,115,58,22,175,74,111,170,223,131,96,254,46,41,144,82,105,96,158,227,40,146,95,233,45,222,219,1,199,213,90,137,162,200,12,176,239,80,19,71,253,44,115,26,20,152,102,
107,97,229,28,153,246,40,242,140,28,165,108,156,217,217,80,153,0,37,151,202,112,68,247,163,50,94,24,120,69,172,221,141,134,3,214,165,175,151,251,92,107,41,211,49,184,201,70,143,195,154,153,153,151,176,
248,26,174,87,186,96,108,118,173,11,253,209,1,196,169,77,126,42,43,249,109,155,226,34,47,157,61,251,44,34,184,99,204,119,61,103,101,16,78,150,66,247,133,217,232,175,162,186,61,137,212,37,175,88,39,158,
240,177,23,250,93,219,225,81,134,141,207,52,226,223,172,76,63,86,231,43,62,177,111,175,175,103,128,31,69,171,25,41,131,195,109,40,135,35,146,33,146,105,2,180,7,81,6,239,172,255,171,54,86,245,34,167,159,
235,102,50,238,56,22,59,243,173,214,52,2,113,228,44,102,100,94,181,124,240,53,78,14,52,222,226,113,245,124,159,207,165,57,7,54,59,154,207,123,150,167,202,67,46,177,202,30,237,52,241,142,101,84,89,137,
131,166,59,160,127,175,113,62,49,148,239,82,206,115,222,13,23,180,0,209,213,2,143,40,94,232,251,243,113,102,144,98,105,78,124,163,39,211,129,159,152,99,230,205,243,19,69,98,92,55,154,199,8,80,118,9,219,
103,64,186,27,233,103,122,176,115,237,14,49,136,191,67,145,195,161,206,51,121,118,235,101,206,20,131,191,154,155,180,141,224,253,242,157,249,108,69,56,170,15,125,132,134,121,190,231,42,84,224,243,166,
40,165,20,149,3,137,211,227,124,240,12,69,143,78,182,231,93,212,213,101,239,59,53,113,193,87,201,31,243,218,218,42,45,125,151,118,140,245,46,31,63,177,13,254,107,175,238,166,104,248,82,77,165,179,92,35,
35,179,34,103,248,106,32,87,82,239,127,30,138,208,63,225,74,162,49,229,39,172,170,151,25,152,224,181,12,228,223,161,157,217,94,149,201,228,202,228,127,199,153,86,17,211,42,74,222,145,241,174,78,156,70,
194,81,251,17,223,8,216,163,71,47,174,204,98,205,68,0,86,202,251,96,46,191,197,80,205,159,187,156,223,94,195,89,32,19,185,69,30,250,125,25,93,243,250,43,250,206,181,86,243,30,181,193,1,196,78,157,167,
232,75,1,125,37,56,14,218,59,11,123,213,234,0,220,133,64,202,96,169,18,202,56,197,117,239,38,85,168,100,189,231,4,185,40,112,19,204,103,249,249,107,74,119,168,22,101,156,206,51,18,187,6,174,191,238,162,
82,105,106,222,118,140,243,29,82,134,3,219,203,156,64,37,191,42,195,60,249,94,84,103,247,94,230,12,176,209,83,231,209,227,39,30,135,34,238,69,243,181,162,16,32,233,60,75,181,178,190,224,121,8,194,98,3,
90,171,94,23,123,219,59,128,255,98,123,47,59,230,234,180,54,64,254,61,61,95,201,34,236,157,148,95,187,84,126,222,137,223,161,253,66,14,126,173,156,253,52,234,234,222,137,243,159,57,148,39,244,199,179,
249,92,250,125,249,236,232,250,187,211,185,119,127,179,122,119,128,119,162,36,174,151,215,209,14,198,49,221,168,116,98,236,179,38,219,197,237,214,12,200,157,182,251,156,100,74,210,200,181,190,223,202,
43,98,25,125,7,195,118,7,52,78,72,57,12,89,106,113,23,144,20,127,5,192,42,150,137,214,91,118,47,107,183,159,47,83,166,162,46,174,187,200,42,69,101,184,13,6,96,213,166,2,238,200,185,138,156,28,118,98,148,
220,170,125,28,35,103,111,2,112,95,233,248,54,125,248,53,57,104,136,206,51,215,53,95,183,179,204,234,203,155,209,216,173,251,42,237,227,209,243,200,89,111,219,182,86,91,62,203,88,172,232,199,164,220,145,
62,231,82,64,27,231,115,164,184,200,43,47,167,113,238,142,220,113,32,238,74,112,66,218,32,29,122,183,173,25,0,188,47,203,155,179,188,145,190,84,198,84,70,66,193,171,110,167,32,171,120,152,118,225,184,
22,15,0,187,209,128,2,55,5,38,145,44,18,64,22,237,68,227,121,135,23,94,99,249,163,54,177,124,52,150,204,27,255,41,153,88,174,200,217,81,142,176,42,23,141,17,235,91,56,207,168,135,253,56,169,123,18,1,50,
33,80,221,3,245,41,215,89,253,215,104,197,85,154,59,179,243,187,147,87,210,204,179,185,143,202,112,89,173,47,58,108,187,27,38,87,113,180,75,127,226,68,216,215,19,27,135,119,129,93,253,70,208,240,138,29,
243,200,44,101,114,232,20,205,73,180,114,70,192,185,242,196,183,113,228,169,22,181,5,198,151,205,122,90,224,227,20,117,81,58,230,81,202,229,20,44,205,100,76,237,122,87,55,184,105,254,154,232,169,181,215,
238,252,205,207,109,174,199,203,3,115,6,0,8,94,38,91,80,180,190,163,222,168,72,78,57,2,17,64,97,253,44,2,149,17,138,144,93,25,184,126,159,215,240,142,33,101,90,25,214,149,173,216,113,108,212,245,44,50,
207,156,57,30,223,193,251,210,55,28,7,211,134,208,83,115,59,211,83,184,119,103,45,182,82,244,179,245,109,14,82,148,237,250,143,33,77,117,7,37,154,169,157,85,175,184,40,135,57,26,253,200,225,214,37,214,
116,50,82,127,180,137,248,62,122,50,58,191,27,5,42,111,187,245,3,215,66,236,81,234,79,94,196,151,242,55,30,87,142,70,62,119,153,177,62,26,117,248,152,204,169,95,222,63,211,116,186,248,231,79,77,162,83,
49,105,188,230,67,114,178,1,109,100,88,89,190,8,172,148,33,102,48,137,64,153,129,71,253,85,229,85,61,166,168,109,172,203,206,131,106,15,255,114,125,190,23,201,17,201,139,206,136,106,135,29,27,150,61,147,
43,234,47,203,196,114,173,248,71,227,174,198,88,25,252,193,147,28,207,134,215,137,111,189,174,71,186,23,201,243,246,163,71,136,210,239,112,26,25,187,237,148,231,42,84,243,110,147,173,81,225,191,119,168,
202,67,110,207,87,203,210,252,86,102,252,26,157,94,123,190,225,110,86,245,232,236,219,103,241,218,218,147,144,122,70,108,108,223,117,47,170,89,110,116,36,153,55,87,54,150,65,251,94,220,254,121,31,184,
70,100,126,116,105,13,88,90,77,94,107,89,193,148,167,86,138,51,68,71,116,25,142,86,95,18,10,8,142,219,190,126,18,178,151,87,17,206,56,13,64,219,236,124,111,100,30,224,49,66,52,231,10,76,162,114,177,227,
164,103,147,249,70,0,188,27,137,70,247,20,120,229,142,158,175,207,224,28,141,129,170,199,109,115,249,200,241,137,0,86,181,207,145,114,214,55,190,143,237,238,244,75,201,103,0,191,235,226,245,94,250,180,
61,30,148,218,117,221,56,57,160,151,229,226,211,72,87,251,218,56,221,44,183,182,94,107,194,182,91,105,11,71,93,184,95,174,124,14,153,124,69,219,185,188,150,186,202,238,131,118,162,218,66,66,207,83,151,
141,57,156,244,62,34,120,134,254,46,124,62,67,159,118,45,162,197,170,192,28,101,216,81,141,70,151,121,129,103,116,52,250,7,11,97,197,125,215,223,125,68,59,218,181,12,201,80,109,85,133,93,185,198,112,117,
67,70,159,0,53,17,223,112,8,74,145,233,118,113,45,138,140,144,47,71,129,209,34,102,227,137,229,152,79,68,138,7,222,139,156,2,213,23,5,118,187,160,142,247,34,64,91,1,98,4,156,202,28,51,12,68,128,28,205,
81,116,174,100,195,185,136,130,11,228,177,154,239,113,12,186,229,230,89,236,62,55,237,92,239,180,183,235,152,229,31,191,125,126,184,166,140,211,64,237,238,174,245,10,242,244,183,101,180,163,16,105,151,
122,12,120,6,131,213,28,100,218,180,75,202,117,152,127,149,115,170,218,139,237,190,210,46,203,255,46,213,90,251,51,116,165,186,94,200,119,105,199,235,253,36,197,96,94,10,78,85,100,12,61,183,216,219,187,
227,135,197,247,116,204,230,221,143,117,11,92,35,242,71,165,4,125,1,159,128,49,70,14,21,174,109,181,90,236,119,218,95,141,207,122,253,249,99,107,195,216,73,112,67,163,215,249,138,182,249,120,5,74,17,144,
85,113,175,82,57,213,38,202,143,252,213,88,133,206,139,144,89,107,143,47,143,231,220,7,252,171,238,49,223,82,244,88,41,153,178,113,103,231,67,201,27,25,207,104,76,120,142,34,82,115,135,237,240,28,241,
156,115,89,197,223,93,19,27,227,186,195,138,206,129,113,112,175,235,187,193,131,161,139,247,112,106,251,215,233,142,83,249,117,56,213,181,174,96,217,247,177,95,223,251,216,237,28,225,216,118,100,124,170,
57,92,89,51,109,233,115,202,177,46,231,165,28,197,221,214,33,66,95,249,154,159,161,59,173,158,43,219,238,148,60,215,95,205,41,115,41,50,21,200,224,79,199,9,214,41,17,237,202,119,193,99,243,51,74,99,180,
187,67,20,1,12,222,213,171,183,92,88,201,142,122,39,133,114,52,198,51,62,125,143,65,12,121,35,32,68,78,222,174,17,141,234,43,254,69,148,229,250,170,30,3,174,2,96,252,155,149,87,78,2,203,146,105,101,228,
68,96,31,248,24,229,136,180,60,115,180,34,39,72,221,143,104,53,78,60,46,153,115,134,215,220,235,68,252,157,118,212,83,245,131,51,232,176,38,128,91,169,252,14,189,156,8,94,35,135,193,156,202,158,25,169,
148,203,147,5,48,222,229,178,22,35,114,201,90,89,243,207,244,96,106,73,229,235,53,211,33,127,53,115,54,179,214,109,249,149,227,98,233,143,85,245,195,73,60,164,157,5,133,229,238,194,235,171,62,123,126,
59,189,155,192,239,12,146,19,38,223,53,158,64,162,187,180,231,185,121,32,156,109,120,5,92,143,157,138,133,212,117,162,195,73,169,165,204,8,160,239,110,23,6,43,98,221,74,25,223,198,110,165,216,180,99,255,
196,38,142,9,189,95,206,233,121,211,222,194,232,69,119,163,200,140,245,38,114,20,84,217,213,223,8,196,149,19,146,157,119,126,93,211,217,244,69,188,139,184,174,64,119,229,236,40,199,132,101,141,244,128,
143,35,128,207,64,93,201,205,188,35,135,2,101,102,144,199,123,74,55,20,64,203,207,195,194,94,145,1,238,61,229,142,199,40,47,68,235,5,215,199,38,25,235,209,178,89,8,136,219,222,206,224,189,70,111,215,247,
88,218,140,218,255,19,105,64,198,201,115,180,186,90,199,127,183,122,71,224,111,235,4,28,194,113,216,159,77,114,28,239,66,232,30,161,235,176,106,233,29,215,34,82,233,120,50,60,164,174,84,34,34,239,18,216,
59,113,157,204,191,239,60,35,143,53,87,208,168,207,190,190,6,243,215,58,209,6,40,163,94,111,94,168,19,220,75,34,53,238,188,133,103,228,181,214,177,49,72,206,165,0,236,8,116,34,179,21,233,230,112,40,232,
62,3,64,230,30,43,96,83,252,34,0,100,153,25,120,236,241,76,95,162,227,167,12,11,235,58,203,207,253,67,138,214,20,131,27,203,175,128,51,114,72,249,152,101,216,117,4,250,57,207,101,164,15,81,59,120,79,57,
66,138,164,94,117,61,167,116,250,75,32,0,201,254,184,169,127,12,102,84,175,230,71,146,42,58,184,39,107,181,181,107,48,234,172,123,242,75,111,91,136,172,103,219,190,8,139,119,149,91,37,27,63,188,190,67,
205,233,1,218,104,205,89,219,78,207,3,57,196,156,184,236,110,111,254,20,185,108,63,67,187,202,207,229,239,180,49,207,180,209,210,53,119,135,205,78,143,49,206,75,22,119,199,120,61,63,241,93,6,186,215,130,
153,177,108,174,136,125,145,215,82,202,217,23,121,186,129,41,206,192,100,78,93,45,197,69,207,163,54,110,96,115,233,124,172,64,215,42,231,108,52,56,157,144,210,24,6,234,204,163,103,0,101,144,232,111,73,
188,120,196,78,144,237,75,7,237,118,213,202,220,91,123,198,128,203,245,26,253,203,0,111,7,224,162,122,74,211,35,39,139,235,149,226,231,128,121,70,178,97,255,35,192,142,172,101,228,148,241,56,25,64,30,
23,39,144,26,167,25,244,124,236,23,185,214,84,165,50,184,94,230,91,33,155,4,175,162,98,31,142,72,60,66,91,83,183,65,122,37,174,249,188,234,155,114,117,222,219,150,198,20,153,171,49,176,64,129,110,250,
149,142,186,215,207,87,210,196,101,246,70,21,62,253,186,50,63,207,210,167,90,177,106,21,248,121,225,216,180,112,193,114,57,102,98,175,216,51,171,158,145,226,71,66,217,88,194,114,169,69,201,226,235,239,
92,93,148,91,123,68,190,238,101,88,94,182,168,71,31,27,203,180,167,22,225,159,145,167,71,233,4,238,232,8,96,74,83,189,99,203,0,198,6,92,17,47,182,74,215,51,19,194,32,169,192,176,133,186,97,107,169,168,
83,155,27,59,105,218,120,250,136,160,129,118,41,82,96,172,198,143,215,18,142,19,59,49,138,191,170,207,188,123,13,13,192,149,70,67,247,40,114,100,120,36,35,89,217,105,88,57,3,88,207,57,113,248,54,70,244,
156,189,20,183,54,248,13,16,254,9,214,136,164,190,247,215,231,196,186,185,79,188,74,236,168,123,157,222,217,32,247,114,121,253,186,83,179,160,37,138,175,6,0,94,197,181,132,99,108,91,98,132,137,86,233,
206,92,252,177,131,172,133,122,151,88,121,119,202,135,247,142,54,196,245,101,141,103,89,171,250,43,65,43,202,205,4,158,71,62,95,21,42,141,156,173,170,158,80,220,7,105,78,116,209,254,236,251,240,61,87,
220,157,219,162,5,162,234,162,183,143,27,128,196,7,57,172,152,205,68,47,209,199,50,50,223,100,183,135,153,145,86,160,208,204,189,233,104,206,89,176,235,176,149,153,67,65,45,174,112,63,150,124,150,154,
17,76,180,10,148,206,183,33,35,151,170,84,106,202,187,62,182,206,108,108,176,125,132,59,219,179,99,138,253,196,54,244,23,32,148,150,183,162,156,129,124,69,43,103,132,157,141,85,25,38,94,47,131,215,149,
66,31,63,138,84,138,89,135,184,62,194,71,98,73,250,61,213,247,96,175,75,74,105,170,223,143,202,216,176,123,11,118,86,246,61,178,107,218,49,86,101,206,238,238,134,73,57,23,141,18,123,8,74,63,206,114,60,
125,219,116,194,249,142,20,222,248,216,201,230,99,197,65,155,68,85,49,2,230,222,246,198,224,87,60,92,245,248,50,17,142,165,53,99,105,35,130,231,206,115,170,49,14,7,207,228,22,195,181,164,86,166,161,194,
72,163,149,114,125,74,147,249,11,131,16,236,108,87,134,119,71,30,117,206,192,163,162,58,60,98,141,180,191,4,199,198,71,73,182,243,99,176,236,160,243,93,15,95,168,249,89,20,223,255,182,160,151,145,225,
68,222,218,109,245,235,197,58,5,145,81,139,156,19,53,27,179,188,210,10,159,251,178,82,101,110,17,75,167,128,60,154,17,231,92,210,110,246,87,3,243,61,244,134,17,188,112,176,49,221,126,231,43,114,253,195,
53,111,33,65,184,11,63,214,149,216,98,174,251,160,87,249,202,177,216,131,72,37,177,226,158,91,218,136,243,25,42,70,235,7,233,207,190,89,187,79,42,154,121,154,236,50,95,68,156,11,114,230,202,9,238,205,
170,138,21,34,206,43,85,95,221,241,75,33,26,219,232,227,179,170,206,194,35,61,121,13,166,255,29,207,184,79,28,171,82,74,243,169,118,203,251,50,102,230,149,52,0,37,218,117,155,181,187,211,43,5,83,118,206,
149,113,64,55,141,205,127,7,150,104,169,43,169,216,121,227,117,203,171,140,65,186,71,221,218,81,96,115,197,241,121,190,122,119,204,162,7,119,148,108,199,88,173,219,232,238,201,78,170,221,174,216,222,250,
228,210,104,132,155,25,161,82,212,72,127,216,146,210,171,109,125,86,240,125,244,90,42,60,234,210,107,40,102,31,219,181,109,30,151,156,113,171,214,29,158,189,56,251,164,204,180,99,42,159,178,114,142,103,
207,90,161,162,227,170,118,61,35,202,28,182,220,205,221,191,185,51,31,20,161,223,3,192,21,125,134,235,110,123,59,198,198,2,130,83,3,193,34,139,163,226,210,25,248,230,70,220,26,232,19,170,242,244,232,233,
216,13,227,208,155,82,144,147,55,85,229,241,107,138,102,196,210,229,154,247,103,36,63,12,29,201,178,43,199,218,37,35,177,228,189,187,166,125,109,72,116,186,29,151,59,234,116,212,115,78,75,103,210,103,
241,8,142,180,141,85,231,127,87,14,246,238,88,101,99,19,201,177,114,178,185,5,206,212,89,227,255,250,103,215,98,148,15,96,41,81,58,150,52,114,179,204,206,115,60,47,101,68,211,175,203,245,250,128,82,155,
247,74,60,226,82,70,136,172,39,191,115,106,165,152,221,247,121,201,252,217,240,174,252,231,24,179,231,160,162,27,29,217,19,123,94,195,66,90,198,29,124,218,39,250,113,150,207,208,71,189,214,101,203,212,
186,27,159,88,186,120,2,228,244,37,192,223,244,205,45,186,234,198,122,34,41,4,236,214,227,180,189,89,233,17,64,45,229,86,10,175,243,56,126,149,166,148,235,13,183,254,233,203,102,235,7,188,120,35,92,20,
155,101,51,114,2,59,222,121,200,90,221,35,159,98,86,128,200,224,237,97,194,186,143,220,126,164,1,25,120,231,125,96,51,136,145,111,102,184,115,7,220,203,173,207,231,120,100,80,166,221,98,212,6,251,108,
223,143,81,28,0,196,173,178,132,254,152,67,170,90,94,209,86,45,197,232,186,57,167,157,237,238,77,146,197,134,184,140,26,100,1,78,136,157,2,81,194,157,141,199,25,162,120,180,78,105,68,88,136,69,237,72,
26,190,115,103,83,224,73,158,33,191,227,105,45,205,159,51,134,191,145,78,12,233,110,41,31,191,68,70,100,222,91,165,142,238,72,166,219,123,253,13,22,99,61,83,57,134,148,83,50,198,110,115,135,251,172,196,
142,7,25,40,120,167,61,142,53,247,224,117,183,127,170,29,203,107,21,171,157,80,196,75,197,120,93,22,4,163,119,114,17,47,110,26,248,116,172,18,173,10,43,79,172,179,90,166,72,47,79,102,16,101,220,113,215,
180,12,244,211,41,134,111,166,127,187,20,58,60,117,2,165,123,156,196,107,138,95,247,60,73,185,19,143,170,248,31,80,11,29,130,70,71,251,31,124,189,33,197,173,90,113,237,26,79,84,16,209,169,85,243,148,52,
76,240,107,107,247,39,238,171,104,63,66,60,246,43,77,45,19,239,108,178,178,209,208,34,94,115,23,246,1,123,79,142,156,183,149,41,111,99,128,214,225,14,247,81,127,243,203,85,38,213,142,239,186,47,49,73,
184,75,34,85,120,186,152,112,38,21,112,227,138,217,119,4,223,165,181,158,76,208,140,0,143,99,65,205,39,110,79,197,70,106,87,249,14,112,70,116,110,222,189,91,129,219,216,120,182,78,214,21,130,143,214,170,
174,35,89,36,25,187,96,158,60,159,235,10,103,168,56,42,231,15,55,209,71,103,110,209,113,86,237,26,165,205,117,63,234,5,160,190,155,253,208,86,238,144,140,217,121,205,152,95,73,183,103,207,212,254,20,218,
254,249,28,235,239,164,187,230,251,69,198,228,73,86,62,109,20,221,79,83,67,135,114,157,221,207,83,143,236,35,71,229,238,120,150,198,33,202,62,254,34,229,97,195,73,203,97,195,192,212,214,220,51,188,21,
248,42,176,70,104,204,226,55,205,37,3,206,21,69,166,45,50,111,170,175,145,148,253,69,45,149,199,56,115,44,17,206,108,244,189,210,154,204,76,239,105,28,247,88,189,163,226,63,146,138,181,167,19,242,196,
219,214,43,224,193,217,59,105,237,40,242,55,107,77,71,234,43,96,55,239,182,7,114,164,212,247,176,164,235,52,14,41,88,188,254,62,250,153,243,252,62,229,227,30,219,202,72,66,118,179,63,213,15,218,20,247,
143,58,85,119,240,19,41,22,110,181,157,101,167,91,70,169,111,108,136,195,227,101,132,208,212,102,164,82,66,135,35,177,142,61,66,80,241,230,105,191,249,26,243,176,163,146,71,180,251,20,131,241,14,223,232,
221,134,248,126,206,239,36,206,122,191,220,93,83,135,122,178,195,99,62,206,241,63,188,123,87,75,114,201,118,175,231,205,174,219,125,173,181,0,88,22,239,164,155,95,55,172,117,123,52,144,199,158,173,192,
144,98,63,154,143,160,212,93,95,10,173,29,10,123,63,202,88,197,160,189,75,31,140,208,191,143,62,209,169,213,52,173,235,61,235,61,101,82,196,178,62,53,50,148,73,168,153,135,168,175,188,107,94,99,238,40,
151,239,239,242,249,111,180,182,240,67,27,139,118,85,117,100,27,45,231,82,118,96,227,105,31,252,60,213,103,235,190,147,49,216,161,187,137,197,85,217,19,30,124,252,73,218,107,71,193,194,93,238,253,195,
51,203,186,155,206,247,74,46,243,163,72,91,28,47,190,125,67,234,246,151,230,178,92,226,42,215,136,229,158,38,110,55,159,205,10,255,101,46,71,178,85,108,221,222,88,241,249,86,64,255,236,210,187,199,125,
103,240,159,4,127,159,220,122,130,171,167,181,97,201,210,72,27,17,118,66,187,159,144,124,4,32,233,117,157,59,70,128,225,129,33,231,29,71,231,115,180,235,186,124,74,242,119,179,19,123,113,236,147,31,35,
236,206,65,29,0,0,32,0,73,68,65,84,237,28,247,101,137,169,21,171,23,187,209,230,78,249,90,236,250,125,29,63,55,14,187,189,61,3,165,149,243,17,3,95,212,206,249,172,60,51,70,50,11,23,178,222,77,208,175,
233,142,107,240,173,128,254,229,180,49,178,167,131,239,83,243,103,57,130,79,197,75,79,38,127,223,1,243,23,147,5,84,159,164,243,3,89,240,247,162,75,209,169,241,29,71,44,115,4,126,30,136,191,67,207,105,
222,87,62,149,122,247,243,51,138,227,30,173,179,104,172,123,59,121,131,157,188,132,201,12,141,236,211,251,227,176,204,141,192,230,210,91,115,188,76,217,239,198,239,126,109,111,113,252,136,98,190,103,213,
159,155,53,77,127,21,160,223,159,191,39,103,254,206,148,45,218,63,252,37,35,233,229,166,233,246,207,153,228,199,57,47,222,63,87,145,129,50,42,171,116,122,86,246,119,82,214,227,247,232,239,114,116,118,
105,231,161,213,254,181,29,7,114,234,241,215,104,36,239,74,56,78,29,19,159,245,157,106,254,68,37,183,101,216,77,234,45,238,219,246,86,189,17,15,227,32,133,94,213,141,37,237,143,250,175,1,244,173,119,152,
125,173,77,238,129,191,43,171,239,15,238,62,207,205,231,197,15,208,233,118,14,243,238,235,29,162,239,58,127,220,248,223,144,117,149,236,85,105,247,223,71,255,77,216,125,142,246,199,143,179,60,28,177,11,
147,191,228,99,82,243,181,216,31,45,250,16,245,231,224,1,236,62,212,2,210,251,15,221,206,180,124,229,30,157,245,180,231,78,28,173,178,244,135,148,241,249,53,128,254,89,10,158,72,221,178,129,103,209,244,
30,237,250,244,121,141,93,50,233,62,120,175,245,22,5,175,143,125,130,134,145,163,103,246,187,169,246,157,180,232,215,193,226,239,117,29,254,235,132,207,211,163,172,216,157,71,123,85,28,31,49,88,144,212,
109,145,237,58,89,3,119,156,14,213,63,222,71,144,213,213,39,7,141,15,82,59,156,142,36,144,151,158,217,119,165,233,175,2,244,39,76,160,25,172,199,108,234,13,37,48,183,247,5,57,111,201,47,147,187,198,71,
166,13,63,28,69,168,246,179,22,213,189,236,57,230,14,207,207,208,191,136,250,55,19,71,231,10,216,179,25,142,128,211,56,158,39,217,168,141,162,58,33,249,158,230,175,179,123,103,252,191,118,85,156,191,182,
183,35,225,22,191,164,208,191,8,189,148,237,89,57,5,196,166,46,62,74,53,114,157,143,128,22,159,131,49,159,167,200,57,2,135,95,139,250,74,58,201,121,252,68,249,255,209,207,38,6,238,83,29,90,57,165,127,
143,78,202,61,228,242,23,145,75,249,250,125,64,231,153,148,135,130,175,100,130,255,51,17,250,93,37,255,142,228,230,209,147,248,96,175,72,222,95,31,117,235,54,115,73,222,122,93,109,171,133,103,168,63,235,
59,217,179,108,158,75,10,106,27,101,254,209,63,218,37,116,172,251,121,41,177,110,45,51,77,219,239,121,223,163,119,54,194,61,213,254,60,222,223,78,246,9,121,179,237,84,119,109,195,157,231,253,43,250,21,
128,190,3,42,183,158,43,221,160,207,109,16,57,165,35,151,224,118,234,248,157,13,113,106,78,62,9,140,119,158,75,102,245,254,61,197,254,71,79,144,124,20,5,127,51,61,203,214,203,167,193,156,29,144,175,164,
86,238,103,251,191,82,222,109,135,231,174,113,50,45,173,89,45,1,253,183,68,38,95,37,231,34,158,253,64,131,147,231,237,12,4,136,117,156,250,123,224,25,248,87,238,18,127,114,3,219,239,223,217,254,143,126,
2,113,150,231,100,111,198,93,176,255,41,116,119,237,212,114,235,133,149,219,109,190,35,231,22,137,190,156,181,249,80,132,254,95,52,102,173,148,210,110,117,124,161,129,89,222,102,131,158,88,252,223,245,
120,225,171,219,221,241,156,119,82,244,127,215,243,202,127,244,213,244,41,189,31,58,249,129,77,167,188,118,222,114,234,151,117,253,125,124,142,46,175,151,124,237,218,141,205,207,140,207,39,108,192,83,
111,34,33,57,64,255,173,198,235,254,180,221,121,178,188,230,245,216,50,219,152,144,101,145,249,24,254,215,206,111,70,181,148,82,90,252,27,109,203,186,201,189,191,113,188,254,209,215,82,45,231,78,237,142,
163,249,138,98,159,215,208,239,14,226,118,30,129,101,227,233,119,15,29,182,182,119,233,140,231,237,82,154,162,94,57,64,207,6,227,19,202,243,20,61,41,89,60,208,111,38,115,238,8,185,209,100,6,214,21,10,
124,245,236,125,233,166,178,122,254,19,139,171,140,198,207,213,246,127,244,91,136,117,104,87,175,118,178,75,165,148,143,126,96,230,187,244,127,39,242,222,15,195,118,71,50,162,115,158,39,179,193,219,26,
223,181,93,139,148,59,237,44,252,194,119,138,223,167,207,202,186,111,240,161,212,135,68,242,187,102,237,115,247,239,154,181,175,220,168,24,165,225,34,135,34,155,59,220,16,244,29,143,11,254,209,223,69,
188,135,228,52,82,223,74,45,63,72,234,241,220,119,61,170,139,104,187,239,203,130,207,245,108,218,154,253,7,230,92,182,134,39,123,116,99,151,251,207,140,91,210,190,247,8,245,205,141,9,50,229,147,48,104,
199,45,132,76,18,73,212,70,48,253,110,231,138,207,211,244,85,25,29,254,60,165,50,68,119,54,203,253,139,210,255,209,211,212,232,56,138,224,241,149,177,40,243,52,30,53,61,188,206,184,189,183,215,193,141,
64,80,239,249,185,17,205,174,140,244,129,44,49,127,123,168,94,38,140,3,138,37,128,44,234,91,218,2,244,196,135,248,50,122,66,101,51,189,250,74,195,125,52,130,135,195,205,17,192,120,214,118,198,230,49,250,
146,205,120,205,47,15,54,156,72,153,145,84,117,254,129,250,63,250,4,225,218,68,0,199,251,43,71,245,147,239,162,27,103,248,141,236,236,115,207,138,247,145,232,94,34,123,135,23,81,187,247,8,229,116,76,118,
235,111,1,186,77,224,170,227,207,17,255,44,230,211,244,54,224,36,195,16,241,124,127,228,246,57,40,67,177,203,231,221,71,44,245,195,31,190,232,100,122,209,55,199,17,200,171,212,59,167,234,121,172,254,165,
218,255,209,83,180,163,83,88,230,68,7,159,182,196,42,34,255,96,140,43,169,175,75,101,130,62,133,60,119,251,200,245,86,143,243,182,219,12,211,244,105,132,174,110,173,174,125,217,86,167,103,232,6,232,110,
179,217,205,229,190,185,159,46,34,61,83,235,148,207,118,3,111,208,87,107,71,107,173,180,203,137,80,159,157,101,173,141,12,232,47,211,238,127,244,11,40,74,95,179,179,189,10,153,190,66,39,93,202,253,3,105,
253,93,57,178,148,123,70,70,218,141,87,231,218,102,164,45,170,198,50,36,143,120,87,143,49,90,82,32,219,135,241,71,207,147,74,72,70,201,220,95,64,161,152,103,242,47,75,215,189,114,219,173,194,240,71,138,
189,211,86,92,38,121,186,254,192,212,158,120,174,239,82,107,77,26,70,165,177,89,215,254,129,248,63,250,20,169,76,25,71,226,152,49,42,112,28,93,187,253,245,149,5,153,117,243,182,49,184,103,17,35,76,219,
145,198,148,217,24,34,247,237,248,221,46,75,208,110,131,103,216,222,162,137,168,238,170,43,127,230,100,169,199,238,145,63,241,117,64,222,61,195,29,15,113,107,163,65,90,239,25,218,225,183,183,161,99,175,
31,187,155,87,12,224,53,119,197,242,124,112,80,190,12,36,23,63,6,195,145,183,50,150,165,252,26,55,245,31,253,82,98,208,142,202,200,103,230,95,68,238,121,254,119,189,225,212,244,105,44,77,110,3,182,26,
217,169,157,126,121,236,146,33,97,147,182,144,116,114,53,11,240,12,253,142,23,245,121,83,61,158,161,111,126,207,253,108,106,154,126,190,92,177,68,84,115,187,145,132,22,125,98,101,22,237,116,249,173,1,
104,230,8,159,21,143,150,43,55,240,240,211,58,0,215,175,120,38,61,120,55,223,247,29,169,119,55,157,252,163,127,244,14,169,148,123,118,189,20,177,118,71,161,246,76,42,141,72,61,6,248,142,204,85,29,255,
177,180,27,192,88,70,121,1,203,235,192,26,108,96,133,42,187,245,236,220,57,51,117,217,6,0,186,26,38,132,3,209,194,15,49,123,145,116,120,79,167,70,2,111,78,164,186,215,19,160,210,224,111,142,79,181,146,
237,172,221,202,18,236,42,209,158,64,112,156,171,214,126,201,135,169,250,209,207,210,91,47,191,166,57,99,250,47,245,254,143,62,74,173,141,127,93,251,6,112,247,172,100,217,123,60,244,180,21,230,188,236,
119,88,249,40,212,232,107,121,202,69,153,69,60,111,215,127,54,211,141,62,77,111,115,122,89,74,94,62,78,225,50,50,32,139,71,248,14,218,254,241,211,166,158,52,126,223,212,158,164,218,79,159,141,134,245,
164,87,88,23,69,124,100,24,251,220,187,35,121,62,222,217,104,181,50,149,202,167,220,169,229,27,223,96,118,237,125,213,123,232,226,28,163,154,40,34,26,127,63,252,38,197,63,250,71,72,47,255,191,206,127,
87,104,49,192,156,126,144,73,101,29,107,121,173,209,214,228,103,76,30,147,243,43,178,107,142,130,52,59,30,79,185,180,93,174,246,63,75,210,165,246,17,69,101,135,29,55,153,66,191,106,138,137,190,84,195,
96,73,22,188,150,82,202,31,47,244,202,47,104,244,239,179,180,51,29,56,152,17,56,235,193,124,81,8,246,34,82,87,32,161,90,246,16,113,119,73,228,243,161,251,16,43,155,31,135,231,231,112,120,208,125,199,249,
227,45,168,70,201,8,98,234,189,9,15,187,87,139,216,61,39,217,63,250,71,134,6,32,211,181,82,180,35,157,233,226,167,244,52,14,69,78,107,191,206,143,159,12,52,111,131,179,22,82,58,105,188,219,141,44,28,15,
175,225,93,17,194,231,21,2,121,38,150,116,215,45,99,245,199,66,212,78,144,95,75,107,42,138,255,16,109,78,70,7,17,217,217,112,4,212,11,94,147,159,186,153,74,163,116,65,180,167,35,248,136,161,5,42,94,106,
218,145,129,86,26,181,210,101,172,158,127,46,199,206,53,43,181,138,44,62,65,3,192,241,221,115,76,189,215,224,217,147,72,181,171,227,127,244,143,158,38,180,85,181,232,108,22,103,154,250,181,81,255,131,
209,121,111,227,94,45,149,51,91,181,2,101,40,14,202,107,251,85,219,204,233,105,47,116,172,189,139,43,19,77,57,220,86,101,241,97,139,46,131,92,107,137,191,136,217,41,216,20,167,162,240,85,176,255,60,185,
220,64,144,194,181,82,246,39,43,109,222,12,7,234,229,245,220,112,30,53,224,215,169,80,26,176,25,88,222,73,107,123,176,247,173,85,183,32,246,219,143,84,39,204,133,216,218,95,252,222,234,72,99,246,246,185,
128,50,126,181,150,210,244,252,255,139,208,255,209,87,81,43,165,252,233,155,72,33,155,164,214,244,87,172,42,180,44,221,81,222,91,207,166,38,221,59,204,133,85,230,4,25,55,83,107,70,174,46,200,60,72,185,
143,247,208,101,29,182,17,215,204,64,126,159,179,46,59,159,212,146,159,136,149,195,230,195,181,40,197,255,231,44,210,142,98,175,207,144,235,91,16,173,91,184,153,222,204,74,206,48,238,76,60,47,110,79,73,
98,71,180,21,183,185,45,229,225,91,29,41,236,169,113,133,231,193,243,156,206,131,245,88,227,118,246,104,111,254,249,43,113,175,113,253,160,222,76,11,52,219,228,84,187,248,68,108,9,190,3,255,47,66,255,
71,95,70,232,108,110,236,164,170,193,245,167,168,242,223,183,127,209,109,95,86,236,150,5,73,11,149,89,88,81,203,201,240,244,148,37,243,243,238,148,177,30,253,181,53,229,117,249,248,92,240,120,157,177,
221,118,111,145,175,3,125,67,176,41,238,242,131,112,64,137,217,120,188,240,69,239,36,238,182,19,199,237,65,125,59,135,222,160,135,169,246,68,75,228,45,152,244,107,140,165,167,23,86,157,173,214,230,75,
182,208,15,36,32,3,158,115,72,49,6,56,153,207,117,249,158,226,30,189,251,146,104,189,206,118,58,144,227,123,233,21,58,175,34,14,216,89,252,143,254,209,151,211,216,241,126,157,246,107,87,22,137,95,199,
252,228,55,220,145,194,199,85,33,169,156,194,142,164,45,62,172,254,134,181,221,236,4,21,151,153,204,178,180,238,168,135,235,213,151,81,252,60,246,86,190,16,136,33,228,150,183,188,99,17,205,201,159,82,
170,209,23,176,121,215,177,13,240,231,103,0,51,182,207,208,157,180,173,2,49,39,234,106,166,23,184,29,223,86,160,128,40,122,1,157,213,210,128,8,250,7,27,171,54,232,11,58,133,2,173,247,67,217,130,227,232,
18,250,196,139,204,71,3,207,243,82,164,90,62,227,8,218,169,172,22,184,123,251,120,172,222,221,61,124,159,247,107,220,217,175,163,159,234,196,252,109,227,156,82,127,211,66,126,47,180,78,96,47,101,56,164,
159,154,183,153,209,155,112,185,215,150,77,58,219,191,217,198,56,176,92,170,76,179,101,248,166,203,69,74,60,141,26,7,187,54,14,251,120,167,240,59,46,134,27,174,43,217,221,192,183,105,36,183,191,111,243,
6,25,253,41,197,219,192,126,141,37,153,229,120,178,62,67,8,0,25,184,123,213,161,145,227,188,6,148,227,91,140,181,182,217,100,215,118,109,78,1,34,223,205,110,72,139,102,177,47,222,201,130,161,187,93,49,
186,93,112,194,117,12,233,100,30,177,149,253,37,94,10,58,129,31,160,203,89,72,119,181,99,219,61,178,49,47,232,159,233,241,79,5,192,187,244,83,129,243,111,27,231,144,186,254,113,22,73,148,107,224,32,143,
203,79,139,67,231,19,231,222,108,73,6,9,2,229,170,58,180,129,229,188,218,179,129,205,149,158,109,138,244,166,16,46,253,248,155,41,234,249,69,85,43,79,20,101,31,46,100,77,229,170,96,239,179,182,74,41,229,
207,203,248,229,12,237,223,250,137,143,19,165,212,74,174,76,66,66,240,50,139,57,94,81,222,181,25,129,123,221,172,62,205,211,103,16,188,4,91,119,149,229,104,165,212,86,170,9,32,149,23,204,50,146,199,39,
189,200,5,152,15,167,227,70,54,70,164,9,63,77,35,27,80,166,174,180,46,11,125,18,214,68,32,155,50,254,103,192,229,31,125,29,129,254,29,189,102,25,252,146,224,227,212,29,136,43,227,150,59,229,145,141,184,
224,86,98,234,26,72,108,189,136,127,117,160,56,74,86,183,234,165,12,210,93,0,175,192,245,142,147,124,201,89,78,115,175,187,100,113,189,140,174,51,177,158,254,112,145,104,206,102,182,231,208,184,191,67,
160,76,71,213,208,171,169,48,167,125,198,154,45,59,143,139,119,22,1,164,83,73,6,0,198,82,9,151,219,55,136,13,119,39,160,42,63,214,79,176,228,20,138,180,154,67,230,134,42,191,168,219,163,139,90,199,248,
125,124,223,5,62,43,234,50,224,51,245,174,71,120,253,63,156,102,255,219,232,55,58,92,21,156,77,116,175,71,6,9,29,99,124,92,68,78,234,39,116,147,157,138,117,134,173,206,104,120,114,41,189,71,238,199,79,
176,94,54,123,46,24,241,111,10,177,93,180,246,48,177,177,70,78,58,28,206,150,112,174,240,241,135,105,107,229,124,120,10,163,115,106,226,26,197,101,111,254,176,77,155,118,113,53,8,190,11,143,19,165,160,
86,146,168,171,245,250,79,195,203,215,69,252,244,235,88,24,9,0,162,42,233,15,180,152,18,197,21,118,67,150,140,157,17,152,75,123,175,179,186,179,162,125,8,221,72,64,181,232,5,161,211,95,138,251,199,55,
182,195,243,111,110,202,45,194,235,175,113,46,54,244,235,46,253,70,144,249,173,244,27,29,46,27,241,85,227,8,203,236,17,189,218,246,73,170,0,90,252,198,74,92,169,31,8,128,116,64,140,5,192,198,129,105,243,
221,156,54,199,186,13,24,100,92,118,157,235,135,29,152,245,70,64,215,10,25,248,51,237,234,129,223,202,66,214,33,59,137,210,239,155,241,180,88,21,73,245,167,148,200,150,93,0,101,130,153,10,206,73,26,23,
62,74,13,140,182,188,79,231,206,103,195,40,95,42,9,244,2,64,151,31,99,27,165,76,50,57,22,94,188,55,103,197,139,166,220,107,52,195,150,254,236,33,68,209,206,187,229,230,50,149,3,213,9,13,200,98,238,191,
96,231,248,203,105,128,8,60,123,54,14,70,202,68,239,170,44,209,29,45,255,141,32,243,143,190,137,90,195,112,120,2,123,180,201,179,181,1,180,59,235,235,116,13,182,82,74,235,111,171,180,86,218,86,54,11,243,
12,125,93,37,134,210,180,118,89,47,96,17,5,77,124,69,243,91,151,154,178,94,242,154,200,174,192,193,122,244,172,239,48,237,158,193,157,157,248,73,152,220,204,66,51,141,77,113,142,119,189,128,208,4,48,173,
68,229,127,10,169,78,142,136,12,116,75,199,116,88,9,251,153,36,58,150,99,209,172,94,184,84,65,194,183,186,195,113,246,98,245,250,47,64,248,90,176,141,185,115,27,34,229,194,218,163,254,14,235,39,65,125,
78,83,16,217,148,82,112,103,176,3,115,81,62,245,131,254,209,63,122,138,140,211,11,89,164,126,15,119,180,247,13,113,180,235,125,247,151,40,143,229,186,156,134,82,138,222,125,31,87,30,173,230,46,125,11,
142,119,120,71,45,116,71,162,112,138,110,205,122,212,233,54,196,59,16,198,214,44,153,21,28,10,39,66,19,151,71,113,140,75,10,218,250,188,221,63,222,166,113,116,203,199,95,140,230,160,84,59,52,177,179,255,
15,88,245,2,181,192,189,9,136,174,233,50,242,20,155,173,42,255,145,163,68,190,159,80,83,110,7,67,55,101,24,240,76,56,170,209,60,187,38,156,195,113,224,245,194,115,193,14,160,79,107,77,143,198,141,51,195,
70,135,192,221,125,32,227,50,140,42,250,248,47,1,248,15,246,207,183,40,113,139,127,20,69,54,166,148,107,173,224,179,114,32,147,121,2,144,239,245,63,145,130,231,117,210,248,154,163,8,0,179,58,122,230,204,
16,204,197,45,107,219,51,17,25,151,114,217,209,85,134,64,88,241,58,239,73,33,5,77,30,30,87,16,62,163,224,75,143,150,200,124,4,244,167,59,122,83,95,108,250,3,223,168,152,247,195,254,60,74,171,84,187,166,
87,167,77,170,163,223,81,153,8,5,136,88,71,93,228,178,176,129,196,71,202,115,201,226,180,108,229,95,64,40,61,222,147,147,4,253,234,174,28,38,172,152,179,119,36,52,3,240,154,63,148,118,103,67,134,27,140,
174,11,174,124,151,173,246,242,112,254,95,38,158,155,223,54,30,94,255,191,134,118,199,9,65,219,241,32,3,27,245,131,163,184,10,127,63,49,95,211,206,183,17,157,231,142,67,151,31,173,204,206,204,248,94,84,
60,157,33,113,9,70,240,250,175,181,110,198,7,88,227,224,172,99,217,186,147,198,215,192,212,206,102,250,88,84,23,105,123,177,232,243,227,100,243,231,230,196,61,212,112,41,247,158,106,71,166,120,207,234,
223,103,151,145,81,226,27,30,68,237,3,154,86,21,55,163,160,20,111,59,133,139,152,76,94,129,163,153,200,53,39,218,60,70,163,35,5,93,234,249,186,89,40,91,11,77,21,179,170,27,145,3,216,79,147,138,206,139,
53,41,242,99,28,213,143,211,127,157,158,92,213,155,90,246,43,105,87,246,165,78,65,64,192,192,61,139,180,97,128,17,204,63,53,126,85,69,115,59,245,74,41,195,110,181,121,45,151,115,174,210,216,249,177,206,
1,199,227,42,108,168,11,91,167,174,218,175,116,79,32,48,238,194,56,169,115,210,42,216,25,150,176,139,78,224,143,204,236,92,99,31,80,134,245,108,255,9,236,160,73,123,68,143,37,63,78,183,0,1,246,60,86,188,
82,164,195,216,232,239,184,238,195,89,87,103,202,25,92,199,27,181,185,137,79,9,68,230,207,190,42,95,98,109,52,118,26,101,102,117,42,174,97,148,12,78,1,85,134,232,247,83,64,233,140,94,41,46,218,145,190,
125,160,208,191,25,96,158,162,39,199,96,53,239,255,117,7,234,101,167,108,166,173,95,115,64,8,169,246,47,1,245,173,200,92,147,181,191,7,153,132,48,136,210,25,183,14,228,120,191,59,19,35,128,10,204,21,95,
170,165,208,199,101,148,3,113,77,23,131,34,130,176,168,203,134,208,66,145,239,116,148,156,94,141,225,31,200,60,206,74,213,70,227,220,208,151,129,59,60,72,217,223,248,129,255,45,215,198,190,58,11,84,174,
163,249,98,81,238,110,159,79,115,211,141,9,251,154,135,166,11,35,242,26,213,182,134,32,164,116,229,123,206,182,168,207,52,208,129,108,110,68,200,221,48,129,33,122,154,198,198,157,215,201,140,120,68,132,
177,11,236,183,101,121,148,219,103,249,70,60,127,26,200,42,121,190,82,198,157,182,238,150,153,81,159,95,113,29,216,149,51,31,209,211,217,21,179,182,190,128,6,24,131,93,173,65,16,244,178,209,12,159,243,
102,157,133,142,219,159,23,60,3,116,86,204,53,119,14,184,211,255,110,76,16,98,87,196,63,162,241,243,169,252,174,60,6,59,55,179,47,111,17,238,228,124,165,44,118,187,4,187,190,91,217,114,4,74,161,249,9,
60,58,196,110,124,189,130,25,216,116,74,27,123,50,206,161,93,151,220,25,9,153,57,42,60,140,99,164,92,229,14,194,246,67,66,211,179,200,166,195,142,101,252,155,227,79,17,166,210,249,88,201,96,8,12,22,26,
210,187,106,254,63,55,235,173,232,116,220,142,117,228,77,250,164,143,175,120,223,109,111,167,30,207,253,83,99,153,150,169,246,163,33,195,1,134,61,31,141,34,249,232,195,52,79,17,58,226,141,55,148,134,53,
78,72,140,8,129,247,176,227,42,138,205,120,97,132,126,32,141,179,107,96,255,92,239,192,211,80,209,254,120,16,64,65,159,178,47,211,177,155,172,235,197,31,159,177,175,186,243,135,47,32,176,187,172,66,112,
252,9,194,93,156,47,32,89,43,75,131,127,12,42,81,36,45,241,141,156,27,246,81,141,23,183,187,146,229,140,4,125,226,178,77,221,206,199,131,61,205,38,21,175,11,70,87,193,121,115,175,176,221,164,175,248,133,
62,236,13,31,23,56,118,128,79,215,55,29,105,73,63,45,186,253,42,250,45,253,222,145,243,171,157,161,23,67,207,17,215,57,190,41,242,135,94,107,123,71,95,83,145,232,253,247,117,27,184,130,138,23,202,35,162,
59,26,28,174,11,127,2,86,43,50,123,167,54,43,187,136,62,195,138,82,186,167,225,72,54,7,6,105,233,124,225,176,199,183,36,13,64,231,215,215,212,183,12,6,211,97,232,63,183,140,71,167,215,187,218,76,29,99,
196,39,19,207,120,16,56,14,0,188,47,239,212,151,27,71,232,73,46,196,131,125,13,166,249,116,137,36,238,229,148,120,222,119,30,223,53,16,102,62,61,118,203,54,170,58,38,231,46,195,103,25,81,125,208,3,236,
17,12,95,203,202,115,153,119,165,251,110,64,59,93,248,79,211,110,4,241,213,100,87,201,125,10,35,170,135,232,101,83,102,4,62,248,131,157,225,239,40,28,226,213,49,85,126,101,120,103,13,179,221,226,112,59,
171,86,250,90,166,235,102,176,213,200,207,113,147,116,103,178,84,24,45,248,202,168,94,181,207,209,4,53,225,157,133,89,247,228,135,114,77,202,221,240,35,96,215,66,127,193,242,237,30,232,134,50,241,226,
93,234,65,121,13,214,206,220,33,139,30,253,58,143,46,171,116,121,115,184,233,34,172,134,110,106,34,92,54,34,228,43,39,123,31,2,23,147,28,60,159,106,255,110,8,155,244,178,33,250,3,59,106,209,116,227,169,
34,117,164,147,30,126,39,144,237,234,239,167,101,40,229,179,114,220,1,213,213,242,220,165,47,153,95,218,103,130,224,205,193,74,131,227,79,141,249,89,159,69,96,64,131,191,149,249,232,118,10,22,107,51,168,
30,7,32,114,28,78,3,207,93,69,238,248,216,124,63,67,158,250,212,4,77,124,241,212,81,118,31,150,81,27,226,240,90,31,240,143,167,220,139,245,68,239,124,13,137,13,181,81,20,104,167,242,133,96,82,165,23,69,
0,231,242,9,129,179,170,37,230,91,249,32,163,231,214,232,14,167,219,217,243,221,37,51,28,93,47,110,204,253,167,83,238,60,109,203,192,0,119,224,87,237,3,255,180,104,51,26,193,19,103,244,93,62,119,232,41,
190,60,31,187,243,243,157,206,206,150,140,129,51,202,124,148,179,186,211,198,45,61,190,187,195,157,2,122,243,252,56,70,220,64,134,82,122,138,58,138,203,95,227,230,101,108,124,182,217,141,97,118,69,121,
39,7,120,85,91,195,84,237,156,173,76,233,124,15,221,255,204,119,68,243,91,238,213,27,252,204,6,243,38,186,167,9,191,234,117,178,32,199,32,245,250,32,163,242,164,156,7,68,17,180,242,144,140,195,40,102,
69,203,91,207,86,86,43,165,52,253,235,58,169,71,90,202,43,231,192,153,0,104,126,39,161,128,30,162,43,255,97,11,121,170,86,206,145,11,248,96,148,163,218,188,163,206,95,9,22,239,44,183,165,131,243,38,127,
164,104,62,190,139,190,179,253,208,145,162,231,87,153,140,168,179,25,184,237,200,176,75,231,99,166,237,155,177,39,27,76,71,208,176,33,244,114,205,178,151,180,195,19,203,108,14,130,247,85,40,188,2,16,241,
93,171,30,123,90,15,98,109,208,182,35,210,120,109,173,22,31,125,243,177,19,240,131,212,119,88,223,54,178,215,70,184,232,29,116,4,234,49,33,148,30,194,189,116,134,255,85,142,191,40,152,234,44,165,80,214,
29,152,109,184,111,5,192,223,12,164,92,131,205,252,41,225,25,89,33,231,105,223,152,148,147,180,246,59,234,149,69,162,28,229,180,50,245,172,54,255,197,184,239,140,236,126,51,69,234,241,55,143,231,206,146,
48,142,38,60,203,84,107,67,57,96,25,62,157,180,223,41,117,2,110,24,121,39,3,25,38,205,146,236,15,158,186,112,216,179,127,253,21,22,240,164,179,92,143,216,133,206,112,157,192,107,249,139,15,197,108,5,125,
243,70,237,209,121,87,19,207,66,210,220,229,222,74,152,110,87,116,242,74,216,29,186,225,40,249,242,245,37,227,112,74,224,166,116,218,224,30,58,58,78,158,11,224,134,19,80,77,117,55,233,242,248,1,234,223,
14,146,147,141,206,88,57,207,166,160,18,190,60,197,18,12,218,123,244,68,244,36,157,174,132,183,188,39,116,121,215,72,238,246,225,187,35,213,136,190,10,104,127,106,255,239,82,136,61,11,178,182,191,46,77,
4,3,57,94,59,161,211,204,201,153,94,52,183,132,238,100,112,239,101,19,86,136,73,6,122,87,128,203,182,135,50,65,179,110,227,56,148,49,56,177,234,32,216,88,252,126,202,238,184,204,47,197,137,201,96,96,199,
104,253,117,254,193,37,122,165,204,239,56,13,178,198,193,160,140,189,104,74,41,202,156,160,168,251,206,73,192,137,223,17,128,93,242,128,127,220,159,106,203,85,251,87,115,139,197,232,143,100,220,141,3,
250,138,215,214,74,9,156,170,162,199,108,172,47,144,237,118,70,232,193,114,95,77,127,27,208,126,5,177,109,62,157,219,145,33,188,140,41,103,12,145,148,227,240,21,115,118,214,198,4,77,124,69,182,103,57,
183,161,162,250,242,175,49,57,115,184,43,23,216,104,127,4,124,173,20,250,100,156,102,81,189,141,117,37,43,176,34,6,74,36,121,13,198,115,165,103,127,80,16,149,94,231,84,59,238,122,255,164,145,30,191,60,
116,147,134,87,203,169,84,145,153,225,185,80,205,54,154,36,63,127,77,177,119,64,120,52,98,82,14,148,121,143,91,158,125,210,99,60,13,78,177,27,225,110,76,249,87,3,153,106,79,173,237,113,173,217,79,106,
70,60,126,10,253,3,224,239,167,12,116,79,234,175,244,236,52,170,254,118,194,108,222,117,92,193,238,45,33,227,50,112,195,230,180,53,144,45,157,156,186,103,120,101,145,85,154,79,84,90,241,177,78,91,243,
101,6,198,54,131,179,59,115,255,135,5,192,221,238,10,216,213,123,234,31,163,90,75,83,94,70,64,108,168,59,232,181,210,130,209,176,3,213,230,165,173,209,179,59,190,23,3,82,15,198,140,203,85,127,152,137,
135,73,129,158,58,55,25,150,180,177,25,145,143,84,251,85,108,248,45,135,115,223,29,43,156,195,167,213,103,55,129,176,50,196,159,136,128,158,54,194,209,216,253,120,99,255,6,125,101,223,190,194,180,57,167,
50,48,14,106,185,125,82,190,119,178,14,195,72,32,2,31,122,36,152,21,52,246,216,183,228,214,170,180,1,167,29,234,140,249,7,52,84,117,180,169,6,151,125,212,168,178,44,238,76,24,159,211,183,138,254,96,58,
85,237,114,103,96,183,207,216,63,183,204,92,244,191,137,134,184,0,220,35,1,199,162,201,249,230,238,113,236,157,165,144,220,101,16,40,218,220,150,50,217,92,85,110,209,3,32,159,58,95,166,255,160,80,245,
64,30,205,248,131,25,29,213,220,226,220,222,188,156,59,218,136,249,174,196,42,186,248,212,170,249,105,217,133,119,251,201,107,51,178,205,59,199,39,180,146,251,134,79,43,152,192,111,154,7,27,227,148,60,
135,246,125,139,80,111,222,227,77,113,231,21,76,96,112,177,226,191,107,34,48,202,77,171,52,250,183,65,213,29,60,83,118,200,147,241,227,192,169,205,95,89,75,146,2,131,254,116,15,0,3,168,232,149,52,181,
11,254,211,116,146,214,87,30,154,251,162,29,58,39,69,191,46,178,12,186,17,232,119,196,11,148,41,7,24,22,102,221,68,196,119,108,226,59,89,44,188,248,68,182,230,14,125,34,2,142,104,183,13,51,44,180,73,233,
93,57,119,28,141,167,233,211,14,195,110,59,239,246,51,203,166,156,30,63,73,239,0,31,131,208,233,99,203,79,128,185,203,22,148,114,1,201,33,25,219,234,109,210,105,134,114,96,19,203,22,84,9,65,254,100,136,
119,193,159,26,10,155,88,70,7,62,202,27,144,21,56,64,153,104,127,92,155,148,70,80,155,227,122,153,79,166,221,199,107,107,7,232,161,188,23,243,227,34,110,236,40,246,190,6,17,149,175,243,12,231,98,71,211,
238,140,83,224,138,237,140,70,247,240,26,9,191,83,183,247,157,199,0,249,190,187,81,241,73,181,57,93,171,209,245,250,21,222,233,135,232,171,36,255,174,17,90,205,241,137,92,95,213,135,72,230,105,107,196,
207,163,62,212,198,9,201,246,31,90,11,38,162,12,59,123,47,96,99,10,37,62,77,91,245,8,121,101,123,33,50,49,111,61,65,89,228,163,154,151,34,97,196,83,195,75,33,189,158,161,83,41,126,117,77,149,249,137,20,
117,188,226,195,96,114,221,156,158,93,0,232,163,3,114,63,29,175,15,146,104,58,58,31,85,112,14,91,94,214,49,108,240,119,163,173,29,66,167,224,221,232,102,117,141,105,55,137,98,190,142,245,1,128,207,34,
206,119,104,167,127,79,169,234,50,224,56,164,237,185,185,193,67,141,247,147,105,248,76,174,173,185,125,243,235,92,31,115,78,20,0,108,213,43,54,84,38,132,219,150,151,148,172,155,111,181,211,93,137,192,
44,94,31,243,56,104,187,66,29,12,102,185,28,245,233,68,31,166,121,21,217,99,24,199,254,139,122,187,186,251,71,217,46,117,62,95,85,195,232,252,115,136,54,190,18,119,160,88,233,156,73,80,20,105,37,145,127,
146,3,15,62,66,56,233,189,172,200,3,157,44,198,154,207,185,45,123,149,175,144,101,57,249,100,235,72,181,99,253,139,241,211,209,196,169,246,60,105,140,179,114,245,174,65,91,208,174,51,246,46,221,117,124,
118,202,61,225,60,236,26,193,147,50,59,114,40,185,118,121,71,250,123,16,248,133,109,127,42,123,245,22,221,112,52,12,150,84,192,137,180,83,186,157,138,252,70,64,178,47,211,104,242,149,126,219,174,55,141,
106,219,154,12,133,1,230,18,7,83,46,96,100,176,133,127,101,218,227,221,108,142,251,249,84,4,238,82,8,76,190,48,231,214,90,187,62,10,115,54,137,170,243,71,155,209,56,51,65,127,143,136,43,37,145,182,172,
219,39,85,220,142,34,221,1,198,236,252,31,120,200,21,148,14,199,114,126,73,247,76,17,234,85,57,25,142,219,244,180,1,28,191,104,245,48,223,119,232,52,178,167,192,232,136,100,132,35,232,237,232,244,128,
62,9,114,39,188,79,214,225,170,110,207,2,153,245,181,201,235,14,237,240,157,115,127,79,138,30,76,12,48,199,134,55,7,122,224,79,42,225,33,29,226,249,86,61,6,134,168,172,16,25,223,43,231,178,13,142,199,
47,141,210,43,181,25,205,79,191,66,80,194,175,171,225,23,228,84,153,79,209,233,135,107,24,143,251,135,105,204,183,205,13,203,10,255,157,7,184,63,64,165,58,186,162,142,103,212,46,154,15,4,242,92,226,91,
111,141,175,85,128,225,229,237,120,156,189,109,112,38,198,194,20,217,139,125,105,142,215,182,171,127,122,239,78,244,84,107,149,159,129,253,78,122,39,178,191,219,143,85,189,200,57,123,34,130,71,126,39,
244,105,147,20,217,238,93,71,213,154,158,234,174,125,82,254,35,157,57,112,254,163,70,122,86,175,131,59,63,99,206,136,223,170,234,12,35,71,35,148,245,198,194,153,188,170,201,84,102,21,162,102,28,212,144,
247,247,178,173,182,182,203,104,92,192,190,59,31,127,20,120,71,228,211,243,159,93,66,239,238,112,47,165,59,5,47,215,167,185,244,79,28,111,154,175,29,113,25,112,130,92,74,197,49,10,132,204,198,142,110,
41,133,73,127,35,119,124,234,110,15,196,93,219,215,56,161,98,26,131,253,147,208,110,147,50,145,173,74,199,243,242,85,81,251,211,237,124,133,220,89,160,178,11,90,225,82,57,148,225,46,157,100,62,178,250,
81,185,26,28,255,20,26,206,251,27,143,155,118,94,77,179,36,0,13,254,222,125,163,10,35,93,209,76,92,103,76,162,119,234,67,232,35,59,155,225,137,23,133,74,27,60,126,205,8,254,234,232,138,70,202,221,189,
178,141,2,110,187,64,207,17,166,219,119,128,93,6,195,36,248,242,81,138,67,46,33,215,82,18,93,65,63,195,94,196,151,144,37,240,37,19,224,193,69,213,29,142,3,193,199,235,137,87,61,206,96,156,82,45,54,219,
114,10,48,119,181,236,78,244,211,74,9,7,235,19,218,126,50,22,119,129,249,43,193,67,201,136,170,159,201,242,100,230,70,149,61,5,108,214,159,157,246,182,245,236,7,189,85,129,152,55,230,233,78,36,112,5,132,
184,127,231,24,136,33,51,232,4,212,167,50,184,145,89,69,33,203,137,120,149,79,208,233,16,140,156,84,162,31,50,23,216,249,213,98,178,133,59,51,242,135,247,255,168,47,194,229,175,169,125,70,49,13,0,28,190,
186,86,10,165,41,92,100,222,47,103,233,8,44,103,47,227,199,120,198,53,81,22,249,248,231,248,85,79,38,86,4,101,140,50,16,138,70,119,41,251,178,75,67,129,200,9,105,61,203,113,104,122,95,142,193,250,71,40,
158,162,119,120,191,243,57,99,237,153,183,212,153,81,173,61,54,54,155,147,126,103,5,71,117,34,61,149,254,236,13,25,238,68,241,144,116,186,77,152,129,200,250,168,174,143,107,95,249,1,15,213,126,114,207,
207,207,61,25,85,36,122,58,246,195,238,212,121,252,10,44,234,150,100,46,58,79,132,8,65,119,51,248,67,127,129,37,192,136,159,237,241,78,19,131,255,129,77,26,191,135,174,234,224,174,246,94,14,239,129,168,
31,163,93,3,27,41,57,8,95,68,0,0,32,0,73,68,65,84,207,128,17,233,157,5,67,26,128,245,255,223,222,219,45,73,174,242,192,162,48,177,238,118,236,247,127,169,253,58,231,246,227,92,148,129,84,42,37,192,229,
238,169,94,171,53,49,93,46,12,146,0,161,63,176,107,242,4,55,137,246,174,176,237,9,121,18,133,175,90,85,207,251,174,30,193,232,190,227,234,252,86,83,235,107,21,211,223,80,123,167,239,62,64,144,198,185,
218,31,24,90,184,112,233,189,52,5,88,138,159,224,187,153,173,155,176,114,86,56,83,35,219,211,253,29,7,40,42,127,87,126,118,156,173,213,247,201,76,27,65,198,142,51,116,135,183,71,219,220,25,188,234,117,
224,218,255,183,132,204,147,124,110,176,34,166,8,199,30,41,7,86,191,213,28,89,191,93,93,145,109,20,155,31,205,148,97,226,114,96,14,206,244,252,201,116,128,54,224,196,233,96,138,89,126,111,57,25,37,120,
227,109,74,227,183,100,83,43,91,225,47,33,144,88,175,171,86,230,193,145,58,239,163,114,148,94,162,249,154,140,207,88,5,247,84,109,207,77,12,35,28,242,224,121,9,51,13,87,225,203,193,75,107,5,180,230,43,
12,119,225,174,161,121,91,145,211,128,53,113,189,63,2,26,180,136,197,156,171,192,33,162,173,248,13,241,110,110,133,236,26,214,213,253,232,128,207,144,246,106,87,200,73,20,30,241,112,103,142,182,163,192,
0,188,186,236,154,189,233,251,229,76,166,158,112,86,80,166,28,190,227,76,21,153,51,12,40,160,99,91,250,15,160,185,11,121,87,151,160,18,78,201,1,87,131,225,30,197,46,24,235,65,93,221,159,191,148,21,51,
25,175,72,251,196,254,109,237,161,171,251,150,178,50,62,239,249,253,248,158,227,173,250,130,250,235,124,251,251,113,30,103,110,58,61,159,164,104,174,30,67,30,127,96,49,224,10,189,188,196,239,131,169,57,
117,181,156,252,144,99,119,242,14,130,200,119,62,153,149,239,140,212,171,120,217,7,207,255,152,251,235,17,55,245,154,76,151,106,79,112,26,218,140,167,236,25,241,11,65,39,38,235,51,174,134,109,4,93,131,
58,48,252,195,121,22,180,230,151,102,202,204,24,22,63,54,200,59,223,59,49,242,91,16,100,4,212,154,47,139,50,135,58,104,151,198,24,139,123,79,65,151,133,187,209,236,10,119,105,132,251,234,244,148,132,189,
89,140,117,95,71,186,42,89,221,32,236,167,193,148,95,114,197,189,129,148,234,86,85,40,120,82,14,215,106,90,194,231,208,51,152,58,47,209,252,15,192,248,217,184,3,163,222,204,117,51,44,197,206,86,119,179,
98,188,35,253,193,244,208,11,84,52,216,81,74,190,69,16,47,190,88,25,191,214,79,179,47,102,216,149,246,62,108,21,148,79,143,206,13,149,115,184,163,140,31,85,224,43,58,106,127,137,78,189,76,71,174,142,79,
231,206,86,251,27,215,89,31,212,98,197,57,63,142,149,110,30,234,67,3,26,69,152,220,23,149,57,80,14,14,222,27,180,46,122,145,35,131,116,13,143,76,111,1,202,217,146,47,218,0,254,84,123,254,225,158,21,24,
7,103,60,187,85,165,188,156,226,123,10,84,32,244,186,184,255,232,38,70,232,72,72,187,153,177,172,142,45,223,234,167,201,32,222,129,167,189,164,106,47,85,56,43,109,129,235,71,100,32,42,12,192,58,80,236,
240,71,13,84,38,239,3,177,44,95,249,158,251,112,250,82,153,78,29,63,215,64,254,184,32,23,41,84,253,50,177,243,37,144,247,176,13,163,202,35,27,184,15,166,194,94,170,198,155,147,6,23,51,26,133,155,210,153,
91,80,233,118,178,148,114,242,198,167,239,4,231,16,226,34,32,199,112,213,123,140,126,43,92,203,158,147,17,53,134,124,99,13,168,26,81,43,140,138,157,49,110,254,101,78,161,194,199,50,54,80,149,94,169,44,
198,1,219,102,124,170,168,63,219,83,100,99,207,115,213,86,138,237,85,73,58,13,61,123,195,248,139,168,155,29,241,62,117,12,152,214,19,48,245,154,237,105,219,162,20,244,26,6,123,236,120,166,17,246,226,14,
198,89,65,53,118,141,194,249,24,136,108,93,252,31,16,200,139,154,111,223,127,244,171,202,6,57,216,56,98,223,144,119,112,123,232,25,1,95,166,26,75,159,253,24,76,103,238,158,60,102,231,135,208,40,63,153,
109,213,156,44,53,16,88,53,136,108,34,102,6,15,25,216,37,23,199,227,123,144,215,212,99,193,66,89,199,159,115,103,203,74,198,106,188,190,23,12,127,252,48,44,93,163,177,82,209,159,49,56,116,170,212,148,
95,245,141,124,163,161,13,82,249,142,119,113,114,85,25,66,252,94,209,193,48,142,139,197,227,174,5,78,52,180,196,172,54,116,9,94,196,169,158,191,237,50,201,219,25,232,154,155,248,143,183,58,180,39,46,239,
227,60,224,125,171,208,155,228,73,225,109,215,248,126,130,204,91,83,161,194,133,204,237,78,180,92,163,181,1,70,57,119,221,44,99,134,246,112,176,2,125,189,130,170,144,78,158,12,111,104,219,164,29,240,159,
238,73,49,225,232,240,65,234,144,85,114,128,240,100,127,234,120,92,32,127,156,101,135,160,6,36,251,140,216,158,190,203,253,132,170,242,147,99,91,69,63,171,217,236,220,43,94,44,214,234,4,100,147,201,201,
151,196,31,244,248,165,17,173,176,165,110,107,211,2,222,239,202,182,103,70,125,238,43,215,210,99,184,79,121,209,170,225,162,181,80,1,101,123,225,195,80,162,97,12,156,130,114,29,14,115,7,240,200,113,192,
251,81,122,26,39,217,141,102,179,175,23,101,158,7,141,174,52,225,16,14,174,39,52,176,142,124,41,178,47,198,73,18,103,10,20,54,76,249,123,71,167,217,108,7,214,141,248,131,186,56,191,133,235,131,243,96,
250,221,230,233,116,197,107,127,179,160,163,125,205,137,139,178,186,97,255,56,240,60,173,185,116,17,146,185,52,107,195,45,40,189,238,185,164,187,86,43,23,3,201,123,59,176,55,222,28,204,105,22,189,230,
189,84,109,142,123,87,127,182,151,86,156,184,173,131,30,59,70,47,112,123,232,25,168,192,101,50,214,135,241,89,97,189,243,24,145,138,72,228,141,184,80,214,11,107,206,176,53,231,8,156,0,158,176,16,234,185,
160,170,117,179,179,7,101,228,183,78,69,205,17,146,62,63,145,195,244,102,169,55,127,223,150,27,24,189,226,243,27,61,18,203,162,187,254,121,237,149,14,19,17,24,4,153,150,197,239,209,35,39,140,198,48,81,
109,84,74,81,97,250,130,31,48,254,13,35,209,30,177,194,152,48,62,142,90,153,255,110,160,27,224,194,3,136,198,97,136,12,115,155,245,177,189,151,45,97,220,123,221,204,41,42,205,102,59,58,78,142,170,155,
118,174,148,225,55,91,24,89,255,254,18,176,27,88,75,34,31,6,188,150,197,20,121,131,90,205,146,48,148,25,143,220,2,94,112,211,232,83,154,167,13,112,186,181,170,123,213,19,131,126,159,105,69,95,91,172,38,
87,59,235,206,31,113,168,55,4,43,235,195,47,46,182,43,173,216,41,253,251,144,171,224,179,3,42,113,93,43,118,178,94,245,95,66,234,245,194,70,11,97,223,253,120,33,233,205,251,121,28,77,200,186,10,232,113,
86,33,212,83,9,236,195,144,136,161,192,209,59,252,156,136,101,40,7,74,99,183,82,166,178,87,145,29,58,158,38,101,251,82,232,124,74,188,27,69,28,147,87,211,106,112,225,40,59,67,132,6,66,69,182,180,176,209,
33,233,253,67,101,216,163,220,10,56,71,100,139,52,2,62,144,231,200,160,58,101,3,99,197,14,132,217,62,104,77,138,73,195,140,72,230,28,245,104,58,59,128,87,94,184,228,57,130,62,22,23,31,6,79,128,215,140,
87,231,255,131,140,249,171,63,165,224,232,119,227,187,14,162,56,148,245,250,5,45,131,182,8,201,186,239,246,52,8,44,12,93,111,110,137,159,168,47,250,60,196,160,70,122,87,234,61,170,211,226,154,91,48,196,
153,90,235,254,123,88,238,161,43,130,150,68,52,41,239,41,233,59,207,161,123,211,52,111,52,137,162,79,193,142,139,69,147,68,142,218,26,216,247,90,60,151,221,160,94,183,125,142,155,136,203,203,148,115,37,
73,110,58,96,140,31,13,187,193,95,205,183,12,185,190,59,144,178,152,126,142,178,43,5,12,32,70,126,165,148,30,113,183,238,37,9,3,239,12,32,26,169,222,174,27,2,198,95,166,17,235,70,150,241,15,218,208,206,
57,1,148,82,67,167,130,35,228,241,115,197,112,31,105,114,31,12,79,34,82,213,190,99,181,253,225,180,187,28,11,161,198,219,220,168,201,151,108,255,129,141,121,216,111,180,237,89,20,152,39,222,6,64,199,203,
204,21,206,129,112,34,26,181,159,143,224,150,153,161,136,120,254,22,0,125,87,138,209,73,181,212,114,244,115,163,132,214,58,253,147,218,114,174,8,34,253,35,137,6,223,70,219,128,176,148,175,225,224,216,
34,101,83,68,235,113,131,73,90,189,25,195,204,114,208,218,53,60,199,112,43,229,238,7,25,69,248,25,81,189,243,234,215,176,86,235,50,26,213,176,179,163,122,224,202,26,76,26,24,95,73,5,102,163,153,154,41,
215,101,189,4,188,223,102,74,40,85,24,83,242,92,165,181,44,145,45,10,6,100,90,232,179,140,57,2,70,222,21,141,0,24,204,110,196,188,171,66,114,140,198,149,35,232,43,146,239,134,131,141,29,27,178,121,171,
206,79,52,88,28,49,195,222,56,17,38,158,39,77,142,62,121,93,202,108,0,24,203,145,9,232,52,120,255,155,241,245,235,201,196,11,15,237,235,143,168,79,56,22,35,251,209,236,158,59,58,49,3,7,71,218,56,215,60,
78,4,136,187,247,81,57,51,152,138,255,187,134,188,20,43,61,245,21,236,148,98,157,148,37,151,40,41,115,70,184,52,107,165,116,151,169,11,186,184,93,142,134,231,106,72,129,41,113,244,67,82,10,107,206,215,
238,12,74,12,27,42,110,216,147,209,145,153,201,219,113,136,142,12,186,114,72,39,27,134,139,19,180,75,184,243,166,56,254,110,223,227,102,176,219,22,205,223,157,197,121,191,186,112,40,227,207,248,226,168,
66,21,122,234,94,132,21,10,177,119,27,206,31,27,144,152,165,90,202,149,53,232,99,186,231,200,77,5,216,141,75,45,33,209,15,1,117,114,187,67,55,26,77,24,129,41,179,96,100,32,149,59,157,35,107,144,140,154,
164,189,235,110,232,43,24,237,97,24,209,185,128,186,221,168,141,215,142,42,71,2,248,43,88,7,211,238,13,206,16,112,138,89,56,223,200,151,148,142,30,237,214,105,8,106,169,211,48,66,91,28,107,118,32,176,
223,206,204,4,25,5,126,191,5,175,73,28,35,228,193,204,157,80,132,60,126,42,197,175,182,82,190,23,130,7,189,112,25,47,153,99,61,223,199,202,150,242,181,198,97,161,149,41,26,189,164,187,114,231,99,150,27,
231,42,107,121,179,137,67,50,164,1,134,173,152,22,19,219,192,89,213,152,36,206,76,241,122,103,87,51,30,25,244,129,60,196,190,242,110,190,14,112,96,189,1,122,121,120,187,156,105,129,244,173,185,183,185,
75,99,167,252,85,34,184,117,174,229,108,187,227,161,89,122,164,176,150,243,86,109,81,84,179,34,71,76,51,6,219,53,26,185,150,16,253,32,192,148,169,233,65,55,122,34,141,61,70,22,12,200,48,140,5,22,47,40,
123,87,142,215,202,72,176,81,5,3,172,14,174,201,71,189,208,168,35,223,149,36,181,1,175,136,167,103,48,202,40,152,153,129,62,46,173,153,177,176,125,215,74,187,34,158,98,157,33,76,161,35,143,209,30,55,102,
57,24,88,137,26,103,73,56,4,38,11,1,153,155,33,27,232,24,93,245,63,1,180,38,43,192,223,206,58,52,163,237,218,28,104,2,119,107,12,217,66,29,41,110,155,185,168,71,99,158,213,236,61,116,207,140,8,39,198,
225,147,221,93,56,52,194,94,236,88,215,109,131,126,102,196,159,16,92,232,208,70,202,61,51,166,206,187,186,197,197,94,165,22,148,227,253,45,39,56,0,107,226,123,137,84,79,87,61,222,167,60,163,195,215,165,
20,216,98,187,225,51,143,52,40,240,211,165,248,147,1,162,61,247,104,90,1,35,189,99,132,197,245,72,215,130,225,195,58,236,181,115,106,183,27,16,76,109,155,199,169,192,192,143,161,239,89,3,194,225,50,2,
157,135,129,111,246,103,168,117,112,28,112,76,48,141,141,134,222,56,26,48,62,24,213,98,10,94,189,188,6,233,152,232,250,234,7,102,24,120,75,192,68,207,56,111,34,170,238,188,143,109,21,118,220,58,61,236,
99,153,43,115,46,151,207,113,88,167,30,169,36,110,119,214,97,119,206,8,67,157,115,227,205,211,26,234,100,50,163,58,235,19,237,225,29,132,92,79,19,61,117,178,174,191,203,53,179,26,27,250,220,169,185,75,
127,203,160,199,186,182,138,207,19,47,47,131,27,198,34,188,3,11,247,144,206,116,20,236,180,111,113,16,84,157,56,119,126,176,100,138,89,102,100,53,216,159,104,141,183,76,206,176,234,54,235,182,60,130,118,
241,221,36,255,93,144,68,111,40,85,35,181,253,250,50,140,7,206,159,51,58,36,151,242,185,103,48,160,195,80,245,91,29,47,242,115,225,229,23,200,184,131,95,61,186,4,28,166,207,144,114,55,231,4,208,177,17,
96,52,3,26,111,149,50,135,109,4,28,159,113,144,13,202,27,226,128,58,136,115,176,79,217,20,115,144,176,189,214,94,19,99,98,135,224,53,6,102,140,11,105,2,206,152,4,99,241,57,96,159,115,126,77,65,149,242,
145,225,224,158,90,195,253,186,237,156,154,195,60,99,25,249,234,189,54,146,247,160,169,206,218,174,232,92,18,208,217,154,202,220,209,199,91,30,171,182,37,56,47,119,96,203,160,7,122,7,107,208,245,190,146,
223,129,147,83,238,186,61,124,137,88,226,198,110,146,122,191,170,171,198,70,210,215,178,152,206,236,23,40,242,240,190,82,40,47,129,241,30,242,154,86,70,111,42,244,45,132,26,134,254,197,21,159,10,216,103,
128,136,184,141,194,234,202,159,210,187,8,188,127,91,202,140,238,27,24,79,67,179,205,61,229,146,24,251,209,164,116,185,180,242,134,215,198,177,162,168,220,60,126,22,13,69,199,223,163,85,232,219,224,9,
28,130,113,135,35,89,118,76,56,21,223,235,96,166,129,198,104,24,108,224,161,65,185,139,230,197,102,239,216,46,0,175,215,28,6,4,156,133,250,235,156,149,143,7,175,129,206,56,247,46,139,153,46,81,67,227,
200,169,54,83,79,97,108,238,155,212,79,11,102,44,191,190,178,119,91,230,213,174,46,212,85,124,255,87,134,124,53,79,199,135,226,152,188,254,30,251,37,119,224,228,148,187,172,121,121,227,90,134,252,226,
150,223,5,216,94,38,125,173,22,225,25,169,21,35,81,175,81,91,157,219,95,172,159,207,226,126,86,102,56,218,93,17,178,165,105,225,12,254,117,64,149,210,141,183,121,236,171,160,97,39,229,142,123,171,96,60,
95,13,233,109,98,148,242,53,206,130,106,15,188,160,17,31,188,246,168,22,232,225,253,200,73,224,169,225,189,120,196,55,82,251,100,120,59,94,140,228,165,236,131,83,224,250,133,124,171,84,56,100,34,184,143,
163,127,208,15,30,31,35,185,112,143,231,160,150,50,183,14,148,227,149,24,243,79,148,104,115,154,189,193,56,110,181,70,9,184,2,135,186,99,200,141,251,187,172,61,208,167,250,77,5,51,174,56,224,134,156,106,
143,37,160,208,30,152,212,24,65,63,213,31,243,16,195,173,67,113,22,84,252,119,48,97,223,0,147,155,181,151,247,165,12,92,192,254,230,206,100,221,231,114,231,77,123,154,3,84,118,206,100,155,38,67,229,237,
81,185,34,243,122,165,174,126,2,72,201,193,8,24,35,220,158,35,161,104,17,247,203,11,182,193,178,132,62,158,32,71,117,150,173,54,51,135,188,207,61,190,55,235,48,0,111,76,27,203,152,14,7,69,124,226,125,
220,227,116,123,79,247,10,186,189,30,62,230,231,156,19,149,213,128,114,229,228,56,177,3,199,7,179,37,238,113,196,96,158,28,15,31,14,67,46,174,19,174,53,112,184,44,236,69,143,224,179,139,26,251,11,62,180,
229,7,60,197,173,94,179,61,95,66,157,99,138,44,156,239,205,137,66,243,20,231,122,13,228,108,129,241,216,160,251,137,234,67,161,162,242,207,210,214,185,217,218,5,27,105,55,81,238,191,101,60,173,232,219,
40,240,94,31,48,98,81,247,181,73,48,223,234,164,63,130,105,215,54,94,22,99,209,52,59,102,19,79,55,238,159,37,51,59,160,140,151,59,121,254,42,92,227,226,116,114,55,120,188,207,94,230,152,170,61,119,233,
140,185,189,161,134,31,150,215,162,103,130,103,56,59,53,222,141,97,166,17,42,48,192,135,241,152,79,101,132,125,145,141,186,28,63,100,160,93,251,132,87,115,47,57,63,240,241,208,218,88,196,102,247,33,26,
103,141,196,126,94,130,54,198,182,61,177,146,95,72,111,253,156,205,98,173,117,247,229,228,196,192,94,249,190,230,247,45,249,205,237,231,88,31,136,208,153,228,39,123,169,135,130,33,187,82,197,213,25,7,
119,70,136,35,228,32,209,148,148,92,229,55,61,94,220,238,246,244,117,137,194,138,10,190,235,21,10,129,86,12,126,44,184,103,142,233,190,251,222,211,212,37,118,214,212,62,120,199,101,162,198,45,5,230,121,
101,55,220,237,255,11,163,188,194,141,188,15,55,143,182,10,240,16,150,163,11,253,49,90,5,82,194,14,87,177,227,203,115,97,206,40,32,143,1,223,253,94,118,72,76,58,39,63,1,250,216,24,207,188,93,145,122,166,
159,88,11,77,104,84,188,138,120,21,92,89,127,151,254,62,125,58,201,187,190,121,173,150,212,34,14,77,235,247,52,149,136,206,175,95,176,153,127,207,225,13,131,190,67,240,115,148,115,156,222,77,120,140,154,
188,1,94,201,175,198,8,148,75,130,135,33,20,227,48,21,182,15,121,28,190,110,219,87,44,122,243,243,140,195,167,254,90,122,14,221,96,40,227,151,125,231,252,134,130,44,157,27,26,83,186,150,206,4,209,191,
110,112,197,133,35,87,140,161,205,64,157,88,239,237,75,210,71,215,134,29,39,217,78,156,230,95,192,238,42,232,89,5,135,243,39,69,236,66,64,54,252,194,18,73,41,238,161,223,29,133,238,95,40,121,221,205,76,
222,137,109,173,105,95,213,57,12,232,78,148,217,3,246,230,13,131,254,125,106,247,228,244,104,172,224,218,45,150,119,154,156,162,189,27,217,223,169,187,151,174,74,18,141,213,94,26,220,166,227,184,156,243,
17,81,138,99,70,234,205,253,134,245,79,0,62,25,174,140,246,252,190,158,147,187,81,241,170,221,10,246,220,75,42,19,81,108,180,102,163,44,68,34,129,186,126,34,35,38,240,220,160,63,240,46,232,98,189,44,178,
255,120,160,173,150,179,104,58,24,65,181,158,119,42,110,221,185,49,55,27,54,163,175,149,233,172,238,112,173,3,172,148,200,46,140,249,216,223,10,96,56,126,151,251,153,204,62,227,177,190,187,80,230,143,
196,63,177,224,120,106,245,253,149,226,56,29,25,21,33,133,17,221,184,242,198,117,111,40,155,188,236,95,115,163,113,214,187,74,200,86,163,251,83,96,225,210,188,217,62,118,157,88,209,252,173,152,81,173,
217,108,175,191,223,223,73,101,46,13,254,205,123,255,21,224,224,188,210,255,119,112,238,165,162,247,140,237,186,197,123,26,29,215,74,154,33,75,112,80,174,104,171,113,136,239,129,197,250,230,99,107,25,
188,191,203,112,7,116,242,237,28,226,177,221,73,243,172,133,128,204,236,54,79,103,254,237,173,227,36,219,105,220,189,247,18,44,0,66,218,177,167,222,85,203,79,137,120,190,8,238,68,203,119,234,124,5,68,
145,120,118,206,96,251,165,38,111,164,182,223,205,96,40,124,63,10,90,252,66,160,189,168,51,72,185,151,92,63,217,68,117,156,182,159,117,239,104,72,108,176,191,122,206,82,238,17,150,147,251,153,22,247,143,
172,157,192,189,148,251,118,148,247,41,226,126,174,214,238,37,134,206,96,181,8,184,110,22,221,60,7,250,103,108,92,102,224,33,226,141,46,16,247,127,219,156,255,108,8,163,157,7,156,52,126,10,224,168,109,
121,86,174,126,166,140,218,151,253,236,27,242,61,173,24,5,56,171,211,49,184,5,176,171,96,222,205,40,172,11,159,9,77,107,242,237,73,248,115,11,245,118,163,135,196,253,205,55,197,29,147,59,172,127,154,226,
84,41,175,59,176,246,134,251,247,211,72,221,47,61,231,76,44,181,192,126,214,193,93,155,147,221,63,83,101,254,194,247,192,143,217,183,254,4,128,189,243,190,214,246,84,235,158,33,198,218,190,69,207,190,
236,205,23,230,106,20,46,190,186,171,67,119,12,173,226,120,151,158,170,183,116,108,232,254,73,223,254,252,132,229,176,219,161,60,205,189,159,200,224,168,241,4,216,88,251,10,94,24,159,78,157,174,182,29,
238,156,100,125,58,85,169,168,116,231,166,149,82,250,51,44,191,250,250,23,126,225,62,140,23,7,1,96,100,94,218,206,186,126,98,207,251,76,131,160,182,206,54,57,77,95,14,193,181,173,49,150,10,127,99,122,
239,152,249,16,233,81,223,110,165,220,191,91,201,62,146,166,187,113,128,98,183,254,147,251,212,247,219,125,237,246,134,244,186,83,146,251,74,0,182,209,137,232,189,51,0,191,240,11,191,80,74,127,113,204,
235,169,146,55,247,164,19,232,78,248,179,102,225,30,182,27,135,202,103,187,132,100,115,127,21,173,189,200,58,126,11,220,251,35,248,224,139,101,126,8,108,140,89,117,23,57,146,230,139,226,230,226,153,221,
147,172,215,119,236,237,175,240,13,67,220,50,231,110,127,103,110,221,250,121,117,241,11,191,240,175,135,235,17,146,232,172,206,157,232,150,117,149,125,243,99,134,115,177,134,143,110,233,116,252,157,189,
238,59,91,158,39,153,222,179,177,133,23,39,221,164,121,203,160,159,63,190,246,25,80,199,31,15,103,251,36,226,206,246,44,251,87,101,126,197,80,166,219,15,91,188,198,149,144,255,39,223,165,129,145,186,223,
219,130,146,159,40,124,191,240,11,127,3,162,23,8,5,223,151,232,232,59,26,160,119,14,143,157,158,67,138,224,233,243,72,239,182,209,123,232,49,190,44,192,217,129,219,41,247,239,124,41,210,187,63,75,184,
227,137,186,83,220,171,6,101,10,241,42,93,243,9,96,250,183,197,235,186,82,62,43,235,57,139,22,177,75,193,143,84,192,213,226,39,189,145,235,23,126,225,11,224,110,106,25,219,63,98,68,225,137,148,213,1,181,
187,103,161,106,122,215,222,25,231,111,22,32,245,253,6,47,187,192,54,103,47,128,251,175,164,220,111,68,100,225,132,29,224,90,213,92,77,210,119,236,41,237,239,140,189,238,189,115,136,164,195,30,142,39,
206,61,248,130,223,83,205,191,240,11,139,149,78,7,111,251,251,209,75,137,215,238,237,200,90,52,252,218,205,191,213,193,180,61,140,239,156,143,218,81,65,185,83,162,93,155,93,39,35,131,31,97,208,159,74,
135,228,30,162,111,17,159,203,244,187,187,239,239,195,124,173,161,234,199,203,118,179,15,57,46,140,158,87,184,246,8,161,119,31,9,246,175,41,255,133,95,88,195,43,99,56,29,120,222,231,126,114,29,213,224,
218,130,77,251,63,13,142,238,166,50,62,211,217,147,251,247,243,131,95,167,201,110,27,244,159,24,40,181,82,194,116,237,187,123,23,231,14,4,183,63,19,147,157,218,54,165,182,215,147,221,244,214,78,141,59,
190,116,100,216,61,206,179,123,191,240,11,255,37,104,165,140,55,239,69,7,173,206,176,121,28,104,3,222,217,63,103,56,125,248,75,101,242,118,96,167,218,93,51,126,103,172,159,24,191,219,135,226,62,125,27,
51,20,226,131,253,149,184,102,117,184,213,120,156,236,205,156,254,198,216,106,191,106,69,53,154,63,207,197,58,213,191,118,134,206,185,228,192,31,247,162,86,191,202,245,11,191,240,95,134,108,61,190,187,
39,140,215,104,196,223,89,123,126,57,127,197,174,246,49,19,91,28,68,65,203,19,227,124,7,190,33,229,254,119,212,44,10,218,187,131,20,165,199,155,47,250,86,248,170,199,45,118,91,153,40,122,153,118,191,55,
64,168,52,144,222,234,23,183,126,225,23,254,147,96,222,178,120,21,81,149,59,65,128,117,168,47,50,117,7,215,215,173,209,187,186,93,114,20,32,90,101,25,31,216,109,124,183,137,129,219,167,220,191,95,151,
190,115,4,226,9,44,8,107,49,74,107,136,193,219,77,185,191,115,112,2,105,136,23,72,45,168,41,124,115,81,245,133,254,4,236,140,196,222,222,221,47,252,194,127,8,132,49,71,56,63,16,27,212,172,118,111,254,
157,167,93,86,58,99,197,235,115,102,104,127,43,118,91,247,252,5,197,116,63,66,223,102,246,179,212,237,83,30,29,227,121,63,225,178,209,70,252,26,213,110,138,188,20,159,214,127,111,135,92,225,95,53,57,59,
32,167,174,125,138,111,142,201,110,196,254,89,18,249,11,191,240,16,212,121,240,181,27,218,40,0,120,119,13,60,21,36,221,221,50,60,111,123,206,195,238,185,42,110,31,31,166,62,131,59,56,110,27,244,125,98,
207,248,80,79,69,127,15,113,243,141,158,227,207,1,86,24,223,97,56,95,114,113,150,126,95,41,182,95,131,255,11,63,2,156,119,223,164,161,149,143,94,29,35,247,240,213,235,100,87,199,158,30,228,237,240,4,255,
42,209,201,101,119,233,220,217,82,248,166,83,238,239,155,183,59,131,242,213,2,247,55,21,255,110,234,253,253,145,95,251,226,102,97,213,89,246,85,71,215,252,65,71,184,60,244,252,78,246,23,255,139,78,218,
47,124,32,52,184,104,182,88,101,14,159,146,91,133,251,109,29,88,249,235,57,183,239,246,47,106,255,118,223,222,96,236,124,123,228,5,63,226,57,244,79,128,123,94,238,41,188,189,187,229,96,37,148,103,246,
111,189,167,174,24,139,14,21,222,133,245,182,3,87,56,27,215,47,91,224,191,240,11,143,192,149,145,186,222,24,243,252,1,81,157,218,238,235,187,181,168,166,198,149,102,235,0,193,29,99,158,225,203,192,61,
102,39,207,53,229,237,239,192,238,43,109,238,142,196,55,236,161,99,229,103,14,182,189,211,230,110,164,255,83,163,179,167,182,24,222,169,249,157,99,247,218,199,191,40,210,123,172,127,15,210,253,194,79,
129,149,172,14,57,23,191,162,246,158,108,39,7,235,142,23,242,92,127,187,251,209,95,175,43,172,78,200,32,26,3,255,72,116,142,109,171,79,11,135,108,119,78,239,27,244,118,71,205,63,121,20,67,131,58,160,176,
139,225,116,223,195,225,22,200,159,141,69,3,34,174,230,223,117,63,152,197,167,247,211,143,112,245,72,102,177,191,184,203,227,73,157,239,62,103,18,241,241,125,240,83,221,222,239,129,147,249,8,55,186,64,
142,209,80,170,103,195,239,57,176,213,93,117,39,225,44,125,127,39,117,238,127,137,242,29,124,219,88,78,222,107,81,231,56,172,156,167,147,152,127,149,21,220,237,253,91,41,247,254,232,194,102,205,119,72,
1,158,28,222,241,248,236,190,116,131,107,237,40,176,3,160,94,214,114,190,136,23,110,133,248,249,213,61,188,29,227,221,121,56,108,39,210,114,241,131,33,239,237,123,75,108,240,171,118,21,140,122,185,238,
169,95,161,218,225,98,199,53,109,244,249,24,188,121,62,224,235,225,105,23,226,171,123,240,189,35,116,170,155,92,125,122,71,251,78,155,53,45,205,21,175,135,214,226,217,125,231,208,215,170,68,81,9,215,234,
221,223,252,88,118,96,53,122,187,15,238,205,167,16,162,58,217,147,9,59,240,150,65,223,255,213,53,101,18,207,88,253,234,71,20,74,97,142,170,41,92,45,198,86,88,158,118,150,171,162,120,238,180,172,90,121,
103,132,226,249,237,169,184,169,0,155,234,237,142,9,189,71,79,69,38,13,140,121,43,101,87,112,67,232,78,195,51,176,201,75,231,249,211,94,170,163,82,191,183,216,227,70,236,54,39,72,3,130,187,170,246,111,
192,138,186,185,223,251,119,32,183,79,102,237,178,213,186,50,204,251,142,64,150,196,206,249,223,29,21,105,133,218,185,78,21,88,222,130,44,235,114,194,207,35,135,226,242,197,251,140,95,247,238,144,237,
165,46,188,153,126,207,55,203,49,112,235,181,255,93,202,230,27,97,82,108,249,75,108,118,71,122,99,36,19,86,247,14,202,221,83,184,72,150,175,119,177,110,81,22,202,53,74,221,235,253,56,209,231,29,75,88,
235,242,39,133,183,233,109,192,210,21,199,119,65,247,151,155,64,35,237,124,40,41,244,153,188,230,61,101,205,87,133,21,158,70,178,239,56,145,223,224,68,113,95,225,251,43,35,234,245,206,94,254,115,165,135,
231,74,145,242,91,189,108,107,89,247,193,91,200,27,245,245,110,246,240,36,255,27,213,83,125,150,82,123,131,69,182,1,187,90,141,245,213,14,233,183,13,58,70,233,154,160,94,204,167,240,142,47,237,38,60,153,
149,22,8,245,125,35,16,180,140,165,124,77,77,217,1,89,188,229,34,188,238,31,69,233,108,34,227,154,165,20,217,157,39,84,227,137,76,152,69,209,211,239,230,184,110,108,8,186,18,109,88,151,1,234,40,3,38,87,
129,220,163,9,6,235,157,116,123,239,155,196,29,120,93,205,94,98,141,129,69,241,164,156,156,170,21,124,106,166,135,99,48,157,5,118,1,194,246,204,67,147,220,15,12,169,28,189,155,9,233,114,177,139,103,108,
13,89,121,138,122,80,74,52,14,146,153,219,181,250,91,225,208,200,104,201,217,55,175,167,63,72,133,20,206,169,229,184,238,172,174,200,121,143,104,220,133,19,222,30,125,108,109,143,113,52,88,167,83,113,
111,234,124,132,26,67,37,113,201,56,69,97,58,245,186,222,130,234,47,245,222,75,196,189,94,134,14,249,146,137,115,81,205,91,236,57,10,92,251,164,46,70,57,28,85,206,202,214,208,59,158,195,95,182,105,249,
125,70,179,170,48,240,205,239,183,228,39,251,53,165,26,205,163,143,42,216,40,69,206,203,235,102,204,233,238,214,146,110,39,72,69,13,186,97,12,231,163,59,10,132,140,158,146,216,163,19,220,186,104,203,140,
10,56,145,188,118,95,183,52,253,192,5,219,0,212,88,198,101,141,155,172,253,189,91,92,249,131,179,247,220,146,230,74,84,205,181,94,137,178,106,81,144,150,73,47,59,28,59,178,254,174,209,239,240,190,65,63,
230,228,13,159,104,254,57,6,157,158,59,161,27,220,43,153,183,234,27,219,222,71,145,220,206,226,176,24,194,40,74,96,242,106,172,189,254,53,191,84,214,144,47,18,14,46,215,88,15,21,206,38,224,184,79,190,
230,243,188,236,152,113,100,212,186,97,143,126,200,192,68,146,22,182,163,51,167,229,170,189,174,245,117,192,111,167,237,130,102,139,250,145,69,243,4,181,144,161,234,109,241,16,226,102,223,165,203,153,
245,149,82,209,238,126,41,194,89,17,235,77,141,121,239,211,117,221,215,198,80,227,242,204,128,230,213,41,88,60,203,81,235,48,248,13,238,163,147,126,14,43,227,182,143,253,108,213,29,229,39,169,206,90,215,
229,53,106,32,43,125,165,215,129,131,115,60,241,104,245,67,181,89,13,61,70,145,230,90,111,224,190,3,47,110,222,55,232,71,202,26,107,238,69,120,53,252,178,81,159,40,206,47,217,192,106,111,46,35,109,140,
48,185,251,21,196,213,25,220,185,138,9,99,31,155,196,147,120,83,2,94,20,26,125,191,179,139,21,243,137,11,232,44,115,201,253,127,223,127,77,221,131,75,137,182,82,202,255,122,196,164,210,239,221,80,113,
10,57,50,48,13,148,136,138,250,50,3,30,69,135,194,208,42,113,72,135,187,53,155,202,70,254,147,104,190,178,145,230,122,189,237,42,131,49,190,6,70,89,101,69,176,126,167,17,141,41,209,119,217,39,140,140,
113,12,2,168,70,120,132,227,68,103,26,112,60,81,118,26,242,134,99,121,221,195,254,241,170,122,111,5,120,83,102,239,105,232,253,222,119,194,181,108,174,104,53,210,59,145,105,142,40,229,99,51,29,24,175,
169,108,137,214,248,56,175,93,103,182,210,28,71,4,239,91,232,67,120,233,204,111,76,185,163,218,57,140,144,205,23,140,135,133,199,189,129,115,39,93,98,126,153,172,230,75,162,215,174,165,186,74,188,40,13,
215,195,170,231,41,193,221,91,209,114,234,145,69,102,118,237,204,228,189,69,220,43,184,103,146,119,90,221,91,49,210,80,16,182,76,161,160,2,30,223,35,238,250,35,134,61,210,203,12,184,105,220,172,193,82,
124,211,61,190,175,234,55,54,42,39,176,97,240,37,80,63,28,90,65,71,187,212,148,13,120,149,152,250,131,222,138,6,214,19,41,111,228,165,215,173,61,139,195,78,75,112,48,50,59,75,208,13,126,24,210,108,158,
193,208,112,50,183,201,188,28,47,175,88,39,199,235,121,206,180,230,186,199,201,19,148,25,93,143,86,55,194,57,23,236,36,168,53,133,179,86,93,43,13,223,105,219,191,225,148,123,216,138,62,239,192,61,191,
53,163,136,147,59,140,91,232,169,162,159,118,45,120,171,93,74,36,76,59,158,235,188,23,155,152,72,56,61,150,38,239,99,244,98,77,68,68,119,135,90,80,243,104,170,27,253,207,234,236,243,115,42,109,184,176,
87,156,188,46,46,101,29,25,124,17,17,202,232,80,24,117,172,219,250,203,114,208,72,71,120,46,186,53,120,135,65,189,82,191,161,147,18,225,239,188,168,242,43,165,108,34,102,202,64,84,216,66,104,128,15,179,
7,169,114,169,179,95,120,112,81,109,39,24,30,177,47,204,27,110,27,8,114,200,127,24,213,147,243,102,230,135,34,119,37,193,253,255,123,81,57,98,99,9,222,89,219,187,181,74,89,115,10,193,209,245,199,199,191,
112,31,218,85,186,151,184,207,68,175,209,247,160,118,211,220,79,90,205,148,121,108,158,50,99,226,62,60,11,118,84,30,49,232,153,195,174,189,39,20,178,187,98,27,183,219,195,184,231,215,121,225,200,56,210,
24,124,189,244,182,243,74,101,229,214,92,205,88,216,237,59,152,124,27,40,105,241,66,136,33,118,0,156,48,139,106,231,209,59,203,79,19,215,239,1,43,92,30,179,90,94,138,218,40,94,74,211,179,34,119,245,46,
163,224,246,161,121,239,188,224,215,203,145,235,169,222,78,127,209,206,148,19,253,126,93,201,184,53,106,131,70,23,141,57,207,64,129,235,70,117,37,63,69,207,28,183,15,113,148,50,182,3,234,44,48,134,189,
146,193,54,243,73,243,102,32,224,125,165,220,221,201,254,230,247,92,85,127,21,141,61,136,116,143,14,33,86,112,150,196,217,61,175,14,78,215,139,202,104,107,199,101,161,55,183,96,167,118,50,239,33,86,212,
12,190,101,246,109,151,43,77,119,117,231,69,235,203,35,116,205,8,26,128,83,31,48,242,109,139,171,145,225,137,158,130,157,237,27,148,103,211,208,49,69,135,36,234,192,16,243,21,249,136,120,79,198,86,33,
214,157,49,80,88,91,120,39,2,236,181,242,79,227,218,81,29,15,17,199,169,25,56,6,149,102,139,64,25,248,126,221,191,171,232,194,28,180,27,55,103,164,141,142,128,138,152,179,136,220,69,166,128,135,247,104,
145,111,118,42,140,227,129,169,125,114,24,26,126,229,173,8,108,163,162,96,39,120,150,55,195,203,21,172,5,83,85,0,0,32,0,73,68,65,84,201,183,142,47,48,192,67,10,21,61,172,71,231,7,148,67,54,15,196,205,
241,113,125,43,175,51,23,99,206,104,12,250,152,191,31,105,239,0,202,61,75,224,141,245,176,116,186,237,186,207,40,188,106,162,243,219,160,212,227,71,93,127,111,37,35,111,150,142,5,187,14,176,53,95,189,
106,207,189,243,200,38,204,17,111,240,125,209,143,141,20,119,94,99,206,245,63,75,76,59,112,36,177,247,197,251,53,240,239,69,97,43,207,218,222,123,81,228,9,183,245,118,61,65,189,36,98,188,92,107,135,243,
8,112,97,251,254,184,17,29,21,78,104,42,229,17,59,77,103,221,81,149,119,100,224,108,204,238,75,85,18,31,241,30,239,70,219,110,100,95,55,167,113,112,7,175,34,124,100,164,186,49,26,145,124,17,74,44,136,
64,9,241,72,163,191,210,229,190,126,55,192,13,182,29,90,207,36,52,219,192,237,143,10,99,221,121,111,189,125,223,203,6,167,198,241,10,217,11,103,212,123,57,103,87,128,7,124,121,75,189,248,199,123,99,47,
188,227,131,232,123,172,130,44,234,15,224,29,249,43,131,99,252,196,89,217,199,174,68,171,107,14,62,131,95,83,99,101,53,118,117,252,33,143,104,130,231,241,92,87,83,77,90,218,53,213,247,169,83,115,222,243,
18,213,118,142,248,245,116,68,233,89,180,236,188,252,19,240,194,242,216,161,56,246,148,149,231,108,191,85,248,127,134,255,9,200,39,39,230,158,107,77,207,179,11,96,19,214,49,54,222,10,253,20,229,220,56,
122,99,111,75,177,132,143,151,100,226,218,10,46,234,93,101,96,121,141,60,216,70,255,77,225,22,13,101,254,106,241,88,35,99,254,180,36,229,112,199,13,227,54,115,156,246,61,121,51,26,144,22,15,113,19,142,
193,47,103,2,48,250,4,156,102,22,216,232,241,86,132,160,203,25,14,44,155,172,76,94,112,255,221,212,163,173,1,149,153,144,252,80,38,162,66,59,247,168,96,131,163,81,156,190,47,127,3,148,246,189,199,85,38,
98,56,106,254,180,247,30,111,115,156,219,133,103,66,151,152,52,222,119,17,65,90,41,47,13,80,84,35,209,189,46,235,149,157,247,109,230,239,49,121,6,236,106,121,36,66,95,69,153,58,54,141,90,122,60,177,67,
112,31,198,15,118,16,29,244,38,187,15,23,199,232,147,39,195,163,168,154,197,150,53,93,24,201,72,38,108,241,173,213,104,77,127,85,197,238,231,99,141,201,180,212,37,184,252,159,179,61,59,196,200,230,4,235,
0,17,69,248,77,25,122,23,86,174,82,238,116,238,195,46,30,53,130,187,207,208,187,90,194,8,102,180,148,225,47,229,181,78,217,216,43,190,216,97,97,71,102,178,209,92,155,136,7,203,190,231,109,5,114,60,15,
219,156,1,234,198,27,88,90,214,210,174,23,225,74,5,220,204,104,155,135,118,55,223,22,175,212,149,81,143,44,71,236,50,204,126,49,179,181,11,200,184,119,103,158,50,173,115,127,238,103,171,63,79,248,14,173,
197,170,212,147,84,119,238,14,205,221,182,186,85,228,120,172,23,225,244,230,198,156,7,244,132,239,7,84,88,189,88,53,37,249,32,143,119,242,228,185,68,124,241,98,178,227,250,154,219,221,49,86,82,144,183,
126,102,246,52,93,251,137,25,33,167,198,191,28,190,135,202,123,192,163,242,14,207,74,154,239,140,58,74,99,228,92,100,188,154,213,33,182,21,92,22,224,0,55,195,42,23,180,131,103,221,195,70,255,85,203,3,
103,149,80,197,60,170,88,51,31,157,25,20,205,4,125,95,127,122,220,91,248,77,207,92,13,200,163,235,167,238,238,204,42,229,56,49,43,51,90,7,56,140,225,207,93,159,59,142,162,135,107,188,90,41,127,30,139,
82,154,53,236,74,157,90,6,106,120,151,208,218,239,174,215,95,21,101,209,177,134,197,104,87,35,164,92,217,103,2,108,169,175,55,241,212,240,110,220,78,45,181,87,73,239,19,222,175,230,19,190,181,246,58,27,
100,48,126,141,105,26,231,175,110,163,103,137,235,215,28,223,69,109,190,223,228,198,82,242,12,176,227,248,111,129,157,153,218,237,247,29,163,27,42,231,77,154,247,160,210,231,138,234,130,155,75,228,35,
247,64,86,62,238,33,104,208,102,203,244,184,87,115,119,39,254,223,47,159,247,243,247,114,68,119,230,248,175,220,37,213,58,210,249,171,31,89,218,131,57,94,207,189,88,166,154,143,80,252,144,129,55,200,200,
111,103,62,215,14,173,117,18,196,38,127,51,33,179,39,58,205,242,240,23,112,95,25,165,61,53,148,187,73,25,175,179,87,47,71,230,116,228,94,248,189,131,179,158,247,231,148,162,138,40,250,119,181,25,129,179,
146,241,251,117,106,251,105,204,119,221,148,119,85,204,39,56,17,79,141,229,89,182,241,46,236,98,196,200,115,149,91,88,192,173,234,103,141,186,214,123,5,122,58,108,192,186,104,108,247,41,40,136,214,254,
235,94,244,3,92,25,238,121,102,96,101,206,177,173,202,8,82,205,205,45,173,53,157,23,60,102,208,107,41,199,207,46,234,235,156,134,199,209,146,251,49,197,61,106,89,212,61,75,191,42,137,203,238,202,105,244,
160,77,153,118,181,124,52,207,238,5,142,68,206,137,53,135,107,161,118,220,244,200,161,189,51,150,216,82,109,114,84,113,29,181,95,69,3,223,31,221,71,240,156,191,255,61,237,223,225,247,59,28,135,175,153,
217,200,41,87,14,101,38,159,62,9,124,194,66,228,26,120,158,178,48,202,214,86,97,136,114,150,121,117,225,174,54,143,206,190,187,163,52,83,156,209,136,241,230,97,232,250,5,217,21,234,229,14,64,22,161,239,
203,247,28,211,231,78,185,39,125,124,106,81,180,82,204,179,175,223,145,84,220,227,93,120,124,178,161,126,99,92,219,36,20,25,99,77,65,113,136,87,109,212,70,145,227,17,237,233,178,151,39,185,55,214,222,
85,216,139,204,141,233,191,154,212,187,97,230,146,7,86,25,74,189,85,40,143,212,204,202,216,191,7,159,16,237,126,37,60,17,159,252,60,96,39,55,115,40,87,206,240,193,40,128,8,179,203,144,211,239,161,13,155,
94,11,248,210,149,90,10,188,110,64,157,102,183,180,88,63,229,78,134,191,236,109,56,153,174,140,60,103,1,188,107,127,106,234,223,128,236,241,211,101,99,223,143,199,83,238,123,100,159,2,237,241,101,96,226,
52,49,152,86,20,84,43,205,197,94,205,132,167,209,80,121,144,76,129,150,161,235,134,30,141,147,244,33,59,28,40,232,43,161,95,211,141,85,136,52,187,15,137,204,26,141,162,158,69,71,92,22,69,93,140,59,139,
198,114,142,114,122,171,89,89,57,33,251,152,126,225,14,240,188,115,116,173,220,234,72,126,184,236,128,131,101,51,212,124,153,35,156,149,191,172,121,107,86,91,240,6,151,194,112,39,231,224,235,70,155,4,
253,215,243,52,93,25,16,53,198,191,138,209,173,77,138,94,187,29,149,237,131,213,67,173,60,252,123,232,29,41,126,198,53,222,36,64,176,171,243,141,105,140,126,88,161,112,188,70,110,109,130,91,27,225,136,
131,117,113,70,65,183,183,81,38,171,14,38,165,22,143,167,50,71,161,239,169,175,251,233,233,217,165,221,142,28,3,120,17,215,109,104,91,228,50,163,92,138,222,66,200,54,58,248,94,118,31,235,168,255,17,142,
66,247,21,68,78,97,212,223,93,181,26,57,45,39,240,105,206,195,59,253,121,199,105,122,119,28,207,32,139,154,173,148,191,230,56,215,177,126,53,115,137,90,53,237,186,82,111,174,136,115,19,218,76,43,88,185,
188,217,198,227,83,144,141,219,221,88,197,190,111,178,14,189,248,156,65,191,16,174,147,194,11,4,239,145,63,108,116,98,150,246,224,164,223,46,237,46,184,105,174,246,110,20,182,11,218,64,200,157,167,134,
139,52,127,71,84,198,217,60,101,218,151,243,162,71,205,127,79,13,187,243,168,1,182,39,40,219,41,140,20,113,194,80,74,195,186,143,57,158,120,79,80,27,4,230,55,114,241,18,103,49,197,31,241,177,139,143,113,
238,180,83,116,78,219,236,240,113,66,3,199,245,100,93,240,92,220,137,79,19,118,174,235,126,30,37,115,61,145,31,245,122,151,216,85,156,125,239,169,118,219,96,253,142,56,189,255,29,193,29,103,9,202,154,
45,153,60,233,245,183,114,10,204,29,184,165,28,148,125,76,43,160,188,247,245,245,153,87,191,122,252,223,140,224,244,116,100,111,117,230,128,40,117,218,65,238,136,101,13,202,233,100,122,79,215,61,64,49,
190,122,194,11,86,76,13,63,38,232,167,119,211,163,12,201,222,28,240,102,198,109,161,70,178,172,176,214,29,222,68,126,7,149,26,155,172,222,201,40,172,140,233,14,221,93,58,172,126,145,207,88,189,107,60,
25,63,152,49,224,45,37,237,192,232,57,97,26,202,124,156,24,204,56,166,140,203,118,231,30,225,78,27,194,208,174,158,85,194,210,244,40,104,14,230,220,158,72,100,165,249,171,165,209,211,49,205,204,172,138,
138,217,181,213,188,54,121,137,156,176,188,237,72,94,138,114,231,149,200,119,225,118,186,145,179,37,19,207,35,47,150,209,168,191,7,222,58,245,127,78,237,176,118,236,3,151,34,20,82,128,94,21,175,211,95,
62,162,88,153,143,44,6,49,109,155,186,119,207,52,91,179,153,113,160,219,54,226,103,240,249,158,127,104,224,12,213,29,194,187,198,229,187,129,141,247,190,138,215,120,34,20,153,65,107,69,201,198,42,170,
242,109,119,204,90,198,215,59,117,190,30,198,139,204,138,143,18,215,28,122,7,234,116,21,154,25,172,246,94,156,127,176,110,4,222,63,131,88,78,213,85,76,68,244,26,126,209,112,254,95,201,156,253,182,235,
250,238,130,218,252,120,60,229,174,189,175,206,192,215,65,69,183,244,22,28,114,71,186,39,18,165,104,44,176,86,174,102,190,86,81,168,133,174,28,144,80,32,219,20,34,84,1,126,137,230,60,168,235,247,28,3,
48,242,109,126,30,193,67,145,253,179,160,36,234,254,6,215,95,51,68,143,103,242,246,250,33,126,227,78,214,90,97,209,29,248,2,103,235,198,244,160,179,189,151,135,232,6,215,187,71,187,185,54,95,212,150,188,
179,166,80,188,54,223,32,188,25,133,2,246,59,228,27,21,219,17,175,77,185,147,89,7,171,251,251,52,100,88,159,121,83,92,205,141,83,234,207,140,138,239,40,152,179,29,24,11,235,68,116,214,20,23,64,255,63,
177,174,227,232,93,130,49,31,42,92,214,75,99,181,167,211,13,51,167,196,43,213,197,62,142,31,5,27,101,193,178,60,152,30,155,234,191,47,23,78,133,31,26,248,213,62,253,247,67,164,178,78,152,249,142,72,255,
51,162,86,132,117,175,119,199,69,245,45,119,223,111,65,165,203,100,72,251,146,15,13,98,220,234,186,242,239,219,184,147,195,80,251,244,29,162,64,79,57,19,190,49,44,90,21,68,143,255,172,169,4,167,59,129,
58,181,219,117,33,91,162,123,191,26,58,143,143,158,114,103,35,190,211,157,59,169,81,117,40,234,206,30,250,11,87,110,42,89,68,118,210,39,211,163,139,189,213,29,60,251,49,187,50,234,190,32,178,101,222,44,
172,199,146,113,249,157,196,249,176,70,43,77,162,84,162,63,241,52,26,123,207,249,201,140,171,215,18,227,61,197,87,42,155,79,233,239,111,183,125,207,16,252,123,38,251,89,202,42,234,186,183,141,247,117,
35,162,228,117,56,210,215,66,60,115,233,124,26,28,215,198,74,180,249,93,232,173,149,240,167,116,189,94,152,127,163,228,254,42,136,242,5,24,227,43,135,68,99,220,178,79,17,217,77,140,95,163,38,226,49,123,
102,15,61,137,122,222,139,177,98,120,228,21,184,183,32,239,13,10,115,88,255,242,228,158,24,151,45,28,11,123,239,133,118,55,141,53,163,116,101,44,39,222,189,201,194,197,207,123,109,117,124,218,200,226,
46,240,99,112,198,73,20,14,227,151,193,59,129,225,254,237,227,122,43,248,107,203,79,193,27,157,250,168,126,4,96,210,190,205,150,159,66,45,120,38,93,103,233,206,156,3,125,29,225,228,244,122,104,31,154,
187,8,42,251,236,108,198,191,210,79,202,5,120,21,89,119,111,39,176,203,232,189,3,53,249,134,240,231,124,10,119,137,218,116,45,207,197,247,253,200,202,247,194,86,68,95,211,175,4,249,220,164,142,67,66,96,
101,168,209,139,86,10,192,93,95,94,186,246,104,23,110,93,51,31,110,209,179,132,234,87,42,62,227,58,134,191,250,217,149,170,50,250,111,144,141,154,158,46,143,221,213,19,38,36,215,2,241,113,208,88,96,30,
130,71,131,133,141,113,220,30,234,135,98,175,82,124,84,206,101,220,166,141,191,241,243,232,177,177,212,54,160,151,251,248,186,108,206,41,70,250,239,64,60,176,145,86,113,52,91,114,239,27,225,207,99,44,
92,40,140,209,46,118,66,141,55,151,141,200,6,232,131,13,55,37,126,225,234,222,245,198,178,29,29,110,97,76,211,141,110,8,199,149,10,175,2,114,120,101,219,12,239,170,45,71,190,27,184,120,144,88,110,84,181,
215,216,98,196,94,175,191,207,89,34,19,189,119,198,240,187,98,236,16,178,168,38,228,11,175,183,6,120,131,15,229,141,239,48,240,213,208,252,122,232,115,113,106,120,191,247,137,152,11,54,120,28,6,141,163,
111,209,247,115,120,33,210,79,150,239,173,207,104,13,246,117,174,156,124,174,111,99,221,100,88,156,206,74,24,203,110,181,101,141,45,120,199,50,126,157,184,181,240,219,51,123,232,245,234,120,179,19,184,
54,104,111,144,20,136,239,238,163,47,105,209,247,213,190,187,187,102,235,182,51,211,74,176,151,77,165,151,99,65,184,225,236,37,207,166,211,180,102,250,158,125,7,84,80,86,30,154,169,189,59,12,93,150,148,
183,220,241,218,31,94,124,32,116,222,4,76,221,227,129,59,62,231,129,34,208,13,146,50,84,59,145,114,232,24,39,226,255,168,49,123,104,153,237,242,196,107,189,222,228,161,227,145,198,50,10,197,30,4,231,8,
42,89,9,156,225,27,212,6,6,53,84,45,40,143,240,120,29,168,245,70,19,101,204,79,10,67,63,41,47,206,23,56,190,16,143,224,249,14,124,69,170,253,189,95,89,139,137,61,99,208,41,156,226,73,205,246,125,154,146,
240,29,146,193,4,223,129,48,226,185,129,149,29,26,68,60,158,207,132,27,209,123,126,239,208,221,54,147,192,36,235,52,109,31,226,167,8,112,91,69,145,16,36,225,106,237,158,40,211,156,69,18,243,63,190,90,
214,210,178,63,34,241,172,22,119,70,25,21,116,43,227,192,238,224,0,238,97,103,77,58,153,202,121,223,223,157,3,160,242,82,146,104,86,173,199,96,72,158,62,245,159,70,216,164,83,30,167,91,15,179,18,55,129,
29,61,67,162,190,171,111,34,217,198,239,49,222,152,214,11,71,100,116,34,158,185,118,228,132,71,20,77,195,148,193,247,205,234,109,222,194,58,182,214,87,6,179,25,60,246,166,184,241,252,99,21,202,188,250,
235,214,174,186,44,225,79,241,115,19,91,164,100,162,253,165,136,174,66,147,241,35,101,216,116,194,246,136,251,183,228,109,52,128,150,42,242,73,81,76,45,155,121,253,81,31,156,23,223,94,56,163,119,9,108,
167,157,137,46,59,85,179,188,65,249,51,135,18,87,144,57,106,67,169,68,10,50,241,98,178,72,30,251,221,215,153,210,205,125,216,249,217,101,164,193,235,193,61,93,82,117,189,8,80,79,164,176,187,120,111,170,
12,167,31,66,79,124,129,7,250,142,125,219,154,211,55,129,101,91,249,64,59,142,112,136,63,136,114,149,31,164,244,145,213,86,209,61,170,82,225,203,83,230,160,21,183,238,250,103,168,5,90,147,107,245,144,
236,163,208,245,22,3,202,219,179,175,126,21,74,165,22,189,224,223,61,120,226,20,77,137,162,203,247,33,20,192,64,9,168,250,59,122,66,233,232,42,26,42,65,177,139,137,94,133,235,112,232,229,182,175,211,124,
13,246,210,13,63,160,4,250,27,173,90,225,57,204,85,194,10,148,226,18,9,17,9,172,12,87,63,67,241,20,60,185,224,51,199,33,50,34,141,42,58,135,43,105,203,184,211,122,213,203,177,50,132,163,186,48,144,76,
211,56,18,157,135,141,246,250,236,141,85,138,104,83,16,103,100,176,243,172,227,147,48,17,43,217,70,195,218,168,142,98,105,87,39,153,152,34,104,171,116,71,119,159,87,186,185,169,66,65,115,5,222,109,0,130,
17,158,197,32,44,53,1,203,238,170,190,104,179,11,145,195,141,242,246,232,155,226,74,181,202,180,153,155,207,130,83,2,230,222,249,136,97,155,168,53,27,77,121,67,224,48,222,185,84,40,187,252,238,213,171,
170,174,107,10,204,176,242,10,154,100,222,126,165,255,158,31,80,148,194,203,71,158,230,207,27,54,186,3,53,55,135,140,29,13,199,79,241,50,59,247,228,155,185,182,255,25,235,191,11,30,53,74,237,26,53,97,
248,164,129,229,242,54,203,216,129,232,251,210,44,27,108,112,21,45,51,147,92,95,224,84,215,223,3,126,107,8,37,48,80,43,229,127,88,87,84,96,151,252,181,238,124,100,138,52,163,232,63,226,59,171,171,249,
94,97,61,207,172,197,91,4,49,38,239,152,136,10,165,132,182,45,229,241,208,30,90,92,179,177,10,138,31,51,232,124,72,162,147,118,66,160,22,214,248,126,54,85,145,66,80,63,139,186,143,211,199,103,119,176,
177,83,248,26,155,181,0,73,239,53,40,56,89,80,178,129,16,202,166,139,133,35,171,23,107,100,238,36,233,96,254,74,153,145,124,255,91,75,51,47,175,216,153,98,228,163,207,71,164,0,21,186,40,99,129,14,19,206,
169,55,252,191,240,4,252,119,70,210,158,70,175,227,251,132,35,221,20,89,102,85,177,235,111,165,128,200,9,207,116,21,231,253,182,245,90,192,150,253,186,43,9,160,155,130,38,163,88,5,99,45,31,115,46,68,190,
86,43,191,181,248,108,66,4,145,222,85,240,220,143,179,212,61,76,126,223,124,79,57,239,66,115,71,73,207,218,42,103,32,66,183,115,160,133,61,189,120,194,19,99,191,239,222,174,129,23,185,57,154,189,38,97,
35,3,124,31,220,68,153,45,244,177,192,27,41,0,52,214,1,211,173,226,8,82,196,178,24,139,181,223,63,105,179,83,130,17,189,114,82,173,18,182,229,222,141,80,238,14,214,245,156,105,167,33,235,197,47,252,36,
96,195,221,138,118,254,35,35,195,145,228,144,101,105,172,208,212,190,60,234,214,10,252,160,138,221,114,144,120,139,191,135,223,241,8,109,164,218,77,121,115,23,105,36,163,112,238,74,126,148,69,12,121,99,
58,27,132,190,32,33,29,2,243,243,200,187,220,89,41,143,147,182,229,107,59,199,206,65,55,200,173,222,83,108,59,145,253,137,183,132,181,166,167,154,239,208,174,49,54,195,200,90,189,139,187,210,115,111,178,
10,167,167,53,198,188,36,219,194,194,202,171,180,104,247,63,20,174,104,63,118,69,54,114,88,250,181,234,183,26,19,195,11,213,89,71,247,214,96,243,227,125,88,222,232,187,221,30,176,56,181,241,111,68,119,
182,141,225,116,61,253,215,29,139,62,166,236,228,205,121,199,121,99,153,155,24,116,121,161,58,137,237,115,229,91,153,173,190,198,172,170,217,32,225,251,19,181,51,117,216,131,8,32,98,61,108,73,55,108,96,
165,245,93,132,44,116,146,14,69,253,78,246,152,183,65,50,120,36,229,222,39,191,243,90,235,203,227,227,84,251,168,75,101,2,219,45,168,151,96,124,213,123,221,87,55,56,18,199,242,29,142,250,91,152,100,93,
99,77,146,149,230,217,114,223,162,162,29,38,209,195,181,202,197,190,225,121,39,53,24,46,208,11,209,120,243,28,142,177,115,237,201,240,5,81,73,255,204,12,190,186,21,41,205,72,241,70,247,148,145,127,57,
12,13,174,103,187,74,223,87,192,209,157,165,229,95,44,210,235,204,118,246,220,0,247,28,203,216,105,64,131,229,157,5,230,83,170,244,77,216,107,123,63,139,193,253,142,36,194,211,243,142,149,197,105,31,163,
212,114,193,58,35,163,156,142,0,53,30,117,43,207,223,165,167,47,1,28,235,174,108,56,225,197,206,134,250,65,167,253,17,108,171,10,225,173,12,215,137,132,169,173,130,157,246,220,239,176,222,155,7,47,118,
230,163,148,135,78,185,203,199,98,80,67,21,80,180,80,174,157,149,125,99,204,39,101,249,241,39,98,225,12,54,159,197,113,39,202,9,228,98,53,140,219,138,168,204,121,1,155,96,90,29,127,39,186,222,168,139,
149,110,230,197,215,97,37,195,53,44,251,125,49,104,190,122,91,22,149,8,111,55,230,59,41,176,74,89,153,214,234,44,171,47,21,134,114,186,253,248,148,232,195,206,61,28,23,101,172,75,217,147,205,149,99,164,
164,128,199,121,69,103,85,215,103,24,58,21,123,29,213,243,243,221,224,142,86,85,92,138,142,71,199,177,50,128,200,151,95,11,185,209,100,122,22,143,150,112,53,23,60,182,149,202,87,78,219,82,137,183,171,
78,141,250,211,204,178,14,101,241,90,27,74,62,149,108,216,181,170,70,87,227,8,59,16,10,233,61,3,157,67,128,169,77,99,142,243,230,106,39,252,174,12,239,29,195,62,2,229,141,17,120,38,66,39,37,153,145,125,
250,71,85,244,163,41,77,30,110,123,155,214,245,153,202,30,185,118,43,79,175,47,70,79,69,40,106,199,128,21,246,200,80,166,75,66,226,140,57,142,162,72,143,116,46,14,110,203,215,138,154,91,24,48,182,134,
135,234,101,170,209,95,19,5,215,114,109,205,236,201,98,246,72,146,50,224,174,189,184,110,226,191,170,179,106,95,74,28,221,69,252,164,206,17,225,229,72,139,231,79,25,6,133,179,150,88,86,56,83,192,206,172,
250,206,125,225,49,80,178,153,241,80,68,189,232,59,243,176,83,222,129,231,90,205,93,106,68,2,162,243,209,61,164,240,186,174,165,152,253,113,68,165,142,164,240,186,228,185,181,216,27,125,95,216,102,102,
34,122,134,48,41,202,237,62,104,186,67,187,169,214,84,72,171,59,71,64,100,41,87,111,25,62,189,162,85,31,159,123,108,173,250,239,171,20,103,135,119,31,3,177,143,148,180,75,200,87,190,82,132,75,120,8,7,
244,95,109,253,87,167,24,112,95,132,141,70,137,23,71,58,86,193,61,59,18,187,99,226,45,87,102,36,180,129,154,203,30,15,207,177,242,86,10,153,249,142,140,123,255,143,227,82,175,63,248,252,59,254,126,92,
223,154,41,165,159,56,213,106,148,105,114,70,40,52,226,205,126,122,204,65,187,224,123,196,161,114,8,34,60,74,241,70,124,41,3,195,109,35,195,164,12,127,198,79,161,186,17,79,17,206,200,192,103,253,90,71,
141,254,126,230,60,112,155,104,94,182,234,16,98,149,249,196,61,238,46,191,54,67,37,148,63,150,210,122,81,235,173,127,87,215,122,215,95,227,11,111,150,198,72,67,99,206,217,12,13,201,130,84,12,136,113,213,
25,142,3,212,2,237,119,195,115,111,138,43,101,140,200,24,24,246,12,73,33,242,11,31,238,56,49,217,59,221,239,226,124,181,213,39,222,131,218,165,64,206,43,139,92,140,50,82,12,182,82,74,237,217,133,234,218,
184,186,197,226,80,10,181,20,37,172,80,83,173,192,129,187,56,252,140,33,50,192,60,14,255,43,115,123,34,90,160,220,62,171,195,227,50,12,120,210,104,240,220,231,170,246,91,237,26,202,230,152,155,202,175,
154,239,97,164,214,157,9,81,33,243,23,27,12,232,234,197,73,234,94,91,84,204,28,134,85,221,44,154,92,181,141,238,57,103,181,216,136,60,90,71,170,139,17,191,234,254,170,191,138,86,214,70,173,137,136,150,
234,151,113,70,105,193,218,239,173,180,90,203,216,178,184,4,249,133,39,217,130,8,140,149,130,200,89,138,106,241,90,116,107,50,67,177,128,126,166,104,103,190,51,124,78,118,5,66,213,239,212,56,55,255,117,
213,165,123,251,232,188,42,114,120,44,66,239,30,22,71,74,99,112,72,73,241,245,157,83,202,92,127,92,15,205,246,60,132,74,76,132,108,145,96,56,47,63,240,76,35,154,97,234,253,154,243,117,207,147,26,235,213,
236,170,227,60,43,7,162,82,139,249,83,140,67,108,92,180,174,28,33,197,158,138,156,220,75,73,10,25,200,170,157,133,33,131,221,168,22,144,205,90,202,56,84,100,152,105,242,69,38,10,244,246,144,239,167,244,
35,147,41,235,70,161,245,47,9,15,120,175,143,149,124,178,128,228,168,207,211,46,100,79,43,112,25,222,67,186,166,92,224,80,101,140,191,20,223,102,151,175,254,37,91,167,92,94,129,200,234,25,232,113,196,
67,220,181,42,172,175,151,58,12,247,88,51,213,78,224,248,173,0,158,215,26,143,151,210,83,184,174,236,56,98,190,45,94,251,206,252,96,167,183,82,87,7,210,70,3,125,244,164,139,25,99,79,221,60,210,167,6,72,
127,125,16,108,16,177,130,231,12,122,153,202,79,237,59,102,209,138,197,113,170,58,4,141,107,165,220,221,183,216,137,206,15,117,110,120,159,141,15,126,102,39,40,141,81,199,213,223,21,122,194,195,28,97,
161,117,177,82,229,86,26,177,82,192,252,29,209,53,89,99,194,42,42,143,234,27,155,221,44,251,61,122,175,240,29,153,227,39,29,217,24,88,231,244,106,80,175,55,218,141,235,23,82,62,37,254,122,236,228,149,
22,173,102,227,178,24,231,32,124,169,7,116,174,209,144,25,39,97,105,112,44,205,225,167,8,229,100,94,169,122,25,181,219,1,70,202,19,65,160,63,54,209,142,250,39,172,166,117,153,31,52,214,56,246,64,155,133,
20,199,206,56,146,93,24,43,158,233,120,13,124,45,180,85,101,45,188,113,28,204,97,79,34,63,178,86,194,121,104,244,159,219,163,26,64,39,156,134,194,225,115,21,34,15,34,0,245,67,39,10,173,108,155,202,138,
55,252,209,186,225,128,164,82,161,138,182,239,44,143,61,64,25,200,225,81,131,190,179,253,204,233,37,181,223,120,234,239,160,49,175,102,181,124,205,16,71,46,7,27,16,110,211,57,234,215,151,239,229,162,199,
8,66,163,110,168,0,15,11,28,210,168,135,196,174,255,193,51,254,108,248,216,0,115,223,173,19,48,85,151,114,10,74,241,179,169,148,81,198,23,183,153,198,25,22,43,43,160,171,114,163,255,61,194,47,229,114,
98,123,191,43,220,175,192,123,245,129,137,227,168,226,126,254,53,42,151,163,240,98,239,85,86,107,51,47,216,169,117,158,78,168,40,128,64,163,14,220,98,82,217,248,8,141,92,107,44,123,82,129,194,122,140,
228,89,189,159,61,186,167,121,179,134,50,116,2,54,84,0,202,130,194,97,30,199,69,30,133,243,193,75,121,172,117,231,28,219,55,134,117,167,175,225,194,5,100,56,7,198,49,198,234,205,211,231,181,168,134,197,
56,25,14,236,218,228,136,28,215,159,113,122,11,85,84,43,85,26,223,124,194,188,120,54,34,58,161,150,85,223,60,85,214,51,252,48,210,93,184,251,58,242,190,110,249,41,158,8,200,160,63,111,0,251,226,142,140,
253,83,167,222,245,98,100,145,251,6,232,253,244,69,178,234,136,24,177,17,122,130,101,227,180,190,34,150,8,162,91,120,165,249,133,196,43,191,22,48,230,205,222,163,102,184,240,217,232,186,5,99,218,98,58,
94,47,109,165,84,212,44,171,89,207,22,55,26,6,198,239,120,141,187,111,202,141,131,7,5,221,16,141,209,188,174,101,22,171,92,163,129,6,175,112,255,230,188,116,197,225,50,93,181,12,135,161,43,138,151,131,
194,174,20,100,26,106,129,123,19,103,100,176,121,141,191,250,213,37,76,25,19,47,115,179,222,188,23,110,81,0,31,21,6,197,108,225,145,209,197,121,118,6,209,114,163,207,231,192,56,218,58,157,56,244,180,143,
23,142,173,234,7,241,95,234,228,13,249,51,60,183,92,30,163,112,134,215,13,223,179,178,53,255,162,190,104,212,150,239,201,117,193,58,74,170,155,102,120,216,49,196,40,84,76,215,138,10,175,5,111,172,35,135,
167,20,82,125,60,119,43,46,55,50,190,10,248,73,156,108,171,174,195,115,191,182,70,208,7,204,120,183,205,126,114,221,89,190,55,157,11,14,74,143,107,238,96,90,77,130,90,48,230,153,116,22,224,58,123,229,
101,162,149,113,184,37,105,167,249,44,20,97,130,120,110,180,183,122,153,106,178,116,27,36,145,26,52,172,75,90,200,46,43,22,219,102,206,161,194,24,56,230,114,110,152,23,230,94,207,167,114,126,174,186,205,
215,83,107,172,49,163,245,170,91,109,27,55,237,13,238,171,33,38,197,223,196,180,117,227,54,104,116,89,16,10,109,244,21,12,224,232,215,197,208,88,154,96,65,86,10,103,202,213,228,147,157,184,10,109,205,
61,64,50,235,92,163,98,104,215,137,75,88,3,236,167,115,0,144,31,184,104,65,31,45,143,246,73,122,251,233,95,18,229,12,33,140,53,110,87,142,122,253,190,181,76,114,89,82,21,73,187,4,101,94,110,245,27,2,216,
224,201,245,231,150,105,96,121,4,205,16,5,215,192,14,54,186,39,219,249,187,115,171,43,110,105,198,204,208,114,218,59,181,49,181,214,27,17,186,157,221,104,219,154,129,34,244,72,69,174,129,15,181,241,94,
58,167,197,77,68,84,45,142,59,16,69,254,53,141,203,114,88,77,66,136,89,240,162,22,130,53,238,205,45,32,224,36,53,159,163,13,47,36,32,224,157,8,59,219,243,191,170,201,132,176,35,205,87,111,105,113,106,
60,153,196,139,35,123,140,142,83,244,216,23,238,91,191,198,62,86,170,19,26,98,106,167,240,114,253,10,141,40,131,110,238,85,252,36,66,21,144,141,84,43,25,218,126,97,100,16,140,40,27,103,30,11,99,240,196,
32,52,170,203,99,133,188,200,101,114,49,161,238,143,173,139,11,129,193,5,117,148,145,239,202,173,71,222,109,16,104,211,193,49,247,168,83,120,41,28,144,126,119,140,43,57,74,3,63,242,90,230,24,178,113,31,
237,64,223,149,66,198,28,120,51,219,51,52,191,187,90,140,105,219,158,169,114,18,84,194,197,245,67,67,110,152,76,148,128,131,252,199,80,28,87,102,192,52,206,26,223,242,89,26,170,139,227,109,120,9,38,32,
154,151,247,222,14,87,183,182,161,24,130,61,244,27,6,176,21,233,161,239,236,171,47,17,159,212,198,69,219,122,170,50,49,82,9,244,8,253,228,0,68,184,7,20,40,86,22,26,227,56,26,137,180,73,104,39,244,108,
173,58,209,76,178,5,176,242,180,223,154,151,250,82,172,6,234,247,18,154,217,26,71,227,27,46,72,195,81,43,60,234,74,143,43,165,168,148,242,142,152,174,134,82,205,45,59,21,136,71,41,72,180,83,173,149,25,
177,211,48,35,178,110,196,141,51,81,68,219,64,127,99,234,223,41,53,53,239,37,41,131,142,140,115,6,128,183,95,132,79,183,84,107,212,59,111,134,141,126,15,12,127,239,39,110,9,52,40,131,229,52,202,209,184,
143,179,18,64,71,170,144,86,236,113,18,228,175,205,251,227,59,124,58,71,131,218,97,117,49,77,211,97,131,122,106,201,105,185,23,135,54,137,70,182,246,80,182,221,141,222,26,7,144,59,66,189,86,91,50,75,16,
227,30,87,161,1,45,232,40,106,138,45,252,226,245,59,174,107,134,204,126,172,129,181,196,30,252,185,211,40,34,47,247,133,160,156,61,142,110,180,140,199,46,240,236,240,231,218,140,69,125,191,111,115,63,
82,107,172,62,145,222,184,182,89,1,121,161,98,143,227,18,110,82,72,12,161,71,200,72,177,180,138,91,128,207,123,197,201,241,148,8,137,185,185,30,247,200,121,136,188,117,229,185,79,138,253,175,82,79,102,
121,11,69,215,224,175,231,145,141,178,231,88,67,166,136,133,184,74,218,17,168,40,204,24,15,230,21,100,15,121,224,117,235,30,123,66,35,211,166,115,48,20,59,212,199,118,124,64,107,16,23,211,50,140,125,3,
131,12,237,195,125,243,2,58,166,0,159,216,209,54,13,239,168,211,38,61,196,235,50,9,125,76,6,49,203,247,144,35,33,20,106,249,169,117,182,227,107,75,135,63,105,23,46,77,113,159,245,151,148,169,197,245,44,
64,65,18,200,5,96,255,85,85,105,11,96,226,20,159,213,221,245,4,112,107,35,162,219,20,114,141,78,180,111,230,243,14,160,221,225,51,55,17,220,60,20,23,43,109,181,71,206,247,58,83,198,115,175,182,158,157,
230,157,184,9,219,206,38,115,223,237,30,204,3,68,135,19,67,194,140,206,75,84,125,86,20,198,116,40,138,105,106,149,65,108,56,108,70,171,52,51,93,145,1,241,139,107,206,179,123,103,189,66,130,139,160,182,
184,78,99,227,106,253,101,212,157,167,179,135,203,125,74,42,203,107,172,2,144,38,183,101,105,84,202,40,82,168,43,5,188,235,200,244,54,202,56,168,107,165,180,177,44,114,88,74,240,157,237,114,72,23,12,52,
71,216,3,55,232,131,86,64,63,148,249,29,125,197,174,26,208,129,112,78,7,225,238,124,241,163,140,227,158,152,152,161,130,90,113,78,138,145,15,224,55,146,211,76,54,216,168,68,198,45,187,207,122,96,226,243,
199,76,113,222,120,5,176,108,71,114,39,59,82,105,176,83,99,232,15,189,134,180,140,231,73,247,137,100,74,218,181,111,174,24,231,116,216,36,24,148,147,76,237,224,231,102,106,122,146,186,180,99,221,211,131,
127,44,249,93,136,252,77,207,208,238,35,108,227,251,161,221,220,195,123,31,233,203,225,168,199,120,56,61,61,20,1,68,20,153,231,44,159,82,224,126,21,156,5,97,130,121,49,144,129,141,140,58,95,79,163,22,
48,97,104,64,227,65,51,155,88,187,180,237,218,157,127,241,133,26,17,239,108,44,180,146,53,79,247,150,249,20,129,237,136,117,154,106,233,14,135,82,0,72,219,187,98,205,220,199,107,229,64,113,31,35,5,204,
184,162,114,53,159,145,220,69,242,192,247,85,123,20,53,133,131,191,103,145,102,102,84,148,33,138,248,197,239,82,113,139,250,134,80,209,243,166,32,115,186,34,218,88,111,101,168,163,113,210,116,249,140,
201,60,228,134,180,123,251,108,126,67,45,111,60,163,29,189,136,156,248,57,8,155,12,37,215,150,74,81,5,56,227,198,245,191,149,216,48,63,96,122,128,230,61,67,142,92,72,62,23,76,254,201,151,71,78,80,222,
109,246,122,117,58,175,65,221,122,177,240,206,89,2,79,175,206,211,163,15,165,63,238,33,208,94,61,220,54,101,142,83,90,89,172,232,43,223,97,228,67,155,147,81,111,249,140,90,197,147,30,153,11,24,47,118,
241,187,13,225,90,220,175,71,72,180,254,120,99,228,86,70,74,158,13,41,155,111,86,252,234,78,22,133,189,254,179,26,174,230,190,226,143,7,77,25,122,172,55,21,113,19,119,153,127,95,166,169,122,218,81,29,
172,27,65,230,36,172,140,62,43,121,165,244,119,29,136,97,15,2,250,89,123,37,95,216,175,149,193,85,180,144,159,8,119,159,91,77,203,71,183,173,188,94,171,204,251,209,202,96,175,156,185,190,30,226,126,53,
40,108,69,86,148,66,243,226,36,114,112,152,167,214,111,86,160,137,117,152,62,240,157,249,26,91,58,67,76,172,218,128,76,245,230,237,148,251,235,68,252,43,67,80,225,28,216,158,93,252,147,248,168,204,34,
213,211,215,252,168,218,168,209,60,67,184,143,85,97,148,213,233,220,45,160,142,191,107,196,248,73,88,49,0,0,32,0,73,68,65,84,59,202,21,14,181,80,94,229,44,133,254,58,242,154,75,105,214,216,178,5,7,3,19,
41,86,201,118,43,214,211,173,83,9,68,224,13,81,108,254,44,143,2,49,123,53,165,57,39,99,34,244,230,12,31,7,82,138,129,223,105,29,25,189,72,193,43,199,202,227,235,156,168,127,179,213,124,111,189,77,123,
34,166,238,4,96,223,144,170,229,119,154,241,216,24,251,222,204,62,181,50,223,4,238,251,220,177,42,121,66,57,83,83,171,198,149,13,74,52,230,157,55,166,211,219,70,26,42,118,144,252,61,79,79,215,239,247,
180,132,43,99,224,49,43,199,147,91,76,121,176,237,154,105,133,178,130,102,122,150,253,143,100,37,234,103,228,16,117,186,254,110,176,158,67,74,68,144,10,213,83,41,145,49,183,232,189,162,116,233,232,241,
109,174,35,36,98,182,123,218,28,43,233,168,53,114,8,88,136,19,222,39,178,118,243,81,181,2,1,105,189,240,104,123,26,1,164,220,35,99,141,223,163,56,3,84,2,26,104,250,84,207,165,247,166,184,135,54,59,165,
44,67,60,72,173,216,78,219,189,249,250,214,99,113,47,124,185,167,33,5,84,200,254,124,6,114,165,104,154,121,132,73,77,145,63,249,142,42,172,141,49,149,76,146,213,82,203,84,41,87,52,166,202,128,57,136,180,
177,233,83,179,131,21,40,134,110,178,173,42,228,81,240,166,222,70,56,190,127,43,182,51,37,111,235,226,136,216,191,189,221,255,70,157,6,145,213,44,99,21,219,219,71,188,122,157,211,220,188,97,111,121,229,
206,145,138,141,189,222,243,180,14,64,165,123,86,62,236,95,111,72,186,59,162,226,79,139,151,103,152,151,72,180,100,138,248,142,253,227,114,236,35,227,168,80,19,235,178,3,81,105,140,248,26,107,163,4,224,
183,126,143,229,168,243,129,252,232,121,199,186,86,122,107,232,46,181,98,31,31,16,82,159,170,100,219,155,73,47,134,134,184,198,105,75,98,201,181,240,235,91,45,208,222,5,150,27,163,14,91,129,108,238,130,
217,168,15,144,34,62,205,234,190,34,243,30,145,183,27,244,219,234,213,175,184,52,246,177,103,41,2,140,212,221,65,184,86,132,209,213,234,34,164,77,120,167,131,208,32,98,151,18,152,227,5,207,46,162,107,
77,136,184,83,109,105,132,208,202,112,211,211,0,235,144,15,109,89,98,151,26,224,110,247,212,119,127,211,135,226,45,128,96,249,151,226,150,11,220,205,172,97,103,23,93,227,177,103,214,5,6,20,12,187,21,3,
167,141,243,170,225,202,254,130,29,171,27,28,173,72,153,239,72,32,143,64,212,85,166,105,135,134,49,88,167,192,151,249,205,16,116,38,208,12,40,28,74,77,22,211,206,247,154,51,13,182,255,86,27,86,51,242,
243,27,43,250,10,35,195,105,223,137,181,26,158,113,174,144,42,247,180,115,166,53,25,175,29,53,34,60,51,147,30,174,190,86,230,105,15,235,248,218,43,139,137,177,199,43,41,130,172,174,117,50,106,193,177,
159,156,138,86,28,84,245,203,133,41,80,146,129,43,86,6,62,253,47,79,144,11,126,88,106,120,70,136,88,153,246,64,165,205,13,160,255,98,108,72,36,13,49,220,58,72,221,217,24,252,150,195,76,117,197,61,116,
229,183,239,248,184,154,34,238,101,171,116,187,50,250,58,0,62,27,20,126,59,41,211,227,235,19,104,153,167,194,124,96,59,119,113,221,39,201,142,215,73,179,252,139,6,44,230,243,202,154,167,97,216,135,238,
4,131,137,20,155,31,249,200,181,242,67,110,99,83,86,222,147,25,193,124,116,111,240,220,224,62,244,143,221,239,190,124,205,177,127,142,164,148,122,183,106,67,43,31,101,6,247,37,181,193,255,72,185,177,145,
236,159,28,133,50,62,255,223,171,49,78,252,247,222,244,108,1,187,8,170,164,136,43,118,34,152,3,123,223,114,31,241,105,71,96,150,245,200,146,221,9,61,51,222,121,178,189,103,247,45,30,57,59,115,141,120,
180,109,48,19,99,69,218,182,34,247,116,240,203,178,17,233,7,177,202,29,94,109,134,212,34,227,126,10,66,132,194,235,137,54,170,43,94,153,131,249,164,130,137,82,12,98,37,51,222,65,183,149,141,100,8,157,
45,29,116,94,148,187,139,250,162,241,206,89,43,126,243,33,15,247,230,30,186,97,41,168,150,105,92,223,1,245,24,90,180,15,80,47,70,229,1,186,176,3,121,207,156,128,213,82,106,173,142,175,59,80,235,181,79,
147,140,174,188,131,155,51,151,208,116,25,94,205,211,88,144,215,226,137,250,128,10,55,139,68,148,240,143,149,213,87,215,53,49,74,13,148,226,23,67,54,109,175,232,216,42,117,203,51,241,193,136,71,103,72,
225,12,94,161,145,73,13,94,13,59,137,230,201,168,158,205,81,226,24,95,181,106,208,178,200,235,94,39,83,200,234,126,164,130,51,69,159,137,55,227,195,81,66,3,144,65,54,126,104,234,184,14,231,5,216,229,195,
17,246,6,144,103,192,186,23,255,43,170,87,72,151,147,216,179,76,213,10,204,25,149,199,146,193,188,51,14,134,156,142,5,237,126,50,15,149,238,195,76,183,235,123,235,245,152,83,97,13,67,198,236,12,249,252,
143,150,133,20,218,248,51,26,91,85,219,141,221,52,122,173,247,7,234,217,128,82,83,31,221,1,114,172,27,121,205,103,107,228,61,211,210,192,14,38,115,144,180,47,101,28,138,83,192,26,85,221,67,100,57,245,
40,213,62,210,28,194,232,123,140,172,237,5,157,126,247,154,157,33,80,16,169,189,243,194,25,244,194,50,175,79,46,82,10,123,205,235,63,91,204,17,46,79,233,177,193,66,67,37,101,235,147,122,229,41,115,86,
133,145,175,149,140,50,12,188,228,45,208,190,59,46,102,165,213,112,250,213,64,87,209,161,158,186,55,251,243,213,10,164,235,151,82,199,47,162,243,47,209,49,253,227,104,118,50,139,172,163,2,169,166,102,
51,152,119,141,172,229,65,113,232,203,149,35,198,189,139,140,72,246,189,247,133,175,17,175,18,63,254,222,138,231,39,146,195,70,255,185,92,225,203,120,98,156,189,78,196,195,174,70,81,243,97,249,194,249,
199,67,160,188,17,209,160,118,128,165,149,151,188,227,136,142,106,205,14,12,51,25,13,232,104,242,218,94,224,113,227,235,200,8,26,238,107,41,234,65,127,117,154,93,174,57,90,88,24,40,114,75,94,87,161,28,
18,211,153,236,189,42,220,59,8,103,81,84,107,255,182,60,162,121,51,121,108,45,90,22,107,63,196,158,50,183,131,170,250,155,189,50,214,50,156,197,129,196,3,124,234,83,239,239,249,83,217,219,227,114,190,
160,70,165,30,45,26,191,250,242,90,132,210,137,187,36,110,170,3,62,243,141,171,69,68,223,236,176,3,115,255,3,103,36,99,147,141,84,17,215,146,128,195,12,252,177,70,102,13,171,128,61,150,161,21,175,114,
124,172,98,212,71,54,174,251,102,85,177,12,49,83,222,165,177,18,107,247,127,49,30,237,89,140,215,39,30,85,234,101,147,142,29,255,86,138,185,239,199,84,237,101,218,214,168,55,84,180,105,251,155,25,164,
200,65,136,140,95,230,0,175,174,163,250,17,205,12,191,170,31,138,22,220,223,211,34,44,215,221,8,90,97,198,45,170,201,79,149,115,96,92,11,214,149,106,141,160,34,44,112,205,107,158,217,5,174,109,149,41,
119,106,220,240,191,195,133,251,203,173,130,195,109,249,149,182,98,224,20,25,51,236,119,45,46,112,11,29,204,192,99,84,123,231,17,244,62,221,61,221,222,137,207,95,65,36,252,169,160,205,155,226,213,175,
126,137,19,234,37,210,82,202,72,121,240,255,81,155,24,108,208,198,143,135,234,77,220,195,126,222,171,4,180,95,117,156,57,219,134,213,43,97,151,28,178,0,45,52,131,159,129,249,56,67,69,28,84,103,238,55,
78,35,17,226,87,90,19,62,107,5,73,47,197,62,10,146,224,5,181,99,202,173,41,99,67,53,149,154,85,101,1,53,54,248,69,16,45,80,222,13,187,59,63,112,125,31,162,15,117,230,70,95,25,134,126,236,151,160,75,221,
241,244,15,96,196,124,224,232,244,158,78,39,108,174,129,10,109,162,89,68,71,2,7,133,239,251,52,115,12,254,238,116,52,236,108,86,135,117,246,196,227,219,95,119,220,211,57,74,214,98,225,8,33,23,76,207,202,
83,84,127,242,173,184,244,114,220,251,171,251,87,93,75,230,86,41,3,63,198,211,193,244,242,100,222,109,219,13,36,167,255,198,243,193,37,22,147,168,163,196,97,119,72,86,78,147,66,249,191,206,234,48,182,
77,154,27,158,145,90,88,206,2,230,42,220,75,12,50,175,14,83,88,215,171,195,145,174,177,126,93,67,27,7,183,189,157,34,30,23,120,130,148,59,11,153,2,171,224,83,50,145,30,166,17,118,251,235,102,164,153,214,
166,58,106,48,79,195,176,191,255,8,219,216,95,14,58,87,233,211,54,109,182,75,125,210,186,93,216,144,37,124,225,64,41,208,95,229,113,195,215,90,250,57,97,187,170,123,95,200,142,0,46,84,34,141,60,89,189,
64,180,170,10,250,83,172,68,161,67,210,75,42,92,143,104,166,21,115,61,171,208,224,176,190,85,214,194,40,22,49,9,40,84,227,165,230,56,0,23,130,86,138,61,157,89,225,62,106,52,28,83,156,184,26,180,239,31,
204,91,102,192,148,59,245,42,247,198,198,150,87,228,39,53,111,108,132,122,174,1,65,243,225,85,116,131,218,118,129,52,195,59,114,143,14,43,75,18,226,87,19,143,245,53,103,189,212,142,87,231,179,59,57,86,
218,173,217,70,243,135,60,136,197,106,100,183,235,9,178,192,227,187,17,10,219,166,163,103,54,240,251,104,62,11,124,246,105,94,219,147,8,126,132,162,53,62,234,182,151,209,50,226,141,141,26,117,63,80,100,
230,220,141,21,145,23,202,74,186,140,120,148,12,134,55,215,186,235,133,163,149,39,82,238,202,128,171,136,221,195,171,69,112,40,206,11,115,222,45,148,20,171,72,51,70,240,153,63,214,163,230,121,192,65,131,
148,158,156,50,32,207,74,220,244,167,223,191,55,1,13,8,100,175,18,140,176,71,233,34,165,114,50,46,28,109,212,79,117,226,236,41,221,126,195,71,53,101,80,54,251,82,252,121,57,68,102,112,107,111,101,15,43,
41,176,49,169,69,175,185,241,247,120,121,191,254,6,14,102,220,112,13,174,223,240,221,106,30,40,87,189,104,211,1,96,222,70,58,201,174,27,199,4,158,226,231,147,148,216,188,245,40,174,203,101,155,101,215,
94,234,136,81,209,110,192,90,232,166,170,145,225,64,197,140,188,233,97,157,235,117,180,110,60,144,60,95,141,174,180,4,52,115,63,54,48,44,109,81,205,10,127,109,41,214,197,151,15,91,103,66,97,123,141,231,
213,198,144,4,175,189,207,37,118,175,175,175,114,205,23,63,190,137,78,100,166,142,81,1,133,78,254,171,130,119,181,172,226,92,45,161,212,144,55,173,31,1,189,209,125,30,179,118,49,35,194,72,47,226,105,5,
39,169,118,83,231,166,49,199,45,97,117,152,124,253,30,247,41,60,127,98,19,146,74,130,65,162,239,95,24,106,113,105,116,217,239,234,203,123,71,52,230,13,152,186,13,132,107,175,233,46,188,14,49,172,77,240,
182,145,230,97,95,224,124,217,16,86,26,154,48,207,100,87,239,146,141,190,87,143,60,205,155,19,83,189,150,124,171,35,43,221,13,137,218,143,85,252,227,181,82,171,81,123,197,90,25,148,163,22,87,185,49,130,
182,75,37,186,102,96,255,146,25,43,101,42,110,201,121,17,203,167,77,227,61,24,235,117,65,161,35,211,181,92,139,140,152,235,101,153,29,109,192,4,103,13,134,131,210,13,76,177,13,187,65,50,231,82,192,139,
68,156,253,125,7,189,12,141,153,233,127,129,62,195,60,73,103,64,225,16,139,199,244,151,37,13,127,119,154,38,19,156,163,137,155,250,55,234,131,86,198,185,27,195,215,96,124,97,62,145,236,56,223,1,243,142,
188,99,243,72,222,50,43,38,157,77,155,175,67,113,84,181,109,203,88,175,161,91,63,12,50,58,165,52,109,81,24,208,93,177,81,39,8,158,186,253,88,166,229,163,27,225,24,173,112,205,160,106,67,101,75,80,219,
209,184,20,157,184,133,156,153,23,203,224,202,207,124,174,74,117,177,60,102,18,203,75,177,227,230,148,56,73,14,250,215,158,23,117,15,138,65,208,135,131,208,215,147,112,34,238,192,206,75,4,180,12,245,5,
92,70,87,140,94,214,50,94,212,109,147,228,100,131,228,4,195,175,126,245,211,35,189,174,137,50,132,50,121,5,21,144,116,28,194,88,71,251,151,126,218,219,153,2,181,73,92,122,221,198,119,88,42,26,244,194,
183,176,131,163,235,138,213,212,232,115,18,179,157,200,218,132,33,13,220,151,243,40,70,176,65,165,10,149,71,20,215,175,81,33,82,221,241,189,216,246,253,123,195,207,136,151,171,77,43,197,159,79,112,29,
185,234,95,29,37,91,55,23,68,212,28,141,4,56,27,188,157,213,171,214,82,92,52,220,136,199,75,70,103,223,251,152,17,15,230,154,38,170,194,231,16,196,174,112,154,229,169,143,83,4,168,138,163,106,74,54,165,
2,105,84,133,115,105,49,31,202,241,142,192,175,178,82,76,6,138,76,70,51,3,130,124,204,239,173,127,143,88,28,12,121,253,146,249,55,165,20,227,175,242,189,29,24,205,223,248,85,181,158,205,193,99,74,47,157,
186,203,211,20,144,127,214,211,3,152,19,117,202,229,198,96,131,17,87,39,218,141,49,107,190,109,27,85,86,244,53,48,125,52,234,179,95,119,39,196,62,198,118,252,186,191,235,239,240,98,155,120,133,42,177,
199,198,206,46,203,126,210,178,12,1,49,122,163,235,46,80,36,115,177,162,63,204,44,76,38,248,119,164,9,9,176,234,231,107,188,26,17,132,33,114,11,213,181,154,245,222,46,214,121,109,212,235,127,57,51,1,28,
186,113,64,23,22,41,54,170,107,122,67,204,96,221,208,64,88,70,244,119,100,100,245,169,240,58,239,89,148,171,101,207,209,228,224,171,27,99,48,98,204,127,41,211,152,185,58,162,188,27,69,195,99,179,215,188,
126,149,16,97,132,204,140,185,177,104,179,138,193,209,239,213,201,3,243,142,253,140,240,43,195,139,253,227,118,74,224,221,53,75,101,79,159,247,191,182,207,234,76,250,106,237,112,189,188,45,140,207,120,
6,57,198,108,247,235,113,245,52,162,23,204,157,241,17,52,29,53,236,21,46,178,55,194,173,198,5,95,243,122,255,173,112,168,23,139,11,130,115,180,254,102,242,98,25,150,234,181,218,188,88,36,142,189,33,143,
78,190,15,89,38,163,111,49,178,6,218,48,198,125,226,137,7,164,241,46,12,99,158,32,11,245,45,14,175,97,114,222,102,121,86,215,192,204,16,218,177,182,144,56,41,16,116,8,152,87,219,232,85,179,149,254,86,
177,0,34,131,95,237,3,89,189,99,109,252,93,163,67,222,106,177,221,81,182,106,133,115,246,200,26,117,191,51,58,91,120,195,143,234,168,209,127,104,209,212,192,76,14,122,38,196,208,230,201,247,77,245,255,
66,117,248,187,215,165,57,168,233,97,143,139,105,177,250,96,60,56,113,241,208,120,26,60,241,25,127,104,220,185,157,26,51,101,72,209,193,136,214,17,242,193,170,137,5,84,169,86,30,35,181,40,225,166,205,
39,177,73,109,132,190,203,247,90,209,213,162,135,87,13,75,105,101,100,222,94,132,160,85,176,191,57,19,40,126,192,173,1,183,43,8,171,98,111,149,88,113,127,144,54,251,146,68,72,182,139,160,159,108,191,103,
204,33,85,223,187,151,173,219,77,248,199,183,194,129,86,215,189,142,50,172,182,61,219,55,21,188,138,128,109,217,198,210,65,126,2,88,208,125,125,191,255,218,62,99,204,185,51,130,99,107,60,122,25,68,120,
52,164,70,39,45,88,68,163,244,178,161,211,231,173,236,61,9,14,95,188,241,220,251,6,232,73,15,175,173,212,224,199,100,218,52,76,142,255,122,13,200,171,65,107,32,87,202,217,139,58,78,220,42,29,234,216,34,
136,148,195,140,124,248,199,55,52,38,75,139,34,119,104,105,223,73,135,243,54,235,178,170,70,76,253,91,163,54,99,76,21,83,174,172,149,240,33,215,12,135,90,126,145,97,142,240,242,178,85,109,107,137,39,134,
239,43,60,145,192,68,198,24,239,49,127,138,87,225,200,152,32,36,27,51,32,194,217,160,215,53,175,50,59,200,86,198,155,24,170,89,182,26,134,19,205,231,140,241,117,186,59,197,97,196,44,182,84,198,241,8,230,
209,190,34,53,223,198,115,58,151,117,232,32,213,92,187,172,63,19,223,29,99,14,120,186,142,7,153,107,244,61,6,22,254,90,254,73,72,137,107,101,138,84,155,106,152,229,107,78,129,27,227,122,161,103,227,30,
27,178,140,31,141,99,120,106,80,222,186,114,59,18,109,164,1,6,51,49,234,163,126,200,231,52,169,3,234,228,217,41,157,4,111,43,165,84,216,36,234,130,34,199,20,22,28,10,55,154,11,252,241,77,52,109,88,99,
112,159,41,95,94,216,163,188,79,254,245,29,93,234,90,7,118,70,185,3,145,94,6,46,12,43,12,153,77,153,229,145,209,85,206,192,188,86,174,31,59,48,17,79,117,224,229,135,198,16,47,56,117,134,59,142,220,108,
239,217,176,40,142,199,220,147,129,122,41,166,228,23,248,134,38,245,188,217,237,9,49,66,76,203,149,195,157,192,160,166,188,133,142,134,88,124,134,63,28,187,106,230,193,143,37,214,69,3,61,219,57,166,73,
46,118,76,137,146,219,83,13,55,244,82,189,90,143,206,76,195,219,111,25,2,151,163,51,214,134,113,28,187,70,121,93,71,61,198,66,84,17,205,77,174,5,55,62,225,156,198,46,65,54,190,163,171,183,31,85,163,181,
150,155,139,5,76,60,96,208,119,68,68,185,203,145,136,145,74,1,67,98,88,81,70,29,41,94,101,179,195,90,249,28,27,99,176,29,157,206,45,60,200,65,247,82,175,189,132,157,168,95,143,58,41,137,38,84,234,38,155,
211,252,130,218,230,113,86,99,143,30,241,52,211,78,157,207,170,94,65,13,229,220,46,53,53,50,25,158,6,226,235,29,28,231,146,10,50,103,157,128,70,227,123,103,230,184,205,194,4,45,87,10,171,236,200,25,80,
229,209,53,210,205,234,232,50,107,88,230,124,77,55,44,122,42,189,140,251,5,90,105,138,19,35,115,108,35,80,43,49,42,235,97,121,97,206,84,255,120,204,181,11,162,93,185,206,183,25,37,33,110,17,207,60,134,
253,187,55,230,222,120,40,89,179,115,196,220,158,201,94,68,35,3,51,202,70,105,152,130,34,207,77,80,179,254,173,149,82,254,8,179,109,100,139,153,174,179,230,120,43,236,198,214,166,167,63,157,187,183,223,
63,130,60,92,215,55,177,140,171,225,164,92,252,141,243,164,41,175,104,119,251,247,134,6,125,37,38,172,74,86,117,129,217,82,92,84,40,13,120,179,151,166,63,145,242,223,52,234,70,205,144,70,222,75,241,239,
65,187,16,246,199,217,50,163,158,25,134,161,32,70,58,203,58,71,99,58,106,140,203,174,179,107,1,245,53,88,113,181,8,1,234,11,179,82,193,104,50,163,113,175,102,167,144,77,15,252,42,233,169,121,110,194,140,
35,59,124,32,203,64,43,120,82,186,93,157,193,167,164,248,106,185,86,114,182,98,127,68,220,231,81,185,187,252,17,239,157,250,74,22,236,156,234,215,120,106,124,62,82,172,116,207,182,243,106,28,37,7,249,
67,99,168,48,88,119,97,184,227,131,127,109,200,61,166,72,14,172,161,182,63,41,84,161,142,213,58,205,124,50,30,230,219,242,195,215,145,211,18,67,180,246,119,64,57,71,238,198,181,88,199,24,188,44,171,68,
192,125,224,49,83,142,97,19,101,136,119,208,188,202,183,141,40,243,118,25,203,46,40,209,111,113,164,216,161,205,59,198,156,179,215,47,157,12,232,183,149,133,173,148,164,220,185,81,21,159,253,94,204,197,
42,42,71,236,189,121,180,159,240,78,90,98,208,96,154,157,115,67,227,174,202,7,100,23,179,89,132,190,154,175,87,116,171,95,247,57,102,226,18,6,181,13,26,59,11,221,196,174,212,95,177,83,43,138,213,194,156,
165,202,17,236,42,219,202,81,181,183,181,231,31,106,73,84,46,151,194,54,157,7,83,129,14,38,58,53,151,224,237,24,252,149,100,212,224,58,106,203,171,39,154,21,92,125,140,115,85,166,100,65,213,193,178,213,
10,143,148,50,66,44,227,77,226,220,229,177,99,96,126,60,21,252,100,199,2,241,225,155,8,153,195,24,127,4,171,113,136,250,236,215,146,114,74,214,114,149,57,18,3,183,59,37,22,48,116,17,116,198,150,244,52,
135,216,59,135,240,100,63,47,197,214,74,127,148,171,105,5,183,66,76,11,7,249,223,123,128,150,80,182,121,46,233,253,31,97,209,246,108,12,119,219,145,55,95,227,143,168,165,200,67,227,157,229,227,197,210,
9,156,48,220,156,85,149,58,249,13,112,81,40,185,244,243,128,156,163,126,78,8,102,42,122,13,33,131,94,124,83,157,42,44,232,8,237,226,30,107,164,231,180,27,212,104,176,126,186,39,59,153,177,211,223,58,87,
205,208,152,102,81,237,83,178,217,152,170,182,111,173,12,89,88,105,181,168,163,106,32,107,243,91,120,83,19,13,156,227,204,125,107,99,222,26,252,27,227,67,179,193,236,158,0,178,188,227,0,84,250,175,238,
103,248,51,122,171,62,237,27,236,156,47,118,90,240,58,186,167,248,58,29,243,200,192,241,255,12,50,99,185,114,4,87,243,217,241,71,243,179,162,209,229,117,124,111,13,78,150,195,189,17,85,217,229,159,34,
230,14,192,122,141,36,163,82,35,51,215,13,214,121,163,177,175,246,180,1,158,235,71,8,217,174,128,155,204,209,201,19,53,242,254,131,7,225,240,97,128,81,190,228,35,190,123,16,161,175,202,35,95,121,186,71,
67,72,171,239,148,1,154,37,179,85,35,188,154,83,48,115,76,248,252,158,253,77,26,13,126,121,167,134,199,111,38,221,178,26,101,74,187,143,63,48,150,155,78,15,207,206,88,124,252,214,173,10,53,250,62,62,120,
236,136,8,157,37,107,224,49,22,199,215,103,50,71,179,214,140,188,174,50,122,151,181,27,77,228,105,167,227,44,95,165,190,178,50,83,59,1,87,23,226,107,144,255,87,236,35,129,47,124,224,16,184,7,73,75,161,
221,13,55,159,155,211,182,52,22,171,178,168,125,100,228,86,134,67,181,101,253,201,198,121,186,122,179,189,208,185,70,188,20,62,214,60,217,125,197,55,130,162,157,225,136,28,147,172,76,221,95,205,199,174,
56,207,111,117,42,75,168,208,207,177,12,164,13,218,212,226,222,60,76,24,167,83,143,237,66,176,167,17,94,37,224,96,20,171,239,43,94,116,214,209,121,8,140,39,203,145,33,112,85,224,173,201,59,81,185,161,
121,233,243,55,205,249,235,47,143,65,195,187,247,97,211,160,51,176,249,81,230,200,139,227,206,161,56,174,219,207,98,184,136,109,201,151,94,14,209,201,123,93,182,171,106,53,52,116,189,22,39,223,213,232,
121,179,55,79,20,183,82,174,180,12,28,120,3,3,143,6,95,225,215,60,204,90,175,181,84,11,254,62,47,122,210,221,121,224,76,11,106,104,205,191,86,230,184,175,27,248,243,158,79,48,244,124,46,34,58,96,105,22,
120,123,41,27,52,208,149,235,151,98,16,217,215,4,188,162,159,153,222,215,68,27,40,89,211,35,16,242,110,228,45,31,181,224,7,80,145,6,109,224,21,101,167,176,107,148,178,242,200,161,200,28,141,157,246,17,
253,213,253,21,236,58,64,95,5,210,33,81,58,195,165,202,235,52,126,163,220,174,101,101,200,67,239,73,234,200,76,175,226,201,252,70,253,104,158,37,229,49,245,110,14,53,176,247,56,154,41,0,157,83,59,193,
190,254,222,180,148,61,64,123,39,221,174,130,216,113,32,174,204,105,206,209,231,180,111,26,244,82,180,201,137,24,16,218,29,107,52,251,57,244,24,42,79,212,149,161,198,218,27,104,52,118,235,69,251,132,122,
156,202,123,23,83,212,19,43,230,115,127,125,248,11,64,195,101,31,22,184,61,253,254,92,120,25,58,163,212,215,190,126,56,126,164,12,204,34,173,214,88,57,7,34,248,22,113,108,14,56,161,114,43,125,188,129,
119,97,1,89,209,153,190,240,96,145,51,208,63,13,142,213,198,87,164,19,33,215,102,69,188,65,187,201,168,119,148,16,239,229,30,225,43,85,75,41,246,68,16,182,156,120,205,3,83,205,255,34,161,173,61,65,185,
209,108,156,42,149,49,68,247,158,89,125,231,176,67,55,51,113,120,31,193,24,183,58,199,186,183,120,77,117,104,85,175,5,206,142,99,179,130,163,8,178,252,147,92,79,135,210,207,218,235,74,45,0,219,83,150,
44,200,234,251,234,195,193,157,178,215,205,255,206,222,123,4,125,9,12,31,186,149,208,8,239,88,48,247,67,45,111,165,219,65,195,193,96,53,26,218,61,203,234,181,121,107,183,13,122,164,82,140,139,85,204,20,
215,169,239,34,79,132,203,187,64,84,184,30,229,247,24,159,28,183,57,249,184,30,92,157,46,21,15,169,149,221,223,82,223,2,208,146,56,174,67,48,104,253,181,234,155,102,104,39,178,174,123,234,76,189,151,66,
8,112,130,202,180,37,130,200,75,151,241,36,162,97,49,148,139,151,175,215,167,30,65,225,8,208,252,190,228,112,242,234,15,8,22,59,229,123,254,197,172,107,218,183,188,61,105,65,116,54,29,91,225,132,93,26,
12,156,138,241,56,208,24,58,88,84,166,79,221,117,104,208,246,42,49,158,2,184,95,117,94,100,191,76,229,174,43,58,12,5,58,219,72,62,173,249,231,152,15,205,75,12,118,240,172,59,4,251,179,195,176,198,102,
217,73,37,56,185,125,172,157,227,100,152,155,30,101,107,19,215,52,120,108,16,97,140,46,13,63,30,137,69,235,168,60,169,34,202,2,181,60,186,110,26,249,25,172,65,57,162,230,25,66,116,67,55,25,20,175,206,
215,214,127,69,162,141,168,122,109,204,8,205,100,114,208,172,157,187,26,27,225,19,58,47,90,167,45,52,53,182,101,165,196,54,113,7,31,182,59,52,232,171,101,196,247,108,39,74,33,163,44,214,80,116,96,32,107,
163,121,140,23,41,42,38,227,252,214,73,195,15,108,182,232,247,97,236,195,28,24,246,104,212,103,212,111,31,3,27,193,216,168,103,61,101,124,20,92,225,151,180,232,239,220,54,174,215,2,170,166,177,87,193,
128,24,189,246,62,214,244,222,195,222,6,159,83,157,229,239,237,99,253,175,116,35,62,249,179,47,93,233,140,65,5,2,211,31,167,205,138,158,52,85,198,98,165,38,35,242,140,70,29,156,108,224,207,213,11,232,
54,107,252,173,242,85,139,180,223,66,19,233,171,55,230,133,11,80,8,74,187,156,197,107,237,58,141,55,5,203,204,62,240,58,248,232,235,24,6,195,218,173,153,8,30,162,103,156,25,219,77,211,113,22,100,195,255,
69,19,199,14,55,168,113,220,160,139,110,132,205,128,118,61,65,100,139,184,22,34,226,15,90,181,50,67,194,58,207,132,36,96,123,217,203,200,201,187,238,161,159,110,88,131,140,89,197,206,211,58,60,2,177,150,
240,125,0,205,204,197,33,106,200,168,190,163,107,38,190,215,167,50,228,123,219,201,101,171,210,161,65,231,105,61,111,27,237,149,35,100,54,142,117,151,175,26,105,45,205,18,138,21,103,182,134,190,110,57,
79,39,208,61,237,169,96,214,200,87,163,141,134,125,10,113,29,157,232,58,200,173,161,55,250,196,203,112,166,202,174,69,107,59,89,10,222,69,49,18,70,177,175,125,190,165,236,231,4,175,96,166,250,104,174,
166,106,109,123,38,213,57,41,251,106,111,94,53,140,115,37,232,217,254,92,202,189,207,151,98,106,37,0,74,227,150,226,7,141,112,114,150,74,70,124,96,17,140,147,120,85,97,153,50,10,157,61,186,136,183,218,
172,1,70,186,72,144,249,64,190,251,199,37,83,198,193,8,233,22,23,156,59,217,24,206,125,11,162,204,139,168,160,225,178,36,208,151,86,138,220,6,218,153,63,183,149,85,140,91,1,12,24,41,179,12,92,159,153,
10,168,230,47,99,0,1,7,254,245,218,66,197,218,249,154,122,235,22,180,217,103,28,239,149,121,218,181,94,79,25,242,82,64,63,211,224,240,58,121,103,239,188,227,184,145,114,191,107,204,225,91,43,65,20,108,
235,116,8,29,128,133,189,222,225,170,11,132,209,95,93,88,128,199,23,207,111,18,4,186,165,188,8,180,43,13,33,21,250,49,94,235,145,204,151,211,20,187,240,72,73,168,71,60,207,5,186,13,197,87,74,25,41,250,
82,202,200,66,140,72,136,59,170,148,25,235,115,50,14,104,35,192,31,23,134,127,221,139,93,187,233,161,9,17,84,47,86,241,4,90,153,167,249,71,187,161,164,96,188,2,190,70,223,217,24,43,35,80,138,224,147,190,
87,85,40,202,88,113,15,203,254,186,118,190,105,102,180,128,87,119,56,168,81,125,116,0,157,97,77,248,14,38,117,164,120,35,67,90,166,46,136,28,50,71,174,247,161,145,179,35,120,241,206,129,69,106,118,164,
208,120,181,89,33,148,51,37,0,7,128,108,243,139,120,66,97,196,123,181,12,37,255,234,135,117,124,79,35,103,166,77,34,231,126,212,36,122,188,237,150,229,90,25,170,37,130,102,46,241,172,19,50,245,174,243,
208,113,127,193,161,56,101,61,124,93,101,176,179,52,60,46,0,51,40,168,4,36,228,70,24,5,5,133,196,244,200,120,80,247,127,196,133,161,239,35,183,6,198,247,73,192,174,11,197,53,102,73,12,209,142,128,41,125,
107,219,79,101,96,126,139,122,204,95,151,112,203,167,91,164,10,218,212,239,166,152,140,1,243,198,124,42,35,151,233,172,168,252,84,97,88,99,238,86,135,40,11,198,185,189,168,215,174,224,27,114,99,107,91,
133,60,51,42,125,45,57,49,136,28,45,92,175,120,63,26,232,72,13,116,101,166,214,125,230,24,48,126,117,159,129,132,213,26,71,79,115,60,197,145,160,66,124,6,119,98,79,241,16,152,187,77,22,147,76,233,81,119,
61,199,62,26,111,238,174,144,187,62,71,43,1,103,99,126,149,161,179,125,23,212,212,247,139,170,42,36,56,54,212,202,92,75,165,188,103,204,129,30,167,214,81,199,61,97,204,251,231,67,143,173,25,244,226,26,
63,171,51,224,188,79,46,177,170,58,219,206,83,110,212,7,244,232,163,27,11,65,243,169,212,123,231,202,24,216,7,15,204,205,159,230,155,10,164,147,51,186,86,89,149,77,242,187,130,216,124,71,39,47,205,19,
101,71,97,88,111,163,113,203,84,24,208,64,25,25,35,47,22,177,235,50,235,103,4,251,3,52,208,157,98,199,53,114,26,184,44,43,207,12,137,159,30,251,50,87,245,51,54,179,159,29,251,124,204,8,239,43,101,238,
56,34,230,134,225,17,123,249,120,61,207,138,69,14,254,53,190,205,236,130,22,158,157,254,184,102,47,183,175,33,158,120,43,30,94,43,147,61,60,124,213,15,101,85,172,208,141,109,139,101,193,148,2,239,86,78,
253,120,12,249,48,114,111,141,184,157,95,228,105,181,223,237,159,1,71,28,153,108,14,222,217,17,243,44,114,195,217,222,28,66,146,238,193,57,0,91,102,157,119,201,104,252,107,131,55,201,52,154,131,55,30,
79,3,172,230,91,15,74,205,201,255,101,36,112,198,195,67,167,220,119,193,255,164,106,90,27,230,200,31,238,0,229,13,114,244,54,92,131,220,29,77,116,56,177,82,87,32,79,1,10,208,163,39,225,47,176,170,209,
174,90,51,118,28,125,61,108,220,195,182,237,82,163,160,28,95,244,103,152,52,159,195,247,42,171,128,124,108,49,201,70,169,6,183,46,82,253,224,30,171,106,54,154,25,125,239,4,188,20,176,117,4,240,197,58,
179,157,86,194,158,103,59,141,83,185,163,226,94,241,25,99,207,238,172,37,32,170,235,203,25,151,157,56,174,223,224,14,246,205,237,243,38,216,34,142,246,33,17,174,82,220,60,76,62,73,233,11,204,88,15,157,
150,204,241,139,122,48,12,201,85,209,212,3,159,196,56,197,2,153,9,112,250,154,237,109,155,157,165,99,32,1,229,12,233,139,154,117,249,222,125,221,139,99,225,109,99,110,237,134,67,215,172,76,196,212,242,
187,28,104,254,57,103,251,29,35,211,82,99,174,222,159,128,159,181,22,183,223,219,138,24,172,128,246,178,70,3,25,14,12,218,168,99,86,198,251,128,167,42,43,148,157,10,214,206,236,240,171,33,95,78,150,127,
181,98,131,139,253,147,152,103,128,202,121,146,128,235,151,187,92,74,101,247,137,24,130,19,215,166,92,95,234,112,183,137,255,197,126,182,102,235,42,211,19,149,249,123,243,219,92,182,54,10,227,235,200,
152,71,243,254,71,220,139,240,171,239,167,245,246,161,186,171,90,80,193,221,163,176,138,96,223,107,127,191,223,167,227,135,99,129,101,249,1,79,18,118,22,56,250,222,98,193,20,194,118,233,135,138,183,167,
98,192,87,179,222,53,174,141,214,151,118,139,128,155,39,140,110,81,116,222,7,117,16,78,28,236,55,54,39,192,116,64,179,148,63,103,2,186,204,15,236,146,14,25,74,203,196,232,215,114,18,153,231,188,15,25,
110,32,203,170,73,43,71,153,134,19,120,57,187,87,28,125,25,177,19,193,93,213,180,70,205,254,120,12,254,36,160,125,169,137,24,143,246,53,253,103,30,251,194,29,217,11,86,23,93,36,175,168,160,82,219,49,153,
85,40,81,136,72,198,247,30,13,96,153,162,135,204,194,255,84,73,10,39,160,59,164,209,161,110,116,88,51,95,195,178,26,47,8,214,211,77,148,41,39,130,233,112,59,190,94,65,45,218,113,169,139,251,49,190,157,
251,107,55,65,57,71,202,145,90,245,53,27,211,168,30,126,146,223,104,230,188,210,61,100,94,26,168,192,96,87,184,54,183,76,228,222,13,54,210,157,230,251,17,131,216,117,76,13,198,172,129,129,44,250,199,170,
238,211,110,176,237,247,24,210,135,241,229,128,182,104,243,199,89,58,104,245,113,142,99,206,220,81,196,30,96,67,133,247,14,168,69,132,188,244,255,165,32,223,207,79,158,73,189,131,145,125,194,35,37,66,
14,239,248,169,214,218,227,1,17,185,131,145,79,13,24,64,164,252,143,216,165,235,118,241,107,57,236,138,166,9,133,48,163,137,110,69,219,236,42,76,106,119,104,154,41,107,5,235,120,158,156,211,16,105,94,
248,174,28,214,255,173,44,55,203,123,119,18,160,32,202,168,68,126,6,223,87,172,139,0,195,173,25,91,51,54,124,136,115,71,30,144,167,149,44,173,112,102,142,132,194,19,77,195,10,118,234,42,253,53,62,3,185,
225,44,17,79,154,56,150,226,184,234,187,86,209,89,249,106,214,195,11,89,95,111,17,220,114,186,154,29,131,89,172,244,93,149,250,232,14,224,182,230,179,90,85,235,74,188,181,175,251,114,206,212,206,227,159,
117,179,123,196,52,192,66,135,230,42,194,150,169,138,146,15,198,222,64,229,150,103,172,133,74,158,170,82,192,165,219,133,175,247,200,122,180,254,101,97,113,1,71,98,88,136,136,151,171,78,21,10,79,105,123,
174,243,24,199,30,164,209,239,74,76,240,80,71,120,236,149,199,168,87,177,100,246,221,105,212,54,239,219,49,12,122,220,46,217,230,8,169,80,25,91,87,28,116,232,208,80,140,88,142,16,253,0,0,31,69,73,68,65,
84,56,238,216,189,200,73,16,70,162,113,93,172,14,117,116,86,109,90,40,99,172,20,191,1,75,230,218,41,123,239,72,160,110,83,163,29,201,94,68,151,229,154,43,187,118,132,160,113,125,53,7,170,35,116,45,241,
103,105,145,104,0,43,20,212,110,158,139,213,41,173,13,163,237,215,204,122,213,174,106,152,190,64,31,71,55,26,124,169,216,238,89,205,209,3,165,175,8,146,162,53,193,47,17,122,55,199,96,182,38,174,113,27,
143,173,61,152,192,88,177,49,62,87,201,175,232,64,129,145,235,234,235,225,65,203,183,56,37,28,173,188,156,144,232,109,114,125,47,250,233,209,196,104,253,133,126,18,110,165,108,31,156,195,52,222,22,221,
164,182,251,209,153,194,233,49,48,74,52,119,227,89,93,84,64,223,39,128,6,100,15,71,106,175,65,209,44,107,166,158,61,154,131,247,235,152,167,74,66,73,157,31,253,135,240,190,189,234,204,67,128,118,236,178,
137,28,10,131,162,53,55,31,129,37,155,252,195,253,81,104,187,129,244,164,165,140,248,5,218,88,165,82,21,126,2,163,113,31,138,29,151,45,181,95,175,55,5,66,159,92,35,90,219,163,172,183,139,22,83,155,245,
216,134,14,90,216,209,4,71,41,129,30,139,218,26,15,162,26,90,115,61,94,95,250,88,181,240,97,181,144,189,119,0,207,66,117,2,114,26,218,60,181,254,85,135,221,250,120,60,101,208,87,120,240,182,123,7,129,
110,113,200,192,171,197,97,202,253,73,64,133,249,12,198,179,125,237,13,143,19,4,176,210,66,29,138,164,218,250,51,181,251,60,116,97,183,60,238,209,122,151,35,220,53,235,251,88,173,211,95,28,116,144,10,
27,155,53,217,44,133,175,246,1,50,59,52,239,219,90,189,143,24,245,224,239,170,143,19,48,156,234,132,113,152,175,200,108,67,165,149,218,223,82,214,40,156,105,112,72,116,14,162,121,116,235,186,55,244,61,
71,117,28,185,93,209,155,20,43,193,178,255,82,74,131,181,18,230,196,169,169,171,178,114,6,18,112,89,143,10,168,26,209,10,104,140,34,176,52,236,188,72,86,216,128,171,27,52,120,198,160,246,121,238,231,88,
186,252,140,87,200,54,176,208,188,128,224,47,68,219,93,30,187,28,250,231,4,214,176,189,222,148,42,184,254,155,61,242,102,43,245,191,115,184,227,212,250,221,181,111,210,236,143,70,231,176,222,136,185,74,
101,153,47,167,240,249,150,96,151,0,127,191,251,23,13,186,6,55,32,201,119,231,241,141,74,143,179,101,22,113,43,47,79,253,11,109,119,202,198,32,91,113,146,239,51,114,58,92,122,95,125,46,144,90,80,105,180,
98,246,87,72,24,29,215,88,85,25,250,76,153,2,124,87,208,175,216,139,252,147,81,14,25,22,84,197,141,174,102,253,50,20,244,44,120,193,252,105,139,249,141,41,86,190,131,6,1,66,110,19,69,224,5,104,225,25,
93,64,15,81,75,87,156,219,134,29,32,174,172,92,216,99,86,189,191,1,13,104,51,140,21,222,235,142,19,24,64,124,60,112,160,32,33,105,80,102,110,41,7,168,206,177,199,30,184,33,195,249,65,35,214,11,234,245,
94,14,124,205,92,41,35,138,104,3,87,165,174,121,89,113,125,129,191,239,26,238,101,123,28,83,156,70,70,220,179,15,215,191,90,234,220,78,44,123,122,236,142,166,251,186,61,115,179,28,199,114,26,25,178,235,
15,234,187,123,170,122,14,40,6,152,29,95,71,249,198,155,226,190,6,212,30,53,127,143,94,70,99,210,139,193,162,37,108,59,149,156,227,128,3,216,91,55,87,255,107,82,240,138,49,126,126,253,197,235,62,221,19,
249,218,169,59,84,92,179,66,104,95,114,211,134,84,202,89,16,26,106,40,55,190,135,110,47,46,164,31,4,43,126,209,108,68,13,209,160,24,89,24,213,26,78,14,216,200,102,239,67,106,246,133,0,36,188,225,137,103,
25,114,13,185,236,226,63,215,229,85,222,64,227,117,163,118,85,108,88,143,58,137,137,216,121,95,215,5,161,155,163,80,81,126,102,95,123,20,59,13,39,180,225,61,6,24,63,30,158,177,220,175,44,11,254,110,67,
101,165,117,205,214,248,221,110,75,117,70,214,131,93,59,243,74,94,158,144,249,35,28,93,16,104,109,142,235,10,195,1,107,191,149,235,109,155,237,26,133,175,90,172,164,184,43,42,240,231,136,152,111,184,187,
134,190,205,126,246,56,175,52,100,38,8,116,67,131,46,218,124,1,236,81,57,217,15,199,129,59,123,156,109,93,25,189,175,30,228,128,51,234,104,191,234,127,207,72,118,152,94,224,244,72,191,139,230,110,101,
251,204,189,63,242,210,223,240,133,6,33,235,5,206,133,219,227,196,134,123,254,219,199,194,238,56,11,95,104,171,222,40,91,121,213,163,173,80,198,228,72,224,247,57,252,179,221,107,206,52,135,214,192,89,
142,177,197,152,123,248,68,94,186,66,237,119,221,9,30,28,88,52,212,189,151,224,152,106,70,193,32,155,125,36,224,43,236,99,52,182,31,228,148,226,160,42,225,2,71,105,26,175,54,215,241,181,144,253,211,52,
95,200,178,136,248,158,63,0,215,117,172,155,246,57,46,172,143,114,140,203,26,131,22,217,153,78,255,159,72,199,125,146,206,83,81,121,41,190,76,30,146,43,101,179,51,251,70,221,240,80,2,197,104,10,191,215,
146,84,136,58,190,3,182,140,140,82,138,195,155,191,56,189,52,247,240,224,175,58,38,194,180,15,201,154,9,48,193,34,123,91,204,48,43,168,79,18,248,127,9,236,58,18,39,223,67,39,68,56,134,166,142,48,180,215,
141,5,222,53,172,234,125,140,97,222,1,161,6,187,47,229,150,136,9,120,219,200,66,96,82,164,193,185,145,87,45,237,148,61,9,99,174,107,181,239,101,127,152,6,26,83,78,106,245,224,2,63,223,167,249,250,68,59,
199,246,232,207,76,53,125,54,100,206,85,26,132,30,133,143,251,195,142,246,96,92,179,97,41,115,194,95,255,35,11,243,28,180,50,5,26,35,6,243,114,150,135,61,213,187,96,247,140,225,240,88,153,138,96,60,30,
135,131,90,57,178,17,251,207,141,235,244,154,101,68,253,206,82,96,153,178,34,77,212,27,252,110,117,249,45,248,140,89,251,25,240,19,116,218,95,131,76,238,69,153,210,175,173,255,126,60,44,36,123,24,147,
78,144,111,10,239,59,243,230,14,186,125,161,49,191,208,151,82,108,154,221,212,43,167,1,101,70,211,94,87,210,137,253,218,29,138,251,68,165,17,25,108,246,82,56,213,94,203,29,69,123,111,4,12,205,224,94,25,
252,124,223,40,155,96,22,30,211,248,146,23,213,60,12,195,72,147,51,50,31,225,179,206,9,238,33,99,216,206,135,248,230,222,102,43,168,134,102,212,22,92,107,38,109,244,194,78,65,228,4,40,223,238,179,167,
227,71,65,52,148,255,9,67,159,57,163,165,136,189,194,50,7,166,218,102,5,35,80,92,69,221,90,241,179,189,227,242,158,48,159,182,242,79,217,124,53,136,32,1,138,134,29,0,131,187,102,239,156,255,8,167,51,232,
223,47,240,232,213,1,31,48,48,42,213,206,223,213,233,247,209,76,224,216,229,41,171,97,12,65,35,254,129,47,181,37,249,157,198,52,251,209,151,241,88,21,252,255,9,128,153,136,14,253,196,236,48,236,213,60,
57,94,248,177,152,171,81,129,184,254,114,0,46,10,198,43,22,42,170,145,93,38,47,122,226,167,114,97,200,49,35,60,116,212,134,115,160,104,75,241,85,116,63,4,190,83,231,124,229,16,60,210,143,136,65,229,12,
70,178,81,72,206,68,219,254,104,97,215,93,83,230,230,90,232,217,177,82,224,9,22,78,233,254,45,125,1,209,91,251,11,124,160,205,81,25,218,213,177,139,39,128,3,216,82,62,230,177,53,27,41,149,178,55,63,202,
136,227,61,246,144,190,50,227,45,215,142,136,238,44,95,127,71,203,242,9,104,132,239,56,68,247,85,208,138,117,72,154,152,0,147,22,172,253,183,192,175,195,59,61,77,56,126,232,165,81,186,191,185,127,5,148,
95,175,223,44,193,215,247,58,131,154,50,90,149,81,121,144,168,54,96,42,80,7,11,135,19,217,17,241,153,0,82,232,198,240,55,139,227,53,86,115,125,176,51,97,214,86,100,40,34,216,168,243,161,126,134,134,132,
217,173,126,172,12,51,220,195,121,104,124,95,225,171,242,114,86,193,108,213,64,56,229,150,143,167,148,98,117,69,255,254,183,182,238,76,150,174,127,111,237,75,30,69,83,180,219,117,62,128,247,206,75,161,
12,93,57,201,14,239,113,30,169,101,119,40,14,209,126,134,42,127,113,146,165,43,162,84,251,46,246,210,226,1,162,154,101,103,84,84,141,49,158,100,83,84,180,94,202,55,60,226,22,128,90,192,246,71,90,174,190,
252,96,67,31,129,121,213,45,124,226,239,158,191,230,175,13,147,239,30,185,113,72,199,31,186,11,56,59,141,190,247,86,250,19,185,56,230,253,239,56,107,93,42,212,196,39,169,94,125,153,153,84,118,6,70,25,
182,73,214,12,183,103,101,101,174,155,165,249,146,149,226,11,213,125,69,120,85,94,61,77,195,52,212,107,165,152,87,32,56,60,220,167,29,96,30,55,241,24,126,19,195,204,60,247,118,21,238,181,65,183,149,2,
79,132,152,12,220,213,112,174,103,30,49,241,19,189,31,156,157,227,71,114,81,55,125,53,223,75,252,23,35,102,13,236,97,222,160,125,118,127,24,244,207,80,215,236,13,218,187,209,179,124,81,90,123,167,237,
30,79,249,232,48,90,92,63,195,139,235,107,47,224,225,111,27,118,203,203,100,178,5,229,29,62,197,208,39,67,123,12,106,95,222,252,77,4,41,218,59,116,109,76,212,111,91,26,90,112,68,118,158,222,213,180,186,
227,101,105,77,97,196,247,0,52,35,215,151,19,93,230,24,162,147,1,236,216,213,64,138,108,176,214,89,110,197,25,247,145,81,96,92,64,195,77,166,48,224,78,121,42,189,192,5,202,33,17,206,130,106,38,165,92,
213,95,24,248,6,245,236,233,103,154,179,113,255,53,136,47,3,6,200,155,109,199,228,90,153,143,141,241,9,127,69,241,211,141,57,111,19,150,242,220,122,207,232,150,50,109,7,71,195,175,58,118,61,152,239,127,
1,150,47,150,217,247,54,158,130,46,132,101,42,12,48,198,42,114,127,206,120,71,176,63,10,61,213,194,207,170,163,151,157,82,50,134,189,99,252,251,16,62,71,171,60,231,191,96,228,63,87,29,105,240,251,255,
211,172,154,51,0,173,57,129,86,99,206,247,198,249,1,202,66,216,107,124,131,153,122,113,73,35,158,40,203,208,13,70,175,85,137,126,107,165,181,58,22,5,219,206,153,165,104,99,251,163,20,155,149,152,227,3,
198,137,94,24,131,188,217,218,134,219,81,226,29,154,49,120,131,182,119,30,174,60,77,155,119,123,36,77,175,218,113,99,48,17,85,208,103,241,177,49,126,217,10,26,228,29,57,231,204,211,79,128,41,3,155,14,
241,215,114,35,237,75,159,122,126,12,13,125,171,17,188,109,208,56,129,221,3,118,227,215,214,162,122,127,213,156,224,64,138,207,14,234,248,190,67,213,124,157,51,25,201,70,201,214,178,23,197,77,112,55,238,
41,158,161,139,63,119,81,42,195,141,239,73,254,73,135,236,254,54,40,149,221,34,129,199,118,77,191,111,64,157,31,184,3,246,96,225,140,88,58,175,211,249,104,198,144,153,133,32,34,170,86,84,95,219,184,150,
125,2,133,80,107,223,150,83,209,231,220,239,196,178,218,207,70,116,75,92,27,140,45,26,65,123,48,12,31,138,28,237,202,203,91,159,253,159,116,109,159,10,125,71,154,30,50,189,240,111,95,73,223,249,50,172,
156,143,114,241,177,87,191,194,231,222,178,219,155,73,118,42,118,248,250,211,25,217,220,10,250,114,176,239,71,246,176,50,204,59,246,3,7,231,220,222,156,25,246,238,187,247,201,86,144,25,248,105,212,247,
232,126,39,100,7,102,84,185,50,242,191,6,255,125,248,202,17,212,243,227,165,213,84,107,246,49,193,172,101,56,255,28,60,19,190,22,240,193,173,74,153,6,194,103,158,175,168,58,10,2,36,95,245,245,171,139,
133,162,73,206,184,36,90,183,215,212,78,203,191,31,180,163,3,243,244,237,28,77,62,250,11,99,24,42,252,191,18,75,175,3,206,253,230,62,149,173,234,167,78,69,135,15,120,108,205,66,19,87,252,88,218,168,17,
68,234,202,232,167,52,191,65,130,124,116,114,208,182,113,196,254,179,151,61,30,186,235,159,171,211,179,191,134,255,115,96,53,23,79,204,84,20,165,67,133,109,153,8,235,37,242,150,210,45,145,131,177,65,51,
105,243,111,135,105,48,171,249,142,247,175,139,239,230,172,188,50,56,150,60,179,209,240,94,47,172,162,44,165,179,193,205,34,64,85,101,225,139,101,62,17,134,183,146,212,57,73,181,171,250,24,181,111,114,
85,182,39,168,211,132,50,147,166,41,165,244,223,171,48,117,68,232,62,141,251,207,53,236,188,176,249,30,214,81,81,255,111,42,255,231,194,145,35,187,184,255,183,131,143,95,136,129,157,115,107,184,255,10,
75,1,180,109,221,63,178,216,96,240,247,251,162,66,85,95,229,52,24,237,245,122,187,143,121,108,77,31,24,155,92,245,3,9,215,214,149,240,136,47,60,201,129,184,221,58,103,105,142,253,145,99,195,94,233,38,
99,106,216,32,244,212,48,147,241,179,84,220,142,81,198,131,118,209,105,87,172,215,175,251,253,159,54,38,191,176,15,31,101,23,254,227,144,101,213,252,61,62,223,240,253,208,83,235,89,52,60,210,233,20,129,
247,242,59,198,252,164,214,157,49,26,17,250,136,20,207,113,124,33,88,174,212,62,191,138,180,163,123,41,37,168,123,47,90,63,171,205,45,56,50,31,123,54,106,63,135,202,166,231,216,49,127,222,76,222,5,229,
233,191,14,68,85,89,175,95,243,169,217,40,242,255,141,246,127,38,252,13,55,237,191,236,26,170,245,197,215,165,252,140,160,98,43,144,192,250,80,54,236,251,195,198,92,85,187,99,191,254,193,168,208,29,88,
17,101,95,5,186,219,156,106,133,47,253,241,128,100,188,86,81,56,126,186,186,65,199,131,96,185,20,23,127,175,193,145,236,60,121,135,214,126,221,238,243,103,60,215,254,52,100,11,50,50,226,81,59,60,149,159,
61,54,211,235,34,15,63,65,121,253,91,225,215,5,251,90,80,39,206,163,195,108,171,178,207,129,196,158,48,176,125,225,253,245,27,244,194,90,27,217,98,14,84,163,204,194,63,233,190,244,22,59,127,7,148,97,205,
82,233,209,32,168,136,126,4,186,221,192,118,130,130,166,135,115,195,62,90,41,97,81,105,32,186,149,241,228,211,242,231,188,253,36,56,85,40,39,245,119,20,90,41,197,57,6,127,243,249,252,95,120,14,62,217,
84,157,194,142,3,219,235,253,108,232,206,252,235,91,148,241,28,198,243,218,250,228,110,159,15,195,126,131,157,109,226,168,29,215,25,207,161,127,50,188,82,29,54,141,172,58,154,165,219,119,246,198,163,84,
123,75,238,37,216,78,42,59,224,147,253,188,221,208,179,39,166,75,73,122,222,246,253,55,213,172,224,100,60,214,198,217,71,54,234,52,127,246,31,219,103,143,251,233,131,71,241,83,3,191,243,254,115,97,253,
156,251,188,206,228,77,181,255,183,193,236,39,150,217,58,181,148,25,72,181,167,108,225,73,144,160,203,221,182,106,245,6,28,109,210,72,185,151,98,141,197,39,198,16,119,6,57,50,248,59,111,145,187,247,226,
25,201,5,98,61,107,201,30,162,56,156,193,215,46,154,167,115,1,18,111,179,135,67,126,163,200,61,200,148,225,214,35,75,55,133,235,196,168,171,114,126,100,144,191,115,89,116,86,33,123,66,225,191,32,67,119,
50,46,217,24,239,70,204,140,71,205,119,54,55,72,255,223,103,208,117,192,151,70,192,69,60,89,244,150,97,223,79,179,51,93,180,79,42,163,144,77,87,191,103,94,253,250,51,150,161,79,105,159,164,218,163,58,
165,228,158,28,150,223,211,87,247,82,241,220,188,130,97,87,96,110,47,4,83,247,251,243,94,59,251,95,133,221,179,2,167,56,213,57,3,85,198,215,217,126,234,46,223,10,148,83,177,170,207,124,43,199,67,109,125,
40,30,25,199,238,86,74,230,20,237,128,26,239,39,12,237,87,58,148,159,9,62,18,31,119,68,214,54,237,122,183,240,199,195,115,208,128,2,179,204,238,156,78,211,199,63,135,190,107,82,116,106,121,111,128,206,
211,233,87,253,91,107,162,193,255,27,173,155,197,128,105,247,90,189,219,128,227,82,225,115,224,106,62,189,223,203,91,67,74,141,190,255,194,223,132,119,20,114,20,41,62,65,19,141,38,27,217,40,162,61,61,
41,189,155,165,80,134,18,105,69,47,56,138,120,216,57,84,185,11,209,129,178,127,151,161,253,122,120,141,217,166,254,198,200,183,151,177,189,184,199,197,89,245,232,192,117,34,62,172,163,35,248,167,179,243,
169,177,88,18,7,148,206,53,167,47,20,220,137,212,87,109,222,31,183,55,163,118,230,129,210,52,232,116,244,49,82,99,149,121,177,113,234,170,81,155,79,149,160,95,200,224,105,3,178,187,199,251,36,68,217,133,
140,246,83,41,231,95,3,252,93,128,114,21,215,178,219,135,179,41,134,33,181,228,154,247,108,74,247,43,27,190,128,137,157,204,193,14,79,181,110,252,218,218,103,3,24,245,94,178,105,140,123,29,108,147,93,
35,190,172,206,61,120,207,53,112,89,162,150,139,89,43,126,124,70,251,166,5,31,65,141,173,141,134,122,89,143,116,62,217,101,252,133,79,131,187,169,235,39,219,124,5,206,95,56,129,238,160,29,182,194,250,
148,218,46,101,234,180,240,113,229,67,254,78,160,103,80,85,214,248,137,99,39,173,193,143,179,124,26,28,36,175,116,105,155,41,230,254,189,20,63,112,187,19,186,83,239,189,245,252,94,42,155,229,120,164,220,
11,140,67,79,183,95,82,141,227,35,65,164,226,37,237,196,211,156,41,49,76,217,43,174,127,225,23,126,225,23,74,121,109,239,157,233,211,74,215,238,123,181,101,59,89,221,136,183,83,189,133,125,137,104,162,
14,221,49,238,81,189,163,8,253,59,227,172,195,33,187,62,171,43,205,210,203,153,33,82,16,69,253,230,57,70,129,247,12,100,76,124,27,11,103,200,107,41,227,247,124,13,214,58,83,242,163,137,234,43,149,239,
100,46,12,95,61,13,48,218,70,145,125,167,246,11,191,240,11,255,94,88,191,6,54,212,187,197,235,57,147,15,172,222,144,126,119,56,177,163,19,81,239,221,9,48,113,124,142,14,197,125,190,122,109,215,243,234,
57,40,67,27,25,234,29,163,172,140,249,197,206,107,146,214,40,86,20,232,243,61,76,33,150,30,181,83,177,137,210,185,9,21,212,162,113,72,114,34,245,100,157,131,23,183,61,178,159,135,154,74,241,209,254,47,
252,194,47,124,46,180,130,235,249,238,1,64,163,143,43,93,214,153,78,231,253,194,247,245,240,115,250,6,251,16,5,147,234,57,244,144,51,104,251,113,123,232,209,190,237,46,176,119,22,237,169,71,145,165,193,
37,12,78,74,155,235,119,90,176,151,243,222,62,59,126,150,242,200,145,60,26,131,62,118,24,137,155,49,188,218,160,199,107,30,165,187,174,119,231,48,125,70,52,243,60,198,125,27,225,199,103,26,94,140,205,
125,253,95,248,133,95,248,58,232,107,45,215,155,202,144,53,214,37,128,167,167,202,113,233,15,253,3,245,112,107,241,221,126,220,106,181,217,103,181,127,206,7,251,56,114,143,199,180,121,131,174,147,215,
223,7,204,231,157,57,105,165,149,215,155,88,160,108,35,245,97,232,6,14,64,52,152,43,15,235,169,131,15,132,181,83,123,22,99,179,24,135,241,198,197,196,30,48,57,1,125,145,185,249,100,143,244,36,197,68,52,
57,173,150,59,96,13,202,109,69,251,28,114,43,173,213,47,152,171,95,248,133,127,35,216,133,121,26,4,117,24,122,21,141,114,155,186,70,234,87,208,33,35,144,131,224,233,43,140,249,35,62,66,199,37,140,117,
41,231,129,227,212,131,213,191,250,117,55,93,250,93,112,127,240,222,76,176,160,97,42,122,144,119,210,32,217,132,157,26,181,132,26,252,127,6,26,93,51,171,141,23,17,145,231,189,43,245,40,221,74,206,56,189,
86,169,172,149,92,248,119,141,178,127,201,202,236,16,63,139,143,29,245,247,126,225,23,254,45,16,175,1,251,90,217,2,159,58,157,204,215,248,125,108,107,162,33,46,118,47,60,10,46,76,189,171,226,251,171,240,
254,122,62,217,3,239,245,59,68,186,106,231,60,22,146,52,175,126,237,55,63,201,160,191,7,214,123,172,98,135,93,69,220,89,58,62,74,225,75,234,137,231,133,248,135,81,124,100,224,85,142,227,107,65,70,225,
176,64,123,228,14,153,49,91,31,202,140,7,204,94,69,175,192,240,160,219,28,101,95,252,124,171,136,68,120,244,81,116,49,222,161,208,157,8,238,216,191,107,37,254,194,223,0,148,161,169,11,237,182,147,63,148,
166,31,75,245,216,87,143,253,34,46,99,188,160,30,58,1,156,74,87,56,185,71,88,231,254,106,217,87,30,81,77,222,22,232,176,99,39,34,80,118,40,202,28,247,237,199,145,114,207,244,229,207,134,217,51,53,174,
59,194,44,177,46,34,195,19,188,210,128,149,167,82,244,95,107,224,149,205,69,227,61,34,244,235,207,72,163,137,118,38,141,6,237,178,133,59,82,253,64,195,44,130,42,82,113,55,224,118,187,80,14,154,153,95,
125,64,136,235,120,37,170,158,176,176,207,254,171,152,103,226,215,229,191,240,41,160,223,64,23,153,53,37,35,243,126,173,13,214,70,44,209,187,6,40,146,154,225,184,71,78,64,163,181,218,230,181,138,198,21,
221,147,242,39,106,103,104,80,239,33,172,182,105,177,206,206,54,174,36,79,198,99,24,244,108,57,255,59,150,59,8,118,114,22,126,229,9,157,0,43,219,83,224,253,232,175,137,224,59,124,141,161,71,106,108,204,
157,97,111,118,193,183,82,230,243,163,205,226,172,128,132,131,100,86,117,156,254,31,252,64,29,55,198,141,204,157,112,68,50,199,45,90,204,124,189,122,100,146,113,44,183,111,10,42,107,165,204,35,119,170,
133,50,175,14,233,96,29,248,54,240,189,206,33,168,48,161,209,154,88,69,144,120,111,247,90,65,228,204,236,2,247,69,181,207,157,39,213,47,149,82,245,227,219,76,57,63,238,57,203,124,123,195,93,48,135,17,
158,81,6,61,235,223,199,161,227,206,99,179,61,86,109,186,145,231,72,188,175,47,47,9,95,1,239,43,210,200,72,103,107,61,171,199,247,178,182,43,27,100,34,244,168,155,63,223,152,91,104,165,25,163,190,147,
58,186,147,106,87,105,165,21,164,188,188,225,28,172,225,68,57,222,167,176,172,211,104,49,147,142,100,14,101,44,138,78,193,98,209,57,230,154,253,138,183,87,74,166,211,67,186,43,15,125,100,17,170,85,114,
92,103,215,161,220,61,180,25,242,34,190,239,183,197,138,104,172,124,90,151,35,139,232,122,174,157,182,221,230,69,211,210,241,56,138,246,210,202,202,153,143,104,23,81,30,11,218,73,176,176,83,151,157,255,
108,202,86,186,204,57,196,197,202,62,175,61,213,174,22,59,7,136,35,26,21,166,241,44,236,204,219,1,182,93,189,82,242,249,139,28,232,8,212,214,31,142,219,241,239,161,43,69,247,211,33,74,121,116,136,188,
231,29,88,121,92,25,47,120,112,164,8,30,78,121,217,160,94,252,146,122,118,33,236,114,193,28,141,62,39,28,13,133,210,21,90,157,138,39,51,152,99,142,2,252,172,224,58,94,179,24,139,29,49,51,101,76,243,50,
224,46,99,208,108,89,116,144,136,203,70,31,203,116,40,118,225,212,65,84,134,249,110,180,177,115,168,116,69,35,107,191,140,150,54,20,48,127,95,41,219,213,61,213,151,8,127,158,13,209,208,229,23,13,106,151,
183,50,191,206,202,84,214,215,78,19,242,217,235,57,71,153,28,8,94,107,76,59,234,198,215,24,241,200,133,56,192,2,115,22,205,199,59,186,152,215,201,174,115,55,202,224,122,188,88,166,6,21,28,241,197,247,
159,2,13,254,34,40,37,186,59,89,238,228,230,155,192,6,3,203,118,210,181,15,112,0,159,124,253,247,93,57,101,248,205,125,161,208,149,177,70,7,10,83,134,67,249,176,76,208,53,58,92,149,17,168,54,141,10,133,
146,119,226,19,221,111,162,223,220,182,183,169,142,173,210,51,25,120,48,9,175,185,125,6,140,91,69,27,184,70,118,51,93,75,162,244,61,226,243,212,56,170,122,59,202,246,206,250,231,245,173,104,117,195,162,
230,177,130,44,141,143,62,254,74,190,196,28,179,92,52,168,103,154,83,153,114,253,251,119,99,12,225,255,215,64,43,79,82,193,64,162,148,77,121,220,128,19,217,168,52,65,182,169,103,232,15,70,32,208,238,63,
0,175,193,168,52,249,89,170,125,137,17,140,109,150,58,57,45,143,34,148,200,219,191,19,209,220,3,181,128,62,195,216,119,88,113,99,12,124,243,189,104,92,233,250,110,148,88,151,145,235,122,56,9,109,58,4,
202,217,64,229,204,252,12,101,82,189,178,199,108,192,104,183,114,58,160,253,240,39,144,47,53,72,24,253,3,209,225,179,176,130,169,254,126,163,54,131,92,98,92,43,255,15,28,12,201,119,211,52,217,200,246,
76,198,74,247,169,245,159,242,83,230,220,43,62,29,79,80,102,124,193,149,83,117,53,68,217,112,188,71,252,93,127,120,213,34,190,108,108,162,177,235,120,190,71,247,12,106,197,246,228,1,172,45,152,195,226,
101,72,221,95,101,158,148,206,150,242,197,78,175,113,222,117,127,255,217,53,222,108,248,149,35,240,19,193,15,208,236,213,206,65,147,8,78,34,251,172,254,206,225,139,136,63,23,225,127,249,132,181,224,26,
225,51,165,102,215,232,135,223,19,4,198,192,4,70,14,141,116,45,47,3,141,145,60,27,115,54,176,171,209,110,244,105,20,83,177,10,186,43,108,67,147,101,80,17,107,106,21,217,54,89,164,56,116,74,181,6,106,40,
60,146,103,212,65,136,182,98,5,160,49,156,45,70,2,188,168,126,162,145,98,199,136,249,234,229,72,163,34,31,162,174,153,251,10,125,166,62,114,121,225,123,1,223,56,70,106,143,157,251,104,240,53,250,46,174,
191,30,152,90,38,241,111,82,122,19,237,73,54,55,138,254,199,117,32,155,89,239,205,187,220,51,94,86,158,236,191,7,192,196,31,76,142,186,14,41,4,6,218,236,153,7,184,34,3,191,164,9,159,223,23,193,71,156,
100,255,185,174,186,254,25,192,61,98,165,57,230,130,234,245,72,73,41,217,209,150,219,145,49,117,134,162,228,81,50,242,228,160,38,117,170,189,205,142,65,138,23,110,176,124,58,242,77,227,232,99,160,250,
54,202,155,29,175,30,1,143,58,125,188,65,97,170,84,243,202,137,49,70,188,227,233,247,105,221,162,113,55,50,66,4,135,28,148,120,110,228,220,70,115,182,57,231,127,127,181,9,171,230,238,61,67,37,218,31,87,
122,61,59,239,112,146,74,87,58,220,109,239,4,245,91,210,127,243,234,215,127,175,145,62,5,229,255,38,181,133,119,197,19,191,179,247,166,62,119,247,240,86,52,86,167,48,159,216,243,127,6,78,140,250,199,48,
253,40,100,217,151,29,245,198,170,144,141,187,164,1,215,46,2,140,140,64,243,206,3,103,33,20,13,151,233,11,28,92,23,65,71,184,34,217,230,40,189,175,171,74,52,133,179,128,89,1,53,126,198,33,40,208,247,82,
204,225,249,193,51,24,111,116,80,84,180,133,17,154,146,120,158,71,25,177,5,50,243,247,13,181,130,136,171,47,226,86,205,119,177,129,213,206,121,139,40,194,126,42,59,43,40,46,107,44,127,156,5,5,53,92,144,
59,188,252,72,88,250,231,123,88,110,24,218,161,48,80,33,5,184,118,132,97,213,46,226,161,223,11,247,253,203,215,44,187,61,188,239,82,54,201,200,55,113,125,54,156,140,212,137,1,80,206,195,170,81,230,178,
97,164,204,70,79,26,191,82,198,211,1,204,139,121,42,173,175,35,46,87,244,123,121,226,72,133,103,3,138,215,143,220,126,119,124,119,156,183,21,142,207,0,182,28,223,204,113,151,163,40,187,41,28,232,221,237,
214,108,251,243,212,176,199,109,246,145,252,163,140,180,130,76,229,253,251,213,97,41,89,47,149,225,139,246,226,28,214,197,92,157,62,26,177,179,23,191,27,205,103,78,128,60,253,250,32,124,207,146,95,169,
245,204,149,253,133,175,0,53,35,202,40,70,109,86,229,187,14,202,46,100,252,254,55,64,229,16,84,121,84,246,245,48,156,65,17,117,171,253,106,44,207,182,56,89,71,102,251,226,10,148,158,245,251,228,145,43,
171,225,143,220,127,41,94,133,69,170,76,181,95,193,207,21,120,28,25,186,147,76,36,158,38,222,77,109,71,105,248,221,118,157,22,11,238,238,30,60,239,15,13,193,3,67,30,45,134,159,15,216,49,86,217,141,202,
99,153,248,133,95,248,249,144,201,127,100,180,191,127,61,168,40,25,141,165,113,215,65,159,173,244,113,182,77,185,91,23,233,238,214,111,78,199,236,129,73,185,99,76,114,55,173,190,19,203,252,148,56,39,246,
139,108,105,131,19,40,59,81,173,218,163,201,246,198,249,59,27,231,168,253,59,123,240,161,131,66,50,166,140,186,114,34,60,115,229,109,65,248,170,116,255,62,68,17,254,59,240,83,86,199,47,252,76,184,35,167,
223,183,202,118,214,52,158,27,56,201,96,170,236,233,206,150,38,227,56,109,179,203,31,212,44,119,181,155,220,67,127,71,165,252,125,37,251,28,236,247,227,60,37,187,179,191,18,166,239,41,85,131,70,61,50,
204,153,241,63,61,208,177,83,199,221,111,115,1,154,180,146,224,175,203,243,202,131,254,183,200,153,133,239,238,149,218,241,229,45,135,95,248,92,248,119,173,130,237,222,212,235,44,196,129,113,205,178,148,
119,14,6,99,155,232,32,221,214,54,105,233,253,230,245,119,14,238,148,187,90,198,167,203,251,191,185,215,142,147,160,123,121,122,64,66,181,89,165,128,86,251,228,171,189,243,39,192,241,28,220,83,215,28,
241,55,33,227,171,12,199,231,156,216,255,9,16,165,77,163,123,187,192,235,33,186,86,116,212,38,96,116,175,223,143,104,68,60,101,229,217,247,39,66,22,133,99,183,236,223,11,126,255,120,2,151,177,158,139,
140,233,238,59,59,162,242,213,190,120,136,171,8,59,122,117,162,81,77,143,226,254,156,187,119,185,103,123,229,25,217,182,193,134,138,5,62,17,238,217,131,108,52,154,192,57,203,118,15,187,169,235,85,155,
44,253,45,159,125,220,224,229,216,41,8,22,202,17,28,164,201,112,255,204,237,165,101,246,235,63,6,95,235,247,240,122,136,174,163,9,105,193,125,190,167,156,143,104,66,119,203,179,239,79,8,203,174,16,254,
59,4,51,51,160,106,93,142,203,106,203,78,206,31,237,110,97,70,101,136,107,183,94,37,3,167,130,142,6,223,191,34,240,248,147,221,92,137,63,250,215,239,242,246,73,162,251,28,47,93,225,188,92,179,90,74,169,
110,244,52,168,189,154,76,24,149,97,70,193,142,246,143,210,125,238,128,214,14,207,234,94,182,223,117,71,184,35,143,122,85,95,29,152,225,123,104,39,254,173,78,192,191,160,11,191,240,1,208,224,34,138,96,
35,7,187,3,235,177,106,16,235,186,136,63,170,115,119,191,123,55,128,50,54,60,209,165,58,232,120,126,5,254,97,166,28,35,162,76,165,228,51,60,39,56,190,27,190,135,110,63,179,216,211,43,13,74,103,29,211,
66,24,94,233,205,82,153,58,68,199,109,24,162,199,212,78,50,1,239,194,19,6,254,29,167,128,159,71,237,70,190,71,6,70,25,193,253,95,120,30,254,43,59,38,159,212,207,22,171,162,241,157,157,93,243,29,162,207,
52,27,150,208,54,207,126,39,245,118,246,187,119,83,227,124,111,39,104,233,159,252,244,210,40,91,246,27,35,134,103,33,141,208,107,217,19,186,21,123,155,89,216,191,2,200,199,247,46,176,158,114,183,163,199,
99,190,195,211,169,33,67,225,43,101,109,236,59,68,11,41,218,171,226,58,39,7,79,238,236,245,103,169,54,108,27,245,1,23,167,226,101,180,13,156,45,99,240,187,146,227,136,132,63,9,199,80,150,134,1,102,54,
239,227,46,188,131,230,43,215,202,83,186,225,111,24,204,79,50,210,18,154,16,39,150,197,18,200,115,175,163,246,165,139,142,156,85,128,177,19,193,42,136,130,149,93,72,35,109,210,133,89,208,212,175,81,159,
69,153,135,235,46,253,223,224,117,171,150,7,249,216,90,255,84,108,241,62,248,42,58,87,56,78,234,127,39,124,183,147,225,233,245,200,125,110,102,168,221,247,82,200,155,21,194,23,125,143,202,36,127,202,115,
14,218,238,166,190,162,52,249,73,249,59,145,177,234,147,170,115,76,27,13,125,16,101,12,218,253,158,194,31,181,103,207,115,163,31,163,58,213,49,223,197,214,78,20,177,24,5,150,147,252,8,248,27,60,158,208,
124,146,191,163,84,178,48,234,39,56,184,113,148,225,139,112,238,232,144,213,97,54,21,28,172,82,241,153,156,159,232,196,189,40,252,181,189,122,119,142,239,182,251,211,74,249,191,202,200,238,4,5,104,204,
119,25,216,141,250,255,171,208,198,95,180,14,226,255,66,162,234,198,64,63,177,111,126,10,39,248,78,12,247,233,33,19,23,117,111,208,78,83,115,65,68,146,209,70,56,57,172,163,246,237,86,244,34,101,167,162,
14,164,175,182,123,56,155,160,218,71,117,118,249,206,218,202,246,1,47,59,116,162,49,80,217,23,94,122,13,218,169,246,189,78,116,127,101,8,57,98,54,56,136,14,195,42,162,221,93,255,81,187,186,137,3,97,55,
114,87,6,59,194,133,223,113,156,86,153,188,149,206,112,251,250,27,122,98,214,185,111,204,223,128,255,251,79,45,229,255,149,82,254,15,150,42,93,21,232,175,71,140,51,227,127,18,247,14,156,56,36,159,2,13,
254,150,82,74,173,213,43,234,196,72,100,202,110,39,34,207,218,168,246,217,62,253,157,136,155,219,157,70,169,170,93,26,201,38,237,118,202,87,16,141,203,9,79,12,60,215,167,7,131,152,62,243,212,69,44,138,
124,34,122,88,142,17,163,148,161,13,163,190,234,215,206,56,178,130,15,113,137,2,54,234,174,61,172,133,104,29,164,178,25,204,67,147,12,197,112,87,142,34,60,72,255,52,203,182,170,131,70,52,107,127,55,211,
214,239,159,64,140,175,65,157,191,106,77,254,191,255,31,84,100,99,136,49,17,137,31,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::case_main_png = (const char*) resource_OwlBassGui_case_main_png;
const int OwlBassGui::case_main_pngSize = 65490;

// JUCER_RESOURCE: case_effects_png, 12243, "../../Resources/case_effects.png"
static const unsigned char resource_OwlBassGui_case_effects_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,48,0,0,0,224,8,6,0,0,0,245,229,150,42,0,0,32,0,73,68,65,84,120,156,237,221,205,
174,43,189,154,16,96,215,58,135,1,244,12,9,36,16,12,185,1,96,136,196,0,113,33,125,103,125,31,136,1,136,33,112,3,12,65,2,9,137,89,195,160,251,91,197,96,175,172,93,113,252,243,218,85,73,42,89,207,115,180,
207,74,170,92,182,235,39,149,248,253,108,215,146,206,105,121,118,5,0,0,0,224,7,91,159,93,129,220,179,2,5,2,20,0,0,0,240,186,30,30,224,120,68,32,65,176,2,0,0,0,222,223,93,131,26,247,8,46,220,51,96,33,24,
2,0,0,0,199,185,103,208,225,208,188,143,12,8,28,145,215,217,234,3,0,0,0,175,230,200,192,193,17,121,29,82,159,189,141,252,71,109,47,24,1,0,0,0,247,19,13,50,236,13,70,76,111,191,39,48,48,179,109,111,155,
71,215,7,0,0,0,222,221,158,160,67,111,219,153,188,167,234,115,143,32,196,200,54,247,234,129,33,152,1,0,0,192,79,54,26,36,216,219,3,227,238,129,140,123,6,6,102,131,22,123,131,29,179,233,1,0,0,224,29,28,
21,188,152,237,125,49,82,126,56,237,17,1,137,104,218,145,192,196,81,65,140,40,193,14,0,0,0,206,236,94,79,11,25,9,66,28,145,118,164,14,87,142,30,194,17,13,70,228,203,70,130,24,209,245,163,233,0,0,0,224,
149,29,53,17,103,36,32,17,13,90,28,54,57,104,164,113,63,155,102,52,112,113,68,15,141,30,193,12,0,0,0,222,201,108,207,140,217,30,22,247,12,100,52,211,28,209,203,97,166,135,69,43,112,17,233,157,209,90,30,
93,15,0,0,0,239,232,168,185,43,90,239,71,210,70,235,213,76,179,55,8,48,58,20,100,169,164,235,245,196,136,6,53,162,235,1,0,0,224,157,141,6,49,122,1,135,90,250,86,154,104,57,161,245,173,134,254,222,224,
69,45,40,113,143,128,70,109,25,0,0,0,252,116,51,195,60,70,3,22,123,123,103,116,215,31,53,60,35,18,128,136,46,107,189,174,213,77,143,12,0,0,0,126,178,163,39,230,236,189,142,46,139,190,239,213,109,42,128,
17,13,94,140,6,46,70,123,102,148,222,215,150,1,0,0,192,79,51,51,164,99,52,64,209,90,182,39,136,177,59,128,113,100,240,162,247,55,250,186,181,44,178,14,0,0,0,94,221,80,48,32,205,245,182,232,253,237,173,
139,188,175,46,223,19,8,136,6,47,102,255,246,150,181,234,42,96,1,0,0,192,79,54,250,72,212,145,96,196,236,223,94,29,90,117,29,10,96,28,29,188,184,119,143,140,200,58,0,0,0,120,23,209,96,192,17,61,46,30,
17,196,104,6,48,102,134,142,204,6,45,70,130,26,181,101,181,52,0,0,0,192,252,147,69,122,193,138,61,193,140,86,93,114,223,203,103,2,24,71,7,47,102,122,99,204,76,238,57,178,30,0,0,0,206,108,244,41,30,189,
224,69,180,215,197,189,130,24,135,4,48,142,10,94,244,222,151,94,71,254,70,234,13,0,0,0,63,69,116,210,206,209,161,34,189,96,198,61,130,24,223,203,254,92,88,57,99,38,120,17,13,104,212,150,181,94,151,222,
3,0,0,192,79,80,234,109,177,84,94,95,254,94,150,111,255,166,236,117,173,172,165,240,190,150,223,180,145,39,122,212,122,95,68,130,23,181,101,189,180,189,50,106,203,122,251,4,0,0,0,239,168,213,139,97,118,
174,139,90,111,139,214,242,104,25,181,250,221,212,191,215,3,163,21,20,232,173,139,4,47,70,3,25,41,91,23,173,15,0,0,0,252,4,35,1,140,90,47,137,53,75,187,20,150,229,249,231,237,239,90,207,139,86,175,140,
102,79,141,232,16,146,72,239,140,218,144,144,124,89,228,95,45,207,252,117,94,135,94,125,1,0,0,224,39,232,245,112,40,245,158,40,13,29,105,5,46,74,229,149,134,147,108,95,151,242,10,13,49,105,5,48,162,189,
47,74,129,138,252,253,158,127,121,190,51,61,49,90,203,1,0,0,224,149,245,158,224,209,234,121,177,93,182,125,61,59,103,69,30,200,40,205,165,49,213,11,35,210,3,35,18,16,24,9,92,124,124,165,249,232,164,43,
229,147,10,235,242,250,228,245,21,184,0,0,0,224,39,40,77,222,153,47,239,205,117,145,210,109,239,139,252,223,231,87,154,207,64,93,90,129,140,173,110,47,140,63,111,18,246,68,135,115,68,122,84,212,130,23,
31,141,124,90,101,11,94,0,0,0,64,63,136,209,26,58,82,10,100,148,130,20,31,233,119,16,35,90,159,124,40,201,246,117,175,183,199,146,82,90,143,124,140,106,175,247,196,54,72,209,122,63,50,148,68,0,3,0,0,0,
126,155,9,96,108,95,231,255,62,54,175,183,193,140,143,84,239,129,81,155,212,115,151,90,0,35,18,16,200,123,95,244,210,69,130,25,165,101,165,60,242,242,75,245,29,233,85,2,0,0,0,175,96,100,66,205,237,235,
200,124,23,121,79,140,60,64,145,7,45,106,65,138,214,48,145,86,186,203,251,226,246,51,79,33,41,5,53,162,61,39,106,129,138,104,47,140,104,79,140,82,61,123,251,5,0,0,0,103,183,39,128,145,15,23,169,13,29,
185,40,245,190,216,6,49,182,109,234,82,175,139,86,189,182,65,138,200,48,146,112,0,35,175,88,171,247,197,118,125,228,223,200,144,146,60,239,82,93,106,189,71,0,0,0,224,213,69,218,186,219,160,197,182,215,
67,169,231,69,41,136,209,27,50,18,233,68,80,11,72,244,122,97,84,141,206,129,17,237,125,145,175,107,165,141,6,47,238,53,140,4,0,0,0,222,69,30,180,216,46,171,5,45,106,106,67,70,242,191,121,239,139,86,111,
140,90,47,140,174,82,0,99,111,15,134,82,143,136,72,160,98,100,72,73,94,78,173,23,198,158,253,0,0,0,128,87,82,122,194,199,229,117,100,248,72,169,247,69,169,231,69,254,20,146,82,175,138,237,251,17,151,122,
221,4,55,34,61,48,106,189,46,74,203,122,129,139,60,232,240,145,253,93,254,197,191,253,55,255,105,73,233,47,2,245,74,41,165,180,62,33,64,177,44,75,90,215,221,19,168,158,206,187,238,215,197,187,239,31,63,
195,178,252,186,229,185,150,121,53,143,186,7,159,245,94,127,214,122,213,188,90,125,223,157,243,193,94,174,161,199,122,228,241,30,45,107,25,8,40,172,41,253,245,127,249,119,255,254,95,125,189,189,4,44,46,
127,47,1,134,86,143,140,237,251,237,178,82,186,203,178,102,253,254,156,98,1,128,82,154,82,208,34,165,246,78,116,135,144,44,203,242,15,3,245,105,86,236,17,150,101,73,233,221,110,2,235,250,222,221,85,222,
125,255,248,25,190,238,59,174,101,94,206,163,238,193,103,189,215,159,181,94,53,175,86,223,119,231,124,176,151,107,232,177,122,199,123,57,246,108,44,7,231,247,157,239,175,142,5,181,121,47,182,175,215,202,
223,148,202,65,139,124,249,54,159,102,149,102,39,241,140,164,169,5,45,74,203,126,255,91,215,191,78,203,18,238,129,113,119,239,22,164,0,0,0,224,121,90,109,204,59,5,35,166,172,235,95,167,122,7,133,109,160,
162,22,204,72,41,24,152,8,164,73,41,141,79,226,89,43,172,53,55,69,41,93,111,120,201,243,76,4,44,22,65,14,0,0,0,26,214,72,112,34,111,91,62,63,160,209,10,96,228,129,139,237,235,109,15,140,86,207,139,33,
51,79,33,41,5,42,182,235,243,215,173,185,49,242,247,203,195,199,102,5,203,107,5,41,132,47,0,0,0,104,106,181,41,107,129,138,103,6,52,126,149,93,235,97,177,237,133,145,178,247,173,30,24,165,192,198,174,
167,144,108,51,173,29,157,218,156,24,165,237,163,243,95,60,174,7,70,39,104,177,187,71,133,136,6,0,0,192,207,54,208,186,45,181,65,139,65,141,109,186,199,4,51,90,163,45,242,64,70,52,136,81,91,182,93,94,
92,63,243,20,146,94,154,200,206,165,202,242,251,158,129,70,96,34,28,180,16,156,0,0,0,160,39,210,118,108,180,128,183,109,212,102,48,227,190,129,140,82,187,62,239,117,49,27,196,40,149,213,125,10,73,190,
65,45,163,86,33,249,235,210,178,124,155,214,220,25,199,170,4,39,186,65,11,193,10,0,0,0,238,165,214,7,33,95,212,10,102,220,55,144,81,10,78,228,129,140,109,218,210,92,24,145,32,70,175,71,70,74,105,255,36,
158,173,224,69,116,248,200,213,250,35,231,192,168,6,40,190,150,23,215,142,60,21,23,0,0,0,134,53,130,13,181,7,143,126,175,175,4,44,46,237,220,163,2,25,215,115,96,212,130,24,145,30,24,163,61,49,170,102,
38,241,220,238,68,190,188,244,190,55,60,228,46,195,71,138,193,139,106,64,163,151,155,96,5,0,0,0,71,9,118,189,104,5,51,42,129,140,101,93,143,11,98,252,46,185,214,235,162,182,62,79,155,175,75,169,49,215,
69,205,72,0,163,52,60,164,150,166,150,46,210,19,99,183,155,224,197,84,224,98,48,104,225,81,170,0,0,0,148,132,2,10,157,174,23,121,243,255,123,249,109,32,227,192,32,70,180,231,69,105,155,252,117,43,239,
80,131,122,239,16,146,75,161,219,191,165,117,219,247,165,192,69,42,188,31,175,72,180,215,69,245,208,4,142,153,64,5,0,0,0,35,106,237,200,106,144,161,17,204,104,5,50,178,32,70,74,187,135,148,148,122,86,
212,218,244,41,181,3,26,187,134,143,164,116,76,0,35,215,10,90,212,210,127,175,255,92,251,135,119,89,150,180,157,43,99,89,150,148,62,63,175,143,68,35,112,145,111,159,31,195,171,245,59,3,22,203,215,222,
68,230,246,216,166,189,173,227,254,252,143,218,238,200,121,74,102,93,234,17,221,143,217,122,207,30,167,104,222,103,56,150,35,246,214,121,228,186,126,196,177,121,197,115,112,241,200,186,159,233,56,141,
212,229,200,122,63,250,24,180,202,139,212,229,76,231,108,235,136,122,189,234,254,63,251,190,86,90,254,232,207,211,61,191,83,243,114,110,126,39,102,229,62,170,46,207,118,246,253,220,115,93,245,174,245,
153,125,111,229,121,201,171,150,239,145,229,29,101,239,231,254,136,237,158,149,239,104,29,82,122,222,239,253,239,177,20,205,137,56,203,17,139,37,125,229,191,93,92,202,103,93,83,250,248,104,214,165,84,
215,117,93,243,41,36,70,134,144,164,70,250,105,71,78,226,185,125,223,235,77,177,107,8,201,205,129,255,252,204,19,20,54,42,109,95,62,150,107,158,95,197,18,57,21,95,101,5,119,236,119,218,117,29,223,102,
196,142,237,14,29,77,53,235,82,143,232,126,204,214,123,246,56,5,243,62,197,177,28,177,183,206,3,215,245,67,142,205,43,158,131,139,71,214,253,76,199,105,164,46,71,214,251,209,199,160,85,94,164,46,103,58,
103,91,71,212,235,85,247,255,217,247,181,210,242,71,127,158,238,249,157,154,149,179,100,239,111,202,125,84,93,158,237,236,251,185,231,186,234,93,235,51,251,222,200,243,59,175,90,190,71,150,119,148,189,
159,251,35,182,123,86,190,131,117,72,233,177,191,247,215,101,155,164,49,253,193,77,48,227,58,144,241,251,63,186,167,219,29,200,122,99,164,207,207,70,111,143,102,0,103,219,123,162,213,243,34,223,166,214,
235,98,87,80,163,21,192,232,118,132,8,164,45,237,100,47,237,144,238,124,23,197,67,83,155,19,163,19,29,59,103,240,26,0,0,128,23,145,183,43,215,90,43,184,218,43,163,208,35,163,212,73,163,48,164,100,98,56,
73,180,231,69,164,151,70,100,94,140,230,250,71,12,33,169,165,137,68,110,218,153,28,21,188,104,117,165,217,27,180,56,105,151,61,0,0,0,14,54,49,223,196,182,205,89,12,102,52,3,25,75,123,209,49,65,140,239,
205,211,88,59,254,116,67,72,82,26,11,64,212,118,244,123,249,208,216,163,109,218,222,118,197,97,37,149,241,197,219,108,219,153,182,203,4,0,0,224,231,8,181,103,27,77,232,86,48,163,24,200,40,205,121,81,216,
110,179,62,218,138,221,180,205,107,61,43,70,59,36,236,14,104,124,4,10,136,46,239,13,41,137,70,104,66,150,59,4,47,150,181,215,227,98,205,254,1,0,0,192,136,88,187,178,218,62,29,248,143,243,165,245,197,167,
119,214,205,182,227,103,227,3,205,242,74,1,140,124,131,222,251,154,72,52,102,106,24,201,174,224,197,186,222,44,107,7,46,4,44,0,0,0,184,151,118,155,179,216,94,45,180,107,239,24,196,72,41,222,118,31,105,
223,15,199,30,238,49,7,70,174,180,3,181,101,215,221,91,242,46,50,217,172,194,191,150,101,57,228,193,141,60,175,108,217,146,150,118,87,156,60,175,200,44,177,165,114,243,245,91,121,190,165,253,207,243,172,
229,191,173,103,227,56,22,203,45,89,42,199,167,182,172,85,175,136,82,25,165,186,151,182,137,236,75,175,110,181,242,123,235,162,121,229,227,205,74,231,184,118,173,69,206,103,171,222,181,124,91,249,183,
206,125,84,164,158,145,186,215,234,81,187,6,35,245,141,156,239,214,241,136,124,206,242,109,107,105,182,233,70,235,85,170,75,235,252,213,238,17,37,181,253,206,243,173,229,83,187,230,74,245,206,243,104,
125,94,90,239,91,101,68,63,31,189,251,86,239,58,238,213,189,180,46,207,167,148,127,239,220,150,210,150,202,40,165,217,83,159,222,246,145,107,172,117,77,236,57,127,145,123,68,228,123,184,150,54,47,99,155,
111,173,174,173,125,200,211,148,202,142,28,251,86,157,163,159,161,72,253,183,235,91,247,134,61,215,126,94,126,244,119,197,232,61,96,187,31,189,244,249,186,145,251,124,105,121,158,247,182,140,222,111,130,
145,223,94,145,251,84,173,174,173,250,213,234,210,171,71,41,159,214,246,173,237,34,223,107,209,223,82,165,60,70,62,83,181,188,123,247,208,145,207,68,41,159,145,239,159,72,93,107,247,231,232,111,171,214,
62,181,126,67,229,219,207,254,110,26,185,87,244,238,193,173,125,201,235,89,75,127,241,241,209,169,215,101,221,237,241,88,210,242,107,88,201,182,188,207,207,95,121,94,202,188,172,187,58,143,87,153,124,
167,173,206,135,113,123,44,150,116,155,75,190,225,82,72,119,184,145,0,70,97,207,14,79,179,172,235,218,126,44,234,213,235,171,68,215,239,47,233,242,191,95,175,47,17,172,53,229,121,55,142,247,229,130,104,
173,47,189,110,45,43,45,175,189,223,254,109,253,16,40,237,115,228,125,175,110,145,125,26,217,239,94,121,209,60,162,249,207,214,63,90,206,158,99,209,59,119,145,252,35,199,110,100,255,162,219,245,28,113,
92,70,182,61,226,122,235,229,219,58,54,123,234,216,58,255,123,234,213,187,167,180,140,238,107,107,251,90,29,74,247,179,200,182,35,233,70,211,140,126,222,183,203,102,246,41,146,166,242,125,22,78,59,147,
102,111,25,35,235,107,199,47,122,60,239,249,25,157,253,126,143,164,25,201,59,242,93,81,74,219,251,81,189,167,254,173,122,30,89,198,204,119,210,232,61,96,251,126,244,247,200,204,125,105,54,239,124,217,
236,247,234,17,191,107,122,121,206,238,83,52,191,210,253,162,101,246,183,84,190,238,200,251,202,204,53,209,202,231,136,107,175,149,231,145,247,252,104,131,127,246,123,104,244,94,49,122,239,202,143,75,
237,187,42,247,199,31,215,239,171,219,93,242,47,95,227,235,182,75,198,31,127,4,130,255,95,239,255,88,175,179,44,22,189,126,253,89,47,27,214,14,68,180,253,223,59,25,225,192,71,111,14,140,72,101,182,127,
239,234,122,232,72,35,97,231,134,209,30,46,210,200,51,250,33,184,183,232,135,3,224,236,222,241,126,246,142,251,244,72,249,241,115,60,247,113,252,120,103,174,239,215,245,110,231,110,207,254,116,219,153,
229,117,197,33,37,173,247,149,44,39,134,146,204,58,36,118,240,136,33,36,91,119,186,82,227,17,209,114,240,98,103,228,179,147,5,0,0,0,63,88,175,37,124,105,119,22,131,33,133,222,24,233,87,219,246,234,73,
37,205,94,140,107,160,18,83,30,26,141,26,13,96,220,191,114,141,46,64,223,107,174,146,180,186,121,94,175,90,214,181,16,103,152,236,114,36,96,1,0,0,64,68,222,126,172,142,28,233,5,50,242,161,55,233,122,30,
139,117,109,180,218,55,219,111,179,170,13,129,121,76,239,140,161,121,51,246,14,33,57,151,78,240,162,176,65,57,143,106,16,101,243,15,0,0,0,102,244,218,150,213,118,233,237,178,155,182,238,246,237,89,166,
65,56,200,189,2,24,199,246,212,168,6,38,98,19,202,12,5,47,138,229,151,147,3,0,0,192,46,189,64,70,113,131,107,205,185,44,174,214,85,218,214,199,7,58,238,50,122,227,209,115,96,60,70,119,82,146,96,240,34,
122,14,223,44,170,5,0,0,192,193,122,147,125,150,167,186,168,12,241,184,29,78,114,245,88,212,187,77,121,241,92,207,14,96,220,60,63,118,109,61,190,38,210,251,162,55,27,107,107,206,140,70,178,106,157,0,0,
0,160,103,219,134,108,5,51,74,193,135,226,220,24,183,9,111,154,204,197,121,46,42,115,97,220,20,121,211,230,189,105,191,63,218,249,231,192,216,17,40,184,237,125,113,64,240,226,76,143,83,5,0,0,224,245,244,
218,149,225,33,37,249,83,55,119,180,85,95,160,157,27,13,96,156,172,243,73,191,247,69,55,120,81,203,118,120,18,21,0,0,0,152,16,121,136,68,63,147,171,119,75,109,132,66,109,46,140,115,8,197,28,158,61,132,
36,238,232,227,219,154,169,181,149,174,98,57,223,5,0,0,0,192,9,172,189,246,121,235,241,169,249,48,143,218,99,79,103,189,208,124,25,167,11,96,220,140,179,105,205,127,177,73,187,100,145,165,235,92,58,67,
71,118,4,47,46,129,11,225,11,0,0,0,202,46,237,198,64,32,99,42,136,145,37,216,174,95,83,90,139,115,97,244,170,114,190,86,238,185,231,192,136,62,65,164,157,73,32,207,104,217,191,44,105,253,254,7,0,0,0,17,
161,182,228,116,155,117,103,91,121,164,236,39,57,119,0,227,162,115,12,243,222,23,187,243,238,4,47,0,0,0,96,143,225,32,198,112,124,162,50,98,161,152,118,48,239,39,57,247,16,146,230,35,85,39,38,38,233,62,
98,181,178,44,25,42,2,0,0,192,209,26,67,75,74,195,61,214,116,189,108,93,179,249,43,234,19,90,124,183,101,183,249,230,163,80,174,138,63,95,235,247,116,1,140,166,35,15,224,68,240,34,158,247,68,125,0,0,0,
120,31,3,19,99,46,105,29,8,98,28,56,137,231,209,19,130,222,217,121,135,144,100,193,132,117,93,191,35,64,219,215,203,250,251,253,250,249,185,221,34,203,47,21,183,223,150,87,44,99,253,188,90,118,91,205,
75,186,148,214,207,117,51,191,104,57,138,177,110,202,41,213,163,180,62,175,83,173,30,173,242,106,233,90,117,168,45,139,148,223,170,107,173,158,173,101,181,243,31,93,87,59,230,165,125,170,237,127,175,238,
145,125,141,28,147,86,217,145,253,14,93,175,149,250,247,246,179,119,61,69,234,223,187,230,91,249,140,214,191,118,124,102,175,215,209,99,212,74,223,75,51,27,241,174,221,47,162,231,165,85,151,72,157,123,
247,147,209,227,215,42,175,149,71,43,223,232,126,181,182,139,222,39,162,215,117,171,254,53,123,143,201,104,61,163,249,213,62,207,51,199,167,148,119,107,63,242,229,249,253,101,244,152,245,62,195,189,251,
110,164,252,232,181,20,169,103,237,254,83,122,93,170,115,244,254,85,202,167,87,239,217,117,173,186,180,142,103,107,255,34,251,85,218,182,149,190,117,220,122,215,105,180,46,209,107,185,181,93,175,222,173,
50,34,203,106,199,47,186,159,189,101,173,247,189,188,163,199,48,250,153,232,93,39,189,107,163,150,182,119,173,143,214,59,92,183,212,191,174,74,117,29,57,14,163,215,111,100,63,243,101,121,30,189,52,145,
227,214,250,28,149,94,95,189,95,55,255,26,251,116,73,191,164,74,57,141,227,252,107,125,158,223,239,118,241,182,141,92,27,70,114,115,156,58,231,225,153,254,148,174,227,66,203,230,253,178,227,223,71,112,
249,77,186,127,240,79,255,201,95,166,148,254,78,106,29,176,237,186,106,178,181,254,182,148,119,97,89,168,231,197,57,207,43,0,0,0,103,209,9,100,92,44,155,255,191,87,53,126,189,216,84,166,212,3,99,89,210,
186,174,127,243,191,255,251,255,248,171,116,93,251,53,248,47,5,254,14,59,111,15,140,35,245,14,207,76,240,34,120,1,2,0,0,64,74,41,212,142,44,182,69,123,61,34,126,72,219,244,125,2,24,87,39,52,216,123,99,
186,172,253,89,0,0,0,240,67,29,209,166,108,182,109,175,198,149,28,80,216,57,156,111,18,207,117,253,117,168,127,247,109,249,94,190,77,147,210,215,252,23,217,178,171,109,178,151,183,233,10,239,211,101,2,
149,90,253,106,43,0,0,0,32,104,77,141,209,34,235,237,164,158,235,218,158,112,179,153,223,239,52,107,158,230,42,223,101,147,240,124,141,223,247,233,129,113,144,246,179,120,31,87,15,0,0,0,222,92,163,141,
57,252,52,204,31,224,245,2,24,123,162,64,129,222,23,245,109,231,139,5,0,0,128,162,145,182,230,158,54,109,47,175,23,112,190,33,36,41,141,7,11,162,243,95,60,202,11,94,8,0,0,0,28,168,53,220,227,33,54,99,
74,122,195,79,74,155,158,208,233,2,24,183,207,155,205,230,192,40,62,66,181,50,65,201,224,252,23,213,185,47,162,39,79,224,2,0,0,128,148,126,183,15,35,129,131,234,252,21,133,185,48,70,242,89,178,117,105,
36,54,113,190,246,237,201,135,144,220,241,128,29,29,108,16,188,0,0,0,32,247,82,109,207,115,183,107,79,30,192,168,91,118,13,51,41,228,87,59,81,145,114,4,47,0,0,0,168,137,180,25,43,73,186,147,121,14,182,
71,135,219,210,39,242,178,1,140,211,16,188,0,0,0,160,71,219,113,183,115,206,129,241,253,232,217,219,185,45,150,175,191,215,231,62,48,7,70,62,223,69,246,190,50,251,69,191,7,134,139,16,0,0,128,7,58,170,
21,90,204,167,212,30,63,137,215,232,129,241,172,3,39,120,1,0,0,192,81,122,109,200,103,53,49,95,164,109,251,26,1,12,0,0,0,224,71,19,192,0,0,0,0,78,239,156,115,96,252,126,115,253,247,106,217,213,86,183,
233,242,52,55,235,242,46,50,133,46,51,134,144,0,0,0,112,50,225,150,232,186,166,180,44,245,213,189,109,79,70,15,12,0,0,0,224,244,4,48,0,0,0,128,211,19,192,0,0,0,0,78,79,0,3,0,0,0,56,189,211,77,226,89,158,
176,115,187,172,144,206,36,158,0,0,0,16,116,153,216,179,209,166,61,97,123,87,15,12,0,0,0,224,244,4,48,0,0,0,128,211,19,192,0,0,0,0,78,239,116,115,96,172,47,50,7,198,178,44,215,117,133,31,226,93,175,253,
71,236,215,187,30,187,87,231,188,188,23,231,19,128,159,224,168,111,186,102,62,39,252,62,213,3,99,146,31,71,252,84,239,122,237,63,98,191,222,245,216,189,58,231,229,189,56,159,0,240,190,4,48,0,0,0,128,211,
19,192,0,0,0,0,78,79,0,3,0,0,0,56,61,1,12,0,0,0,224,244,206,247,20,146,148,110,159,62,114,194,167,144,148,243,0,120,172,159,248,196,133,87,223,231,87,175,63,228,122,215,116,244,154,247,217,0,136,123,200,
83,72,78,72,15,12,128,23,246,19,127,236,191,250,62,191,122,253,33,215,187,166,163,215,188,207,6,0,61,2,24,0,0,0,192,233,9,96,0,0,0,0,167,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,0,0,192,233,157,
239,49,170,87,143,76,93,211,178,44,205,180,151,245,235,186,166,165,176,60,207,119,155,254,226,242,216,174,200,54,219,52,151,247,121,186,226,190,108,180,202,203,243,207,183,235,213,125,91,151,60,93,174,
86,239,218,186,86,125,242,215,189,178,107,106,229,246,242,40,213,45,122,126,90,251,223,50,242,184,183,210,185,171,149,93,179,231,156,68,202,170,93,127,181,235,174,85,167,210,117,89,43,63,146,46,82,118,
239,124,182,202,143,238,87,158,174,102,102,127,35,215,121,45,143,75,157,34,247,162,210,103,35,95,183,205,35,122,236,123,199,183,119,44,35,229,182,182,175,41,222,7,214,53,165,193,123,100,235,158,221,186,
119,143,94,119,163,199,177,246,153,157,249,220,143,126,39,212,234,28,189,183,214,174,225,214,62,141,124,183,111,183,171,213,189,183,109,100,159,106,235,123,247,251,218,117,82,186,102,163,191,63,106,219,
150,210,148,234,56,186,143,181,253,217,230,53,250,189,215,186,70,242,101,209,223,62,35,215,121,235,88,246,234,91,170,115,228,222,82,74,23,253,13,90,170,127,233,158,95,122,95,251,13,89,171,79,239,154,139,
94,87,173,207,75,237,179,222,210,186,7,215,202,137,44,159,185,167,150,234,86,42,47,207,63,178,252,178,174,86,159,145,223,126,163,247,218,82,249,173,115,26,249,252,212,242,202,211,108,235,149,235,125,39,
70,238,155,45,209,223,34,121,154,145,239,236,90,93,122,159,185,82,93,70,175,207,77,6,151,138,220,148,81,218,207,103,251,83,74,105,187,167,203,230,253,178,227,223,71,112,249,77,186,191,255,143,255,209,
95,166,148,254,206,182,146,203,246,192,93,94,94,29,204,181,176,108,147,182,96,242,244,2,0,0,192,188,94,176,33,208,88,61,44,180,176,41,171,144,231,223,252,159,255,249,191,254,234,107,213,186,73,22,249,
151,2,127,135,25,66,2,0,0,0,156,158,0,6,0,0,0,112,122,167,155,3,35,50,222,38,50,254,49,50,150,104,155,87,158,95,158,103,205,232,216,206,86,190,35,99,237,34,99,215,122,99,179,70,198,31,231,121,68,198,79,
182,234,159,239,71,105,124,102,100,223,123,227,124,91,235,122,99,73,163,203,71,199,157,69,198,35,183,198,236,213,214,247,202,156,29,195,57,243,121,105,93,143,189,235,46,50,110,48,175,87,41,223,220,232,
88,199,86,158,189,115,223,26,179,25,25,231,60,90,255,232,54,145,123,92,100,220,246,101,125,111,255,123,117,143,140,235,108,165,111,229,83,219,175,82,157,74,215,104,111,172,109,190,237,204,178,94,249,145,
123,68,235,30,213,170,115,105,221,204,253,187,87,151,214,181,217,75,223,26,219,221,187,207,71,174,137,218,126,68,235,95,218,182,85,207,222,254,68,238,255,51,231,61,58,206,186,149,79,244,179,215,50,58,
142,187,118,204,162,101,70,62,243,145,125,136,148,219,59,94,209,109,123,247,216,210,185,236,229,29,189,255,142,212,101,123,76,162,199,166,148,111,190,31,179,159,151,218,181,213,90,222,250,222,27,185,55,
213,142,219,232,253,43,146,95,244,51,16,61,150,181,237,122,223,197,53,189,115,189,85,186,198,74,121,69,238,251,173,251,69,244,117,111,93,105,95,75,223,213,189,125,201,207,97,158,254,42,143,165,94,214,
119,250,212,184,63,44,229,115,82,74,159,150,239,194,54,219,143,95,3,143,178,164,235,17,54,219,247,75,224,223,71,229,239,159,54,239,183,255,254,84,121,255,157,246,159,253,203,127,254,31,82,74,127,47,165,
244,125,16,211,246,224,127,143,154,217,126,40,110,211,109,23,151,214,45,55,31,170,194,135,172,254,185,43,151,7,0,0,0,45,189,0,65,113,117,22,192,200,243,216,190,207,183,95,150,219,21,151,96,198,82,72,247,
59,175,255,251,223,254,243,127,253,215,41,165,207,175,127,235,215,223,63,54,203,74,239,47,105,255,216,108,83,250,219,251,151,178,215,134,144,0,0,0,0,231,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,
0,0,192,233,9,96,0,0,0,0,167,39,128,193,67,205,60,150,9,128,95,220,67,121,85,174,221,99,156,241,56,158,165,78,103,169,7,112,95,127,126,118,5,114,75,74,205,199,202,28,117,107,114,139,123,30,95,48,0,243,
220,67,121,85,174,221,99,156,241,56,158,165,78,103,169,7,116,29,240,24,213,155,60,38,31,163,154,90,143,81,93,215,116,54,122,96,0,0,0,0,167,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,0,0,192,233,157,
46,128,97,242,157,113,142,89,204,61,142,211,51,142,189,243,205,81,92,75,0,239,199,189,29,234,30,245,249,240,57,188,159,211,61,133,36,165,246,9,247,20,146,50,31,146,24,65,12,184,230,90,2,120,63,238,237,
80,119,138,32,198,171,60,133,228,132,78,215,3,3,0,0,0,32,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,231,155,3,99,89,58,99,110,214,75,194,71,212,6,0,0,0,142,115,138,57,48,74,219,153,3,3,0,0,0,96,55,1,12,
0,0,0,224,244,222,43,128,113,226,174,46,0,0,0,240,80,111,214,70,126,175,0,6,0,0,0,240,150,78,55,137,231,210,153,196,243,168,248,209,123,197,161,0,0,0,120,9,143,156,196,243,42,157,73,60,1,0,0,0,238,238,
53,2,24,207,138,0,245,138,61,113,100,10,0,0,128,147,153,234,125,241,0,47,210,182,125,141,0,198,153,189,200,137,6,0,0,224,137,180,29,119,59,231,28,24,151,176,83,227,252,30,127,234,151,180,164,245,240,92,
1,0,0,32,20,192,40,36,89,11,11,151,157,115,96,172,223,211,93,148,230,189,232,183,199,159,229,101,123,96,172,163,7,115,54,218,21,217,76,36,13,0,0,128,154,201,224,197,97,121,111,12,183,165,79,228,228,1,
140,59,30,217,163,131,14,157,167,167,0,0,0,240,195,220,163,157,120,215,118,231,185,219,180,39,15,96,68,85,14,242,224,177,47,117,205,25,206,71,32,3,0,0,224,103,27,109,23,86,146,86,219,168,131,249,156,61,
48,17,117,206,57,48,150,37,69,166,163,184,58,5,151,244,203,146,66,27,71,242,220,67,16,3,0,0,128,136,145,192,67,116,254,139,237,155,222,28,25,223,235,55,243,95,156,112,138,200,215,235,129,177,39,48,208,
58,209,95,14,233,133,1,0,0,0,17,35,189,47,2,109,218,120,185,175,215,200,125,189,0,198,168,35,207,201,235,157,95,0,0,0,206,74,123,117,200,235,4,48,74,189,37,142,24,223,51,210,11,99,48,107,0,0,0,40,106,
180,45,67,189,47,38,50,47,182,161,95,168,39,198,233,230,192,72,203,242,245,44,218,239,73,45,218,201,55,219,165,53,50,113,70,48,93,90,210,82,27,244,115,210,241,64,0,0,0,188,128,78,240,162,184,186,55,124,
100,247,252,23,215,235,206,216,228,125,157,30,24,123,244,2,74,51,17,167,37,144,47,0,0,0,92,204,182,35,123,109,214,31,210,54,125,205,0,198,230,228,77,13,35,169,68,152,114,161,71,214,8,100,0,0,0,208,18,
108,55,134,135,142,52,3,26,129,225,35,47,52,108,100,235,116,67,72,150,175,3,185,124,124,92,13,245,88,215,245,215,240,146,77,218,117,93,211,178,93,182,44,105,253,252,44,230,151,150,148,214,207,245,247,
178,175,161,36,235,166,140,165,120,18,175,135,146,92,202,188,170,87,74,105,249,88,174,223,167,229,247,235,37,91,183,212,215,213,142,199,165,220,109,249,173,252,91,242,125,168,165,105,229,85,90,159,215,
173,246,250,178,93,235,216,143,28,187,218,118,181,58,148,222,183,234,153,231,189,173,115,47,93,169,204,86,217,35,215,72,235,28,70,142,81,190,31,173,115,221,170,119,94,199,222,181,85,202,183,85,151,222,
121,233,213,167,84,191,214,121,235,29,143,94,190,163,251,95,202,183,181,143,165,186,110,141,92,139,173,250,84,239,117,131,247,155,90,121,181,116,173,50,122,215,74,175,220,209,252,123,117,235,221,67,34,
199,170,244,57,40,213,161,182,239,145,123,91,107,251,150,72,189,107,105,123,199,171,181,190,118,77,183,62,163,189,251,227,200,119,232,54,143,222,189,162,180,111,165,188,122,233,103,150,71,245,238,79,145,
207,114,244,179,216,187,143,238,45,107,91,230,104,29,123,229,149,202,168,125,39,247,174,223,222,111,137,200,181,51,122,236,162,223,91,181,125,104,149,53,250,29,23,253,45,86,170,219,182,142,165,186,148,
242,25,253,62,42,149,147,167,169,237,123,228,158,27,249,94,142,124,87,151,242,239,221,39,106,191,15,90,247,226,200,247,93,233,253,54,239,218,178,222,125,33,114,223,139,188,110,213,127,68,228,250,168,149,
85,60,143,203,109,250,82,218,171,114,151,143,155,208,67,241,51,242,145,245,67,216,108,116,115,108,182,199,126,217,172,191,148,253,149,246,234,216,126,124,236,254,254,185,151,211,5,48,82,42,95,44,223,203,
58,95,72,173,131,28,74,95,184,64,46,81,176,37,221,158,196,214,251,217,117,37,75,118,97,205,228,49,146,46,90,159,218,178,209,215,189,252,103,182,27,61,86,189,50,246,44,219,46,111,109,115,196,249,237,165,
157,253,220,68,182,155,169,227,158,207,212,104,125,162,251,50,91,206,222,115,52,243,25,30,61,215,209,178,71,223,183,204,222,155,246,214,225,200,252,246,220,67,102,63,95,145,242,163,251,48,115,254,246,
28,143,61,239,35,251,240,168,239,208,217,251,222,81,159,203,94,94,17,189,107,108,230,90,136,92,143,179,247,184,163,126,219,28,241,155,104,230,55,197,200,49,152,249,13,17,169,107,100,253,204,231,123,239,
119,212,204,190,221,235,183,71,52,77,190,239,247,248,252,239,253,238,169,213,239,168,251,215,222,123,229,204,189,59,114,13,221,227,158,57,186,237,200,111,199,109,154,210,113,104,245,252,191,9,86,12,212,
171,180,236,230,117,227,51,95,11,242,62,211,41,135,144,20,15,250,215,255,54,137,190,211,109,187,194,44,31,31,105,249,90,183,44,215,187,183,124,44,215,231,231,59,221,239,188,242,19,184,181,166,165,120,
193,229,23,193,246,164,143,174,203,255,229,199,164,150,95,233,125,77,52,77,239,134,58,243,5,94,58,6,181,15,89,244,216,213,182,27,189,97,246,142,101,233,220,244,210,149,242,239,221,228,163,215,72,75,228,
24,213,142,85,171,110,189,114,70,110,252,181,235,160,119,93,141,92,151,173,207,81,235,179,60,122,124,163,219,229,121,212,242,29,41,191,117,93,244,174,197,214,178,145,123,93,207,72,186,200,61,110,228,60,
237,201,191,183,109,171,188,232,177,170,157,199,222,185,140,124,94,34,219,183,68,234,93,75,219,59,94,173,245,181,227,208,187,79,244,206,95,173,156,86,30,189,123,69,169,46,165,188,34,247,201,209,229,81,
189,115,62,122,207,217,190,47,93,143,173,242,246,150,213,187,38,163,159,231,210,118,189,243,223,186,46,70,62,251,209,107,39,186,188,149,87,109,63,123,249,213,246,47,122,45,214,174,131,200,253,169,119,
47,41,229,19,57,207,181,178,106,105,242,215,173,123,207,72,25,173,101,173,123,87,171,188,188,126,249,235,214,57,136,92,107,35,247,202,209,251,194,200,57,104,189,110,213,127,68,228,250,168,149,21,217,174,
154,118,249,168,111,91,186,71,125,100,233,242,183,219,54,240,166,204,75,155,121,89,150,171,229,75,214,206,30,253,204,63,218,233,122,96,84,15,216,154,110,151,111,186,181,212,14,111,249,131,153,45,200,243,
94,150,98,79,140,239,164,203,114,243,132,146,145,47,168,200,135,175,149,54,114,35,239,25,185,209,143,172,143,222,100,102,110,96,189,60,75,131,201,184,52,0,0,15,142,73,68,65,84,233,102,110,218,145,122,
69,235,82,203,175,87,246,76,222,123,211,140,30,207,90,57,35,55,187,232,241,25,189,198,103,175,203,86,29,122,229,204,220,236,163,215,215,72,154,153,207,210,209,105,34,229,143,164,221,115,158,142,218,207,
210,242,145,207,113,52,207,145,229,163,63,8,107,219,247,140,212,111,244,158,125,244,125,52,82,214,204,121,153,173,251,104,250,61,247,251,72,217,247,188,231,140,220,15,247,126,127,205,158,251,17,145,239,
141,35,126,243,28,121,45,204,124,166,71,127,231,204,220,203,103,126,35,204,252,14,216,123,158,107,203,143,186,231,142,150,91,91,54,115,207,58,226,187,105,166,206,145,107,104,116,127,102,174,223,89,71,
93,175,181,117,107,90,82,106,109,91,202,103,41,172,106,93,55,3,199,110,239,103,254,81,78,217,3,227,91,241,128,141,30,196,44,125,227,66,232,151,253,219,154,218,93,125,0,0,0,96,43,212,142,156,110,179,238,
108,43,215,202,62,145,115,7,48,122,182,17,172,102,20,106,71,16,35,24,200,16,204,0,0,0,32,23,110,51,214,218,159,51,193,139,112,91,249,181,156,114,8,73,177,171,202,146,82,26,153,67,100,89,210,210,154,116,
100,89,110,135,137,212,202,40,165,45,103,58,80,65,0,0,0,222,93,168,149,88,11,44,132,71,11,108,3,22,249,208,148,234,155,219,50,78,30,224,136,246,192,56,217,244,163,149,177,65,205,99,29,236,30,83,203,35,
208,27,3,0,0,0,194,90,237,204,137,224,69,115,85,41,120,113,30,161,152,195,25,134,144,180,43,186,35,104,144,71,158,118,7,49,46,233,5,51,0,0,0,152,17,105,83,78,6,47,110,219,192,131,245,106,123,122,199,134,
103,7,48,198,14,192,82,121,211,232,133,177,43,136,209,59,127,130,25,192,27,56,227,12,211,192,125,249,220,3,60,88,180,237,88,107,135,206,4,47,34,189,47,198,191,14,158,26,196,120,141,57,48,194,115,80,92,
210,167,171,195,90,120,72,76,186,57,238,181,50,162,115,111,248,33,0,188,48,141,25,248,121,124,238,1,78,166,53,157,65,36,113,107,122,133,94,0,227,69,190,19,238,213,3,227,126,81,153,72,47,140,108,85,185,
27,205,192,35,99,150,205,63,0,0,0,56,66,175,173,25,108,203,174,123,130,23,247,113,151,152,192,179,135,144,28,171,17,53,26,10,98,244,198,34,9,100,0,0,0,48,171,215,174,172,182,75,59,193,139,82,62,111,100,
52,128,177,55,138,50,191,125,53,162,20,159,248,36,28,196,184,148,23,9,100,232,157,1,0,0,64,205,72,219,177,217,14,13,4,47,154,237,210,74,155,122,95,144,227,161,49,130,211,205,129,209,58,97,245,195,186,
153,168,34,159,203,98,73,217,251,37,45,55,135,232,146,115,105,14,140,175,117,145,57,56,4,49,0,0,0,24,213,12,34,148,215,173,75,254,223,246,11,115,73,214,242,232,78,185,112,78,35,61,48,74,45,248,181,242,
119,52,159,88,5,90,227,122,154,243,97,228,179,179,254,250,119,171,17,14,243,196,17,0,0,0,142,210,109,99,150,219,167,197,246,236,115,130,23,35,237,255,86,204,32,28,35,120,214,28,24,181,10,118,43,222,14,
98,108,116,130,24,191,242,170,110,220,206,124,123,161,221,43,160,49,242,212,21,0,0,40,241,155,146,119,177,189,150,95,245,186,14,183,35,235,237,209,98,27,54,208,246,189,202,250,59,175,80,91,118,186,237,
126,15,165,33,36,107,58,110,48,196,186,249,87,90,119,83,238,242,241,241,171,240,252,96,110,46,210,171,199,126,173,235,38,167,205,80,146,82,30,23,159,159,191,215,127,229,251,61,172,100,59,100,100,249,248,
90,191,182,135,146,124,124,252,94,62,52,228,164,144,246,170,252,202,250,82,89,165,229,181,124,74,101,180,202,105,213,171,182,125,77,237,188,214,246,171,180,125,171,156,203,250,86,29,71,207,81,158,174,
113,109,222,164,169,157,147,217,114,91,199,168,116,206,74,231,176,84,143,218,241,218,166,29,185,30,75,251,179,93,87,122,63,146,79,107,253,72,25,185,214,231,101,166,190,165,122,229,251,146,127,126,107,
101,150,182,43,213,37,242,185,201,63,39,173,114,182,117,44,165,139,168,213,121,228,26,45,237,71,158,247,204,117,212,42,175,85,118,235,158,91,75,191,77,211,187,30,163,247,227,90,254,121,221,183,229,230,
245,136,110,19,249,108,215,234,27,173,107,105,155,200,119,88,235,220,180,142,93,228,216,150,234,182,85,58,159,189,107,189,149,79,107,223,122,117,140,222,191,242,50,122,249,149,246,179,100,207,247,68,111,
31,34,247,131,90,121,165,58,149,202,104,213,189,87,255,210,185,142,158,171,232,119,91,239,248,151,210,183,202,232,253,46,136,212,123,207,111,149,217,245,249,62,244,238,181,121,125,123,223,27,189,244,165,
215,165,186,180,236,185,247,228,231,115,91,231,90,94,145,207,85,239,59,184,87,207,145,253,47,229,89,202,119,244,28,68,203,106,253,38,234,93,15,249,186,60,77,254,186,85,94,177,172,122,189,215,175,54,233,
146,215,51,207,171,248,61,124,121,93,217,239,254,239,131,188,102,165,154,174,155,127,71,185,201,43,50,7,198,154,210,85,64,35,223,253,232,118,181,52,235,77,218,210,69,177,89,182,166,148,150,171,19,190,
221,175,206,15,193,148,138,1,135,75,36,235,38,144,177,44,215,121,214,246,40,175,115,105,31,106,58,251,219,205,187,116,225,237,201,231,168,122,69,204,228,215,43,39,154,103,180,190,35,229,69,214,237,41,
247,136,115,56,83,183,61,215,81,52,237,232,245,20,189,62,70,206,121,47,237,61,235,59,122,189,215,234,50,115,92,90,219,69,243,143,40,229,115,244,53,122,244,189,184,181,126,244,26,201,151,207,126,86,162,
249,143,228,57,243,217,143,230,61,82,167,217,60,71,247,109,100,125,79,233,124,142,94,235,145,237,71,234,120,196,247,71,109,251,200,177,217,91,86,116,155,145,99,51,187,236,222,247,161,209,207,202,204,111,
136,217,207,99,164,222,247,248,173,114,244,189,118,251,58,250,217,140,126,174,163,117,233,213,111,100,251,61,231,111,207,181,57,83,135,81,35,231,122,207,111,147,217,239,140,217,223,74,181,247,223,203,
183,219,222,102,253,187,199,69,86,70,235,122,190,41,243,182,46,235,71,101,48,70,125,63,71,2,20,209,52,145,192,200,149,222,16,146,145,232,201,90,121,189,93,214,202,111,40,90,179,142,92,180,181,11,177,176,
188,62,63,198,247,134,217,63,0,0,0,136,136,181,39,171,237,210,74,59,118,164,77,60,56,239,197,108,59,190,23,31,104,229,87,117,196,83,72,34,61,45,242,244,165,127,251,162,1,203,18,239,118,21,216,238,166,
71,70,61,227,112,21,1,0,0,160,166,249,31,211,143,238,185,51,166,214,142,31,205,99,151,86,0,99,54,168,176,39,24,177,46,203,146,150,232,1,94,150,223,67,73,190,222,23,131,24,87,35,76,150,116,115,220,182,
229,221,4,56,178,183,71,142,232,1,0,0,224,199,202,3,22,55,45,225,102,219,184,183,241,237,246,235,178,140,54,214,247,180,128,103,183,173,110,183,167,7,198,118,46,140,53,251,187,77,211,251,183,77,55,28,
248,88,35,65,140,155,152,197,165,152,193,201,105,82,57,34,38,168,1,0,0,64,75,123,170,130,204,72,224,162,178,168,20,188,152,84,106,187,247,218,248,219,109,243,191,211,45,232,35,134,144,148,140,4,36,182,
193,143,169,29,41,6,49,82,202,102,95,221,148,214,94,120,157,71,158,79,177,252,96,69,1,0,0,160,164,27,96,152,11,92,164,116,104,240,98,116,155,67,245,38,241,28,81,219,169,94,52,230,106,249,178,35,136,113,
115,82,138,99,132,74,91,119,38,81,249,154,40,101,249,248,56,100,252,208,208,48,153,96,250,210,250,214,54,145,242,71,234,56,226,94,249,62,171,220,123,239,79,52,255,209,235,170,86,206,222,124,222,221,246,
216,148,142,213,61,142,221,232,231,187,151,215,35,234,220,42,255,29,202,56,139,179,29,207,145,251,213,76,254,71,58,235,117,114,116,189,238,185,159,223,223,27,149,223,79,123,191,191,142,188,247,157,193,
81,223,211,143,114,150,223,55,151,180,71,252,30,58,106,159,142,190,47,62,235,94,126,175,115,48,147,254,89,70,127,19,205,124,207,53,215,95,38,228,172,77,204,249,43,209,230,95,97,213,109,230,87,111,139,
237,228,160,172,109,30,105,211,247,122,95,236,118,207,73,60,107,189,48,106,19,119,174,233,107,14,140,93,65,130,233,222,24,161,149,169,91,191,129,231,31,143,126,168,5,49,206,91,238,217,190,228,143,40,231,
21,190,116,158,165,247,101,119,246,32,70,105,91,65,140,215,117,182,227,41,136,177,223,79,12,98,212,210,190,91,16,35,165,99,239,221,247,118,166,223,55,163,233,5,49,98,101,220,243,28,204,164,127,134,187,
7,49,166,175,197,198,250,64,224,34,165,169,249,46,74,66,29,17,58,233,183,235,118,25,9,96,212,230,185,136,164,25,153,11,99,183,155,33,37,41,253,58,161,173,9,58,111,74,46,197,93,2,94,224,67,10,0,0,192,153,
116,218,145,173,213,149,224,197,65,34,109,249,217,222,23,195,113,128,209,30,24,219,0,69,74,215,221,21,70,122,97,212,210,28,214,181,228,114,194,186,189,49,190,215,101,53,106,38,104,38,4,0,0,128,138,96,
112,161,219,73,227,174,129,139,239,44,55,127,123,13,224,104,239,139,233,78,12,121,0,163,21,136,104,181,224,183,189,46,74,189,48,34,61,47,214,148,2,67,52,70,21,135,144,108,186,173,78,5,51,74,9,1,0,0,96,
135,78,19,179,26,160,248,30,210,119,184,153,30,24,121,112,34,18,4,9,45,143,244,192,232,245,160,40,165,221,254,237,13,39,169,165,59,86,165,247,197,58,18,204,248,222,232,192,122,1,0,0,240,243,4,91,191,205,
94,21,143,153,194,160,212,249,160,53,55,70,42,252,141,150,211,116,212,99,84,243,222,22,173,30,24,165,101,41,149,15,192,241,26,195,72,186,193,140,239,149,71,87,10,0,0,0,126,233,14,5,121,220,220,139,145,
222,22,189,30,24,249,235,105,181,0,70,41,8,209,91,95,27,78,146,191,174,245,188,88,83,74,159,187,246,102,196,246,132,119,130,25,223,155,12,60,97,4,0,0,0,122,194,243,86,60,231,129,17,159,169,220,233,160,
57,53,68,101,89,190,188,164,185,126,102,18,207,148,110,131,20,151,101,121,218,94,16,227,146,238,51,165,244,81,200,227,49,58,193,140,239,85,189,71,234,8,112,0,0,0,176,177,107,98,205,115,60,229,242,210,
102,15,205,107,153,202,193,135,72,112,163,235,168,33,36,151,194,243,128,70,47,136,145,111,247,121,248,36,158,163,74,101,71,3,19,231,184,184,0,0,0,56,137,112,43,241,156,237,201,82,15,140,209,158,23,135,
253,151,254,145,0,70,100,146,205,60,120,177,221,174,20,196,184,172,191,244,192,72,105,89,254,98,160,78,143,209,187,144,244,188,0,0,0,160,229,156,1,138,186,95,109,243,75,219,189,212,3,35,85,94,143,246,
176,8,55,168,255,156,226,129,137,210,16,145,92,109,62,140,94,100,230,251,239,31,127,251,183,255,49,165,229,239,110,138,201,203,173,213,245,197,174,6,0,0,0,120,136,222,156,19,95,150,205,251,245,255,165,
250,176,145,232,112,146,212,72,23,169,223,85,154,75,163,191,20,36,88,10,239,151,194,251,252,223,71,229,125,244,111,43,223,86,93,242,253,168,189,6,0,0,128,119,83,154,44,115,251,186,213,91,162,53,199,197,
182,7,70,244,111,171,231,70,45,224,81,10,122,92,237,95,107,8,73,173,215,69,235,169,36,151,215,249,186,214,223,203,240,145,207,116,29,168,200,93,214,111,203,203,159,132,178,253,91,26,206,2,0,0,0,239,170,
22,184,200,255,182,230,181,168,5,32,122,193,136,86,79,139,96,15,144,102,218,93,115,96,108,51,205,131,4,165,116,181,192,69,233,117,171,39,70,45,112,81,123,34,138,222,23,0,0,0,252,4,173,94,24,181,64,70,
228,95,52,144,145,215,165,215,211,34,175,103,211,236,83,72,106,61,49,106,21,200,39,245,44,165,219,6,49,122,229,150,2,23,122,95,0,0,0,240,211,245,122,97,140,246,196,136,244,188,40,229,17,173,99,88,47,128,
113,9,12,228,67,68,106,61,49,74,242,32,194,54,80,145,111,219,235,125,145,58,175,183,127,243,215,0,0,0,240,238,142,14,96,68,3,27,145,124,162,245,44,170,5,48,106,61,44,242,64,70,74,237,96,70,173,7,196,118,
24,73,62,73,103,173,204,188,183,69,107,254,139,156,64,6,0,0,0,239,172,213,246,142,4,50,90,65,136,232,252,23,165,237,243,250,212,70,101,244,246,101,122,14,140,90,47,140,200,163,86,107,203,91,189,47,106,
65,140,84,248,91,170,71,109,25,0,0,0,188,186,86,240,98,251,186,22,200,216,211,19,163,55,116,36,218,251,162,235,18,192,168,245,184,40,173,171,245,194,24,25,195,210,234,121,145,7,43,74,143,110,77,133,191,
181,101,45,130,26,0,0,0,188,146,104,219,187,52,44,99,52,128,145,47,155,121,18,73,169,215,71,105,63,90,251,181,166,212,238,129,81,10,106,148,122,97,68,134,146,180,148,122,94,108,243,111,61,117,36,47,215,
252,23,0,0,0,252,116,181,64,65,109,8,201,118,217,81,189,49,242,250,180,2,42,181,186,95,57,250,41,36,179,61,50,182,121,214,2,25,41,149,3,24,249,242,84,88,14,0,0,0,63,65,173,103,67,30,56,136,12,43,153,13,
104,228,101,244,234,24,18,13,96,148,122,94,108,95,151,2,23,35,65,140,218,48,149,218,227,82,243,244,230,191,0,0,0,224,39,235,245,102,136,12,37,169,189,30,9,98,244,242,235,213,173,42,250,24,213,214,186,
61,65,140,60,80,177,125,95,122,157,10,127,243,101,165,242,4,48,0,0,0,120,103,189,222,14,189,0,198,229,239,158,64,70,47,143,86,61,123,235,174,2,24,173,96,69,190,190,214,19,98,79,79,140,72,47,143,72,192,
164,68,0,3,0,0,128,119,22,25,174,113,68,16,99,251,58,26,188,168,149,217,170,247,205,250,200,16,146,94,96,163,148,166,21,100,216,174,111,5,44,242,124,74,129,138,72,160,100,102,62,14,0,0,0,120,53,35,65,
140,35,135,148,148,94,71,234,53,148,38,58,233,101,111,190,137,200,223,200,235,214,178,90,153,173,186,235,121,1,0,0,192,79,82,10,4,140,244,132,232,13,255,24,29,42,210,26,66,18,233,137,241,189,124,164,209,
127,116,16,99,100,93,173,172,90,157,5,46,0,0,0,248,201,122,189,32,246,204,141,49,178,174,87,86,169,110,197,229,179,143,81,205,51,108,205,81,145,10,239,83,97,93,109,168,74,105,121,62,148,164,246,30,0,0,
0,126,178,189,129,140,124,121,36,144,81,91,191,203,232,176,139,214,227,74,71,122,78,44,133,245,189,158,22,145,178,75,244,198,0,0,0,224,39,104,5,9,90,129,140,200,28,25,209,64,70,105,89,180,236,220,213,
186,153,167,118,28,25,196,232,165,137,190,174,213,15,0,0,0,126,170,145,73,61,107,175,163,67,76,122,105,122,229,181,234,152,82,74,233,79,149,132,35,61,26,122,65,140,94,126,165,52,209,131,92,155,156,196,
16,18,0,0,0,126,170,104,123,57,50,156,164,180,60,58,167,197,204,211,72,170,102,135,94,140,76,162,57,51,25,231,236,36,157,122,95,0,0,0,192,111,161,9,50,27,239,103,38,255,28,201,63,82,183,148,82,189,7,70,
74,253,96,192,200,99,76,71,135,126,244,162,50,209,19,0,0,0,0,63,213,72,219,57,26,124,24,237,117,209,203,47,108,52,72,209,91,223,155,20,52,58,17,103,100,114,209,145,222,22,122,102,0,0,0,240,206,70,130,
2,145,128,194,222,128,198,72,89,161,245,173,30,24,41,141,207,93,17,93,182,103,126,140,11,115,93,0,0,0,192,47,145,246,113,171,29,189,39,168,17,9,92,212,150,133,205,6,15,162,233,70,2,25,173,178,204,121,
1,0,0,0,251,141,78,201,48,250,20,145,61,129,139,102,186,94,15,140,139,163,131,24,165,229,35,219,2,0,0,0,227,102,134,112,68,135,129,220,45,120,145,210,253,230,145,24,13,70,28,145,30,0,0,0,136,25,125,10,
200,145,233,167,210,142,6,2,142,74,191,103,242,208,217,224,133,160,7,0,0,0,239,104,118,110,137,225,71,153,6,214,143,214,37,156,126,166,81,127,244,54,123,134,167,28,81,62,0,0,0,188,186,61,19,100,30,49,
204,99,166,252,161,109,158,17,20,216,251,232,214,35,202,0,0,0,128,119,118,196,83,59,167,31,121,122,143,237,206,16,44,184,215,60,28,0,0,0,64,219,225,115,85,220,107,251,35,3,2,103,205,11,0,0,0,24,115,68,
15,142,67,243,186,87,160,224,17,1,8,65,14,0,0,0,24,119,100,112,226,97,101,60,42,8,32,216,0,0,0,0,239,235,238,65,145,103,6,22,4,53,0,0,0,224,245,60,162,7,199,141,179,7,17,206,94,63,0,0,0,120,39,79,9,78,
68,252,127,117,200,72,36,243,210,157,110,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::case_effects_png = (const char*) resource_OwlBassGui_case_effects_png;
const int OwlBassGui::case_effects_pngSize = 12243;

// JUCER_RESOURCE: levelIndicator_png, 731, "../../Resources/level indicator.png"
static const unsigned char resource_OwlBassGui_levelIndicator_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,228,0,0,0,64,8,6,0,0,0,203,84,4,181,0,0,2,162,73,68,65,84,120,156,237,221,203,
106,83,81,20,128,225,117,210,180,73,154,106,132,182,70,139,104,65,161,180,79,80,156,249,20,190,137,83,117,234,155,248,56,34,14,138,83,5,193,32,148,10,22,39,219,129,141,189,229,102,47,201,74,251,125,16,
72,78,86,78,246,32,228,103,39,129,84,91,59,219,37,0,72,167,68,255,237,185,138,136,147,111,213,71,183,207,28,170,162,154,218,218,184,122,181,165,230,210,172,215,0,112,203,156,222,7,149,82,142,142,150,40,
229,248,18,229,104,244,212,245,163,199,159,221,74,149,227,243,48,159,234,237,78,59,34,34,126,31,254,158,241,82,0,230,84,41,17,213,184,221,105,137,211,189,28,28,229,201,158,111,242,49,123,230,249,81,143,
136,16,101,128,75,24,27,227,136,136,106,178,177,43,36,198,243,165,214,191,210,238,180,195,199,215,0,48,27,181,147,55,68,25,0,102,163,118,246,128,40,3,192,244,157,11,114,132,40,3,192,180,13,12,114,132,
40,3,192,52,13,13,114,196,223,40,247,127,129,13,0,92,159,250,184,129,207,123,123,113,240,227,96,26,107,1,128,27,105,107,103,123,236,204,200,29,50,0,48,29,130,12,0,9,8,50,0,36,48,246,59,228,97,222,124,
123,59,217,220,131,215,23,125,10,24,203,235,144,89,243,26,188,93,202,203,87,19,205,85,239,223,253,247,185,237,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,
64,144,1,32,129,106,247,197,243,50,106,224,211,135,143,254,237,9,0,46,193,191,61,1,192,156,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,
144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,
6,128,4,4,25,0,18,16,100,0,72,160,62,234,206,198,114,35,214,31,175,199,198,179,141,105,173,7,0,110,156,78,171,19,251,223,247,71,206,12,13,114,99,185,17,247,214,59,241,240,233,110,44,44,216,72,3,192,69,
253,250,121,24,139,141,197,232,125,233,13,157,25,88,218,126,140,91,119,151,197,24,0,46,169,181,210,140,238,147,110,172,61,90,27,58,115,174,182,98,12,0,87,111,92,148,79,21,87,140,1,224,250,140,138,242,
191,234,138,49,0,92,191,97,81,174,69,136,49,0,76,211,160,40,215,197,24,0,174,81,53,248,112,243,78,51,238,111,118,163,68,68,239,107,47,234,171,27,171,177,212,90,18,99,0,184,2,101,72,128,7,105,173,52,163,
187,217,141,218,66,45,254,0,69,210,101,25,211,69,99,163,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::levelIndicator_png = (const char*) resource_OwlBassGui_levelIndicator_png;
const int OwlBassGui::levelIndicator_pngSize = 731;

// JUCER_RESOURCE: presetsPanel_png, 24691, "../../Resources/presets panel.png"
static const unsigned char resource_OwlBassGui_presetsPanel_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,178,0,0,0,75,8,6,0,0,0,140,123,100,120,0,0,32,0,73,68,65,84,120,156,237,189,77,
207,118,203,114,30,84,181,158,55,150,140,19,68,20,236,56,138,140,64,8,17,24,128,176,228,236,35,49,132,204,51,76,134,9,83,36,152,198,63,32,76,157,1,67,228,161,243,31,156,31,176,149,8,7,6,8,131,68,144,146,
72,216,178,97,146,73,62,246,189,154,65,119,85,93,215,85,189,214,253,60,219,231,4,161,179,250,156,119,63,235,163,63,170,170,235,171,171,171,215,237,223,125,247,157,221,148,95,54,179,63,99,102,191,127,87,
105,140,113,123,255,148,167,60,229,41,79,121,202,83,158,242,148,159,239,226,238,183,247,155,242,151,204,236,159,153,217,31,233,139,239,191,255,222,204,204,190,221,52,254,207,204,236,247,244,225,24,35,
29,85,188,142,251,167,60,229,41,79,121,202,83,158,242,148,167,60,229,170,160,3,235,238,121,143,215,171,252,31,235,239,175,155,217,63,220,245,117,229,200,254,151,102,246,187,248,96,140,97,231,121,166,243,
138,206,236,85,121,28,219,167,60,229,41,79,121,202,83,158,242,148,159,239,114,23,121,85,39,214,221,237,56,14,109,243,123,102,246,87,204,236,239,105,251,157,35,251,215,204,236,119,226,70,29,216,243,60,
243,249,238,47,182,123,202,83,158,242,148,167,60,229,41,79,121,202,83,174,210,10,244,239,113,28,54,198,216,57,180,191,107,102,127,221,204,254,46,246,163,142,236,127,99,102,191,21,55,231,121,166,19,139,
14,236,157,67,251,148,167,60,229,41,79,121,202,83,158,242,148,167,220,149,157,3,235,238,233,95,134,67,123,28,135,29,199,17,205,126,199,204,254,188,153,253,157,120,128,142,236,223,54,179,191,21,55,225,
196,106,52,22,83,11,158,28,217,167,60,229,41,79,121,202,83,158,242,148,167,124,165,236,114,100,35,10,27,145,216,243,60,169,30,56,179,191,101,211,153,253,77,51,51,255,238,187,239,220,204,254,7,51,251,27,
81,227,60,79,123,189,94,91,39,22,159,69,185,114,96,31,199,246,41,79,121,202,83,158,242,148,167,60,229,231,187,92,229,200,238,28,218,136,204,198,223,184,254,248,248,64,103,214,204,236,183,205,236,191,242,
245,249,173,244,56,35,10,251,122,189,210,113,85,39,214,172,127,189,0,203,227,192,62,229,41,79,121,202,83,158,242,148,167,60,5,203,93,158,44,94,163,51,27,215,225,200,162,51,251,253,247,223,251,55,51,251,
251,241,96,231,184,106,122,193,93,106,65,244,241,148,167,60,229,41,79,121,202,83,158,242,148,167,104,217,57,179,248,207,204,182,105,5,145,59,139,245,126,242,147,159,252,253,111,102,246,27,81,81,29,214,
207,228,200,154,237,157,215,199,161,125,202,83,158,242,148,167,60,229,41,79,121,138,89,57,176,232,31,106,110,44,166,18,152,25,57,175,232,139,126,124,124,68,23,191,241,205,102,90,129,171,243,186,115,106,
127,204,183,100,159,242,148,167,60,229,41,79,121,202,83,158,242,243,93,118,190,226,213,55,100,207,243,76,103,22,191,148,21,117,195,249,53,179,145,95,45,8,231,53,26,237,156,215,171,136,236,103,128,125,
202,83,158,242,148,167,60,229,41,79,121,202,207,111,209,180,130,157,191,24,78,44,254,13,231,53,222,71,206,172,217,250,252,214,103,34,175,191,244,111,252,155,246,203,127,238,47,216,127,252,31,252,186,253,
135,255,222,127,98,127,246,223,250,183,237,79,125,251,133,9,72,2,100,54,206,97,54,134,253,172,93,217,32,197,213,56,46,239,220,220,58,84,213,203,85,127,190,185,226,154,115,164,1,163,112,221,1,53,117,20,
167,94,46,17,105,208,234,133,111,112,192,59,236,100,152,13,183,228,165,53,87,1,219,112,108,57,204,71,245,53,92,113,131,187,177,70,114,24,117,236,42,254,116,139,251,194,23,198,98,234,3,62,235,34,224,218,
205,53,129,236,216,72,40,25,194,231,213,58,31,117,230,235,247,253,65,7,248,71,151,206,103,189,243,206,167,55,148,251,105,0,149,144,188,211,13,119,163,222,201,251,85,233,243,188,147,118,135,187,81,242,
208,250,198,73,94,226,164,64,75,29,106,234,32,23,14,58,105,48,101,60,222,141,213,117,202,149,39,180,164,87,70,177,170,141,85,203,17,135,183,154,230,186,220,41,71,101,147,31,219,239,45,99,32,209,236,158,
29,131,142,119,234,154,180,250,0,154,94,74,229,148,109,209,197,131,107,40,196,116,215,173,192,181,45,250,234,108,221,145,255,157,93,187,182,119,63,205,2,243,215,128,220,77,20,42,106,135,185,67,30,144,
118,59,192,201,32,141,142,52,181,121,71,197,157,46,189,27,252,186,56,116,49,132,133,232,157,244,60,152,69,46,213,76,180,53,176,229,151,224,55,212,124,107,219,10,190,97,232,105,56,188,223,36,152,18,6,238,
110,126,44,9,0,216,206,49,236,135,127,245,47,236,255,250,227,127,106,255,203,255,254,63,218,255,249,143,255,87,251,223,254,209,255,156,78,172,58,175,248,60,162,178,228,200,226,181,222,255,23,255,249,95,
181,191,240,43,255,142,253,185,63,251,231,237,151,126,241,151,236,56,102,48,247,245,58,237,60,135,217,57,236,92,255,38,45,64,9,111,232,88,194,10,202,187,17,162,63,45,151,113,95,239,154,189,54,218,239,
202,190,127,181,220,249,13,87,227,104,81,101,254,78,54,182,136,202,192,151,2,123,175,242,208,208,143,55,128,92,169,242,79,201,75,220,171,208,122,8,147,244,178,26,234,2,206,209,193,206,75,24,237,29,77,
63,161,147,92,148,206,29,126,173,173,117,22,219,233,215,109,199,151,61,102,79,240,28,52,97,56,84,94,228,32,135,43,250,17,239,123,214,117,130,49,219,74,83,82,146,151,100,190,151,223,189,187,252,25,129,
249,105,150,31,227,145,189,19,228,159,114,217,9,26,218,123,19,54,94,40,165,65,195,58,55,6,110,64,127,93,175,76,189,222,230,23,58,243,37,36,163,119,66,14,246,150,218,208,228,74,21,110,253,32,120,24,11,
219,132,163,105,48,237,89,27,95,0,177,27,151,96,198,182,155,58,205,67,65,186,216,142,232,198,21,174,222,221,20,69,239,13,184,216,253,206,103,76,30,114,190,214,230,131,212,144,58,238,19,10,194,8,6,216,
75,207,215,229,9,180,89,94,221,75,245,157,247,113,45,211,63,13,105,255,49,110,136,231,127,202,84,34,11,209,28,136,89,240,109,231,32,183,160,36,156,152,100,131,41,61,18,59,140,239,221,236,112,55,243,25,
68,155,95,30,48,59,62,14,59,220,237,23,126,225,23,237,215,126,245,223,183,191,248,43,255,174,253,209,255,243,7,246,183,255,251,255,122,193,94,206,234,149,111,154,142,44,62,188,250,247,159,254,71,63,177,
95,250,197,63,157,32,159,175,211,94,175,97,175,215,105,175,115,216,56,135,141,243,180,115,152,217,137,177,207,139,169,134,25,235,147,23,230,108,170,161,149,6,145,182,153,186,193,228,225,12,207,197,37,
244,136,142,8,68,217,18,134,79,234,149,246,24,140,188,43,34,239,56,252,147,60,114,229,31,127,190,110,68,138,251,208,46,34,142,110,236,189,41,233,177,231,235,54,63,182,92,97,172,125,223,81,228,174,168,
227,183,25,246,173,21,197,23,90,249,130,193,4,4,51,177,115,234,120,64,215,91,3,143,10,108,63,74,42,190,182,216,86,84,104,208,235,130,74,114,219,79,226,181,12,151,32,82,162,8,130,41,187,5,83,164,133,111,
87,221,144,111,39,43,187,161,241,37,59,170,105,219,241,90,140,53,114,92,115,217,165,144,250,212,235,186,105,122,161,193,97,89,49,148,52,237,6,172,134,140,42,140,164,250,204,128,166,50,12,58,27,57,206,
21,104,102,141,223,152,171,67,175,92,51,12,70,144,119,52,30,82,235,255,223,69,140,90,147,13,49,50,89,207,111,85,7,117,13,205,44,154,130,174,240,20,244,224,77,160,236,155,45,50,220,87,220,151,224,77,191,
212,35,91,21,57,132,103,150,179,4,254,146,5,135,228,98,39,234,154,229,162,40,73,26,253,221,177,203,133,220,111,69,81,84,199,142,231,83,126,66,180,198,190,238,110,104,166,73,249,51,247,250,96,7,8,52,216,
217,147,43,93,135,76,162,140,153,188,23,207,6,212,121,163,220,119,196,189,88,204,205,153,60,87,254,171,155,31,195,62,14,183,143,111,102,254,113,216,241,225,211,169,253,56,236,87,127,229,215,222,6,86,53,
181,53,35,178,132,247,166,17,58,177,233,192,254,176,156,217,31,206,229,196,14,27,175,137,203,24,145,152,219,157,198,45,109,62,83,46,108,213,124,167,19,178,58,39,206,199,65,89,200,223,219,238,18,98,173,
124,57,221,46,115,187,113,80,222,173,148,200,70,93,89,20,5,228,134,166,110,206,243,237,241,116,135,73,153,24,219,188,239,66,188,115,151,119,134,12,27,161,49,70,109,97,66,72,212,214,10,164,104,22,169,64,
246,125,227,84,110,187,222,240,43,167,93,152,249,138,92,154,95,197,173,175,104,183,51,34,241,166,220,131,175,23,110,41,102,204,116,83,136,231,175,171,95,221,56,250,215,239,110,248,102,30,68,175,16,165,
78,35,30,138,235,29,49,85,232,239,28,137,221,52,190,123,182,233,122,167,39,198,77,13,157,161,26,78,28,14,221,130,181,97,195,97,174,212,105,248,12,78,241,104,88,246,101,99,80,36,111,58,25,176,127,35,122,
5,211,185,116,193,220,57,174,243,27,227,124,1,98,134,158,145,179,141,84,63,215,53,86,200,173,0,188,168,188,55,81,228,247,242,159,3,219,165,231,183,125,120,61,65,159,179,85,213,235,133,251,178,230,174,
219,163,43,136,110,17,188,113,4,243,73,46,208,120,39,54,48,170,187,234,236,157,57,27,214,195,46,106,123,219,222,253,4,194,200,145,196,70,189,167,102,47,8,184,6,160,96,223,152,102,47,211,55,94,104,31,123,
203,5,59,195,24,247,167,221,21,228,42,142,93,199,29,34,128,227,128,190,205,250,251,185,155,193,216,57,41,199,97,230,135,217,248,152,1,142,99,152,153,29,246,241,113,100,221,157,15,138,57,178,57,226,186,
111,57,178,151,191,218,149,223,246,154,78,236,15,255,242,180,215,15,195,94,231,105,175,31,94,118,158,102,227,140,220,90,26,202,54,179,121,71,215,75,197,127,87,39,201,239,114,111,190,252,162,98,72,95,19,
144,226,163,177,249,225,180,10,164,17,219,138,99,131,143,86,17,123,186,195,47,117,102,131,191,223,95,169,189,157,210,250,217,56,29,87,194,118,167,144,223,65,164,66,241,99,139,75,95,215,238,67,131,41,34,
130,155,150,209,234,66,213,81,183,46,247,169,191,210,120,159,21,213,75,207,162,58,155,245,89,65,32,47,127,157,76,98,228,243,74,28,219,5,203,76,119,160,253,12,83,106,188,83,199,33,75,62,92,3,139,68,238,
222,1,90,196,147,238,121,151,197,169,105,238,200,16,156,32,195,64,183,183,70,91,64,69,189,66,182,112,131,211,165,208,238,238,119,64,64,127,106,34,8,31,115,27,228,212,15,43,23,97,202,0,83,104,190,81,173,
134,198,167,158,32,88,33,79,241,192,161,194,30,153,242,11,54,66,144,248,169,171,51,172,71,145,193,229,25,101,34,217,97,145,211,15,23,126,71,135,238,26,254,122,215,245,23,203,60,220,13,184,207,221,65,150,
32,26,219,129,147,65,70,130,87,135,159,249,142,96,130,110,147,188,87,142,20,69,226,172,158,173,241,255,117,88,10,24,88,254,238,156,44,134,105,94,189,115,250,58,71,115,141,113,251,108,223,106,93,151,114,
185,168,15,165,24,146,105,46,54,125,166,109,165,54,39,45,75,54,100,205,243,238,236,202,22,30,208,141,251,153,188,81,88,196,6,33,163,23,48,82,31,102,186,18,114,146,89,16,17,95,184,184,217,113,184,125,124,
28,54,198,97,195,134,125,140,211,220,220,220,78,59,62,142,126,180,64,252,209,157,175,250,109,235,180,66,131,122,62,123,127,253,240,90,14,236,176,31,206,215,140,198,190,134,253,240,195,204,149,157,129,
88,233,147,140,182,153,65,180,22,229,127,53,16,166,192,254,156,231,225,11,70,253,51,234,235,94,84,246,195,222,234,145,155,254,115,156,116,174,129,78,102,22,81,201,98,100,165,227,128,1,214,160,24,133,89,
16,36,107,199,138,120,181,191,196,15,4,81,157,29,232,118,193,196,152,57,56,144,117,132,12,21,24,26,197,141,18,109,66,177,110,7,211,251,110,50,81,181,121,62,24,105,120,112,43,116,96,251,84,54,106,248,23,
110,152,104,116,89,118,222,12,190,46,79,106,94,157,164,46,176,159,84,30,52,65,211,89,73,158,17,150,9,22,40,67,87,55,197,42,53,87,195,196,206,181,164,216,32,202,154,87,221,143,206,194,78,8,71,237,6,241,
219,174,244,222,216,224,247,93,177,141,113,115,3,189,2,15,47,166,132,249,94,164,64,21,187,116,80,6,105,61,87,250,3,92,127,50,87,1,199,190,161,160,159,27,221,17,112,137,30,177,152,251,178,174,142,60,2,
118,120,196,187,98,91,50,107,75,180,230,181,144,73,219,210,203,203,242,9,135,225,83,69,169,254,25,77,124,85,174,97,234,174,1,234,190,110,35,118,124,176,115,61,28,8,187,221,5,241,11,158,90,98,203,254,52,
76,158,153,233,162,132,226,163,178,229,164,58,247,74,237,182,51,89,13,219,147,218,113,63,97,187,86,187,161,188,46,0,209,116,140,27,160,44,131,5,125,6,249,48,36,55,94,115,8,234,247,29,187,72,203,251,202,
244,126,135,39,247,117,65,137,46,167,216,107,200,251,146,255,74,209,90,41,33,94,52,118,234,208,204,64,55,132,141,194,222,111,76,239,6,126,86,75,135,15,59,220,237,245,97,54,198,105,223,134,219,57,204,252,
79,185,189,94,167,29,31,31,149,26,99,182,205,143,221,125,135,118,140,209,83,11,174,62,157,229,182,126,48,225,28,118,190,78,59,127,56,109,252,171,229,196,190,78,59,95,113,216,235,156,246,4,56,225,194,20,
36,145,244,216,23,42,4,100,14,114,80,140,133,182,101,52,71,107,241,145,114,120,18,90,181,114,50,93,18,165,211,45,102,62,196,32,162,10,96,157,9,71,8,32,70,133,13,185,42,128,180,206,46,59,214,62,153,66,
129,223,182,205,70,248,201,111,24,176,104,31,122,152,154,74,5,92,170,30,207,199,60,145,88,144,194,96,233,133,1,76,119,219,120,114,189,87,154,9,153,169,195,28,227,159,9,56,246,3,52,7,69,234,82,99,216,224,
52,183,5,76,77,155,104,127,241,196,171,202,78,227,10,14,148,143,2,125,154,217,213,138,127,103,38,168,32,141,119,69,115,44,104,11,22,183,237,207,46,63,87,14,139,228,111,86,74,236,34,72,139,204,177,35,176,
51,228,5,21,71,222,153,170,78,207,110,35,217,196,139,90,174,94,192,115,153,159,212,103,250,188,43,194,186,220,56,10,77,29,92,64,144,27,178,41,63,59,152,181,131,107,62,96,48,89,190,92,43,64,190,36,26,215,
228,159,84,201,14,240,249,110,234,175,65,189,128,140,159,171,131,80,186,145,233,90,186,1,249,107,55,194,27,255,133,10,215,127,7,223,78,103,21,181,21,98,238,233,110,175,132,223,50,174,104,73,131,71,85,
179,170,126,70,195,160,160,240,14,14,166,159,176,33,56,151,253,44,127,224,220,234,142,145,54,220,9,202,115,233,76,111,19,50,121,72,236,73,214,81,251,233,114,205,122,152,169,86,99,69,92,238,150,47,150,
80,156,77,221,138,181,34,191,99,116,242,183,62,113,199,172,143,172,92,194,251,107,85,191,82,48,194,138,25,213,100,93,86,186,48,106,42,191,189,21,146,141,206,114,55,59,125,238,60,28,195,236,252,24,246,
178,211,220,15,27,175,97,167,187,189,126,48,59,220,236,248,118,47,121,59,127,245,219,103,43,206,207,30,88,253,123,205,191,175,215,176,243,135,248,33,133,97,231,107,29,236,208,156,32,85,112,136,117,242,
98,16,141,141,56,218,233,220,114,89,255,229,140,185,138,112,53,77,137,222,188,169,51,97,204,72,77,195,222,229,7,170,160,168,240,220,149,157,17,143,235,251,79,152,233,89,143,138,232,134,82,89,223,4,14,
184,101,63,170,227,115,1,243,157,70,127,171,237,57,66,230,161,152,204,56,223,69,182,51,194,32,150,106,177,238,64,198,8,110,228,124,207,230,232,152,48,47,165,194,164,103,216,177,240,237,69,217,178,181,
188,239,91,61,243,254,148,103,35,20,220,186,215,168,23,121,52,187,67,60,196,40,77,155,118,64,177,42,42,254,33,176,66,219,225,188,117,61,97,12,252,60,105,218,206,29,101,27,5,119,19,233,119,155,135,170,
156,219,212,116,46,128,193,128,214,124,57,225,163,249,154,77,150,116,178,16,154,230,152,11,145,251,228,252,168,210,121,6,35,241,235,237,224,218,251,93,10,225,255,69,135,32,143,27,108,93,11,27,249,160,
89,4,188,162,243,193,60,66,70,173,14,232,16,204,155,218,156,8,81,26,120,235,102,52,158,78,96,250,163,176,39,58,13,148,200,139,120,241,60,206,131,124,53,238,169,215,232,39,57,210,60,254,19,54,170,228,1,
29,136,194,183,158,119,60,122,174,33,225,71,143,212,174,22,130,72,227,106,191,222,165,124,130,61,112,224,55,113,34,113,94,219,86,47,225,180,129,153,136,62,178,69,192,136,246,199,202,84,229,251,234,137,
175,187,19,229,118,198,46,204,26,242,114,91,218,249,107,60,20,248,106,101,195,103,183,38,189,108,191,135,14,139,55,142,169,154,115,251,28,17,41,240,69,231,165,26,92,62,13,58,248,23,176,180,157,149,64,
213,204,204,107,121,52,134,87,10,64,250,69,200,189,72,245,19,53,3,89,167,59,211,146,0,32,238,199,176,99,209,231,88,189,158,62,204,125,204,156,217,115,108,167,229,51,129,214,111,87,47,122,35,183,113,90,
69,94,199,200,188,216,241,26,246,58,109,125,134,203,86,24,120,34,209,13,155,232,61,124,110,74,196,158,191,197,181,201,18,91,103,192,145,76,227,163,220,92,45,59,245,34,193,221,98,180,112,58,146,17,186,
131,84,219,57,231,204,225,162,142,153,93,18,122,69,197,132,65,118,249,78,82,147,117,27,43,209,80,96,35,151,141,33,65,236,192,140,136,146,131,193,76,208,99,134,128,96,221,248,177,161,224,186,192,165,67,
242,88,53,202,104,86,74,56,13,102,9,105,175,92,128,244,8,127,221,13,67,147,61,232,239,54,91,240,202,246,196,132,33,10,72,51,212,186,186,168,51,86,74,83,39,163,1,169,202,158,159,164,137,247,99,3,191,186,
141,239,148,12,150,205,100,134,99,0,198,211,135,151,252,140,171,81,160,126,110,1,201,224,114,223,166,82,157,13,106,112,173,171,202,25,16,158,1,10,136,13,52,152,130,214,247,117,250,227,226,32,60,121,93,
23,155,221,16,131,79,81,45,40,98,220,38,239,130,247,70,111,12,124,157,186,213,165,37,115,242,25,198,200,113,87,168,112,47,206,226,105,15,215,131,83,126,6,181,165,80,247,121,194,132,10,76,3,113,80,71,39,
140,171,194,4,112,132,76,8,127,236,102,183,243,252,158,251,199,114,162,54,62,97,234,137,97,64,119,135,241,100,122,204,81,44,54,19,44,109,43,71,214,37,15,118,3,110,51,76,42,31,120,165,239,245,93,128,182,
0,18,89,110,249,236,216,214,113,44,169,200,198,10,238,149,201,197,193,161,188,105,250,211,230,177,31,89,106,92,66,122,82,159,143,212,113,110,148,171,154,207,90,119,12,119,140,169,66,210,244,123,220,14,
138,62,207,102,251,12,221,29,135,182,57,51,92,18,241,188,247,246,87,58,211,229,47,247,215,119,40,118,186,165,122,38,50,208,104,44,229,199,97,102,231,244,193,14,59,109,248,97,227,112,59,79,55,63,205,142,
115,146,113,250,141,78,105,4,102,118,233,192,198,187,111,250,224,170,226,153,206,233,252,23,7,187,206,215,92,185,142,149,118,48,189,106,136,182,9,55,214,226,121,133,226,37,106,154,219,142,235,191,83,241,
46,34,83,148,194,233,116,219,68,26,35,186,78,70,227,148,233,86,219,218,76,179,144,98,232,197,0,182,84,161,207,123,167,126,38,186,229,86,5,126,88,129,93,18,220,0,26,27,121,25,80,83,85,90,140,163,115,218,
213,60,62,83,70,230,214,46,181,119,202,37,28,176,214,24,77,66,131,248,206,213,26,250,122,119,46,12,172,4,57,79,67,148,51,68,33,154,209,150,200,238,122,84,248,208,160,96,117,215,173,154,151,118,208,192,
189,198,17,69,211,233,12,60,31,81,51,103,250,199,167,170,82,6,150,161,15,251,164,36,67,176,107,231,16,218,210,29,207,141,42,213,146,154,182,137,111,37,135,218,166,151,187,12,159,72,182,165,30,192,169,
162,212,161,4,30,105,0,186,65,248,160,251,14,76,103,154,185,1,82,228,129,29,204,127,206,139,110,0,114,236,226,218,5,1,28,136,87,215,131,65,15,234,90,157,219,184,202,195,67,112,15,70,28,229,67,103,167,
31,147,132,222,47,35,116,138,101,215,73,142,13,249,225,94,79,64,99,212,78,244,126,225,198,90,206,121,81,72,198,223,56,207,206,80,14,46,230,227,162,232,249,1,220,39,44,240,149,130,32,99,105,203,84,83,232,
216,113,240,120,81,247,28,140,59,58,82,59,160,137,113,199,166,2,243,84,99,63,219,209,165,235,238,77,92,127,189,26,101,178,163,6,230,159,40,195,13,6,121,119,191,199,51,100,98,87,89,113,8,92,213,146,34,
70,210,125,224,231,94,249,6,56,78,12,7,171,161,92,44,196,188,103,213,224,11,17,194,141,94,138,97,34,141,195,241,249,69,59,177,18,212,87,232,1,157,231,78,169,170,161,182,137,235,110,14,97,162,92,175,185,
62,95,19,135,249,43,93,211,110,157,167,153,31,102,31,33,6,103,192,8,32,139,67,139,207,177,124,187,122,161,247,30,209,215,49,108,188,108,69,94,103,148,230,28,163,152,112,248,140,204,50,174,28,30,222,105,
41,172,47,10,32,73,59,134,32,105,150,211,22,19,14,29,233,102,40,70,67,49,50,161,159,33,217,137,123,147,182,48,216,84,113,8,83,9,195,66,199,137,27,120,74,200,80,188,158,97,227,179,97,81,129,79,20,135,21,
178,51,87,173,247,114,226,65,36,95,108,25,244,197,113,65,143,146,19,155,50,185,24,87,38,79,183,47,230,59,80,156,206,115,55,153,134,21,0,13,213,89,140,111,72,207,4,112,172,41,139,125,188,130,144,45,225,
47,248,107,24,47,186,60,88,160,134,65,24,189,238,43,104,143,137,51,168,76,129,105,26,114,128,208,24,74,40,150,1,164,1,160,93,221,214,2,115,44,69,131,145,198,177,0,15,19,173,253,197,5,229,171,141,144,179,
130,159,80,184,244,6,114,224,141,145,169,190,211,62,68,43,64,106,208,92,162,86,143,254,125,69,180,7,240,125,201,123,193,188,176,45,144,224,62,172,79,9,193,0,101,81,11,76,47,231,68,229,94,177,131,174,53,
48,149,223,201,77,60,186,180,239,105,33,110,200,0,230,140,1,170,34,243,8,200,52,210,186,218,213,100,186,129,108,231,168,75,230,209,53,112,238,103,139,138,124,73,13,117,223,238,67,236,172,59,240,141,70,
127,197,82,91,233,52,229,181,22,33,131,126,65,180,86,191,232,39,169,158,141,187,102,214,1,43,212,39,220,185,146,134,242,29,97,5,198,116,28,139,95,170,31,62,224,164,219,233,130,15,190,79,93,11,99,81,186,
83,233,147,250,66,72,188,30,100,191,70,33,104,53,67,88,93,228,98,111,208,118,68,73,186,68,84,91,115,106,216,109,113,190,102,181,69,60,130,1,52,212,73,168,2,204,224,40,148,230,230,118,79,18,182,63,106,
206,67,183,118,188,196,134,32,193,77,241,66,192,10,134,60,139,179,236,106,125,121,73,242,216,13,118,167,55,178,130,70,121,164,29,84,228,234,62,63,6,16,65,162,17,154,98,216,24,241,73,173,197,199,105,103,
103,13,31,19,222,143,18,254,203,141,231,187,40,237,54,71,118,219,73,78,70,33,22,198,217,134,175,127,102,227,60,13,25,144,85,186,104,183,117,219,79,37,195,251,173,98,65,202,243,44,12,113,8,74,209,13,232,
123,24,41,191,197,112,96,166,5,126,190,194,49,113,139,169,14,93,32,252,28,221,74,202,169,240,152,89,215,221,44,28,109,199,42,199,161,24,145,113,238,224,122,118,46,74,236,20,240,192,207,58,141,153,120,
10,82,207,57,62,91,253,146,204,59,76,39,172,128,34,221,141,14,85,222,135,50,157,247,160,158,219,66,195,112,154,1,161,162,63,244,235,139,58,39,70,3,226,117,169,22,50,128,208,103,142,164,243,115,165,128,
87,219,161,215,61,247,160,248,1,186,221,176,53,212,71,227,179,254,32,45,206,218,213,112,136,118,224,214,238,124,187,140,56,245,63,0,110,98,108,33,203,100,94,82,105,164,83,225,123,130,97,252,27,62,155,
91,103,89,201,47,3,136,45,78,217,30,6,135,76,140,7,138,28,192,116,12,97,152,60,228,95,76,131,38,159,121,74,156,96,99,13,65,174,246,0,101,14,200,237,210,116,112,138,233,1,230,185,193,88,20,97,13,57,196,
249,193,40,191,108,215,82,83,131,57,129,231,151,172,44,19,64,134,109,215,22,116,134,158,94,87,182,110,135,223,0,40,174,59,200,184,225,183,107,245,140,117,118,56,248,217,46,232,17,247,251,185,29,52,110,
189,43,59,195,216,185,248,54,108,240,117,143,3,139,128,106,170,92,136,35,196,254,82,205,96,65,237,206,192,18,222,242,177,209,2,162,237,92,225,60,145,45,181,210,239,42,69,194,35,153,202,142,207,217,204,
237,216,161,189,28,62,226,128,196,122,229,70,206,228,166,136,233,97,253,57,202,35,64,85,50,176,130,193,220,230,92,243,152,85,223,50,205,168,112,103,169,199,92,213,152,59,182,153,0,136,104,12,12,70,13,
161,117,202,41,230,234,38,108,241,100,57,152,171,223,208,135,116,238,216,225,29,244,131,138,39,36,181,172,153,167,248,225,55,247,125,184,217,225,107,183,126,201,206,105,54,14,148,243,216,129,190,159,199,
93,249,180,35,27,208,133,193,159,70,208,205,237,48,31,175,153,94,48,204,204,143,85,183,24,44,60,241,236,9,20,24,9,221,224,121,180,81,228,238,21,28,66,247,65,52,85,21,71,206,30,135,167,197,41,89,64,57,
188,38,35,164,214,52,239,124,41,14,100,176,1,150,43,93,219,236,152,162,161,152,167,3,41,7,243,222,54,165,43,27,179,48,76,69,73,234,9,233,67,247,133,14,57,70,238,68,158,217,43,24,0,7,74,64,95,97,44,135,
31,249,18,13,104,208,41,156,236,164,31,97,22,184,31,1,12,224,43,230,10,72,112,96,91,233,183,112,8,27,112,72,68,205,22,207,70,171,232,45,132,146,68,180,86,185,167,51,208,214,110,237,200,153,40,1,87,133,
212,90,141,97,54,14,227,197,15,43,206,246,209,2,184,119,227,247,36,119,162,56,49,159,51,213,209,214,211,96,184,167,244,123,25,47,247,245,81,235,130,49,100,60,102,210,4,198,234,19,102,111,12,115,59,4,115,
148,85,92,241,79,13,120,133,43,57,14,41,191,3,222,35,188,6,186,100,44,30,135,26,200,107,238,43,207,28,148,183,31,216,212,240,215,199,204,140,34,143,52,219,227,254,30,121,153,245,129,115,95,99,210,81,101,
3,229,143,90,131,170,4,22,216,214,103,54,8,61,177,151,17,119,203,28,124,119,148,202,217,214,17,15,53,218,48,54,235,252,14,212,209,12,180,234,238,234,124,24,242,188,167,163,23,247,24,49,67,61,163,60,224,
162,252,124,132,222,235,124,146,250,102,131,234,165,137,6,30,103,185,8,152,72,48,215,92,57,207,79,163,169,35,58,84,142,65,126,206,188,159,87,171,190,236,9,122,199,179,122,126,131,33,190,22,155,30,185,
230,213,53,206,165,0,153,109,199,154,75,55,254,41,98,157,119,182,167,52,133,195,75,151,39,191,0,31,172,71,41,19,180,99,233,66,131,42,200,245,77,211,175,133,238,124,57,104,14,3,198,146,177,124,176,198,
210,158,13,236,150,153,129,223,177,59,87,132,179,196,111,15,243,193,139,65,94,212,184,244,199,58,155,249,95,109,25,112,237,49,107,71,203,169,31,150,255,184,160,155,127,143,13,244,239,203,231,29,89,119,
250,231,57,240,186,247,218,38,197,248,96,174,84,147,129,66,53,207,183,60,70,232,21,16,218,154,31,142,174,164,128,86,221,17,100,242,48,40,49,96,228,203,150,231,53,168,15,131,240,248,130,15,5,23,5,162,193,
140,142,67,180,67,165,83,78,73,24,75,204,42,113,80,28,33,124,70,221,141,194,61,187,101,67,230,166,78,138,91,235,40,225,13,85,16,6,7,8,145,117,101,133,85,168,42,234,242,128,106,79,129,87,167,49,153,150,
199,25,126,176,145,51,204,187,74,245,85,175,27,11,109,20,125,92,199,100,187,153,193,233,213,57,29,152,222,128,26,119,10,84,40,59,60,109,73,64,4,253,80,231,152,170,118,82,103,133,27,40,85,34,227,81,188,
110,193,19,144,239,169,219,68,169,215,156,103,140,214,84,22,170,34,224,71,111,7,225,45,218,148,98,211,99,112,32,247,233,189,177,188,80,109,156,154,37,228,201,11,168,236,84,137,81,142,172,247,113,176,239,
86,96,123,90,120,36,190,186,208,224,21,217,173,102,58,38,242,245,226,231,32,201,72,17,75,3,152,60,100,240,124,13,140,219,127,244,206,13,156,246,29,28,8,195,161,12,39,148,232,124,137,93,33,184,154,74,112,
128,46,156,91,123,6,115,176,234,30,9,176,249,33,120,40,131,129,222,222,238,14,197,3,0,144,116,183,149,220,210,123,196,23,120,23,117,78,8,11,179,3,204,185,203,115,53,18,196,31,171,47,172,139,34,48,184,
38,170,39,34,97,58,70,131,43,103,30,175,198,114,67,127,0,74,187,113,226,250,194,225,42,39,60,108,19,81,34,3,18,9,5,58,83,196,155,68,180,44,67,110,72,7,168,83,12,19,226,114,111,129,173,99,159,165,201,106,
193,28,78,253,106,51,106,40,133,48,104,135,218,102,160,123,125,192,124,228,188,67,217,10,84,71,60,199,5,228,81,150,67,63,87,160,72,117,18,206,51,17,48,132,160,224,119,23,61,187,135,183,104,193,114,89,
59,63,163,22,138,107,12,226,190,182,58,168,126,118,100,32,41,117,198,183,196,169,124,73,151,86,159,45,159,118,100,143,100,30,207,185,77,229,237,199,2,35,62,241,80,241,226,136,222,52,98,132,0,137,26,226,
221,93,150,84,118,186,86,203,12,5,85,252,43,218,30,199,72,8,166,79,89,74,246,240,114,82,86,109,29,136,241,87,71,133,248,160,200,207,41,59,158,19,53,255,91,202,180,198,68,248,73,211,87,27,68,27,175,73,
25,150,192,96,206,111,140,143,185,119,211,125,246,222,31,218,230,5,223,48,237,75,10,9,77,9,19,111,57,88,70,129,138,6,140,208,180,133,104,216,202,233,114,11,103,170,211,35,15,93,148,6,22,7,210,65,9,174,
200,60,236,1,86,196,111,125,26,196,244,61,68,152,201,184,46,103,83,244,74,200,166,216,53,156,246,5,18,184,15,206,48,171,253,156,54,196,177,58,207,25,178,46,142,153,141,125,54,31,131,230,22,181,212,112,
183,99,132,193,152,145,14,228,245,138,166,23,15,133,60,78,133,92,24,104,10,29,32,221,160,84,67,19,18,91,21,234,151,94,176,223,166,179,107,202,178,99,92,152,52,124,48,106,231,234,244,34,15,8,219,15,153,
128,48,4,131,155,17,76,32,255,117,232,42,96,137,232,218,226,189,124,183,164,180,216,239,210,80,229,86,187,6,241,144,223,54,6,54,137,177,218,52,177,52,167,7,135,231,204,175,113,81,194,69,247,201,252,83,
212,23,251,39,149,8,149,22,191,86,35,134,165,102,243,176,249,137,35,158,175,93,196,121,213,46,152,172,224,31,248,144,166,120,189,207,105,67,70,99,193,115,35,114,210,187,140,120,10,205,226,171,36,109,177,
164,218,3,22,78,188,3,182,83,203,1,51,88,215,237,22,31,192,33,29,53,54,14,221,184,202,65,122,21,26,12,166,67,69,199,139,103,200,37,61,152,254,228,212,231,112,135,240,73,189,59,138,44,93,199,54,135,46,
102,80,124,146,49,63,212,143,62,73,40,79,90,168,32,76,72,32,221,124,176,77,157,137,172,97,20,130,55,45,230,50,30,127,236,102,171,123,12,252,25,21,23,28,182,141,141,118,213,140,56,244,8,37,179,222,130,
179,147,250,201,96,42,15,120,176,227,153,144,133,97,134,63,149,157,50,229,110,71,6,67,227,209,162,185,151,221,255,74,249,122,68,214,22,178,30,204,181,142,122,184,155,251,97,135,141,149,191,178,200,182,
182,221,92,186,202,39,155,9,145,129,141,24,12,12,211,44,21,97,100,39,167,122,107,19,187,56,254,192,72,223,59,218,69,215,168,83,214,243,98,246,136,96,196,123,136,88,65,71,28,200,71,58,148,192,36,89,80,
15,41,140,34,92,65,19,119,116,88,120,251,169,69,47,96,104,243,233,156,133,207,4,182,162,96,128,241,120,98,185,81,58,74,169,217,87,4,6,20,3,41,125,152,4,223,104,44,223,91,194,53,10,108,49,133,16,37,207,
88,69,71,212,11,130,8,67,72,95,253,26,145,168,7,221,42,85,37,147,45,138,14,117,58,122,90,177,114,74,48,26,117,16,45,186,158,228,5,193,206,112,221,173,51,116,103,129,12,27,116,230,11,199,164,93,51,172,
38,209,182,106,27,209,234,234,167,53,47,88,151,114,36,232,201,193,223,81,21,97,172,102,219,57,104,106,197,113,122,165,162,234,139,186,173,160,4,10,187,101,158,215,118,62,226,26,229,16,219,122,41,110,124,
156,109,7,44,4,7,111,141,30,14,187,92,30,218,174,104,174,162,88,11,141,181,164,4,94,36,26,103,227,224,115,210,74,228,188,164,161,219,139,34,227,166,180,176,129,100,128,129,19,249,141,179,112,177,66,107,
15,100,39,203,124,217,230,1,105,87,241,102,224,84,82,142,188,217,145,70,156,62,180,191,96,161,33,90,62,230,194,135,200,200,124,142,11,145,130,151,121,66,211,31,218,60,120,167,49,71,235,0,34,167,4,196,
80,187,213,47,13,228,228,100,241,244,48,79,152,25,59,90,131,171,34,47,14,210,165,70,161,155,194,63,195,17,75,222,106,222,73,237,163,17,92,66,154,59,26,200,252,89,23,202,81,174,107,134,68,144,17,192,67,
203,45,245,220,137,0,61,176,136,136,246,213,182,188,189,100,77,117,93,75,185,1,35,171,211,129,84,242,226,129,38,62,102,203,225,92,248,229,36,20,47,99,196,157,15,45,66,103,50,87,42,115,141,165,93,128,192,
122,11,142,3,96,242,156,235,69,127,95,225,209,72,51,240,250,247,213,242,133,28,217,8,13,123,26,1,15,92,252,48,243,211,102,128,106,172,195,83,168,60,0,97,9,43,188,3,122,42,206,82,54,185,242,230,52,74,99,
255,190,86,116,154,239,17,101,128,224,110,115,94,132,255,24,162,142,75,76,50,109,121,185,153,13,20,221,128,176,226,149,3,250,90,178,57,209,115,163,228,239,198,216,8,227,194,101,164,95,230,9,119,57,177,
241,12,77,224,28,67,3,57,182,96,68,184,104,156,168,232,214,156,219,218,162,25,235,191,172,128,119,2,223,4,164,42,48,96,123,125,77,62,73,230,126,45,66,70,20,41,7,34,135,25,83,96,102,199,195,151,99,105,
131,114,176,26,124,53,68,218,215,198,230,0,0,32,0,73,68,65,84,18,0,184,139,238,102,62,167,70,71,2,6,103,27,98,67,162,70,32,103,64,139,52,32,48,127,129,223,128,251,168,87,132,2,224,91,244,195,139,62,8,
175,26,237,141,67,198,219,103,188,7,211,242,222,22,96,190,16,24,162,3,48,102,80,57,116,190,143,124,144,156,150,37,56,32,250,28,239,202,73,100,71,125,46,190,121,92,204,2,195,63,33,79,14,111,53,117,170,
4,106,45,179,114,149,50,172,78,55,12,177,181,78,1,155,195,197,57,53,116,214,22,253,81,246,200,168,25,204,163,195,82,127,242,34,237,252,240,32,73,17,193,126,115,179,25,184,85,101,5,113,144,42,132,93,162,
96,67,231,123,138,196,67,223,188,235,37,176,137,71,223,116,203,112,18,131,74,137,99,200,135,243,253,14,117,114,141,220,104,49,39,153,54,70,10,76,29,178,4,124,222,31,144,99,30,37,89,10,231,57,225,128,39,
98,36,74,23,204,241,143,130,152,144,42,59,91,165,165,189,16,242,67,232,92,247,135,192,72,250,97,140,21,220,2,39,43,245,129,205,249,49,105,159,164,42,249,12,148,122,228,90,96,164,158,140,198,97,230,33,
166,192,63,109,108,148,255,169,55,150,198,150,3,204,71,2,95,182,180,92,246,205,184,132,156,190,169,224,135,162,84,183,149,30,17,11,8,55,51,59,80,215,212,78,90,14,232,26,92,19,120,92,238,179,43,47,130,
152,53,161,157,78,42,240,249,114,82,15,7,185,140,40,172,79,30,255,49,209,88,179,47,69,100,205,28,254,119,152,217,203,214,36,210,41,202,195,198,49,236,192,159,72,49,67,110,4,37,43,99,236,136,166,10,165,
235,156,186,77,221,28,12,2,153,186,142,119,43,86,10,2,210,252,149,173,98,92,47,40,66,233,50,121,59,248,40,11,205,34,21,131,163,5,147,9,92,154,98,132,137,122,25,165,28,198,90,233,197,157,91,40,38,68,33,
230,67,96,81,1,151,249,81,158,103,199,214,72,95,12,175,131,24,186,237,24,179,81,162,187,8,155,130,139,223,93,8,101,35,196,128,151,27,21,5,120,136,146,110,60,83,84,230,232,115,8,254,130,85,236,77,113,249,
132,183,14,72,172,185,200,147,187,154,176,62,243,183,135,199,220,104,92,130,157,20,0,168,9,54,69,110,149,103,141,233,94,115,94,13,43,77,28,61,226,133,111,24,167,116,114,5,36,134,36,39,62,22,170,57,170,
230,203,130,209,56,128,139,99,11,239,246,128,132,204,165,250,228,4,34,53,196,3,115,78,167,91,122,68,240,224,197,28,79,1,251,251,170,182,216,39,102,150,118,91,7,23,241,125,140,235,210,144,241,18,247,127,
83,48,170,239,155,84,41,196,163,164,174,64,88,247,135,208,144,82,115,244,194,250,4,109,22,57,187,138,201,33,192,51,20,61,23,125,129,211,174,100,194,95,5,244,68,116,36,56,116,24,210,5,10,82,44,27,4,69,
166,24,117,228,153,89,248,224,18,105,54,234,146,157,66,166,241,8,25,137,113,14,51,245,89,106,12,158,29,140,48,135,76,6,127,55,211,5,246,70,23,15,224,135,66,247,94,151,216,13,216,30,174,91,186,177,219,
196,120,231,57,215,91,245,2,243,69,186,117,61,201,81,60,36,132,245,40,125,96,109,200,130,140,24,110,24,68,126,90,33,46,6,254,210,170,19,158,9,116,248,172,7,69,114,209,73,92,50,173,11,6,116,149,96,224,
158,46,33,2,3,13,221,36,189,38,157,4,91,16,46,152,84,150,70,241,73,155,231,232,11,128,194,47,134,152,153,164,25,128,240,72,228,109,62,242,124,23,94,100,70,103,151,27,107,81,239,139,229,211,142,108,50,
227,242,168,95,241,117,2,63,205,109,229,152,68,244,107,173,186,176,92,229,79,225,135,86,234,144,75,41,41,140,214,204,8,78,192,97,70,148,210,109,82,17,210,249,28,43,192,73,235,100,132,85,203,153,119,72,
112,49,79,101,13,148,211,236,154,167,107,41,112,9,1,48,170,75,132,66,245,43,49,23,242,72,216,228,245,236,8,227,19,76,139,171,192,192,186,49,199,158,89,148,108,108,92,154,118,21,216,202,138,132,179,134,
66,64,145,249,200,163,6,4,91,30,223,206,154,44,192,112,209,194,52,7,1,87,171,180,139,174,150,172,119,231,88,198,101,135,171,20,242,188,199,133,8,195,20,57,201,181,53,92,124,174,166,34,165,65,149,150,25,
40,46,108,65,194,100,238,192,143,248,213,142,128,11,233,54,74,190,136,212,161,136,129,92,205,40,114,175,134,70,36,126,156,68,193,227,178,148,25,131,79,60,144,226,1,117,234,32,194,160,151,225,152,163,81,
224,232,7,122,7,209,115,15,241,250,197,77,102,85,120,41,255,24,151,77,220,32,156,200,96,187,167,142,41,24,25,157,190,160,129,210,44,63,239,126,116,216,121,28,135,186,172,87,225,191,178,198,34,77,226,162,
199,195,107,76,246,4,231,122,104,92,62,162,118,139,55,154,172,131,166,24,107,134,92,234,24,224,145,135,86,11,39,65,27,224,119,184,230,121,119,66,144,113,167,146,234,94,129,234,146,232,22,162,186,145,7,
235,106,148,186,25,43,162,41,211,191,143,152,205,126,217,37,220,106,134,5,7,200,116,10,27,240,72,16,35,236,96,25,206,201,93,41,91,195,128,32,75,110,157,7,130,107,68,103,192,127,119,11,53,148,137,176,32,
108,51,186,99,60,187,196,32,193,130,203,149,102,35,152,39,83,119,106,96,184,70,25,37,104,16,17,156,91,220,237,40,252,90,58,138,88,7,244,115,106,164,122,214,85,65,216,249,56,31,196,54,162,173,45,12,252,
2,47,244,209,9,142,236,19,162,106,232,162,236,103,65,182,82,71,133,162,6,72,92,234,207,224,161,224,216,121,246,193,243,223,196,165,106,124,181,124,193,145,117,164,199,124,226,69,176,21,126,168,79,76,136,
21,132,131,173,173,95,186,71,5,60,44,41,58,159,28,27,28,107,28,234,123,229,72,241,24,192,252,35,60,201,154,72,100,132,228,17,112,154,0,64,0,163,14,163,228,129,15,218,50,27,188,104,193,149,183,98,1,56,
52,37,36,55,253,30,4,126,237,75,6,211,230,23,25,160,47,114,58,70,77,23,41,209,160,61,90,50,99,63,17,83,8,57,122,166,12,25,200,1,95,200,80,219,103,74,0,81,242,37,24,235,245,128,237,140,104,66,115,6,29,
48,67,239,197,135,198,5,5,128,43,98,11,5,58,160,190,39,189,212,93,42,251,49,251,32,158,191,192,59,21,16,226,21,184,83,199,24,133,0,47,93,48,140,199,220,37,188,39,167,196,216,224,27,211,42,148,57,106,136,
150,98,243,9,229,180,171,70,11,63,51,112,192,92,182,204,166,28,162,45,38,61,47,106,249,54,218,169,139,7,225,183,146,55,179,218,170,22,131,7,13,84,125,136,84,212,5,202,26,190,4,159,189,192,194,69,49,159,
216,110,223,201,179,193,41,50,106,196,121,168,80,229,209,53,29,116,165,141,120,159,59,13,136,3,69,252,124,216,1,81,49,90,214,122,209,50,65,6,26,205,158,196,195,100,148,204,44,230,248,48,254,33,147,122,
63,111,247,91,185,244,225,9,99,120,18,94,253,164,35,17,174,187,104,37,243,37,139,205,47,245,205,125,194,226,173,5,31,5,85,228,134,69,100,49,115,50,119,142,185,232,214,9,42,210,3,104,148,243,24,242,130,
14,87,64,196,18,228,100,228,96,220,28,107,253,69,69,111,182,249,170,20,110,161,79,250,87,52,177,240,15,231,153,233,134,248,110,221,100,130,71,223,163,153,43,207,129,245,89,106,16,7,199,22,211,33,188,144,
13,216,48,245,11,214,55,5,35,232,43,240,22,166,4,128,109,42,231,114,79,99,196,164,59,241,114,35,94,60,233,176,160,77,194,57,97,154,155,90,76,181,114,179,156,118,67,34,150,166,252,54,117,116,98,97,158,
255,139,247,199,207,54,34,59,157,200,181,34,242,97,110,47,139,21,136,251,105,101,200,199,220,78,83,109,189,17,164,62,17,19,251,20,173,195,42,186,24,90,70,157,40,210,192,48,2,24,35,20,208,26,170,110,154,
162,217,87,3,24,21,98,84,98,163,182,22,44,114,52,161,37,130,177,49,38,20,145,25,3,120,30,113,223,173,130,163,141,109,148,8,124,2,140,4,178,0,66,61,164,184,183,8,45,110,147,209,53,12,154,150,119,221,130,
236,27,48,123,9,167,180,37,69,52,74,89,56,208,27,0,70,67,221,113,21,167,157,177,239,89,47,10,15,62,128,72,144,165,80,90,57,15,81,185,159,106,168,185,197,175,37,132,70,21,190,70,243,226,171,77,146,102,
85,76,46,75,122,30,226,8,221,98,116,95,64,150,124,125,142,6,125,200,58,240,180,201,15,52,250,38,195,194,105,213,70,54,17,250,240,54,240,26,131,53,191,241,225,43,252,58,10,203,97,241,84,199,91,216,176,
207,123,230,170,206,69,209,240,65,6,147,156,155,67,250,87,153,188,112,76,119,3,31,134,6,25,119,122,44,249,37,117,222,141,30,153,248,35,67,149,62,42,163,181,135,113,106,138,1,99,84,133,92,144,164,117,61,
96,87,107,142,80,243,188,156,88,208,29,109,65,151,250,124,115,40,166,33,38,215,146,32,204,59,128,96,47,164,45,59,233,162,31,76,156,90,220,229,11,113,149,93,29,114,120,134,89,46,124,28,23,148,55,104,9,
62,180,80,8,232,188,224,9,249,42,204,45,231,215,93,218,18,13,194,209,85,24,72,168,1,30,196,238,32,30,225,249,114,77,151,229,170,196,139,69,71,210,95,109,76,144,80,63,160,70,92,29,169,19,157,141,19,227,
174,178,7,78,33,163,203,154,162,137,211,102,78,162,179,180,137,251,134,155,158,240,185,56,142,52,206,124,24,231,208,166,169,24,220,44,190,248,128,120,153,173,67,86,6,186,72,229,65,29,167,120,7,131,153,
53,186,168,126,78,156,80,7,175,136,229,252,3,182,233,152,253,101,20,54,34,155,112,221,2,142,95,40,95,202,145,5,235,96,185,69,100,117,31,58,157,126,62,121,40,88,96,114,148,48,224,124,70,77,29,135,248,22,
133,198,149,73,120,2,58,4,189,30,230,226,136,126,22,64,89,232,219,143,45,228,213,172,131,27,14,29,95,238,151,14,201,128,3,90,142,98,89,50,23,101,158,135,78,6,196,32,132,8,185,189,167,68,33,26,132,225,
94,167,66,215,48,71,194,80,132,71,69,194,66,29,112,150,19,41,242,193,227,34,89,154,192,56,34,98,148,85,233,76,196,84,8,78,163,215,132,31,252,241,126,176,33,121,93,135,15,218,4,129,238,17,37,11,67,92,42,
54,197,118,119,202,206,106,14,184,5,10,57,187,232,14,10,135,14,30,89,56,152,203,217,20,43,211,163,177,3,44,249,96,16,200,73,30,208,56,248,172,176,223,158,201,218,41,245,197,207,101,158,90,21,118,146,119,
114,6,202,189,14,50,129,67,24,53,197,105,86,221,227,67,12,43,40,19,140,68,28,245,24,122,159,19,152,124,179,179,23,88,189,189,71,222,6,92,29,165,221,170,145,135,166,72,143,172,249,211,45,141,102,163,23,
235,1,2,132,188,38,240,197,46,132,171,252,173,86,64,115,92,204,231,16,144,244,151,105,148,107,126,147,119,205,192,25,238,116,49,51,62,24,214,12,201,206,101,22,10,39,105,194,25,225,40,152,67,35,228,10,
156,251,204,135,132,222,195,136,139,191,81,11,0,130,81,161,130,232,237,48,226,95,60,119,96,27,236,130,51,211,181,34,93,130,245,48,58,174,33,141,53,175,196,155,194,41,104,75,80,111,138,159,43,44,109,200,
27,185,67,233,180,124,0,125,117,128,46,153,43,74,79,68,80,47,178,84,116,7,189,216,52,211,121,196,94,86,186,144,87,186,158,25,165,248,134,74,228,166,235,80,112,212,221,41,60,2,134,199,101,248,47,188,109,
145,193,89,155,249,160,116,197,144,94,150,31,145,19,49,251,77,233,198,121,29,2,195,53,50,213,29,11,53,55,167,22,120,126,170,224,112,155,167,18,230,148,70,68,246,176,21,174,189,28,255,174,124,62,181,192,
167,153,136,127,110,51,87,118,248,49,127,41,14,216,18,89,12,125,38,138,106,68,157,96,50,172,128,154,132,156,202,34,92,48,247,229,169,114,224,161,150,214,48,234,84,48,55,17,165,85,200,91,171,13,225,202,
246,19,174,160,144,57,167,12,218,129,240,6,188,36,210,99,245,134,17,154,37,204,35,255,123,80,7,116,122,157,187,46,5,28,88,222,242,75,41,93,55,151,112,237,0,6,180,36,139,110,21,2,7,36,238,46,115,208,20,
233,42,153,249,231,1,113,239,175,241,4,107,224,172,209,156,74,137,252,196,2,161,126,160,160,184,128,35,183,252,25,51,197,114,64,138,73,224,75,149,118,32,98,5,2,171,52,105,157,81,10,42,212,188,123,230,
162,135,9,155,80,18,189,142,249,159,25,53,25,226,223,136,226,92,243,170,186,52,233,128,223,108,110,248,160,114,172,119,165,11,10,126,85,186,68,7,37,141,205,79,79,21,126,42,239,251,251,22,140,110,168,118,
72,18,34,55,72,193,141,81,203,136,80,14,186,23,197,15,91,70,179,94,21,61,118,136,145,192,40,83,84,159,49,110,199,15,174,221,76,183,231,107,49,139,86,154,121,115,226,131,206,63,202,181,34,34,215,168,187,
181,44,116,56,50,143,253,96,151,200,219,102,17,197,131,152,63,181,241,192,169,16,133,34,122,34,210,221,204,114,46,181,126,69,186,42,143,186,54,149,161,55,225,107,220,53,34,109,236,209,3,243,23,234,44,
206,172,46,41,9,25,244,13,207,120,161,177,112,51,195,93,185,221,175,55,162,22,196,159,105,175,47,169,68,19,128,193,130,190,251,249,18,18,183,215,244,164,62,35,3,48,10,214,224,16,241,225,40,179,113,56,
227,107,140,35,15,87,115,59,135,212,128,217,33,77,96,28,84,193,130,107,168,197,24,150,190,39,46,141,250,140,247,47,2,148,67,25,128,70,131,97,99,28,84,215,248,117,13,42,242,137,11,176,248,9,241,106,143,
110,36,98,94,182,5,119,49,83,159,224,152,6,29,232,201,88,154,252,34,148,27,203,174,59,64,226,102,135,31,107,193,59,61,202,35,124,204,31,225,204,126,41,71,214,224,95,49,164,103,244,96,183,61,50,204,232,
163,197,102,120,166,123,16,3,233,113,32,218,174,30,192,118,72,72,72,224,34,134,137,142,54,10,51,224,204,110,196,201,58,236,184,52,10,59,171,164,132,71,38,217,57,196,249,93,1,61,221,52,64,249,149,148,83,
223,22,204,32,91,152,251,40,128,1,67,65,183,32,64,156,22,97,182,119,52,10,166,1,41,248,160,33,54,138,76,138,3,74,57,60,113,9,169,122,246,58,192,221,145,181,206,160,59,16,209,140,0,24,195,72,60,17,147,
94,171,212,130,47,93,215,234,251,198,1,205,237,53,239,28,194,202,212,178,98,170,14,88,85,205,212,218,26,36,29,108,201,113,52,179,182,26,59,28,190,24,144,227,21,128,248,209,115,95,180,41,7,205,139,122,
165,139,102,191,9,121,241,76,63,181,12,133,78,234,116,139,131,218,129,29,50,56,121,91,100,178,32,106,75,87,144,158,7,179,178,85,212,7,163,58,129,184,110,227,145,214,1,189,228,214,244,170,3,221,8,206,133,
157,228,22,15,197,23,225,205,200,226,226,121,36,155,70,149,17,142,97,13,46,189,167,108,105,8,30,160,206,205,67,114,86,242,153,7,89,67,6,46,118,111,182,66,175,66,30,54,33,240,217,137,120,140,215,22,26,
6,109,107,64,135,107,237,182,131,198,17,190,97,102,14,249,16,113,40,45,7,138,3,58,163,153,15,190,89,48,100,234,11,170,201,148,159,228,160,154,218,84,66,155,212,3,32,203,110,243,65,239,137,167,183,157,
213,162,196,151,204,94,166,37,52,59,225,44,103,77,111,14,121,105,224,60,137,247,227,86,248,110,252,227,65,245,54,27,85,209,45,226,109,60,231,177,89,16,141,143,36,162,232,63,26,89,64,188,98,34,90,44,152,
217,24,155,252,251,152,85,245,252,120,169,174,147,201,211,199,250,121,246,89,186,177,52,210,32,29,155,184,147,124,64,47,206,117,205,72,221,165,108,134,227,218,120,15,109,174,131,92,238,86,91,234,79,16,
153,87,144,192,67,230,124,242,104,250,143,65,130,11,125,115,83,190,144,35,187,0,9,96,204,205,143,245,239,140,161,151,51,2,219,146,229,140,134,49,89,255,33,124,163,117,39,140,91,16,29,114,133,194,60,209,
202,104,179,130,70,41,64,9,90,81,84,117,250,48,218,179,203,163,67,74,240,106,104,213,149,202,41,70,232,164,140,202,239,137,147,227,89,27,225,205,231,49,78,63,68,178,187,143,46,250,65,6,97,182,246,156,
105,94,242,239,6,154,57,95,230,60,124,218,200,165,138,94,253,130,209,78,106,163,146,133,168,189,177,205,35,124,149,230,195,154,130,99,93,81,196,185,54,84,224,188,160,3,73,12,38,243,20,239,6,124,183,83,
249,32,168,182,112,15,12,235,52,55,194,179,212,123,126,29,100,190,29,230,144,107,28,237,106,160,166,23,145,112,240,81,240,133,101,86,136,237,115,84,160,7,241,160,243,66,20,166,62,15,57,174,231,14,252,
53,114,129,210,102,210,50,178,156,139,81,137,106,47,154,162,65,109,115,134,117,13,72,49,202,97,115,227,79,130,213,46,81,240,162,147,130,46,238,35,244,177,251,106,43,184,113,36,116,214,200,136,114,122,
92,75,223,129,193,31,190,228,108,163,67,58,178,242,162,111,121,53,197,131,63,95,45,155,18,11,150,144,104,48,248,17,241,223,147,66,0,50,16,190,96,20,252,36,80,208,4,92,102,21,112,244,84,6,232,224,118,32,
8,135,100,124,16,237,121,15,219,192,214,247,44,122,240,135,101,137,135,211,39,37,151,201,78,128,143,126,54,170,84,7,46,218,87,67,117,44,8,28,55,94,165,9,17,212,72,185,241,5,242,58,224,171,191,238,168,
190,106,254,192,78,234,39,208,155,46,95,1,201,220,224,46,107,141,105,132,230,87,252,20,59,5,205,252,0,78,164,47,37,82,202,233,19,125,65,170,100,203,175,113,209,142,203,250,167,185,239,77,95,47,58,69,110,
87,194,192,3,41,203,199,139,201,183,131,95,58,46,119,14,65,30,191,147,45,65,49,61,20,191,85,152,150,48,198,28,121,208,96,0,76,14,186,112,249,44,28,152,196,221,131,121,248,115,59,164,79,121,32,71,54,126,
16,193,42,48,58,159,111,181,222,109,249,210,15,34,36,214,126,216,60,224,101,57,176,175,201,157,159,177,58,55,204,39,82,22,194,229,50,6,26,145,193,117,106,19,213,219,127,99,54,232,240,193,88,42,100,41,
7,142,182,31,117,104,3,34,55,133,107,92,237,92,89,96,86,108,149,109,124,245,54,168,169,147,84,47,149,42,9,219,132,142,149,81,4,223,96,95,46,94,102,196,75,25,61,40,57,86,30,108,118,35,171,118,96,228,225,
252,177,254,160,83,95,60,244,49,241,211,102,179,178,38,86,241,4,41,58,4,62,189,184,192,23,140,12,171,140,192,63,94,99,10,129,56,148,24,25,13,116,132,141,175,224,224,72,16,116,98,102,199,1,206,142,13,178,
212,3,61,176,85,195,175,232,226,108,14,11,100,196,167,195,197,48,239,251,198,5,0,202,16,118,227,80,151,206,184,200,135,48,249,115,85,155,19,127,0,195,110,113,113,175,147,235,201,12,80,151,241,115,172,
227,53,102,28,82,77,152,14,148,202,205,40,222,89,149,249,156,43,178,63,6,240,25,224,231,102,131,205,84,67,80,221,127,213,43,89,21,14,167,77,220,119,66,33,50,65,147,23,35,76,218,208,59,44,233,171,0,84,
160,99,73,190,215,243,162,197,210,176,155,111,119,186,220,215,216,67,171,54,249,139,109,122,156,107,135,185,166,31,53,49,167,190,250,184,46,54,3,250,77,38,191,82,0,138,148,40,139,198,199,49,151,155,238,
182,211,135,138,118,85,24,70,139,207,169,67,119,135,222,122,167,169,110,155,201,235,186,176,56,25,162,200,249,25,202,213,7,4,90,14,192,125,72,78,217,222,71,1,249,28,90,9,40,229,70,14,165,46,200,34,192,
22,247,187,133,97,224,222,238,17,115,96,12,138,214,71,183,237,83,11,56,207,224,241,184,188,22,91,164,135,59,103,160,161,176,158,40,196,184,206,254,202,112,94,8,195,193,202,190,115,184,185,55,38,222,126,
7,96,233,13,208,7,62,44,149,85,56,252,121,112,203,208,169,13,84,139,159,232,59,178,233,212,6,182,190,116,207,177,3,246,109,249,82,142,108,64,232,48,176,219,89,155,194,158,155,230,181,154,107,84,237,234,
89,70,106,242,202,111,47,238,55,70,221,28,115,204,106,11,41,212,122,241,252,92,209,224,150,61,29,60,64,28,194,112,101,189,177,33,187,8,1,66,70,134,28,28,74,231,104,153,170,21,28,36,212,59,199,144,160,
13,40,242,144,166,209,96,90,127,15,57,60,101,64,31,25,56,182,200,240,113,212,29,88,39,96,34,93,216,98,194,208,245,138,148,128,19,73,107,24,208,207,137,26,117,214,183,115,49,186,174,91,124,248,113,114,
62,97,47,88,227,180,25,233,208,226,11,82,0,87,124,190,122,128,132,71,206,203,195,90,206,91,243,65,131,32,61,194,20,172,40,219,70,56,71,188,221,190,81,236,121,191,147,69,168,186,243,48,161,3,100,107,142,
74,206,217,212,223,184,207,30,68,200,121,95,197,148,185,100,92,174,59,121,17,55,247,70,50,18,59,248,202,227,213,13,130,51,174,234,194,194,23,3,226,229,13,195,56,200,232,206,40,180,157,57,81,96,188,91,
85,175,227,203,2,164,95,92,232,102,165,239,170,174,55,170,57,255,71,0,18,160,200,19,183,212,133,188,52,41,94,212,224,33,58,182,59,25,174,212,52,147,31,139,33,113,96,12,64,175,35,204,180,159,35,175,21,
83,165,69,249,137,224,184,169,162,51,179,182,75,70,31,49,222,200,210,134,172,25,13,243,122,28,206,121,62,24,150,78,0,37,126,249,226,5,175,7,125,237,1,188,216,144,133,113,221,120,235,29,29,172,196,117,
205,79,56,174,202,207,176,88,113,128,137,124,226,229,96,150,123,134,37,116,33,142,137,84,49,166,161,109,224,197,219,46,184,5,39,210,34,215,221,94,245,233,199,6,44,231,83,15,147,246,51,58,27,43,222,96,
240,94,83,22,72,97,195,241,215,186,74,125,207,95,201,195,200,55,254,130,37,209,222,150,252,147,142,97,249,33,189,152,114,185,179,232,171,11,224,33,244,66,220,68,78,189,122,137,113,242,140,149,199,93,164,
22,28,73,153,159,105,106,193,212,207,21,121,77,129,87,197,109,22,223,182,45,4,6,27,182,250,92,132,76,186,42,248,232,48,202,150,67,208,144,1,35,74,195,157,157,166,159,116,83,99,147,72,155,68,148,86,143,
94,248,24,109,129,224,236,109,156,153,68,80,165,172,73,29,154,41,234,42,155,71,98,248,202,255,217,233,161,186,41,225,33,131,179,83,246,226,71,240,13,154,207,2,138,114,123,215,95,175,80,17,68,163,87,31,
100,180,93,217,136,15,164,112,183,109,30,241,97,95,252,112,140,121,250,141,49,137,155,25,80,67,0,52,167,87,17,121,68,40,99,234,71,108,149,0,252,99,164,18,239,18,191,101,78,184,102,5,76,124,65,48,59,32,
53,5,84,243,205,32,56,37,65,240,202,137,203,63,87,250,132,192,93,174,103,105,44,134,73,211,31,210,168,237,59,71,89,220,138,114,42,231,24,27,239,235,105,209,192,144,237,10,6,3,90,12,99,71,220,210,71,75,
67,245,238,211,94,106,7,17,220,157,142,235,120,153,49,209,217,187,209,157,33,213,20,190,113,158,42,26,26,58,120,177,31,240,242,238,240,90,7,88,21,2,243,238,94,107,49,12,114,100,174,225,74,185,225,203,
113,27,56,159,89,34,175,26,86,182,196,143,195,244,23,157,130,31,242,16,12,28,40,32,157,19,255,77,90,177,92,178,125,81,166,50,94,136,59,77,31,233,154,217,183,12,12,78,188,234,15,229,43,142,204,183,208,
68,130,54,220,229,243,104,186,32,168,178,255,26,135,237,25,54,79,53,22,52,104,83,48,117,63,253,133,44,99,213,65,157,128,188,87,169,32,27,77,176,129,156,186,165,215,78,255,133,184,125,218,110,236,22,163,
239,129,228,110,88,118,168,29,59,146,239,96,69,128,28,15,27,178,140,98,95,99,189,6,126,163,221,158,13,78,202,66,162,27,23,80,166,139,186,201,159,200,156,160,95,196,161,102,217,151,113,187,201,39,228,97,
84,27,22,126,225,20,140,72,5,157,143,60,127,80,203,194,199,252,98,249,82,106,1,253,18,67,228,200,44,128,226,247,202,95,230,54,63,99,128,110,187,196,3,47,132,41,159,193,139,12,243,79,111,64,152,205,234,
148,159,230,103,25,228,40,142,131,119,84,181,170,89,115,158,85,166,53,186,138,7,214,218,183,238,188,24,106,70,26,99,12,209,186,87,43,119,28,56,251,20,120,13,155,206,185,168,4,116,84,18,0,151,153,153,31,
20,221,201,81,128,38,174,156,74,132,192,133,131,186,73,42,117,236,130,146,65,194,95,94,88,3,103,138,195,112,195,111,100,225,22,12,126,179,193,12,71,44,227,68,252,3,70,161,185,139,194,76,105,58,65,241,
84,21,153,187,102,140,195,25,87,47,201,132,127,140,73,53,150,170,65,88,250,73,195,164,37,234,194,195,124,69,174,74,9,213,247,93,217,185,114,179,216,189,42,90,56,47,37,121,246,240,78,112,13,82,96,91,213,
62,152,63,135,221,33,109,218,2,108,144,193,111,117,205,50,10,17,223,103,166,111,186,170,1,220,68,75,10,54,164,57,59,106,93,33,59,188,158,200,15,168,156,244,93,93,93,74,52,232,149,228,95,100,100,77,83,
32,227,162,113,10,120,111,43,134,135,142,148,214,4,56,167,58,5,44,67,22,199,26,69,61,221,54,239,216,185,51,152,88,196,255,213,79,245,33,174,132,33,236,152,96,13,114,157,112,203,181,43,107,193,30,218,193,
79,21,135,174,155,233,112,128,96,116,129,223,223,30,49,215,161,103,142,150,54,169,215,244,12,228,167,185,232,250,13,106,72,119,202,157,194,116,91,43,18,154,63,47,26,100,21,165,72,103,46,147,110,88,5,210,
198,194,108,241,79,227,21,164,77,190,65,115,140,160,163,45,71,180,248,186,177,140,147,229,180,178,17,5,152,38,220,144,83,44,54,62,65,200,0,197,200,55,78,186,20,82,189,112,174,179,227,194,143,236,99,84,
131,33,29,240,43,145,245,4,80,213,13,109,197,239,188,52,205,27,223,144,37,7,203,126,221,120,2,140,29,102,139,96,17,243,83,204,57,159,161,169,193,58,116,58,239,248,168,11,188,239,43,210,162,58,249,48,252,
200,228,245,120,119,169,65,47,203,23,190,35,27,136,198,143,109,198,189,47,88,220,44,140,232,113,90,173,138,67,113,128,242,88,171,143,156,56,244,121,141,25,63,191,239,40,51,75,204,157,141,37,185,59,106,
174,137,191,140,88,14,235,71,162,117,9,93,45,115,172,121,119,100,213,252,153,210,148,143,85,23,183,126,53,117,1,199,144,249,43,101,23,76,11,218,161,85,71,33,240,246,24,87,96,40,136,6,145,143,35,238,113,
59,105,152,233,233,68,190,83,105,91,195,44,163,216,35,0,76,212,146,201,114,116,221,37,235,77,52,75,200,192,28,199,215,66,30,104,108,232,236,17,41,232,93,240,96,57,208,113,88,17,7,70,132,118,159,111,209,
140,69,228,115,30,92,89,46,224,101,158,247,245,255,162,181,30,144,113,232,69,127,14,22,3,104,250,137,57,124,23,52,204,228,252,49,218,98,1,97,109,209,1,55,168,179,169,191,103,82,9,248,121,193,188,218,96,
219,97,6,187,141,149,51,230,212,86,56,43,231,148,200,178,218,131,81,30,200,51,157,127,235,64,195,170,147,91,139,198,121,137,128,34,136,55,247,21,11,169,17,96,175,232,75,78,102,25,84,230,17,213,105,102,
44,124,88,155,191,243,203,240,117,37,11,95,29,53,75,253,98,134,39,219,23,72,157,135,16,113,244,164,212,203,37,139,15,157,69,212,5,127,25,207,93,124,168,205,156,152,129,254,244,122,134,67,55,80,132,233,
107,31,25,17,0,188,56,154,203,7,247,106,0,77,245,158,111,106,112,210,177,13,40,254,196,208,36,137,227,77,239,19,14,9,171,189,204,186,74,50,76,97,18,8,205,134,29,94,95,231,73,29,171,145,224,116,80,11,141,
74,25,243,180,39,3,240,112,31,213,79,252,50,215,70,249,101,31,170,40,137,48,40,95,75,87,47,219,2,108,187,180,99,9,125,6,148,146,129,225,32,146,204,101,99,181,97,121,118,37,146,255,41,128,137,186,165,205,
49,215,69,167,113,194,59,160,147,248,83,1,190,228,20,15,125,88,94,0,253,196,222,141,129,169,31,198,192,214,160,165,48,143,55,0,70,217,107,252,85,252,27,199,37,17,217,145,187,174,219,16,25,221,101,48,20,
224,196,47,96,17,113,191,80,62,237,200,98,142,155,91,68,102,215,207,66,218,152,196,201,149,0,134,63,241,131,78,94,132,113,120,34,135,98,216,185,43,101,195,2,62,43,212,138,114,122,163,184,58,13,65,137,
222,15,98,168,154,16,137,246,47,52,64,228,41,114,5,240,8,55,231,33,146,108,58,235,229,199,202,41,50,56,26,211,76,133,10,180,184,176,32,137,115,210,80,188,224,174,55,235,109,74,140,204,9,84,240,118,141,
112,179,18,67,135,108,20,41,192,57,225,210,63,84,31,134,66,21,46,35,129,112,96,4,99,253,232,148,124,107,148,21,2,225,9,38,50,126,14,242,168,37,179,241,199,209,17,36,80,4,240,55,191,150,1,83,176,203,125,
20,108,154,209,105,31,34,32,199,220,179,37,7,107,101,251,171,80,133,203,29,29,1,14,192,111,190,27,211,0,194,152,241,99,22,213,86,128,31,76,147,131,120,120,245,147,188,63,120,46,197,249,105,191,78,20,53,
153,129,55,234,110,201,104,240,161,82,0,34,171,129,75,139,146,3,67,183,159,120,220,136,23,222,148,200,151,108,77,190,40,221,81,14,154,179,67,46,242,21,215,120,254,55,223,17,126,85,155,84,86,26,6,144,113,
20,212,53,199,102,181,219,17,59,90,17,225,196,72,164,210,64,212,53,188,243,141,17,212,136,124,53,198,175,9,108,245,142,170,92,132,33,171,234,132,47,186,30,113,16,105,242,94,232,26,205,5,29,73,19,233,87,
192,165,200,91,142,19,15,149,32,165,27,178,110,44,16,70,209,54,235,122,215,7,59,190,203,7,18,116,97,210,64,223,153,227,167,10,105,33,4,254,38,168,156,186,199,86,206,186,222,65,222,88,146,194,186,69,101,
57,197,222,240,217,20,132,35,248,106,245,77,81,77,156,75,217,221,1,237,149,125,124,102,104,179,114,34,9,150,184,69,194,16,172,197,29,181,248,69,28,172,136,140,47,80,159,27,4,149,150,131,232,216,111,242,
21,13,12,216,130,114,95,83,239,217,175,113,125,165,19,192,8,71,57,86,212,95,252,155,168,234,249,159,66,7,23,252,128,59,234,220,128,41,255,151,190,100,57,185,95,45,95,138,200,82,142,172,193,63,55,195,79,
138,156,219,237,56,3,218,163,186,166,23,109,76,53,75,213,212,233,185,59,143,17,14,78,116,131,35,228,206,53,91,117,171,9,25,60,14,9,76,61,155,239,203,228,16,216,81,121,24,43,41,15,198,90,172,169,6,19,21,
165,172,218,1,66,98,146,93,46,141,116,202,200,71,242,78,171,7,220,188,153,26,92,111,133,18,199,0,129,236,218,137,195,83,7,1,105,96,175,183,123,149,220,87,128,164,0,162,11,160,99,67,187,244,45,193,228,
13,171,3,34,85,33,180,205,229,219,22,82,86,193,35,224,8,22,54,70,127,7,208,192,108,217,158,150,239,156,75,159,251,105,14,252,194,88,82,229,99,249,47,8,7,169,37,234,176,120,116,65,233,157,6,53,110,69,181,
231,159,195,48,250,185,220,148,172,91,219,179,49,88,205,55,113,135,58,47,3,110,189,249,47,233,216,243,86,113,52,84,206,219,201,214,70,193,199,53,200,26,227,106,160,71,226,100,46,222,79,122,20,169,192,
51,18,61,120,160,149,204,173,108,41,163,242,25,17,110,206,119,14,218,212,214,108,251,85,52,93,200,90,141,183,211,49,137,39,126,34,200,243,63,217,159,108,28,67,7,49,39,71,53,203,42,162,135,187,144,16,77,
105,220,166,39,75,243,204,121,195,3,181,11,91,248,126,16,238,26,149,174,94,41,59,152,70,69,81,135,217,111,5,16,132,46,161,143,7,183,13,61,165,142,5,175,225,105,63,98,233,2,161,185,108,33,183,163,186,128,
207,165,246,210,53,240,192,121,232,219,227,252,13,86,214,185,120,48,45,83,31,40,95,20,230,71,237,33,247,184,122,91,28,72,105,108,11,104,138,74,86,116,221,237,88,100,143,185,230,175,226,20,217,66,113,148,
225,154,239,106,142,98,190,98,145,83,186,178,224,43,28,154,214,106,180,35,44,73,102,58,246,174,11,63,40,248,107,121,142,132,76,146,44,72,225,43,38,196,54,235,194,73,121,108,246,62,210,150,142,85,95,22,
35,130,109,153,227,113,249,77,253,212,43,203,25,203,207,250,45,95,178,28,92,213,85,159,43,95,254,142,172,173,47,21,4,12,243,59,178,70,10,97,126,43,21,196,145,28,219,1,255,85,161,30,197,84,102,144,252,
220,221,143,70,85,229,39,67,130,160,80,173,220,194,163,24,153,12,136,77,39,38,171,231,76,128,150,133,195,149,3,86,211,161,203,134,48,130,42,158,121,25,14,48,43,252,132,88,12,89,163,130,8,169,9,125,235,
74,20,99,40,106,138,22,28,133,64,212,33,161,175,14,249,231,237,172,125,178,142,182,242,73,94,22,174,41,123,78,144,121,116,102,140,179,94,109,31,233,181,210,38,62,107,130,6,99,2,149,121,102,33,224,184,
162,68,101,29,142,66,23,83,116,76,6,45,158,10,89,87,77,178,1,29,220,246,237,56,53,37,192,93,196,8,190,230,103,44,158,163,121,15,190,165,92,143,97,237,208,12,200,23,57,106,18,105,68,235,143,17,250,26,10,
148,44,172,218,39,23,204,190,48,242,156,24,201,34,165,253,213,57,140,87,107,229,154,163,44,252,144,86,180,184,118,102,119,156,150,136,174,31,65,34,0,33,248,132,116,3,118,138,0,183,74,131,104,81,232,116,
102,158,254,112,208,66,157,199,232,10,104,124,112,244,134,245,131,24,61,55,78,197,81,122,227,144,26,130,210,237,67,32,12,217,128,212,235,229,104,168,234,166,13,5,32,114,58,16,96,108,115,68,117,44,20,60,
226,31,145,123,105,27,236,78,17,40,192,107,58,71,138,251,44,250,165,134,237,15,132,208,17,130,46,209,57,149,18,117,113,61,240,4,180,80,231,106,12,118,228,205,12,182,122,239,52,232,78,81,198,117,244,142,
56,241,56,97,202,166,83,85,187,30,1,31,225,59,170,47,119,249,117,193,156,247,189,66,239,236,25,141,61,237,111,12,50,29,52,150,113,16,23,146,91,84,117,1,29,249,11,199,145,151,234,161,28,212,113,63,175,
193,169,107,82,214,252,70,95,109,98,136,151,139,110,26,157,69,250,134,131,78,107,19,97,199,32,243,62,168,40,131,6,32,26,44,180,153,126,166,139,26,180,73,91,156,205,12,83,78,130,61,14,63,12,3,164,110,135,
81,170,220,23,202,151,62,191,85,161,96,188,47,130,147,188,130,65,231,88,27,70,150,56,74,151,73,78,220,128,0,0,32,0,73,68,65,84,43,29,16,68,98,94,235,62,225,78,7,215,147,120,27,78,20,78,138,27,26,102,252,
190,33,168,185,233,16,184,229,228,181,243,24,182,187,71,168,107,28,230,174,232,15,156,183,29,63,161,108,225,10,216,139,24,83,166,211,242,16,5,2,154,158,134,157,107,168,162,148,70,3,8,16,235,68,22,69,177,
8,85,239,73,129,25,140,26,51,50,86,31,14,142,87,52,100,69,120,117,176,98,58,26,78,171,119,109,139,78,188,147,67,118,52,154,225,97,40,157,58,20,177,140,32,199,65,63,31,150,63,118,17,93,6,11,29,60,174,217,
38,119,120,240,252,116,134,46,158,194,156,102,138,210,58,220,123,212,229,142,56,223,185,38,176,219,90,136,60,58,212,95,184,150,195,57,241,34,152,97,222,243,147,178,133,232,164,5,30,184,65,135,153,112,
239,90,126,192,64,7,187,152,161,108,22,136,248,206,17,122,128,53,120,19,25,108,176,47,221,96,169,200,218,188,45,39,51,125,78,20,94,114,208,64,47,40,170,102,180,88,72,6,90,149,217,125,116,217,30,25,166,
251,37,211,177,53,50,70,57,93,102,144,227,57,199,108,26,42,81,80,98,196,88,171,71,18,204,65,70,206,173,104,81,100,0,186,225,189,228,237,225,23,3,134,241,71,213,144,128,99,0,255,197,203,166,179,132,71,
202,253,132,177,141,22,121,145,199,156,81,237,141,193,9,202,162,109,99,92,25,69,44,3,234,77,16,57,29,175,205,195,82,76,69,150,208,1,112,232,108,241,188,131,18,11,217,157,237,70,233,36,155,115,51,96,110,
81,183,192,16,214,104,10,124,137,186,134,229,45,236,11,227,223,226,155,14,243,144,52,9,185,244,182,1,64,11,11,67,231,205,105,28,93,128,185,76,10,167,63,42,247,195,158,169,179,253,108,89,160,50,44,150,
109,202,232,136,23,147,199,68,121,239,148,84,222,58,218,127,162,154,45,251,57,226,178,161,68,191,166,106,0,23,242,26,234,137,69,79,124,146,129,38,162,115,118,139,85,230,43,64,47,127,57,18,2,127,110,249,
1,46,171,5,190,242,218,231,202,143,252,65,132,0,40,60,233,25,213,155,6,97,205,134,36,195,167,34,218,82,1,238,200,16,108,161,40,112,232,222,89,8,249,45,107,156,188,81,231,21,250,150,67,89,144,70,73,144,
204,197,52,26,124,156,219,96,216,82,222,97,136,85,33,121,3,226,10,113,232,15,21,22,0,224,131,15,75,149,187,26,163,85,20,150,182,107,227,162,239,81,230,56,220,109,73,76,209,133,83,22,112,27,185,14,201,
148,35,201,10,45,170,74,252,62,118,33,150,176,19,118,25,124,187,81,76,20,141,26,182,253,62,161,224,151,66,8,132,233,159,27,115,160,61,134,166,153,215,235,244,48,111,245,208,176,26,157,50,168,40,115,80,
145,56,39,125,237,132,251,124,2,31,127,168,197,134,140,191,187,111,208,58,217,240,53,188,67,189,193,56,2,29,41,84,176,75,131,129,233,96,186,136,126,208,104,45,28,102,169,67,127,80,247,77,33,39,149,4,128,
247,137,220,128,200,169,120,89,225,71,203,68,100,13,128,48,81,74,192,134,191,248,175,18,78,84,39,201,226,130,15,15,216,218,33,19,198,193,131,236,198,73,2,74,119,134,110,18,230,212,164,49,250,20,211,85,
206,182,197,124,160,51,234,172,99,129,47,194,223,226,29,53,208,231,232,220,48,17,187,19,89,149,204,148,131,149,246,1,163,235,179,178,7,32,122,22,139,239,214,123,234,248,189,243,109,16,93,83,96,193,253,
203,129,122,212,28,70,37,214,149,136,35,194,230,92,249,80,189,178,222,197,180,187,217,140,20,91,87,65,109,21,190,179,3,168,27,232,87,28,217,1,187,78,152,42,220,89,34,160,46,92,214,176,164,40,243,178,82,
107,189,236,64,22,217,86,4,28,125,225,82,118,172,130,119,113,143,223,105,85,95,148,3,48,161,55,192,230,147,98,71,0,4,32,88,28,135,28,83,205,163,234,187,136,203,156,63,207,33,230,174,29,206,23,28,128,212,
20,18,183,190,123,67,253,22,16,170,69,120,113,58,40,248,137,159,219,74,156,22,204,135,226,254,137,242,133,239,200,122,42,230,156,0,15,230,63,230,151,10,108,9,252,169,114,55,136,24,181,106,95,204,166,82,
7,183,228,154,150,30,48,75,230,89,211,58,202,57,203,190,137,180,222,153,10,107,42,237,246,122,134,21,210,106,237,199,154,158,97,134,191,132,213,114,245,182,63,17,10,2,3,249,119,228,156,100,3,144,22,245,
186,154,3,137,116,69,58,108,234,46,14,173,95,223,82,5,12,215,200,216,7,24,207,77,206,213,162,206,170,139,124,237,58,61,169,64,39,184,197,31,190,208,171,239,246,46,117,6,17,157,248,90,4,151,162,77,138,
254,26,155,4,14,224,161,31,183,112,124,111,75,9,160,232,30,10,244,150,222,11,4,122,29,184,43,105,25,38,238,128,21,53,59,202,120,82,76,51,230,136,198,164,89,199,69,189,226,71,58,184,211,28,39,156,242,145,
75,37,156,222,172,217,180,59,12,136,29,35,61,141,103,42,202,1,117,98,149,95,207,89,68,154,31,68,62,190,163,215,171,47,121,80,82,238,158,196,241,214,214,225,89,13,205,159,197,27,228,208,150,89,26,43,130,
227,89,183,99,143,19,34,175,40,52,84,116,217,120,204,179,70,234,151,169,115,242,103,135,13,183,144,157,230,210,6,217,75,30,59,235,151,65,22,255,165,25,201,178,31,187,238,72,34,104,97,210,102,74,244,8,
178,27,31,250,157,111,203,129,94,251,42,17,136,72,5,103,76,66,25,3,199,101,22,3,189,229,165,251,162,162,175,133,193,192,69,111,216,50,144,59,213,31,225,107,228,123,148,31,116,128,84,148,192,96,238,120,
21,225,47,186,57,145,32,222,17,68,30,178,55,150,248,66,141,205,222,50,202,169,238,126,48,3,132,29,93,243,225,106,179,59,170,165,141,53,149,5,210,196,82,175,87,235,225,236,46,221,241,20,60,221,48,235,130,
154,230,179,110,14,228,131,156,135,218,133,213,131,240,8,169,166,193,210,208,219,115,49,160,4,135,9,63,4,159,204,48,113,28,112,142,157,6,180,145,136,191,70,178,143,3,190,106,148,45,81,219,215,187,1,135,
239,179,110,78,34,6,67,189,238,155,35,241,185,242,133,195,94,147,4,232,196,6,243,188,80,17,46,103,172,125,33,64,245,44,94,188,85,24,160,25,45,244,95,17,126,214,211,239,161,116,131,158,130,57,182,110,46,
7,34,65,8,176,87,22,8,185,118,126,31,19,199,162,13,131,56,230,174,187,153,195,47,32,133,242,69,70,164,62,248,107,16,6,52,73,110,44,237,68,78,22,147,120,245,51,138,153,91,232,71,28,52,142,100,161,17,0,
193,84,35,53,166,98,2,77,108,102,50,142,106,85,128,135,230,10,36,45,156,51,84,36,3,136,30,135,141,146,106,100,229,156,224,5,10,116,24,59,243,90,121,168,76,151,4,61,186,94,201,247,201,161,224,176,44,113,
135,185,92,141,201,46,0,33,99,177,177,94,14,115,222,37,80,237,172,209,40,194,3,169,26,115,23,188,59,0,117,135,136,134,153,218,34,162,27,180,137,10,26,137,31,72,27,89,200,58,28,20,19,198,5,161,237,82,40,
195,243,189,11,41,182,122,231,8,159,98,141,234,212,190,43,38,220,162,129,137,71,178,66,196,184,170,86,63,253,8,5,188,75,178,96,158,175,111,106,222,148,180,26,106,6,129,191,16,104,47,157,101,38,142,168,
85,53,154,175,81,14,196,108,135,7,204,116,203,31,120,124,200,189,240,174,234,40,44,244,193,253,232,78,168,52,160,46,119,133,223,19,61,86,29,157,91,43,94,64,241,17,61,138,116,109,250,57,244,157,217,116,
96,198,58,151,224,198,187,36,226,72,104,25,94,145,252,213,85,234,209,1,78,121,212,117,133,177,126,234,112,193,181,31,135,88,124,192,22,250,78,230,205,236,24,139,210,142,186,195,204,182,218,108,23,60,152,
215,205,65,11,184,161,55,163,254,17,94,183,3,19,221,183,233,89,147,105,39,41,86,221,227,96,239,32,22,19,126,13,19,159,125,144,182,200,183,155,128,74,242,134,124,193,193,161,191,9,2,123,49,232,4,31,66,
209,137,106,249,67,6,84,207,195,223,36,111,116,122,165,218,198,225,60,121,155,189,187,53,207,138,115,175,75,47,237,180,50,38,19,134,223,230,171,15,250,95,58,181,182,33,242,251,242,249,207,111,165,82,4,
207,217,167,219,159,215,199,48,63,101,39,209,214,177,158,208,29,75,249,77,44,193,73,178,64,0,61,122,85,164,141,164,148,168,159,176,24,27,101,51,230,243,164,21,230,197,153,39,1,51,159,104,141,48,76,220,
226,136,144,45,35,78,91,217,155,149,146,66,13,29,101,219,98,113,207,186,156,77,140,242,31,44,83,8,13,217,174,34,125,43,240,168,127,67,7,49,124,80,36,110,187,237,82,100,200,142,80,141,33,188,184,213,75,
14,179,26,49,4,154,44,72,195,94,117,22,87,93,172,232,204,24,210,110,205,45,124,158,166,132,176,48,217,30,177,37,191,202,251,248,56,99,160,176,49,55,117,250,177,76,49,94,8,92,243,16,105,193,37,87,124,224,
65,26,165,35,28,70,141,251,37,255,22,15,253,57,68,189,221,121,186,140,80,51,166,27,215,192,69,103,107,18,56,11,76,124,138,29,39,218,122,217,68,157,166,248,194,55,23,60,114,76,65,209,27,30,168,153,131,
29,208,190,25,186,75,221,234,44,107,8,104,56,185,234,13,161,250,131,252,76,151,121,71,29,69,41,0,242,11,66,213,151,154,18,225,229,184,166,213,220,198,133,146,195,66,92,99,52,24,241,219,179,121,106,124,
76,138,34,223,227,65,202,82,194,179,203,221,217,131,230,173,38,8,232,28,40,22,104,90,109,115,229,73,211,48,55,187,168,23,176,103,12,153,234,48,31,16,172,8,164,215,73,193,172,36,139,189,228,1,103,241,113,
35,167,49,249,112,67,139,224,23,206,164,114,210,71,119,159,145,219,233,85,132,15,91,210,78,226,138,148,86,84,127,69,182,83,39,137,188,11,126,244,206,6,209,146,62,99,24,132,25,133,43,51,7,202,86,92,110,
240,161,247,155,55,121,134,97,221,170,91,98,160,147,220,172,82,4,17,174,40,252,115,240,3,124,18,172,51,255,148,139,239,34,3,33,207,147,141,150,55,208,84,33,28,8,4,166,194,168,103,169,0,116,192,140,248,
117,88,113,2,218,230,162,9,222,195,4,69,78,54,162,22,245,135,25,125,74,11,114,217,67,79,219,114,92,107,222,2,130,166,145,222,150,175,125,181,224,152,138,105,254,164,152,217,240,195,134,187,13,63,243,147,
117,25,109,129,137,30,1,120,128,186,136,154,121,109,57,128,91,228,160,204,186,242,97,252,96,116,20,86,92,41,145,211,178,132,124,181,215,172,81,84,38,248,33,149,232,11,161,208,102,124,160,6,62,180,220,
170,51,49,114,148,154,221,106,32,76,226,225,76,192,202,105,80,175,88,215,234,100,190,140,156,152,100,46,97,48,88,25,2,170,71,138,112,167,125,80,227,110,148,5,94,195,156,36,238,96,8,72,9,192,207,78,133,
255,152,10,65,23,7,236,35,246,145,37,53,2,155,22,69,67,100,80,241,196,152,94,178,30,124,60,248,48,99,58,59,164,87,33,58,133,74,100,141,140,197,197,122,18,231,10,91,8,118,121,87,135,229,10,159,65,0,1,252,
230,0,31,200,86,83,142,22,2,192,198,25,211,168,226,236,228,106,63,200,245,67,103,209,214,251,226,45,93,27,192,180,183,82,211,142,74,119,192,147,226,114,92,177,213,41,125,208,57,216,202,43,21,162,112,15,
154,146,106,168,117,0,65,198,116,84,40,187,212,232,36,214,125,46,252,26,13,22,110,187,249,143,237,56,250,28,20,154,203,104,231,203,166,184,97,186,14,238,34,32,9,247,178,164,48,193,184,0,131,7,18,16,182,
231,61,14,93,68,185,137,8,176,40,1,77,52,232,96,110,185,8,241,209,169,141,215,181,150,83,193,197,190,161,157,35,62,6,244,143,45,85,157,213,194,23,92,61,208,37,60,180,66,154,136,11,248,45,216,131,59,92,
180,104,171,81,227,240,39,117,77,11,9,35,187,169,223,244,86,231,141,138,171,230,52,208,179,241,35,73,37,47,122,10,97,199,110,19,133,146,59,179,250,88,64,148,177,78,139,102,212,49,213,218,78,48,110,48,
24,48,86,50,216,69,245,132,191,244,44,89,87,96,26,117,158,137,189,220,97,199,162,154,17,95,168,168,93,232,227,237,98,32,197,240,224,111,169,235,130,17,81,213,160,132,91,91,8,101,125,119,38,147,155,121,
19,30,41,138,68,224,250,17,253,185,29,135,177,110,112,55,63,102,176,244,112,215,153,251,84,249,66,142,236,252,236,214,225,135,29,110,118,250,57,115,67,143,201,32,199,202,30,63,215,231,64,250,135,177,87,
193,164,254,165,148,232,32,146,212,111,188,166,88,182,3,180,53,137,229,84,196,4,12,110,3,48,77,161,223,140,219,245,111,155,166,129,245,156,71,102,112,201,179,97,64,218,177,74,222,134,208,157,56,82,90,
94,180,76,124,40,74,12,26,44,137,12,48,166,98,140,250,198,194,247,137,178,83,252,102,152,111,39,174,14,208,113,44,116,115,231,199,5,223,93,46,126,204,115,122,189,35,80,55,220,160,201,173,56,128,239,114,
71,115,164,189,72,126,66,24,18,118,107,103,196,55,214,73,158,137,242,161,231,160,45,92,58,191,236,219,66,25,84,254,185,25,26,42,225,141,101,184,226,117,124,60,92,193,194,222,241,132,48,194,161,124,190,
205,107,202,142,14,54,106,201,40,11,3,191,104,22,245,13,23,7,90,99,246,207,45,244,217,190,239,43,117,153,211,177,94,31,97,120,48,119,221,141,126,249,171,104,26,61,20,28,228,160,14,167,190,137,239,214,
3,154,135,1,121,216,69,60,192,21,12,1,105,27,216,102,76,71,1,157,14,227,200,162,134,219,41,137,23,156,229,148,37,175,7,240,153,162,206,167,248,240,218,64,101,150,6,98,7,42,107,210,44,102,159,241,217,255,
154,16,115,51,201,144,202,31,188,107,16,58,211,134,78,186,39,141,66,80,227,151,213,248,236,70,12,202,179,195,16,34,149,242,58,155,123,159,119,216,73,40,89,172,123,174,93,66,14,233,203,155,138,11,18,216,
225,40,135,107,66,85,14,82,116,20,7,10,11,166,140,176,10,143,147,214,106,223,189,131,72,29,80,103,88,44,114,99,206,29,242,205,121,34,85,2,8,151,232,44,134,203,206,225,29,138,56,78,144,45,30,35,22,227,
217,140,121,159,105,32,152,4,192,50,56,175,25,164,82,215,184,148,150,138,129,61,125,82,199,12,61,208,56,59,98,102,125,227,218,194,86,172,17,28,105,51,164,94,140,141,242,175,171,11,168,204,206,143,116,
100,116,239,75,223,167,223,120,76,191,209,29,118,252,231,141,125,181,124,222,145,61,220,252,99,253,123,185,29,31,110,99,28,54,142,211,236,227,195,94,175,115,194,240,49,9,48,212,147,37,15,0,60,22,208,222,
152,23,54,91,186,176,235,234,111,213,17,155,88,99,45,54,247,21,82,243,70,104,81,31,110,194,197,60,207,109,212,221,129,172,141,210,141,108,161,218,18,100,248,72,188,55,142,133,19,9,69,169,22,5,12,93,230,
145,192,67,44,4,151,115,187,237,66,103,58,187,56,109,236,248,161,242,222,92,19,221,240,80,67,29,128,8,165,165,253,211,23,104,116,72,122,10,191,191,21,171,198,160,249,130,35,22,53,135,68,114,138,71,226,
217,70,217,33,232,36,180,228,34,247,211,149,176,56,72,79,152,193,46,187,36,253,82,226,156,18,96,107,250,234,93,162,16,182,104,225,136,190,79,76,77,241,4,231,26,214,143,89,32,79,85,212,107,246,37,66,129,
242,148,10,205,201,144,93,162,180,43,9,127,149,242,179,220,84,249,70,60,221,22,108,186,227,174,83,143,65,174,203,241,215,133,3,97,226,120,4,21,96,251,88,40,152,23,31,206,94,90,44,39,157,243,120,191,195,
159,128,1,249,233,200,121,127,148,248,2,191,15,168,25,240,146,217,228,56,158,186,133,202,111,58,251,141,31,148,77,90,127,253,149,162,238,82,73,23,163,183,191,214,217,17,96,233,105,190,2,10,201,197,54,
112,155,179,126,184,168,108,10,239,240,129,139,209,232,173,50,145,191,34,153,41,37,67,248,85,14,138,53,196,157,233,22,85,68,135,78,104,217,158,104,38,230,197,122,102,141,52,202,46,133,236,91,201,73,83,
95,8,34,217,30,3,198,45,200,204,140,119,29,28,66,81,145,70,7,209,197,225,44,105,208,75,14,140,187,3,202,34,56,139,117,15,139,231,75,198,173,185,186,154,211,146,79,55,156,123,52,17,161,127,211,194,140,
97,250,141,220,10,222,172,198,146,26,149,160,197,153,145,46,168,128,37,66,119,69,25,109,188,244,7,244,187,13,88,130,43,133,174,210,225,102,254,97,211,129,245,121,112,236,72,103,118,69,99,221,231,247,101,
191,88,210,145,213,36,101,189,63,14,24,232,112,27,135,219,121,248,4,234,35,152,109,70,135,124,64,158,101,151,54,40,23,68,19,3,196,53,209,65,171,190,121,147,101,77,14,16,145,108,116,244,39,10,173,207,59,
42,184,13,156,237,90,123,8,179,165,74,9,183,169,203,84,224,207,193,37,92,3,148,245,96,198,229,138,44,244,88,135,23,4,131,238,195,96,168,126,233,120,148,128,151,211,188,139,56,95,205,245,166,235,141,193,
193,174,208,33,67,32,203,177,181,244,157,88,3,179,177,9,104,3,246,11,249,254,100,17,37,156,78,149,113,206,165,24,147,198,38,192,90,115,110,139,166,152,59,94,184,149,108,212,65,196,13,245,83,201,221,99,
136,102,151,192,141,97,112,75,140,248,117,193,136,34,145,172,215,35,172,23,34,33,64,131,0,98,110,97,224,137,100,205,207,251,201,246,173,12,182,231,196,226,4,6,1,118,48,118,134,22,96,217,219,52,208,24,
3,105,41,105,34,66,11,164,113,109,227,177,249,45,24,49,31,110,87,195,4,48,215,7,80,79,117,35,212,197,8,108,116,42,233,65,228,48,79,198,207,241,155,92,238,224,19,168,124,11,167,90,98,229,214,175,74,111,
76,28,140,209,67,111,247,0,155,153,181,239,141,151,115,161,91,245,87,88,105,128,134,231,147,83,126,226,219,212,87,156,205,119,98,63,141,77,2,161,31,246,132,14,175,24,45,212,99,0,55,227,40,217,224,3,114,
108,19,4,22,145,181,171,130,142,228,181,125,93,248,99,196,48,159,59,177,76,93,134,174,68,224,156,23,237,163,242,227,215,237,218,166,119,232,9,241,69,156,36,252,185,93,196,239,37,22,119,155,226,30,15,71,
17,45,97,110,204,98,23,14,112,67,122,40,227,145,35,177,238,183,223,113,54,163,79,98,38,246,108,9,118,1,180,93,193,55,51,109,96,152,249,49,83,11,142,185,153,51,29,217,99,70,104,63,166,63,121,213,229,157,
143,250,237,174,34,62,15,7,246,56,220,198,199,97,231,105,246,237,24,230,199,176,115,44,2,120,92,187,56,178,172,126,47,87,196,32,60,85,89,169,130,117,37,132,55,204,240,39,32,213,56,55,157,133,202,188,233,
77,231,119,84,153,0,146,134,44,96,148,185,223,24,172,129,111,124,88,173,191,199,39,229,32,27,59,22,49,8,109,17,200,216,216,49,61,231,220,53,131,95,142,217,25,110,238,10,243,77,175,140,77,244,165,10,78,
233,121,113,159,240,2,63,17,26,113,248,176,163,106,102,187,92,245,203,153,164,82,82,189,133,99,135,234,213,116,227,82,162,119,59,231,140,182,134,7,49,84,42,157,49,252,130,74,108,100,18,71,114,210,86,10,
16,214,36,92,118,189,41,62,140,217,142,118,202,51,125,25,113,227,160,160,178,88,124,169,59,61,89,91,154,114,252,5,41,106,102,61,150,110,204,45,56,35,237,103,23,164,190,188,233,130,90,175,220,150,1,42,
5,200,254,51,204,129,129,62,30,109,234,246,11,6,13,191,127,134,198,183,69,17,57,182,232,117,187,93,7,238,112,254,93,195,122,56,4,173,78,109,209,66,34,51,196,88,205,136,84,127,109,231,64,58,201,166,162,
165,68,212,238,109,196,96,167,229,29,81,154,14,70,7,98,83,153,156,144,139,126,174,202,165,18,19,248,56,239,197,72,160,46,120,248,174,191,108,58,176,155,149,227,154,246,180,59,80,142,157,192,224,33,195,
91,116,134,181,185,251,60,128,138,228,1,112,48,31,238,166,245,237,184,229,130,76,12,46,210,222,218,28,211,105,174,62,209,215,246,100,239,31,176,85,25,210,214,169,30,158,13,185,214,133,102,87,105,91,87,
133,48,136,96,232,97,185,123,127,124,56,68,102,205,62,86,112,52,219,223,248,164,88,190,221,254,248,0,189,155,158,243,199,135,205,137,57,205,94,227,52,91,14,172,159,195,252,92,31,96,135,57,162,235,64,44,
254,51,181,29,127,196,28,132,60,54,230,200,112,230,236,237,78,211,199,148,130,178,138,55,40,184,152,208,111,200,152,48,141,183,169,6,162,237,232,217,238,20,51,182,133,23,216,206,131,101,96,160,56,157,
155,68,67,22,230,67,74,91,50,232,245,14,148,254,74,138,147,125,36,99,10,29,76,84,176,174,75,231,108,37,250,207,226,22,126,125,157,231,23,215,123,120,247,79,84,148,187,120,147,110,39,207,33,30,64,11,112,
66,182,26,102,51,7,169,38,212,96,183,46,212,9,155,87,0,37,225,164,80,118,220,177,110,192,127,80,244,112,191,240,216,241,185,153,58,92,10,127,179,189,224,120,233,79,115,72,156,65,76,23,191,159,207,47,20,
233,173,239,226,242,46,38,4,168,61,116,202,119,51,97,121,64,149,101,121,243,203,88,49,74,35,235,21,160,87,124,93,242,129,126,96,115,192,168,231,249,160,116,150,26,241,59,25,26,52,129,187,15,119,220,53,
21,203,181,113,77,0,70,161,113,45,222,102,91,156,47,58,125,191,179,179,91,178,22,222,249,26,117,212,210,177,212,41,204,107,151,126,209,155,192,51,138,13,38,149,48,238,10,232,215,183,81,127,54,229,179,
147,252,217,190,80,167,122,217,81,243,70,27,186,150,156,76,49,145,173,240,218,219,133,135,140,63,163,153,251,248,53,114,118,130,250,237,80,6,131,187,177,248,70,162,239,8,175,114,78,238,166,184,189,57,
156,8,48,145,49,218,130,178,215,117,84,79,198,0,83,59,136,112,234,101,41,110,5,223,102,63,215,172,221,239,96,154,11,89,143,156,216,195,202,137,253,48,251,248,102,21,153,53,127,155,33,160,239,182,57,178,
51,223,108,208,117,69,100,205,198,49,108,124,68,229,49,39,254,53,39,105,156,98,168,55,40,50,155,232,89,200,29,19,109,38,90,85,139,172,232,145,15,38,243,149,225,42,231,52,28,11,49,3,206,106,167,103,144,
233,87,221,58,116,251,178,195,239,234,62,142,115,97,132,246,216,214,188,162,90,148,27,170,117,229,124,211,118,87,130,74,225,36,93,97,51,229,165,140,232,64,43,63,74,193,49,28,171,174,199,8,214,133,187,
58,7,136,225,158,190,231,18,227,65,221,93,222,231,208,119,88,174,168,37,179,176,37,178,243,251,128,207,205,248,87,142,176,219,162,209,118,88,66,15,15,104,197,182,54,42,40,253,20,204,128,171,138,240,191,
157,245,134,207,184,22,112,53,4,102,144,18,228,77,119,99,243,182,80,208,254,239,166,7,229,221,152,191,218,118,224,149,20,40,64,155,82,124,45,99,155,217,240,157,243,34,64,55,193,21,62,39,112,138,167,145,
252,77,94,194,156,102,36,168,240,67,121,173,171,27,211,228,50,31,59,82,41,125,54,226,133,135,46,75,188,92,154,119,106,9,230,91,206,108,195,183,249,128,154,228,32,104,175,178,104,199,177,152,85,151,216,
22,49,242,176,206,66,110,144,238,192,119,188,173,189,229,241,183,171,7,21,182,189,240,245,20,134,146,211,9,38,115,206,118,90,55,34,62,76,192,219,170,139,43,248,89,211,111,231,18,0,185,208,234,205,142,
85,111,172,131,99,81,71,86,220,243,37,247,42,131,17,148,87,232,108,25,82,4,128,116,210,69,31,56,254,213,179,47,149,157,112,126,70,191,95,231,203,127,165,23,29,249,48,155,233,96,110,249,133,130,153,150,
234,246,241,177,82,12,86,132,86,71,229,195,114,251,17,191,125,182,162,153,219,113,12,251,248,54,39,195,253,176,215,242,178,207,215,176,211,109,42,216,179,24,32,145,9,137,72,105,102,109,193,191,199,173,
159,67,66,8,152,64,239,231,88,164,112,168,1,211,122,106,18,46,106,147,50,0,227,224,92,59,28,104,135,7,145,219,82,10,19,104,240,142,51,172,211,96,251,210,204,124,236,169,181,212,174,68,89,75,209,54,122,
139,134,163,222,66,49,199,51,194,223,141,211,18,216,33,115,233,107,151,100,190,19,152,166,182,221,40,82,149,240,126,170,177,53,122,19,213,80,39,186,113,68,218,144,6,203,89,128,175,63,236,220,134,194,247,
46,79,247,51,220,125,199,5,218,206,223,92,95,153,136,207,104,208,207,194,177,147,98,124,199,207,178,87,55,137,26,215,127,243,176,9,117,45,17,246,204,103,140,74,178,173,135,199,123,239,182,177,111,74,137,
7,230,184,34,164,202,231,252,228,202,6,54,188,73,25,238,13,111,1,21,194,221,245,122,86,5,161,189,226,249,221,176,159,181,195,209,119,57,132,224,156,237,210,2,192,81,2,223,99,3,132,1,65,96,106,229,64,196,
0,252,168,25,117,251,9,133,75,253,92,217,141,33,48,202,167,232,204,44,142,12,206,123,92,84,185,240,241,48,141,210,146,211,167,140,129,17,246,205,78,73,227,21,108,218,31,211,168,131,106,239,240,199,190,
148,231,7,221,227,21,187,3,162,160,197,222,52,8,9,4,81,0,146,182,211,93,169,61,252,215,186,240,79,90,122,63,100,31,54,224,236,180,99,190,187,83,22,214,197,138,248,134,70,0,251,147,228,31,244,254,51,229,
90,191,197,61,7,167,220,45,157,217,195,109,58,178,223,194,153,29,243,208,23,245,124,49,238,198,95,253,118,229,196,214,79,135,197,245,28,224,227,219,4,239,101,99,58,177,199,176,243,99,216,121,154,141,115,
10,217,46,34,251,179,41,87,198,50,222,189,155,156,207,51,110,77,90,247,148,120,66,81,116,151,91,142,81,63,17,68,206,133,188,24,116,7,106,19,104,238,159,13,215,141,179,176,25,230,234,221,14,140,14,83,141,
235,74,247,59,191,7,187,147,169,107,168,139,77,20,123,216,117,225,79,163,108,96,215,121,215,79,160,145,193,244,197,41,161,193,68,163,241,169,236,178,196,137,207,214,30,169,129,217,205,214,23,40,160,19,
127,165,69,119,26,179,209,71,157,149,112,52,186,69,165,26,119,32,211,187,149,26,65,169,25,104,44,119,7,50,54,221,124,185,116,245,205,103,209,217,252,107,62,180,194,243,41,249,250,147,22,17,112,244,15,
110,126,35,35,155,214,148,161,203,178,235,28,91,107,218,206,155,45,244,55,147,130,238,246,128,251,145,84,151,157,6,144,195,43,170,238,212,145,234,53,76,226,153,159,42,212,138,66,220,141,3,93,15,209,193,
149,111,63,181,114,165,44,187,252,108,119,152,218,22,246,26,231,221,100,35,172,77,79,163,127,0,205,183,134,162,20,214,157,86,226,92,246,155,156,216,29,24,99,193,217,122,181,226,9,178,139,1,147,75,55,177,
0,112,108,76,184,146,179,54,100,250,169,111,38,218,48,51,39,229,13,113,222,129,245,63,239,131,68,191,91,0,17,40,0,137,249,216,54,62,73,209,134,88,2,200,170,62,239,197,199,105,182,80,135,206,137,95,165,
139,3,95,31,31,235,187,178,223,14,59,62,164,101,243,65,157,222,225,245,55,172,132,255,52,181,0,65,62,190,205,72,236,203,231,97,47,63,205,62,206,153,235,26,255,178,208,137,154,81,134,154,73,243,165,162,
14,68,252,201,207,224,152,81,14,99,14,153,247,172,205,191,12,193,214,112,247,142,238,116,198,174,14,155,228,125,222,221,190,92,197,22,84,129,150,66,222,193,240,198,191,220,24,102,53,47,12,237,94,41,169,
161,251,4,126,164,88,54,84,69,203,28,148,160,207,130,109,250,147,46,46,159,171,65,162,186,247,106,183,101,224,162,189,185,26,218,55,206,197,5,8,22,224,13,122,173,67,117,18,37,110,215,224,115,212,168,158,
205,166,108,114,234,123,198,11,83,202,201,28,5,100,42,212,65,253,233,212,113,162,50,0,70,17,167,72,1,130,79,132,129,117,189,235,38,134,188,155,57,36,170,138,123,44,234,201,0,108,101,45,148,61,240,193,
85,222,219,144,81,119,66,1,0,211,84,170,115,170,205,191,164,102,133,161,110,181,216,187,186,63,139,18,14,71,167,55,23,114,61,228,250,90,255,241,117,231,241,59,213,49,244,91,170,84,103,128,42,233,78,98,
255,48,215,122,30,142,133,56,86,8,48,69,159,7,87,2,105,217,158,59,238,165,107,106,26,19,203,149,193,112,4,202,152,57,85,119,236,14,204,1,140,152,77,155,61,110,191,163,119,112,237,204,133,142,89,213,132,
134,59,161,80,189,35,184,170,160,82,250,215,96,98,233,54,30,189,31,134,95,193,152,195,2,17,62,43,183,234,224,152,181,137,14,82,224,23,49,102,209,175,98,236,187,223,223,221,47,60,16,252,34,201,58,236,117,
140,153,94,176,28,217,233,196,42,35,68,91,167,107,253,103,182,73,45,192,123,114,108,207,97,199,71,125,96,212,191,185,249,199,76,37,56,207,249,215,206,9,194,176,97,118,174,170,126,49,55,97,144,149,174,
136,135,75,7,109,9,208,149,104,145,98,195,64,89,243,0,99,140,195,117,66,38,140,77,23,162,213,24,105,164,218,22,26,88,212,106,10,74,11,252,173,45,25,54,70,10,241,236,216,237,223,95,150,68,121,199,68,155,
103,169,44,55,222,130,46,93,69,161,127,90,98,222,2,191,51,100,56,139,243,189,184,75,138,201,189,126,146,39,186,65,179,79,123,87,38,249,241,7,57,246,34,253,249,118,209,182,145,242,194,104,148,60,70,154,
9,194,191,204,58,240,109,112,116,82,71,250,99,186,206,190,118,211,139,186,187,27,89,165,175,203,51,49,100,87,29,5,33,26,107,163,156,94,240,245,167,108,158,243,253,157,80,127,178,116,94,4,176,223,188,187,
122,127,85,143,197,114,103,240,239,70,111,63,13,114,81,202,53,196,113,181,70,244,178,197,143,134,151,180,17,116,44,218,168,80,65,63,110,175,77,26,42,50,183,239,80,68,64,169,175,55,188,112,153,215,171,
245,116,60,214,81,8,34,217,192,70,108,153,143,157,29,70,120,182,47,89,121,148,61,127,171,133,190,84,72,215,56,142,10,246,211,204,134,240,162,167,131,25,109,23,157,62,19,74,68,124,238,68,160,205,173,203,
85,221,51,197,235,29,243,189,182,186,4,111,83,135,199,18,202,9,240,119,146,120,87,190,58,151,193,127,235,20,198,58,240,53,63,195,181,14,127,73,139,127,254,47,255,249,165,195,122,229,171,210,119,100,175,
26,186,187,253,225,255,253,79,237,87,127,249,215,86,104,56,216,198,205,14,155,14,238,136,136,236,114,94,96,69,120,37,155,69,102,117,22,222,41,207,171,231,127,50,129,249,255,182,56,9,77,184,12,172,19,42,
79,138,29,0,95,159,186,137,57,179,235,220,219,152,158,184,29,202,28,67,46,81,146,119,179,41,179,86,124,251,214,185,222,137,87,222,131,95,65,117,164,114,179,55,159,145,75,52,122,111,181,212,149,38,215,
129,190,226,184,238,233,184,239,155,101,67,127,162,245,222,17,239,189,191,155,19,172,243,110,190,62,227,149,228,92,110,72,90,115,26,70,60,28,202,170,176,213,9,104,209,160,223,171,47,50,189,47,226,140,
161,83,75,144,218,134,144,27,228,117,229,78,239,164,253,213,61,141,177,169,123,131,163,155,81,32,104,151,58,121,71,34,54,166,200,99,187,37,98,12,116,213,99,180,102,217,184,147,128,221,243,253,247,14,204,
240,167,187,25,218,170,95,18,211,141,102,43,87,64,224,59,124,127,245,236,43,202,239,206,132,233,33,128,156,215,29,51,40,240,17,165,156,239,122,112,103,3,35,200,80,251,173,155,72,87,27,178,47,7,219,209,
222,24,109,67,168,91,231,24,202,2,247,110,74,246,72,192,53,226,0,124,125,163,178,168,151,61,47,162,62,86,45,172,48,188,235,245,43,10,225,199,22,191,184,142,114,51,150,154,192,43,189,120,53,114,170,246,
56,232,229,16,60,94,122,195,103,159,231,235,101,127,240,199,255,196,126,255,31,253,79,91,127,244,202,71,53,51,243,239,190,251,238,28,99,248,235,245,178,215,235,101,231,121,218,121,158,121,61,198,200,103,
113,61,96,219,32,174,199,248,28,155,61,229,41,79,121,202,83,158,242,148,167,60,229,231,187,236,34,173,243,11,89,71,254,197,235,143,143,143,124,246,241,241,97,31,31,31,230,238,163,229,200,30,199,97,99,
140,252,139,29,159,231,153,207,227,223,14,144,199,169,125,202,83,158,242,148,167,60,229,41,79,121,10,150,119,63,188,133,190,232,238,94,159,155,65,106,65,56,168,175,215,139,26,134,243,138,127,181,168,227,
122,247,241,218,167,60,229,41,79,121,202,83,158,242,148,167,60,101,119,38,75,157,86,116,94,205,44,163,178,81,190,89,100,220,64,7,81,48,226,122,21,145,141,122,90,158,168,236,83,158,242,148,167,60,229,41,
79,121,202,83,204,246,65,206,157,35,123,21,145,197,84,3,232,203,191,153,217,63,48,179,223,48,171,168,172,58,181,17,133,85,39,86,211,11,204,228,144,209,83,158,242,148,167,60,229,41,79,121,202,83,158,178,
202,238,235,3,87,255,212,121,213,128,171,153,253,131,111,102,246,151,45,206,144,65,133,200,147,141,18,7,189,162,222,93,68,246,137,198,62,229,41,79,121,202,83,158,242,148,167,60,5,203,187,207,189,198,245,
213,129,175,184,142,242,253,247,223,255,229,72,45,248,109,51,251,27,102,70,142,108,164,18,184,187,157,231,153,127,53,234,122,229,184,62,14,237,83,158,242,148,167,60,229,41,79,121,202,207,119,185,59,228,
133,215,87,185,177,152,90,0,229,183,127,242,147,159,248,55,155,209,216,191,105,102,127,96,102,127,203,172,156,89,116,92,209,153,189,74,45,120,14,125,61,229,41,79,121,202,83,158,242,148,167,60,229,174,
236,28,216,171,28,217,11,39,246,191,251,254,251,239,127,211,12,190,90,96,102,191,105,102,127,104,102,191,101,102,219,180,130,143,143,143,116,94,35,205,224,249,142,236,83,158,242,148,167,60,229,41,79,121,
202,83,190,82,244,243,173,187,175,19,160,35,11,229,191,53,179,191,19,55,232,200,218,122,241,135,102,246,59,216,9,70,98,227,90,163,176,79,158,236,83,158,242,148,167,60,229,41,79,121,202,83,118,229,46,63,
22,255,106,52,86,218,253,117,51,251,187,248,64,29,89,91,21,254,216,204,126,55,58,142,72,172,166,22,152,221,59,172,143,51,251,148,167,60,229,41,79,121,202,83,158,242,243,93,238,82,77,239,190,37,43,229,
175,152,217,223,211,135,59,71,214,86,197,95,55,179,223,195,129,48,181,192,204,232,58,238,159,242,148,167,60,229,41,79,121,202,83,158,242,148,171,178,203,145,213,107,41,191,110,102,255,112,247,226,202,
145,181,213,224,87,204,236,207,152,217,239,239,6,140,242,164,21,60,229,41,79,121,202,83,158,242,148,167,60,229,38,44,233,248,0,0,0,22,73,68,65,84,174,92,165,23,220,148,191,100,102,255,204,204,254,232,
170,194,255,11,161,111,192,179,74,204,82,156,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::presetsPanel_png = (const char*) resource_OwlBassGui_presetsPanel_png;
const int OwlBassGui::presetsPanel_pngSize = 24691;

// JUCER_RESOURCE: icon_saw_png, 1372, "../../Resources/icon_saw.png"
static const unsigned char resource_OwlBassGui_icon_saw_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,70,0,0,0,40,8,6,0,0,0,67,208,140,174,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,0,
0,0,9,112,72,89,115,0,0,3,200,0,0,3,200,1,39,83,115,255,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,4,217,73,68,
65,84,104,129,197,90,91,104,29,85,20,93,123,244,156,57,73,172,193,34,42,254,52,34,162,136,5,169,250,33,136,72,69,33,73,181,40,62,73,165,126,212,136,138,216,218,212,215,71,241,195,71,41,141,37,138,246,
195,62,144,130,84,109,107,205,163,65,65,240,71,197,26,17,68,4,223,130,136,248,2,49,87,239,236,51,185,179,253,240,70,66,58,251,206,220,220,153,201,250,156,117,238,89,139,117,207,157,89,247,156,33,102,22,
232,216,21,134,225,182,22,124,161,200,240,50,99,173,189,134,136,254,174,194,75,144,193,143,68,81,244,80,21,70,114,224,114,239,253,107,34,114,106,21,98,89,193,128,136,158,99,230,91,170,48,147,3,131,204,
252,98,21,66,153,193,52,199,28,140,227,248,170,178,205,228,1,17,13,71,81,52,82,182,78,158,96,0,192,37,73,242,22,51,95,84,170,155,156,32,162,157,204,60,84,166,70,222,96,0,96,37,128,233,90,173,118,78,89,
102,218,0,1,216,95,175,215,215,150,37,160,5,83,83,174,247,25,99,166,68,100,69,89,134,82,240,5,128,36,229,186,13,130,224,141,40,138,46,44,67,52,53,24,34,58,0,224,77,229,51,107,226,56,62,38,34,182,12,67,
41,94,222,17,145,71,21,122,37,17,77,215,106,181,179,139,214,213,86,76,195,90,59,4,224,131,52,82,68,214,122,239,247,139,8,21,109,40,13,206,185,93,68,244,188,66,159,215,92,197,61,69,106,170,247,24,34,170,
91,107,215,3,248,82,25,50,228,189,127,178,72,51,173,96,140,217,2,125,21,95,86,116,199,105,121,243,37,162,223,69,100,128,136,126,81,134,108,143,162,232,129,162,204,100,120,73,154,171,248,67,101,72,161,
29,39,243,169,228,156,251,14,192,58,40,55,100,34,26,99,230,245,69,25,106,133,230,42,190,17,192,215,10,63,204,204,143,20,161,149,235,113,109,173,157,17,145,219,1,204,165,208,167,0,120,53,142,227,43,139,
48,148,133,230,42,238,39,162,95,149,33,59,152,121,67,167,58,185,123,140,115,238,56,17,221,167,208,221,141,70,99,60,138,162,11,58,53,148,211,203,183,0,110,0,240,79,10,77,0,246,117,218,113,218,41,120,176,
214,238,5,240,84,26,71,68,103,18,209,244,236,236,236,89,157,24,106,195,203,9,0,27,161,119,156,163,204,124,201,82,231,111,43,152,166,161,237,0,14,40,244,249,214,218,201,162,31,157,26,194,48,60,44,34,218,
61,165,23,192,196,82,155,122,219,193,16,145,88,107,239,5,240,182,50,228,10,239,253,161,170,182,7,156,115,163,68,52,166,208,125,198,152,73,17,57,173,221,121,219,14,6,0,136,40,182,214,222,10,224,83,101,
200,186,170,182,7,0,192,24,243,48,128,163,10,189,164,142,179,164,96,0,128,136,102,231,230,230,6,1,252,160,240,195,204,252,216,82,231,111,211,75,98,173,221,0,165,169,3,24,96,230,151,218,153,115,201,193,
0,64,79,79,207,207,34,114,157,136,252,166,12,121,198,123,191,177,19,141,188,88,208,212,191,82,248,123,152,89,251,207,117,18,58,10,6,0,156,115,223,4,65,160,62,58,69,228,229,40,138,174,239,84,39,15,22,52,
117,173,227,60,235,189,191,43,207,92,29,7,3,0,214,218,143,68,228,78,0,141,20,218,16,209,97,239,253,165,69,104,101,33,171,227,136,200,222,122,189,126,109,214,60,133,4,211,52,52,78,68,15,42,244,10,17,153,
170,215,235,171,138,210,107,5,107,237,9,17,185,3,233,95,148,13,130,224,8,51,175,110,53,71,97,193,52,13,237,33,162,81,133,62,55,8,130,227,34,114,70,145,154,26,156,115,19,34,162,29,253,244,2,24,111,213,
113,10,13,6,0,140,49,219,0,28,84,232,139,153,249,152,136,184,162,117,211,224,156,219,157,209,113,166,180,142,83,120,48,205,2,184,137,136,222,85,248,171,189,247,175,136,72,225,218,105,200,232,56,107,188,
247,175,167,117,156,82,204,17,145,55,198,220,12,224,51,101,200,109,113,28,239,44,67,59,197,75,86,199,233,103,230,61,139,47,150,246,173,17,209,95,141,70,99,0,192,143,105,188,136,108,141,162,104,115,89,
250,139,188,204,239,227,104,29,103,19,51,63,190,240,90,169,203,185,187,187,251,39,0,3,0,254,84,12,141,86,117,202,73,68,127,100,236,227,60,189,176,227,148,254,59,15,195,240,243,36,73,110,2,192,41,116,165,
167,156,11,118,35,211,94,12,32,17,217,55,223,113,42,185,1,118,117,117,189,7,224,110,0,105,111,51,184,36,73,38,179,122,69,81,176,214,126,220,170,140,54,247,113,86,87,18,12,0,132,97,120,8,192,19,10,221,
11,96,188,42,47,205,142,179,85,161,79,7,48,81,89,48,0,16,134,225,14,34,122,65,161,251,170,244,226,156,27,35,162,221,10,189,170,210,96,0,192,24,179,25,122,175,168,20,198,152,17,0,71,210,184,202,131,201,
209,43,42,247,34,34,239,47,230,42,15,166,105,104,190,87,104,167,156,85,122,137,194,48,60,233,196,117,89,130,1,254,235,21,73,146,244,183,56,229,172,212,203,226,19,215,101,11,6,0,186,186,186,190,7,48,8,
253,181,147,202,176,184,227,44,107,48,0,96,173,253,164,197,41,103,213,94,102,230,247,113,150,61,24,224,255,83,206,251,151,219,7,0,56,231,38,69,100,203,191,127,197,232,37,136,107,0,55,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* OwlBassGui::icon_saw_png = (const char*) resource_OwlBassGui_icon_saw_png;
const int OwlBassGui::icon_saw_pngSize = 1372;

// JUCER_RESOURCE: icon_square_png, 332, "../../Resources/icon_square.png"
static const unsigned char resource_OwlBassGui_icon_square_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,70,0,0,0,40,8,6,0,0,0,67,208,140,174,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,
0,0,0,9,112,72,89,115,0,0,3,200,0,0,3,200,1,39,83,115,255,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,0,201,73,
68,65,84,104,129,237,217,177,13,194,64,12,64,81,31,66,73,157,37,232,168,161,98,5,70,129,81,24,5,137,37,160,166,103,15,167,57,122,148,47,65,115,9,210,127,165,27,91,95,186,234,74,102,214,88,158,71,223,247,
251,22,139,198,113,188,212,90,79,159,243,85,139,229,255,200,48,192,48,192,48,96,13,243,87,68,60,27,221,112,136,136,161,209,174,175,77,134,41,165,220,186,174,59,183,56,32,51,239,17,177,107,177,235,23,62,
37,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,96,24,64,159,250,115,219,100,230,181,197,162,90,
235,118,106,190,212,48,67,68,28,231,60,192,167,4,12,3,12,3,12,3,222,44,201,26,175,113,156,25,221,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::icon_square_png = (const char*) resource_OwlBassGui_icon_square_png;
const int OwlBassGui::icon_square_pngSize = 332;

// JUCER_RESOURCE: icon_triangle_png, 1561, "../../Resources/icon_triangle.png"
static const unsigned char resource_OwlBassGui_icon_triangle_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,70,0,0,0,40,8,6,0,0,0,67,208,140,174,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,
0,0,0,9,112,72,89,115,0,0,3,200,0,0,3,200,1,39,83,115,255,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,5,150,73,
68,65,84,104,129,197,90,77,140,20,69,20,254,94,207,116,85,207,46,43,26,81,3,241,96,88,8,24,127,136,26,19,56,232,193,120,212,24,47,38,196,152,120,80,227,5,35,9,34,24,144,5,5,23,241,39,26,162,145,4,227,
193,128,241,64,192,159,131,81,99,228,162,200,9,92,33,6,22,57,200,146,152,229,160,50,110,215,171,76,63,15,206,110,216,161,171,186,171,167,39,126,201,92,230,85,189,247,242,245,215,221,175,190,52,80,51,152,
249,9,99,140,184,126,204,252,76,221,53,171,192,24,51,238,233,241,27,170,179,152,136,196,204,124,26,192,168,103,217,148,82,106,25,17,205,212,89,59,4,237,118,123,113,179,217,60,11,96,40,47,78,68,107,162,
58,11,90,107,159,130,159,20,0,88,98,140,121,182,206,186,161,104,52,26,91,224,32,5,192,97,165,212,143,181,41,70,68,18,102,62,3,224,230,18,107,167,181,214,163,68,244,87,93,245,203,98,102,102,230,150,40,
138,126,5,160,114,194,25,17,221,173,148,58,81,155,98,152,249,57,148,32,5,0,136,104,17,51,63,95,87,237,16,68,81,180,29,249,164,0,192,1,165,212,9,0,168,69,49,34,50,98,140,153,36,162,27,2,182,253,169,148,
26,37,162,75,117,244,80,6,105,154,174,32,162,9,0,205,156,176,21,145,91,147,36,153,4,128,90,20,195,204,27,2,73,1,128,133,204,188,177,142,250,101,65,68,187,144,79,10,68,100,255,44,41,64,13,138,17,145,69,
204,60,9,224,26,71,124,35,17,237,118,212,74,59,157,206,242,161,161,161,223,251,237,163,8,204,124,143,136,28,47,219,71,223,138,177,214,110,134,131,20,0,95,37,73,178,7,192,17,71,60,137,162,104,115,191,61,
148,129,136,236,130,91,8,123,123,47,78,95,138,105,183,219,75,186,243,64,43,175,23,34,90,163,148,58,102,140,185,13,192,73,228,95,136,121,247,246,32,96,173,189,47,203,178,163,142,240,101,102,30,29,25,25,
249,227,202,63,251,82,76,163,209,216,134,124,82,0,224,144,82,234,24,0,104,173,127,1,112,192,177,46,38,162,151,251,233,163,8,89,150,141,123,194,111,246,146,2,244,161,152,52,77,151,17,209,41,0,113,78,184,
3,224,78,173,245,169,217,63,138,230,7,0,119,105,173,79,86,237,199,211,231,67,68,244,185,35,124,73,41,181,52,111,158,170,172,24,34,218,142,124,82,0,224,227,43,73,1,128,86,171,117,94,68,62,116,172,143,0,
108,171,218,139,11,34,66,68,244,138,39,254,154,107,200,172,164,24,99,204,237,0,78,192,253,204,88,153,36,201,185,222,64,137,51,202,234,217,219,175,14,24,99,214,194,125,11,79,41,165,150,19,209,63,121,193,
170,138,217,233,218,75,68,251,242,72,1,128,225,225,225,139,0,222,115,37,21,145,29,21,251,201,203,213,0,224,124,118,17,209,14,23,41,64,5,197,48,243,189,34,114,204,177,119,166,59,15,92,112,237,23,145,235,
153,249,28,28,175,248,44,203,30,104,181,90,223,133,246,149,211,231,211,34,178,207,17,254,77,41,181,146,136,216,181,191,138,98,198,225,38,244,93,31,41,0,208,61,2,188,237,108,40,138,198,69,164,175,49,66,
68,18,17,217,234,89,178,213,71,10,16,168,152,52,77,31,36,162,175,29,225,210,103,31,17,89,96,173,157,20,145,27,29,241,135,147,36,249,34,164,183,158,62,215,19,209,91,142,240,132,82,106,21,17,101,190,28,
65,138,241,61,225,1,188,81,246,64,72,68,151,179,44,219,227,137,239,18,145,74,207,63,17,89,16,69,209,139,158,37,91,138,72,1,2,136,49,198,60,10,96,181,163,153,105,165,212,59,101,115,1,128,214,122,47,0,215,
25,233,14,102,126,44,36,223,44,152,121,189,136,220,228,8,31,87,74,125,86,38,79,41,98,186,87,207,55,103,236,36,162,191,203,228,154,5,17,165,68,180,211,179,100,135,136,184,230,164,92,136,200,181,0,214,187,
226,89,150,109,38,34,41,147,171,20,49,214,218,199,1,172,114,132,47,104,173,63,40,147,167,23,113,28,239,7,112,214,17,94,110,173,125,50,36,31,51,111,2,112,93,94,76,68,142,182,90,173,111,203,230,42,36,70,
68,98,17,113,170,133,136,198,170,26,219,68,100,1,140,121,106,143,137,136,235,44,54,15,237,118,123,49,128,117,174,120,163,209,216,20,210,91,33,49,5,6,247,153,56,142,63,10,41,216,11,165,212,65,252,55,69,
231,161,180,113,94,96,112,31,137,227,248,135,144,190,188,175,235,18,6,247,90,173,245,39,33,5,243,96,140,121,4,192,97,71,15,211,90,235,165,190,103,88,89,131,59,164,39,175,98,140,49,235,224,38,229,103,165,
212,167,33,197,92,208,90,31,1,144,123,69,203,24,231,5,6,247,193,80,82,0,143,98,6,61,132,245,194,90,123,127,150,101,223,59,194,206,225,49,196,224,14,129,83,49,204,188,193,69,10,128,159,180,214,95,134,22,
243,33,142,227,163,68,228,122,107,44,100,230,23,242,2,33,6,119,8,114,21,83,100,112,215,117,208,235,69,232,1,53,212,224,14,65,174,98,172,181,155,224,49,184,7,65,10,0,40,165,142,3,112,77,166,173,102,179,
57,207,56,15,53,184,67,112,85,210,174,193,125,6,249,175,190,57,131,187,106,193,34,148,53,193,170,24,220,33,184,170,120,215,224,118,205,3,135,6,73,10,0,104,173,39,0,28,116,132,231,140,243,78,167,243,170,
39,77,174,193,29,130,121,138,9,53,184,7,133,52,77,71,137,232,180,167,143,151,0,236,206,219,91,215,7,3,243,20,19,106,112,15,10,73,146,76,122,140,243,6,28,164,116,177,187,142,175,40,230,20,83,213,224,30,
20,10,158,117,46,92,236,126,148,228,244,114,203,226,74,18,42,25,220,131,194,240,240,240,20,17,189,31,178,167,200,224,14,202,5,244,111,112,15,10,69,243,84,15,206,43,165,86,20,121,185,101,49,171,144,190,
12,238,65,129,136,166,225,49,206,123,176,165,46,82,0,128,234,50,184,7,133,162,51,91,23,165,12,238,16,68,68,228,157,7,254,79,82,128,57,227,252,245,130,101,91,235,36,5,0,254,5,135,12,216,244,221,167,129,
217,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* OwlBassGui::icon_triangle_png = (const char*) resource_OwlBassGui_icon_triangle_png;
const int OwlBassGui::icon_triangle_pngSize = 1561;


//[EndFile] You can add extra defines here...
//[/EndFile]
