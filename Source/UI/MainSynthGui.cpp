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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainSynthGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainSynthGui::MainSynthGui ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	setLookAndFeel(&mLookAndFeel);
    //[/Constructor_pre]

    slider2.reset (new Slider ("ADSRVol.Attack"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (677, 257, 40, 148);

    slider3.reset (new Slider ("ADSRVol.Release"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::LinearVertical);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (769, 257, 40, 148);

    label.reset (new Label ("new label",
                            TRANS("OSC")));
    addAndMakeVisible (label.get());
    label->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (24, 16, 128, 24);

    label2.reset (new Label ("new label",
                             TRANS("Filter")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (440, 16, 160, 24);

    label3.reset (new Label ("new label",
                             TRANS("Amplifier volume")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (674, 231, 168, 24);

    slider4.reset (new Slider ("OSC1.Volume"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider4->addListener (this);

    slider4->setBounds (40, 56, 110, 110);

    slider5.reset (new Slider ("OSC2.Volume"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (0, 1, 0);
    slider5->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider5->addListener (this);

    slider5->setBounds (40, 176, 110, 110);

    label4.reset (new Label ("new label",
                             TRANS("main")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font ("Verdana", 14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (8, 48, 56, 24);

    label5.reset (new Label ("new label",
                             TRANS("sub1")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (8, 168, 56, 24);

    slider6.reset (new Slider ("OSC3.Volume"));
    addAndMakeVisible (slider6.get());
    slider6->setRange (0, 1, 0);
    slider6->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider6->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider6->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider6->addListener (this);

    slider6->setBounds (40, 304, 110, 110);

    label6.reset (new Label ("new label",
                             TRANS("sub2")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (8, 296, 56, 24);

    slider7.reset (new Slider ("Filter.CutoffFreq"));
    addAndMakeVisible (slider7.get());
    slider7->setRange (0, 1, 0);
    slider7->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->addListener (this);

    slider7->setBounds (448, 56, 95, 95);

    label7.reset (new Label ("new label",
                             TRANS("cutoff")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (464, 144, 56, 24);

    slider8.reset (new Slider ("Filter.Q"));
    addAndMakeVisible (slider8.get());
    slider8->setRange (0, 1, 0);
    slider8->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->addListener (this);

    slider8->setBounds (571, 56, 95, 95);

    label8.reset (new Label ("new label",
                             TRANS("Q")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (587, 144, 56, 24);

    label9.reset (new Label ("new label",
                             TRANS("Filter cutoff")));
    addAndMakeVisible (label9.get());
    label9->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label9->setBounds (445, 231, 168, 24);

    slider10.reset (new Slider ("ADSRVol.Sustain"));
    addAndMakeVisible (slider10.get());
    slider10->setRange (0, 1, 0);
    slider10->setSliderStyle (Slider::LinearVertical);
    slider10->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider10->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider10->addListener (this);

    slider10->setBounds (723, 257, 40, 148);

    label10.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label10.get());
    label10->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label10->setBounds (676, 403, 40, 24);

    label12.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label12.get());
    label12->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label12->setJustificationType (Justification::centred);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label12->setBounds (723, 403, 40, 24);

    label13.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label13.get());
    label13->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label13->setBounds (770, 403, 40, 24);

    slider11.reset (new Slider ("ADSRFilter.Attack"));
    addAndMakeVisible (slider11.get());
    slider11->setRange (0, 1, 0);
    slider11->setSliderStyle (Slider::LinearVertical);
    slider11->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider11->addListener (this);

    slider11->setBounds (442, 255, 40, 150);

    slider12.reset (new Slider ("ADSRFilter.Release"));
    addAndMakeVisible (slider12.get());
    slider12->setRange (0, 1, 0);
    slider12->setSliderStyle (Slider::LinearVertical);
    slider12->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider12->addListener (this);

    slider12->setBounds (532, 255, 40, 150);

    slider14.reset (new Slider ("ADSRFilter.Sustain"));
    addAndMakeVisible (slider14.get());
    slider14->setRange (0, 1, 0);
    slider14->setSliderStyle (Slider::LinearVertical);
    slider14->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider14->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider14->addListener (this);

    slider14->setBounds (487, 255, 40, 150);

    label14.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label14.get());
    label14->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label14->setBounds (442, 401, 40, 24);

    label16.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label16.get());
    label16->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label16->setBounds (487, 401, 40, 24);

    label17.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label17.get());
    label17->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label17->setBounds (533, 401, 40, 24);

    slider15.reset (new Slider ("OSC1.Divider"));
    addAndMakeVisible (slider15.get());
    slider15->setTooltip (TRANS("switch;"));
    slider15->setRange (1, 4, 1);
    slider15->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider15->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider15->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider15->addListener (this);

    slider15->setBounds (168, 72, 95, 95);

    slider16.reset (new Slider ("OSC2.Divider"));
    addAndMakeVisible (slider16.get());
    slider16->setTooltip (TRANS("switch;"));
    slider16->setRange (1, 4, 1);
    slider16->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider16->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider16->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider16->addListener (this);

    slider16->setBounds (168, 192, 95, 95);

    slider17.reset (new Slider ("OSC3.Divider"));
    addAndMakeVisible (slider17.get());
    slider17->setTooltip (TRANS("switch;"));
    slider17->setRange (1, 4, 1);
    slider17->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider17->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider17->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider17->addListener (this);

    slider17->setBounds (168, 320, 95, 95);

    slider18.reset (new Slider ("OSC1.Waveform"));
    addAndMakeVisible (slider18.get());
    slider18->setTooltip (TRANS("switch;"));
    slider18->setRange (1, 3, 1);
    slider18->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider18->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider18->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider18->addListener (this);

    slider18->setBounds (288, 72, 95, 95);

    slider19.reset (new Slider ("OSC2.Waveform"));
    addAndMakeVisible (slider19.get());
    slider19->setTooltip (TRANS("switch;"));
    slider19->setRange (1, 3, 1);
    slider19->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider19->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider19->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider19->addListener (this);

    slider19->setBounds (288, 192, 95, 95);

    slider20.reset (new Slider ("OSC3.Waveform"));
    addAndMakeVisible (slider20.get());
    slider20->setTooltip (TRANS("switch;"));
    slider20->setRange (1, 3, 1);
    slider20->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider20->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider20->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider20->addListener (this);

    slider20->setBounds (288, 320, 95, 95);

    slider9.reset (new Slider ("Filter.EnvelopeScale"));
    addAndMakeVisible (slider9.get());
    slider9->setRange (0, 1, 0);
    slider9->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider9->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider9->addListener (this);

    slider9->setBounds (686, 56, 95, 95);

    label11.reset (new Label ("new label",
                              TRANS("Envelope")));
    addAndMakeVisible (label11.get());
    label11->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label11->setBounds (702, 144, 72, 24);

    slider.reset (new Slider ("Delay.Wet"));
    addAndMakeVisible (slider.get());
    slider->setTooltip (TRANS("effect;"));
    slider->setRange (0, 1, 0);
    slider->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (272, 520, 95, 95);

    label15.reset (new Label ("new label",
                              TRANS("Delay\n")));
    addAndMakeVisible (label15.get());
    label15->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label15->setBounds (288, 496, 168, 24);

    label18.reset (new Label ("new label",
                              TRANS("wet")));
    addAndMakeVisible (label18.get());
    label18->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label18->setJustificationType (Justification::centred);
    label18->setEditable (false, false, false);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label18->setBounds (288, 608, 64, 24);

    slider13.reset (new Slider ("ReferenceOscillator.Detune"));
    addAndMakeVisible (slider13.get());
    slider13->setTooltip (TRANS("effect;"));
    slider13->setRange (0, 1, 0);
    slider13->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider13->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider13->addListener (this);

    slider13->setBounds (136, 520, 95, 95);

    label19.reset (new Label ("new label",
                              TRANS("detune")));
    addAndMakeVisible (label19.get());
    label19->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label19->setJustificationType (Justification::centred);
    label19->setEditable (false, false, false);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label19->setBounds (152, 608, 64, 24);

    slider21.reset (new Slider ("UnisonMixer.Volume"));
    addAndMakeVisible (slider21.get());
    slider21->setTooltip (TRANS("effect;"));
    slider21->setRange (0, 0.5, 0);
    slider21->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider21->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider21->addListener (this);

    slider21->setBounds (24, 520, 95, 95);

    label20.reset (new Label ("new label",
                              TRANS("volume")));
    addAndMakeVisible (label20.get());
    label20->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label20->setBounds (40, 608, 64, 24);

    slider22.reset (new Slider ("Delay.Delay"));
    addAndMakeVisible (slider22.get());
    slider22->setTooltip (TRANS("effect;"));
    slider22->setRange (0, 1, 0);
    slider22->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider22->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider22->addListener (this);

    slider22->setBounds (384, 520, 95, 95);

    label21.reset (new Label ("new label",
                              TRANS("time")));
    addAndMakeVisible (label21.get());
    label21->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label21->setJustificationType (Justification::centred);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label21->setBounds (400, 608, 64, 24);

    slider23.reset (new Slider ("Delay.Feedback"));
    addAndMakeVisible (slider23.get());
    slider23->setTooltip (TRANS("effect;"));
    slider23->setRange (0, 1, 0);
    slider23->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider23->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider23->addListener (this);

    slider23->setBounds (496, 520, 95, 95);

    label22.reset (new Label ("new label",
                              TRANS("feedback")));
    addAndMakeVisible (label22.get());
    label22->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label22->setJustificationType (Justification::centred);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label22->setBounds (512, 608, 64, 24);

    label23.reset (new Label ("new label",
                              TRANS("Unison")));
    addAndMakeVisible (label23.get());
    label23->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label23->setBounds (16, 496, 168, 24);

    label24.reset (new Label ("new label",
                              TRANS("retrigger")));
    addAndMakeVisible (label24.get());
    label24->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label24->setJustificationType (Justification::centred);
    label24->setEditable (false, false, false);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label24->setBounds (576, 400, 64, 24);

    label25.reset (new Label ("new label",
                              TRANS("Envelopes")));
    addAndMakeVisible (label25.get());
    label25->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label25->setJustificationType (Justification::centredLeft);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label25->setBounds (440, 187, 160, 32);

    slider25.reset (new Slider ("FilterCutoffLfo.Frequency"));
    addAndMakeVisible (slider25.get());
    slider25->setRange (0, 1, 0);
    slider25->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider25->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider25->addListener (this);

    slider25->setBounds (848, 56, 95, 95);

    slider26.reset (new Slider ("FilterCutoffLfo.Volume"));
    addAndMakeVisible (slider26.get());
    slider26->setRange (0, 1, 0);
    slider26->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider26->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider26->addListener (this);

    slider26->setBounds (848, 168, 95, 95);

    label26.reset (new Label ("new label",
                              TRANS("Filter LFO")));
    addAndMakeVisible (label26.get());
    label26->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label26->setJustificationType (Justification::centredLeft);
    label26->setEditable (false, false, false);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label26->setBounds (824, 16, 160, 24);

    label27.reset (new Label ("new label",
                              TRANS("Frequency")));
    addAndMakeVisible (label27.get());
    label27->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label27->setJustificationType (Justification::centred);
    label27->setEditable (false, false, false);
    label27->setColour (TextEditor::textColourId, Colours::black);
    label27->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label27->setBounds (856, 144, 72, 24);

    label28.reset (new Label ("new label",
                              TRANS("Amount")));
    addAndMakeVisible (label28.get());
    label28->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label28->setJustificationType (Justification::centred);
    label28->setEditable (false, false, false);
    label28->setColour (TextEditor::textColourId, Colours::black);
    label28->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label28->setBounds (856, 256, 72, 24);

    slider27.reset (new Slider ("Limiter.Volume"));
    addAndMakeVisible (slider27.get());
    slider27->setTooltip (TRANS("effect;"));
    slider27->setRange (0, 1, 0);
    slider27->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider27->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider27->addListener (this);

    slider27->setBounds (656, 520, 95, 95);

    label29.reset (new Label ("new label",
                              TRANS("volume")));
    addAndMakeVisible (label29.get());
    label29->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label29->setJustificationType (Justification::centred);
    label29->setEditable (false, false, false);
    label29->setColour (TextEditor::textColourId, Colours::black);
    label29->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label29->setBounds (672, 608, 64, 24);

    label31.reset (new Label ("new label",
                              TRANS("Output")));
    addAndMakeVisible (label31.get());
    label31->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label31->setJustificationType (Justification::centredLeft);
    label31->setEditable (false, false, false);
    label31->setColour (TextEditor::textColourId, Colours::black);
    label31->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label31->setBounds (672, 496, 168, 24);

    component.reset (new LevelIndicator());
    addAndMakeVisible (component.get());
    component->setName ("Limiter.LevelChannel0");

    component->setBounds (786, 546, 180, 8);

    component2.reset (new LevelIndicator());
    addAndMakeVisible (component2.get());
    component2->setName ("Limiter.LevelChannel1");

    component2->setBounds (786, 594, 180, 8);

    toggleButton.reset (new ToggleButton ("ADSRFilter.Retrigger"));
    addAndMakeVisible (toggleButton.get());
    toggleButton->setButtonText (String());
    toggleButton->addListener (this);

    toggleButton->setBounds (587, 357, 40, 40);

    openPresetBrowser.reset (new TextButton ("new button"));
    addAndMakeVisible (openPresetBrowser.get());
    openPresetBrowser->setTooltip (TRANS("no_background;\n"
    "\n"));
    openPresetBrowser->setButtonText (TRANS("unknown"));
    openPresetBrowser->addListener (this);
    openPresetBrowser->setColour (TextButton::buttonColourId, Colour (0x00a45c94));
    openPresetBrowser->setColour (TextButton::buttonOnColourId, Colour (0x00181f22));
    openPresetBrowser->setColour (TextButton::textColourOffId, Colour (0xff0d0d0d));
    openPresetBrowser->setColour (TextButton::textColourOnId, Colours::black);

    openPresetBrowser->setBounds (137, 445, 298, 24);

    mBtnPresetNext.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetNext.get());
    mBtnPresetNext->addListener (this);

    mBtnPresetNext->setBounds (560, 448, 88, 24);

    mBtnPresetPrev.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetPrev.get());
    mBtnPresetPrev->setButtonText (TRANS("Previous"));
    mBtnPresetPrev->addListener (this);

    mBtnPresetPrev->setBounds (462, 448, 88, 24);

    cachedImage_case_main_png_1 = ImageCache::getFromMemory (case_main_png, case_main_pngSize);
    cachedImage_case_effects_png_2 = ImageCache::getFromMemory (case_effects_png, case_effects_pngSize);
    cachedImage_icon_triangle_png_3 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_4 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_5 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_6 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_7 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_8 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_9 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_10 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_11 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_levelIndicator_png_12 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_levelIndicator_png_13 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_presetsPanel_png_14 = ImageCache::getFromMemory (presetsPanel_png, presetsPanel_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 640);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainSynthGui::~MainSynthGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	setLookAndFeel(nullptr);
    //[/Destructor_pre]

    slider2 = nullptr;
    slider3 = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    slider6 = nullptr;
    label6 = nullptr;
    slider7 = nullptr;
    label7 = nullptr;
    slider8 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    slider10 = nullptr;
    label10 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    slider11 = nullptr;
    slider12 = nullptr;
    slider14 = nullptr;
    label14 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    slider15 = nullptr;
    slider16 = nullptr;
    slider17 = nullptr;
    slider18 = nullptr;
    slider19 = nullptr;
    slider20 = nullptr;
    slider9 = nullptr;
    label11 = nullptr;
    slider = nullptr;
    label15 = nullptr;
    label18 = nullptr;
    slider13 = nullptr;
    label19 = nullptr;
    slider21 = nullptr;
    label20 = nullptr;
    slider22 = nullptr;
    label21 = nullptr;
    slider23 = nullptr;
    label22 = nullptr;
    label23 = nullptr;
    label24 = nullptr;
    label25 = nullptr;
    slider25 = nullptr;
    slider26 = nullptr;
    label26 = nullptr;
    label27 = nullptr;
    label28 = nullptr;
    slider27 = nullptr;
    label29 = nullptr;
    label31 = nullptr;
    component = nullptr;
    component2 = nullptr;
    toggleButton = nullptr;
    openPresetBrowser = nullptr;
    mBtnPresetNext = nullptr;
    mBtnPresetPrev = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainSynthGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 1000, height = 640;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_main_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_case_main_png_1.getWidth(), cachedImage_case_main_png_1.getHeight());
    }

    {
        int x = -36, y = 452, width = 1072, height = 224;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_effects_png_2,
                     x, y, width, height,
                     0, 0, cachedImage_case_effects_png_2.getWidth(), cachedImage_case_effects_png_2.getHeight());
    }

    {
        int x = 324, y = 60, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_3,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_3.getWidth(), cachedImage_icon_triangle_png_3.getHeight());
    }

    {
        int x = 364, y = 148, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_4,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_4.getWidth(), cachedImage_icon_square_png_4.getHeight());
    }

    {
        int x = 284, y = 148, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_5,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_5.getWidth(), cachedImage_icon_saw_png_5.getHeight());
    }

    {
        int x = 324, y = 180, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_6,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_6.getWidth(), cachedImage_icon_triangle_png_6.getHeight());
    }

    {
        int x = 364, y = 268, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_7,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_7.getWidth(), cachedImage_icon_square_png_7.getHeight());
    }

    {
        int x = 284, y = 268, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_8,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_8.getWidth(), cachedImage_icon_saw_png_8.getHeight());
    }

    {
        int x = 324, y = 308, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_9,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_9.getWidth(), cachedImage_icon_triangle_png_9.getHeight());
    }

    {
        int x = 364, y = 396, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_10,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_10.getWidth(), cachedImage_icon_square_png_10.getHeight());
    }

    {
        int x = 284, y = 396, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_11,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_11.getWidth(), cachedImage_icon_saw_png_11.getHeight());
    }

    {
        int x = 180, y = 388, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 316, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 316, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 388, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 260, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 188, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 188, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 260, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 140, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 68, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 68, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 140, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 300, y = 20, width = 76, height = 30;
        String text (TRANS("waveform"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 20, width = 76, height = 30;
        String text (TRANS("divider"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 780, y = 532, width = 192, height = 28;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_12,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_12.getWidth(), cachedImage_levelIndicator_png_12.getHeight());
    }

    {
        int x = 780, y = 580, width = 192, height = 28;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_13,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_13.getWidth(), cachedImage_levelIndicator_png_13.getHeight());
    }

    {
        int x = 124, y = 434, width = 324, height = 49;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_presetsPanel_png_14,
                     x, y, width, height,
                     0, 0, cachedImage_presetsPanel_png_14.getWidth(), cachedImage_presetsPanel_png_14.getHeight());
    }

    {
        int x = 12, y = 444, width = 104, height = 30;
        String text (TRANS("Current preset:"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centredRight, true);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainSynthGui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainSynthGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider2.get())
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
    else if (sliderThatWasMoved == slider9.get())
    {
        //[UserSliderCode_slider9] -- add your slider handling code here..
        //[/UserSliderCode_slider9]
    }
    else if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider13.get())
    {
        //[UserSliderCode_slider13] -- add your slider handling code here..
        //[/UserSliderCode_slider13]
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
    else if (sliderThatWasMoved == slider25.get())
    {
        //[UserSliderCode_slider25] -- add your slider handling code here..
        //[/UserSliderCode_slider25]
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

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainSynthGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton.get())
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == openPresetBrowser.get())
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

<JUCER_COMPONENT documentType="Component" className="MainSynthGui" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="640">
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 1000 640" resource="case_main_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="-36 452 1072 224" resource="case_effects_png" opacity="1.00000000000000000000"
           mode="0"/>
    <GROUP>
      <IMAGE pos="324 60 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 148 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 148 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <IMAGE pos="324 180 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 268 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 268 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <IMAGE pos="324 308 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 396 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 396 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 388 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 316 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 316 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 388 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 260 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 188 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 188 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 260 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 140 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 68 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 68 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 140 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <TEXT pos="300 20 76 30" fill="solid: ffffffff" hasStroke="0" text="waveform"
          fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="36"/>
    <TEXT pos="180 20 76 30" fill="solid: ffffffff" hasStroke="0" text="divider"
          fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="36"/>
    <IMAGE pos="780 532 192 28" resource="levelIndicator_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="780 580 192 28" resource="levelIndicator_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="124 434 324 49" resource="presetsPanel_png" opacity="1.00000000000000000000"
           mode="0"/>
    <TEXT pos="12 444 104 30" fill="solid: ffffffff" hasStroke="0" text="Current preset:"
          fontname="Default font" fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="34"/>
  </BACKGROUND>
  <SLIDER name="ADSRVol.Attack" id="e686dcf41ff8f723" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="677 257 40 148" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRVol.Release" id="19e4bee93ea59267" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="769 257 40 148" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="cb473a02381fc25e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 16 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fc97faf8d67fc441" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="440 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="691b291fae04a656" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="674 231 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amplifier volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="OSC1.Volume" id="64cd19f61a09fafc" memberName="slider4"
          virtualName="Slider" explicitFocusOrder="0" pos="40 56 110 110"
          thumbcol="ff328f09" min="0.00000000000000000000" max="1.00000000000000000000"
          int="0.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Volume" id="5b6363a9393426b5" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="40 176 110 110" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="8b601101dbaa262f" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="8 48 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="main" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Verdana" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="51bdd6e7adc460f1" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="8 168 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC3.Volume" id="4f70b9dfb7d22046" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="40 304 110 110" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="98130ba7d077c9a8" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="8 296 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.CutoffFreq" id="b5ddfb611a52b59e" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="448 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="f2561c1e16491f99" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="464 144 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="cutoff" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.Q" id="32ff76d91d4131a8" memberName="slider8" virtualName=""
          explicitFocusOrder="0" pos="571 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="48e7205aa5fa5143" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="587 144 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f4b91f7fa1d6b033" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="445 231 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter cutoff" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="ADSRVol.Sustain" id="47081380203247f0" memberName="slider10"
          virtualName="" explicitFocusOrder="0" pos="723 257 40 148" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5eb3065fc48cd13c" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="676 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="efd670deeff2cfc7" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="723 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2f0c3fb14ccd3bbd" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="770 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ADSRFilter.Attack" id="b7c6f52502efa9c4" memberName="slider11"
          virtualName="" explicitFocusOrder="0" pos="442 255 40 150" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Release" id="a612ede8993ce62a" memberName="slider12"
          virtualName="" explicitFocusOrder="0" pos="532 255 40 150" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Sustain" id="908f631705334540" memberName="slider14"
          virtualName="" explicitFocusOrder="0" pos="487 255 40 150" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5979d19c19347180" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="442 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2461a2ec3f347fff" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="487 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2661e2cc57cd8376" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="533 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC1.Divider" id="f5dccfd9a2ecb31f" memberName="slider15"
          virtualName="" explicitFocusOrder="0" pos="168 72 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Divider" id="27fba3479be46b37" memberName="slider16"
          virtualName="" explicitFocusOrder="0" pos="168 192 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Divider" id="1a27da7fbd80f73" memberName="slider17"
          virtualName="" explicitFocusOrder="0" pos="168 320 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC1.Waveform" id="93ec2e964f54eaf6" memberName="slider18"
          virtualName="" explicitFocusOrder="0" pos="288 72 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Waveform" id="a72293c4b71df00c" memberName="slider19"
          virtualName="" explicitFocusOrder="0" pos="288 192 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Waveform" id="f512996821af000" memberName="slider20"
          virtualName="" explicitFocusOrder="0" pos="288 320 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="Filter.EnvelopeScale" id="ca2b8d2bd3d5be06" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="686 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="2744ff8c0fec8fa" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="702 144 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Envelope" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Wet" id="f02a07f8a8edc9" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="272 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="7d1d2877a9909ff4" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="288 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2e9d93e276cf4ffd" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="288 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="wet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ReferenceOscillator.Detune" id="179c2467b254d1c1" memberName="slider13"
          virtualName="" explicitFocusOrder="0" pos="136 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="3fd1e9e11b37a09e" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="152 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="detune" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="UnisonMixer.Volume" id="b64e5d44b2af789a" memberName="slider21"
          virtualName="" explicitFocusOrder="0" pos="24 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="0.50000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="2e34fa49a2369321" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="40 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Delay" id="fef0c0a17fbbe76b" memberName="slider22"
          virtualName="" explicitFocusOrder="0" pos="384 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="6a484cbc8a86f45b" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="400 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="time" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Feedback" id="e2542a2a711671ab" memberName="slider23"
          virtualName="" explicitFocusOrder="0" pos="496 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="3c2f6ccb4ec0e07b" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="512 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="feedback" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="829f72051db43315" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="16 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Unison" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="255cd420d010ae7b" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="576 400 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="retrigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8bc642808184d889" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="440 187 160 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Envelopes" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <SLIDER name="FilterCutoffLfo.Frequency" id="74ae55c52b8a875e" memberName="slider25"
          virtualName="" explicitFocusOrder="0" pos="848 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Volume" id="874163a44515b9" memberName="slider26"
          virtualName="" explicitFocusOrder="0" pos="848 168 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="9f7aaf74327a8d7e" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="824 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter LFO" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9b3c50d74fae9222" memberName="label27" virtualName=""
         explicitFocusOrder="0" pos="856 144 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="88875754444c615a" memberName="label28" virtualName=""
         explicitFocusOrder="0" pos="856 256 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amount" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Limiter.Volume" id="5b9bcdad8c2d7dc8" memberName="slider27"
          virtualName="" explicitFocusOrder="0" pos="656 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="46453cb5d64bc955" memberName="label29" virtualName=""
         explicitFocusOrder="0" pos="672 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="af11cbbd2c2e2ba0" memberName="label31" virtualName=""
         explicitFocusOrder="0" pos="672 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="Limiter.LevelChannel0" id="3f5e527f49885cf" memberName="component"
                    virtualName="" explicitFocusOrder="0" pos="786 546 180 8" class="LevelIndicator"
                    params=""/>
  <GENERICCOMPONENT name="Limiter.LevelChannel1" id="4df1d334df446ddc" memberName="component2"
                    virtualName="" explicitFocusOrder="0" pos="786 594 180 8" class="LevelIndicator"
                    params=""/>
  <TOGGLEBUTTON name="ADSRFilter.Retrigger" id="4bbf329f139fd5b1" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="587 357 40 40" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="new button" id="86c8cb20f64737f6" memberName="openPresetBrowser"
              virtualName="" explicitFocusOrder="0" pos="137 445 298 24" tooltip="no_background;&#10;&#10;"
              bgColOff="a45c94" bgColOn="181f22" textCol="ff0d0d0d" textColOn="ff000000"
              buttonText="unknown" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="7f2dcf690d640765" memberName="mBtnPresetNext"
              virtualName="" explicitFocusOrder="0" pos="560 448 88 24" buttonText="Next"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="731168668bd98da4" memberName="mBtnPresetPrev"
              virtualName="" explicitFocusOrder="0" pos="462 448 88 24" buttonText="Previous"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: icon_triangle_png, 2636, "../../Resources/icon_triangle.png"
static const unsigned char resource_MainSynthGui_icon_triangle_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,77,0,0,0,55,8,6,0,0,0,73,176,199,23,0,0,10,19,73,68,65,84,120,156,237,219,105,
140,93,117,25,6,240,223,157,153,206,116,10,45,20,40,149,157,34,75,217,203,142,2,162,40,75,2,161,178,40,42,46,132,77,212,196,15,198,175,126,85,48,24,18,52,209,15,44,202,34,184,68,69,68,81,20,48,130,5,148,
29,89,101,17,10,180,148,22,186,76,91,6,58,227,135,231,156,156,219,97,218,185,235,80,18,158,228,102,238,189,189,231,252,223,243,156,231,93,255,167,181,209,209,81,147,132,126,172,43,94,239,107,244,76,210,
58,115,112,14,6,38,105,189,78,99,90,253,135,201,32,237,96,92,137,81,204,197,1,147,176,102,39,113,28,62,93,255,69,55,73,171,97,27,124,3,219,99,9,46,196,135,139,215,251,1,95,196,119,241,31,236,47,33,166,
171,164,29,143,111,227,20,44,196,126,152,135,183,240,29,108,219,229,245,219,193,0,246,193,183,176,20,51,240,57,12,99,70,173,75,137,96,10,174,195,33,162,170,199,196,61,151,225,127,216,14,63,192,227,120,
169,27,6,180,137,139,240,49,156,137,159,202,245,188,137,95,97,143,110,221,233,79,73,44,216,21,111,99,11,108,142,87,113,16,126,141,19,176,135,220,197,77,9,123,226,60,156,40,182,31,136,35,241,20,206,199,
67,221,32,173,183,56,249,116,113,191,53,197,247,131,56,26,59,21,198,108,135,125,37,179,110,74,56,87,236,218,10,239,200,117,188,44,73,172,23,15,119,131,180,99,113,140,36,130,26,134,68,77,211,49,19,207,
225,147,120,86,178,210,30,197,247,155,2,230,138,75,246,73,56,89,43,196,205,194,231,139,207,253,157,38,173,134,11,132,164,190,98,145,209,226,251,81,137,13,215,74,221,51,75,200,250,4,142,232,176,29,173,
226,66,236,40,30,50,90,188,182,198,108,140,224,223,24,238,52,105,71,227,227,66,82,15,86,136,91,174,44,12,88,37,137,97,129,196,137,71,36,182,125,196,123,239,166,251,226,52,177,187,38,97,101,180,248,220,
43,201,236,151,116,62,229,159,39,234,233,149,210,162,108,153,70,133,184,231,241,209,186,127,159,94,252,219,225,56,185,195,182,52,139,175,226,67,42,149,173,86,17,56,140,235,177,156,206,146,118,184,212,
102,53,33,101,5,166,138,139,110,134,91,113,131,212,103,39,224,30,113,203,167,113,104,241,58,184,131,246,52,131,3,112,170,216,93,19,155,71,138,87,15,30,149,140,143,206,146,118,129,248,127,159,220,153,119,
10,3,70,138,207,87,225,10,233,12,14,46,126,183,66,98,219,58,236,37,238,81,235,160,77,141,226,107,214,87,217,144,42,145,13,75,28,94,85,254,184,83,164,205,147,186,166,60,231,10,169,170,215,72,208,191,75,
148,181,92,226,194,84,137,125,119,99,111,188,40,21,248,126,82,84,78,38,14,150,208,48,54,150,141,136,242,30,194,239,234,15,232,20,105,231,75,159,217,39,53,216,112,113,238,17,81,220,149,170,248,118,149,
148,29,115,165,224,125,25,91,22,134,206,145,148,223,223,33,187,26,193,215,85,45,93,169,50,42,55,189,166,238,59,116,134,180,125,229,78,245,90,63,150,173,145,204,185,0,183,213,253,254,53,33,174,71,178,237,
189,216,65,250,211,189,164,34,63,209,228,224,8,156,228,221,42,43,179,230,3,184,121,236,65,157,32,237,92,137,7,189,162,178,181,42,149,141,8,65,239,140,57,230,10,153,28,236,40,42,123,78,90,173,97,236,44,
69,239,52,221,199,69,226,33,189,222,29,203,214,74,223,185,102,236,65,237,146,182,39,230,171,50,230,74,85,198,28,148,98,240,214,113,142,123,19,63,42,222,31,133,7,11,227,95,197,110,197,107,126,155,182,77,
132,163,69,209,165,202,86,171,84,214,43,182,255,113,188,3,219,37,237,28,153,149,245,137,154,214,212,189,31,197,213,82,143,141,135,107,37,200,110,35,74,125,74,84,183,70,250,211,83,139,207,221,64,77,84,
182,149,202,43,214,90,191,245,219,160,237,237,144,54,7,103,88,63,150,13,168,84,246,16,254,176,145,227,135,112,153,144,123,132,116,7,51,36,230,237,42,196,157,217,134,125,27,195,177,82,83,246,20,175,213,
66,92,169,178,251,240,231,13,29,220,14,105,95,145,11,235,85,169,108,138,196,181,30,137,7,171,39,56,199,13,146,40,102,96,23,33,110,107,185,1,59,75,144,158,221,134,141,227,161,71,234,178,45,10,219,215,213,
217,89,175,178,225,141,157,160,21,236,32,42,40,85,182,74,165,178,169,82,65,223,212,192,121,222,198,165,133,225,135,226,153,226,60,75,139,53,118,144,233,66,39,113,156,12,9,234,99,25,85,198,252,167,245,
179,253,187,208,42,105,95,22,247,236,145,11,30,146,218,234,109,137,105,215,74,82,104,4,55,225,78,201,150,123,74,82,152,133,55,68,125,199,21,127,59,129,94,233,49,103,20,182,151,30,162,248,188,210,248,217,
126,61,180,66,218,108,156,85,24,208,87,44,212,47,42,27,192,19,234,250,180,6,48,130,139,133,240,121,50,14,239,145,238,97,118,241,250,66,11,118,142,135,227,165,19,217,144,202,238,198,237,19,157,164,21,210,
206,198,238,66,218,136,74,101,195,18,211,174,151,146,162,25,252,85,210,123,191,20,203,247,138,218,150,136,162,143,145,14,162,29,76,145,140,57,189,206,246,50,99,150,173,223,85,197,247,27,69,179,164,109,
35,119,189,79,165,178,41,146,154,251,241,95,252,162,201,115,150,184,68,238,252,254,120,93,92,100,181,36,134,89,178,157,214,14,78,146,218,172,188,230,82,101,229,36,227,78,252,189,145,19,53,75,218,89,210,
234,212,171,108,64,72,27,192,207,229,130,91,193,2,252,166,56,247,129,210,224,207,198,98,41,118,15,19,247,109,5,3,18,203,54,87,197,225,178,152,237,17,207,184,186,248,60,33,154,33,109,75,73,0,83,68,101,
67,170,214,105,64,6,140,55,52,113,190,241,112,137,196,178,185,226,46,171,84,187,89,219,226,75,45,158,247,100,153,14,151,177,172,190,1,239,193,29,18,207,26,66,51,164,125,70,198,56,101,5,189,74,213,50,13,
136,91,46,170,251,125,43,115,177,199,68,173,53,217,51,93,32,100,45,146,49,249,60,113,177,102,48,32,179,190,205,85,117,89,125,198,124,67,122,225,134,55,128,27,37,109,186,168,172,95,165,178,154,168,96,138,
108,248,94,55,230,152,86,119,161,47,21,23,223,93,46,112,105,113,174,65,85,76,237,109,226,124,243,101,170,92,222,196,85,117,239,107,146,132,238,107,198,192,70,73,59,77,70,194,229,239,235,27,243,169,82,
98,44,108,102,225,141,224,57,201,98,228,98,23,72,34,120,69,212,182,183,108,1,54,130,65,153,245,77,83,213,101,245,61,230,235,162,178,166,208,8,105,131,210,50,245,203,29,30,170,51,160,79,46,230,103,205,
46,60,1,46,147,155,176,163,40,249,21,85,198,222,86,18,82,35,143,109,157,46,157,70,25,203,86,170,182,19,107,82,249,63,208,172,113,141,144,118,138,140,132,203,133,235,55,76,6,241,91,188,208,236,194,19,96,
17,126,82,188,63,18,255,18,215,92,36,153,116,119,19,239,94,109,38,179,190,169,98,123,57,235,35,215,177,68,165,232,166,48,17,105,3,197,194,3,114,151,203,218,102,93,113,236,107,210,152,119,3,63,150,186,
111,182,196,212,231,10,59,70,229,145,134,211,108,124,80,121,134,36,142,114,146,177,66,165,50,248,19,30,110,197,176,137,72,59,81,228,93,198,128,55,229,206,173,22,149,221,36,77,118,55,176,12,151,23,239,
143,144,158,116,166,168,109,23,25,31,157,182,129,99,167,75,72,25,80,237,40,173,86,93,199,34,169,203,90,194,198,72,155,34,42,155,166,82,217,58,85,5,189,76,247,84,86,226,42,153,152,108,37,238,249,164,148,
14,195,50,252,156,111,252,65,229,233,178,179,85,78,148,223,80,109,39,142,226,22,121,204,171,37,108,140,180,227,228,14,151,11,47,19,117,149,42,187,69,230,252,221,196,144,60,199,70,98,219,227,162,162,37,
162,182,237,37,41,212,99,11,233,143,167,200,245,173,21,215,44,119,155,22,106,51,113,109,136,180,30,169,203,6,133,176,213,214,31,202,45,213,98,16,109,1,55,74,3,63,93,178,233,35,66,204,42,25,130,158,40,
25,181,196,169,210,81,148,30,177,72,85,212,174,147,221,165,167,219,49,104,67,164,29,37,207,92,148,227,223,197,170,88,54,32,169,186,165,32,218,2,222,194,247,229,130,15,145,11,158,42,202,223,81,146,194,
217,197,111,103,136,107,150,27,36,67,162,202,178,223,124,193,187,139,240,166,177,33,210,206,22,149,149,51,167,149,170,218,108,185,201,83,89,137,155,100,2,49,77,158,103,123,64,166,31,111,170,6,149,179,
101,246,191,147,106,92,245,148,106,56,186,86,246,44,158,111,215,152,241,72,59,72,42,241,181,197,130,47,138,186,134,36,78,252,13,247,183,187,112,147,88,135,239,201,197,31,84,216,84,83,13,42,183,198,55,
165,47,45,203,162,101,210,222,149,109,95,59,99,171,245,48,30,105,243,85,219,112,107,165,26,239,151,38,119,185,206,87,255,141,162,126,80,185,143,244,139,179,164,21,154,35,19,217,253,68,125,131,82,16,79,
151,36,176,84,18,87,71,30,138,30,75,218,110,210,99,46,21,87,120,76,181,61,55,34,35,148,166,154,219,14,227,98,81,210,126,18,224,223,86,13,42,119,146,253,211,119,164,232,94,34,106,124,69,226,96,35,27,61,
13,97,44,105,71,169,234,153,183,84,117,209,235,197,235,6,173,79,47,58,129,123,164,109,235,147,214,238,62,113,207,55,36,131,110,46,69,239,93,197,251,133,66,224,109,146,204,58,130,122,210,102,138,210,150,
138,188,31,21,181,189,38,146,191,203,123,171,178,18,151,136,242,231,138,93,43,138,239,123,165,20,233,145,152,183,92,108,127,70,60,164,99,168,39,109,158,72,123,105,241,247,113,33,237,121,145,250,239,53,
176,233,48,9,120,84,53,168,60,76,234,182,30,137,87,131,226,182,7,200,211,227,139,241,15,21,177,29,65,73,218,76,145,245,34,201,148,15,74,172,120,65,50,207,131,242,152,193,166,130,75,197,214,157,85,155,
213,247,74,232,184,67,92,118,137,16,247,68,167,23,47,73,155,35,228,188,38,217,233,54,81,213,75,197,119,183,219,52,84,86,226,89,201,226,207,10,105,215,72,50,120,90,58,132,27,229,9,164,23,85,227,160,142,
161,167,238,239,51,82,105,223,47,119,105,153,184,234,147,58,80,16,118,1,63,20,87,29,149,237,183,133,146,40,182,145,155,188,72,155,237,210,134,80,206,154,22,11,105,125,82,223,204,146,249,213,203,82,20,
110,74,42,43,241,178,100,210,133,248,172,60,10,177,24,127,17,251,187,162,50,66,82,173,88,120,102,177,80,143,184,234,99,242,0,202,11,221,88,184,67,184,89,50,230,214,82,118,92,46,165,198,84,99,158,147,237,
36,106,163,163,163,229,52,115,7,33,112,11,33,111,157,170,49,222,148,209,175,26,105,55,251,56,68,75,168,255,255,158,229,142,77,57,29,40,159,207,248,0,99,80,146,86,63,59,47,81,110,10,127,128,49,248,63,70,
115,141,185,214,149,104,24,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::icon_triangle_png = (const char*) resource_MainSynthGui_icon_triangle_png;
const int MainSynthGui::icon_triangle_pngSize = 2636;

// JUCER_RESOURCE: icon_square_png, 2597, "../../Resources/icon_square.png"
static const unsigned char resource_MainSynthGui_icon_square_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,84,0,0,0,56,8,6,0,0,0,99,93,223,224,0,0,9,236,73,68,65,84,120,156,237,156,91,
111,36,71,25,134,159,241,140,15,179,94,219,123,242,46,36,104,195,38,1,1,145,64,144,21,1,137,163,56,222,32,110,194,45,82,254,1,63,130,95,192,53,119,112,1,23,92,128,144,16,18,81,144,16,43,36,72,20,16,44,
40,32,129,96,179,75,112,246,224,216,51,182,199,115,200,197,91,239,214,55,181,61,99,103,229,233,89,164,188,82,171,187,171,107,186,171,223,254,78,245,85,213,52,70,163,17,21,88,2,14,129,202,139,239,98,50,
90,19,202,159,7,174,1,251,192,121,96,13,24,132,223,156,2,214,129,149,116,188,148,182,22,176,0,52,211,190,17,246,222,70,225,120,152,206,93,199,240,135,108,132,243,6,176,12,188,14,252,4,184,249,80,111,124,
114,104,2,23,128,55,98,97,73,232,71,128,77,224,235,192,54,208,1,206,166,31,183,128,54,34,242,92,42,63,157,182,101,50,169,174,27,201,44,9,43,201,133,113,242,168,184,182,13,188,8,188,6,236,188,163,87,63,
121,180,17,79,223,6,190,27,47,148,132,126,2,248,56,122,129,13,224,41,224,15,192,25,224,49,68,94,19,189,108,63,29,47,166,7,148,146,106,41,109,166,123,47,132,231,52,138,115,151,85,193,228,175,1,87,129,39,
129,111,2,191,0,126,206,124,204,210,243,232,163,126,0,184,8,236,165,115,90,136,144,139,192,45,68,202,87,128,55,17,129,159,2,254,9,92,34,75,84,27,189,220,25,68,240,106,218,150,211,189,22,201,170,239,13,
68,108,41,165,211,224,235,125,160,135,62,212,229,212,206,23,129,45,178,173,31,30,151,137,19,194,39,17,23,7,192,87,129,183,128,159,129,94,252,18,18,221,31,35,2,159,70,106,253,225,180,61,7,124,14,216,69,
36,174,147,165,177,69,150,70,19,86,165,226,48,89,181,203,122,101,249,62,208,77,229,231,129,47,2,31,69,54,253,14,240,91,224,251,192,221,99,146,241,176,184,140,4,231,175,72,120,190,6,188,4,92,73,109,108,
2,151,91,136,164,103,129,63,34,117,39,53,126,31,73,226,57,224,125,72,245,247,145,68,244,210,205,87,24,87,57,75,228,128,163,85,186,36,182,132,203,109,147,23,16,177,47,35,18,215,128,95,34,9,238,78,184,199,
73,226,42,153,212,39,129,247,144,181,114,13,105,244,11,45,68,202,102,218,174,144,165,173,159,126,240,52,122,185,1,82,247,165,244,114,46,27,166,173,180,145,229,62,30,143,166,28,151,251,1,82,169,1,82,177,
39,210,75,157,7,110,3,191,67,31,121,214,184,8,60,14,124,22,113,178,152,218,56,64,190,230,42,112,197,54,116,41,53,118,21,145,211,33,171,238,227,233,252,26,34,121,29,125,17,123,248,83,100,162,125,191,104,
63,167,145,27,81,69,248,2,210,160,123,200,228,116,144,154,191,146,218,241,107,100,178,154,204,222,142,174,33,71,221,65,194,103,126,6,192,199,144,246,30,56,188,25,146,85,171,151,110,240,12,34,249,52,242,
98,77,36,205,103,83,189,101,244,1,206,144,9,94,65,196,46,50,238,229,171,72,141,251,120,28,37,182,145,158,181,73,14,197,250,192,231,17,193,143,1,175,34,41,157,53,252,46,142,195,135,200,28,62,155,206,159,
1,94,137,132,46,135,31,158,70,33,65,59,149,223,67,146,176,138,68,223,4,250,186,73,140,225,146,49,228,120,222,125,146,212,218,252,12,82,59,94,74,219,85,36,169,229,253,103,137,6,122,87,82,123,46,32,158,
122,200,20,253,201,132,142,16,33,32,50,58,228,151,88,71,33,202,247,82,121,116,18,81,173,203,45,6,230,112,188,151,142,117,134,232,35,126,25,248,13,240,157,116,207,59,200,102,238,166,103,239,83,95,44,218,
64,66,68,122,246,34,18,168,253,84,222,136,132,198,70,217,30,153,212,30,10,75,246,103,223,230,49,236,160,16,233,38,89,229,218,40,234,216,64,230,166,140,38,102,9,119,147,33,127,252,49,219,29,85,62,98,80,
84,46,165,173,46,156,66,166,101,3,153,153,54,34,215,29,138,83,84,199,188,179,194,81,206,180,225,174,231,160,168,52,32,123,206,81,197,245,186,208,66,196,45,145,9,93,33,219,249,101,234,37,180,196,168,56,
30,86,73,232,66,58,111,33,34,221,111,175,187,123,7,250,168,167,194,126,153,236,4,219,136,236,67,234,85,251,169,176,115,233,51,158,229,137,42,63,36,7,240,117,195,29,15,103,186,220,233,112,132,177,129,122,
73,117,72,232,180,158,222,125,73,181,132,14,24,23,95,19,108,34,203,235,117,161,73,14,201,86,200,113,233,90,42,95,79,245,234,32,180,124,255,42,62,26,49,88,126,84,9,117,79,110,49,148,173,166,243,85,114,
71,100,214,152,212,195,27,131,9,141,125,97,219,76,152,191,202,187,123,231,216,119,68,182,167,209,28,204,11,101,244,51,138,132,150,113,168,77,193,144,7,37,184,46,68,50,157,144,137,93,90,231,15,234,66,201,
65,217,129,185,79,104,47,84,142,217,163,67,68,106,29,217,156,42,88,66,35,161,11,228,140,151,201,174,3,85,2,21,57,3,178,202,31,48,174,210,150,80,171,251,60,9,45,19,214,118,76,113,48,112,30,24,81,120,120,
200,132,246,24,15,3,6,100,66,77,234,188,96,66,45,161,78,152,120,95,87,96,95,18,88,230,114,129,252,149,251,161,130,55,159,155,212,121,32,38,91,140,152,18,60,150,231,157,65,155,140,24,187,143,32,143,9,185,
103,84,14,225,198,204,209,60,80,74,36,140,155,128,71,165,219,121,191,204,6,223,198,222,149,172,242,205,162,188,110,148,233,191,242,67,67,253,217,166,50,26,26,51,5,38,20,114,224,60,10,21,45,25,243,180,
161,240,32,121,211,70,87,103,133,105,94,222,24,58,73,218,32,103,236,99,92,21,195,149,121,161,180,147,243,178,157,80,65,32,227,82,59,138,18,186,204,131,211,95,98,15,101,30,152,54,230,84,85,103,150,136,
206,218,231,125,198,85,126,24,109,232,98,197,143,99,184,50,47,76,146,208,178,78,29,24,21,91,204,202,85,18,90,26,93,19,58,207,176,105,18,74,105,153,53,198,84,27,113,226,46,251,253,249,9,113,238,145,195,
167,24,216,207,203,86,69,84,13,246,217,33,213,137,24,143,59,225,238,121,85,99,42,239,134,89,66,203,116,157,7,243,31,85,212,169,238,81,224,134,40,185,29,249,26,120,28,125,68,30,242,136,93,77,75,71,159,
113,212,169,106,85,207,245,179,235,212,30,19,106,62,34,161,30,29,238,199,97,100,75,226,136,60,214,61,137,208,58,137,140,78,177,156,85,82,39,76,90,19,37,147,26,104,206,149,167,91,14,128,158,67,38,19,234,
36,201,30,227,54,163,174,172,248,36,52,138,253,3,73,137,26,48,32,231,60,246,144,70,239,32,59,122,128,56,218,247,215,119,197,30,121,86,134,69,121,200,124,9,173,202,238,148,215,234,192,33,121,162,71,151,
68,96,218,239,165,125,39,78,75,108,132,10,158,138,179,151,246,117,207,24,169,66,41,149,229,126,214,48,129,67,50,129,38,121,39,157,119,29,99,90,213,59,72,124,187,169,114,220,207,26,211,136,169,34,111,84,
113,125,150,232,145,157,80,135,236,103,58,200,150,238,2,219,30,230,112,198,254,0,73,164,165,178,147,110,180,91,67,195,39,37,31,34,153,101,247,143,80,54,107,68,73,244,44,238,61,68,178,231,174,238,182,194,
133,81,186,184,140,12,110,55,221,160,139,150,180,184,241,85,168,51,103,58,175,110,167,5,236,16,241,210,2,254,139,200,236,162,169,150,123,45,178,71,63,36,51,223,165,96,126,202,131,234,72,66,71,251,25,7,
20,125,173,142,143,105,27,186,143,166,119,46,2,255,67,234,222,65,66,55,108,33,53,55,153,29,52,162,120,27,17,109,251,48,205,134,206,242,133,162,186,59,22,190,6,124,1,45,26,128,60,79,179,199,228,185,170,
229,189,170,158,49,13,67,242,108,191,22,146,70,207,4,188,135,56,220,5,150,220,59,234,35,66,111,147,153,183,100,110,51,191,228,136,177,136,214,75,181,128,63,3,159,70,47,232,216,249,75,233,248,28,121,13,
64,156,93,29,151,254,68,210,125,236,56,188,10,78,176,95,74,117,54,208,106,190,14,34,115,11,9,221,5,96,39,206,109,50,161,109,100,27,182,201,118,227,164,199,190,99,128,126,148,185,112,183,248,102,106,227,
38,121,214,93,3,205,30,121,2,145,231,117,169,94,242,227,101,47,30,59,43,23,163,69,66,221,174,104,194,162,35,60,147,218,240,15,224,247,233,89,203,104,145,220,91,192,251,129,59,118,74,222,182,16,161,221,
116,188,203,209,42,255,48,56,110,79,39,118,235,188,0,236,223,169,77,158,44,118,47,149,123,25,208,18,121,101,223,42,89,82,45,165,222,195,248,148,246,56,94,21,143,93,207,235,145,6,192,123,145,154,191,154,
158,255,6,114,84,91,173,208,232,46,146,208,215,209,215,191,69,14,11,102,181,74,109,146,100,58,62,118,12,60,66,246,235,0,169,86,3,248,27,240,25,224,239,104,138,248,38,122,225,53,198,151,250,88,229,227,
232,105,85,87,118,82,194,199,235,164,156,157,95,64,115,254,247,83,217,21,164,205,59,192,237,22,146,196,3,178,122,223,74,55,234,32,34,239,161,133,2,117,194,47,181,141,150,2,122,6,30,104,185,228,6,240,31,
164,214,31,66,139,126,55,200,203,122,74,21,63,202,33,77,202,92,89,90,157,133,115,79,242,27,169,236,185,84,182,132,76,65,191,133,200,234,165,198,223,37,27,235,109,114,88,48,15,66,27,72,99,126,4,124,11,
125,232,221,84,182,159,218,245,38,112,35,213,61,71,158,123,191,68,86,115,19,59,205,243,71,148,101,195,244,172,184,154,239,167,233,218,117,36,144,47,163,15,75,11,145,232,222,210,46,82,151,195,84,241,46,
50,1,243,26,83,26,164,54,44,33,226,236,8,174,35,9,189,129,200,93,33,59,214,131,240,123,231,118,75,103,52,45,227,95,69,178,39,252,190,134,28,211,37,164,17,155,104,221,41,36,205,118,96,223,79,5,91,228,73,
172,118,72,183,152,15,156,151,5,217,201,127,161,197,171,215,145,253,108,35,45,242,148,112,175,22,217,64,171,253,236,144,218,228,101,231,11,197,22,137,173,26,97,53,156,43,246,179,154,169,61,191,66,31,117,
68,210,98,143,35,17,26,103,175,110,207,186,245,142,169,56,89,44,160,21,115,77,164,238,61,228,221,207,35,97,184,136,136,62,139,164,104,29,133,56,27,100,111,95,46,151,156,100,2,168,56,142,179,105,62,136,
248,184,129,156,208,83,104,21,247,15,81,168,73,35,252,137,203,5,228,136,206,145,165,210,163,161,243,204,135,46,32,162,218,168,119,116,145,28,139,122,130,198,58,121,29,127,155,241,117,252,211,122,79,70,
213,121,85,18,166,3,252,5,248,1,137,192,18,145,80,175,75,106,145,231,131,54,138,243,119,113,4,34,161,147,122,44,117,102,146,254,239,241,54,122,204,60,169,153,94,5,181,0,0,0,0,73,69,78,68,174,66,96,130,
0,0};

const char* MainSynthGui::icon_square_png = (const char*) resource_MainSynthGui_icon_square_png;
const int MainSynthGui::icon_square_pngSize = 2597;

// JUCER_RESOURCE: icon_saw_png, 3058, "../../Resources/icon_saw.png"
static const unsigned char resource_MainSynthGui_icon_saw_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,84,0,0,0,56,8,6,0,0,0,99,93,223,224,0,0,11,185,73,68,65,84,120,156,213,220,107,144,
158,103,89,7,240,223,187,231,221,236,210,52,77,147,130,77,10,45,165,158,40,83,116,20,15,131,95,58,21,29,245,11,194,140,56,227,8,56,142,56,30,112,70,177,206,56,34,95,4,42,135,162,180,72,29,161,150,193,
129,138,136,163,83,80,138,21,170,88,42,130,90,64,177,145,52,89,154,83,147,54,73,147,236,102,55,187,235,135,255,125,247,121,186,36,217,211,187,239,110,174,153,119,158,125,158,247,125,159,231,186,255,247,
117,248,95,215,125,191,219,89,88,88,112,137,201,53,56,134,83,27,173,72,145,231,226,96,61,233,219,64,69,86,35,175,199,207,97,6,253,27,172,203,56,126,23,55,181,47,94,74,128,254,30,126,25,159,198,235,112,
197,6,234,210,143,15,226,165,56,142,159,170,111,92,10,128,118,240,86,177,206,255,193,111,226,197,216,142,239,197,96,143,245,185,18,127,132,91,112,24,111,192,243,112,53,118,117,46,129,24,250,110,188,17,
95,145,184,217,135,47,227,57,120,0,119,99,182,71,186,140,224,94,252,36,254,15,79,96,8,247,11,208,119,108,118,11,189,85,192,156,18,75,28,197,60,158,47,201,224,62,189,117,253,223,17,48,167,197,115,174,194,
254,162,207,1,28,220,204,128,190,78,92,125,6,147,2,228,9,12,227,133,216,43,9,97,172,71,250,252,24,126,171,232,113,174,60,247,105,236,198,203,112,4,47,220,172,128,254,4,238,20,229,191,46,174,118,14,151,
225,90,60,130,173,216,134,129,30,232,115,53,110,23,15,121,74,172,243,28,118,136,171,239,197,119,96,108,51,2,250,50,124,72,44,241,127,5,176,179,226,102,215,72,220,218,129,61,152,192,122,39,129,126,188,
11,47,194,201,114,222,39,22,186,19,167,203,231,30,197,248,102,3,244,219,37,232,111,21,192,72,194,57,132,239,20,66,63,134,207,137,149,108,23,224,215,83,126,29,175,146,73,61,43,222,50,93,244,56,81,174,61,
138,45,120,206,102,2,244,185,2,230,46,60,38,64,46,224,113,113,167,251,36,57,157,46,239,77,200,32,214,19,208,31,22,254,187,32,224,141,11,239,220,34,86,58,128,175,150,107,151,97,100,179,0,58,129,143,8,191,
124,92,64,235,147,12,122,131,88,192,14,137,91,179,50,160,45,50,192,161,117,210,105,187,240,205,203,36,110,142,225,140,184,252,81,161,110,131,69,167,43,132,198,13,111,6,64,7,241,1,188,92,50,229,83,229,
218,36,174,19,197,247,227,147,82,51,87,203,156,192,229,214,47,41,189,77,88,196,211,18,94,58,226,234,87,22,61,199,197,221,135,37,68,237,176,73,44,244,61,248,105,1,242,176,40,120,64,170,143,73,169,142,102,
240,13,177,146,65,141,133,110,181,62,53,253,235,241,90,241,134,41,77,118,191,18,95,20,247,63,42,241,180,83,116,217,129,129,94,80,142,139,201,155,165,116,59,133,111,138,226,135,196,125,206,224,223,37,57,
61,32,220,115,72,44,114,84,192,157,211,253,242,249,37,248,131,114,223,99,226,9,53,70,238,17,111,121,66,64,28,44,159,27,149,201,237,108,164,133,190,1,191,47,110,179,183,40,117,84,163,224,253,98,21,119,
139,123,13,11,160,125,229,56,36,22,210,205,49,76,224,189,98,109,79,105,50,122,71,56,241,63,151,243,227,18,110,148,247,134,138,142,243,27,5,232,43,37,224,207,73,194,25,150,1,156,21,87,255,27,201,172,239,
40,159,175,96,14,137,139,15,104,0,237,166,188,69,50,251,25,1,176,79,18,228,21,210,229,58,129,247,139,101,142,20,29,59,69,167,65,204,110,4,160,47,151,214,215,128,16,247,65,25,192,113,92,47,212,105,4,111,
151,216,169,124,102,168,28,59,173,243,110,102,248,87,225,87,100,146,79,137,75,31,23,107,253,87,73,78,127,42,160,86,16,23,90,71,152,238,53,160,223,45,244,104,66,192,236,8,104,135,132,50,125,68,6,242,135,
162,120,149,129,242,170,128,182,207,187,33,215,139,55,12,138,167,140,75,85,52,46,9,114,15,62,37,222,84,227,123,95,75,151,57,161,79,83,189,76,74,187,240,151,66,224,191,81,20,88,144,100,116,19,62,46,177,
243,61,101,16,109,233,215,184,122,167,245,119,55,12,98,184,60,115,183,76,226,160,100,247,185,242,140,207,73,161,113,111,249,252,160,100,254,74,165,250,202,56,102,113,182,87,22,186,21,31,149,210,114,82,
102,184,83,254,126,49,254,190,156,127,80,154,33,139,165,79,6,210,175,25,68,5,121,173,181,252,173,210,73,154,22,80,6,197,189,119,72,220,60,141,59,90,159,175,177,115,88,226,236,188,134,11,159,235,5,160,
195,184,7,63,32,174,221,38,238,47,194,23,100,0,159,192,191,93,224,30,181,33,209,215,58,111,199,177,213,202,143,226,77,2,202,73,77,220,220,46,148,173,178,140,99,173,239,140,105,18,98,109,229,141,10,168,
51,189,112,249,59,165,41,123,76,42,140,97,113,243,221,18,155,38,37,232,255,195,69,238,177,24,208,10,102,199,234,1,253,54,113,245,177,162,219,22,177,198,81,60,41,53,250,131,120,120,209,247,42,160,195,18,
22,148,239,12,233,65,150,127,171,52,138,79,74,141,62,34,86,186,77,102,255,63,165,18,186,247,66,55,40,210,231,217,128,214,132,80,227,215,74,165,182,228,110,16,239,232,23,112,102,4,176,127,44,122,222,115,
158,239,86,234,54,162,1,180,38,200,153,245,4,244,141,18,159,166,176,79,102,241,9,153,217,1,124,182,156,191,127,25,247,234,91,116,92,156,16,86,42,191,138,87,107,250,172,195,146,144,118,10,152,211,18,55,
231,206,243,221,10,104,109,140,84,125,250,173,35,109,122,13,222,41,65,126,143,134,184,207,73,61,252,119,229,189,119,47,243,126,109,32,235,121,5,117,126,133,186,253,160,148,188,11,26,106,116,92,200,251,
87,165,159,240,23,226,81,231,147,129,242,204,126,1,180,79,195,88,214,37,203,223,44,4,184,163,169,130,78,137,107,93,43,212,105,16,183,105,102,120,41,105,3,216,150,149,198,208,109,248,99,97,29,79,137,215,
76,9,72,103,240,37,73,70,15,44,161,203,140,198,59,6,202,61,230,48,213,109,64,95,42,179,59,38,244,167,95,220,231,168,116,220,63,42,22,113,155,149,109,165,169,241,179,2,218,6,119,37,22,250,182,162,99,125,
246,130,128,177,85,122,7,79,138,49,44,37,181,47,90,43,165,41,1,249,76,55,1,189,86,146,203,149,226,230,11,50,107,7,112,35,254,74,50,233,237,18,59,87,34,139,93,190,45,203,181,208,215,74,91,110,86,0,25,213,
196,205,7,203,181,59,37,174,94,76,58,229,51,253,154,122,127,182,188,186,198,67,183,11,152,215,73,123,107,166,60,120,191,16,247,251,196,53,238,146,13,2,43,149,234,218,109,11,109,95,95,74,110,20,198,209,
39,241,114,66,226,231,101,82,181,237,19,30,188,28,221,218,73,105,190,60,127,72,140,103,174,27,60,116,12,31,198,247,72,71,253,100,121,192,99,82,25,61,40,110,255,49,233,190,175,70,46,20,59,23,44,237,242,
227,210,217,218,41,113,115,184,232,163,124,255,243,66,221,254,118,153,186,140,73,236,175,73,105,190,60,99,94,23,44,180,79,172,238,22,113,227,163,69,225,73,217,77,241,223,66,230,63,227,226,129,126,41,57,
159,69,214,227,82,128,190,25,63,162,105,201,245,75,12,189,66,138,137,83,120,223,10,116,25,41,175,202,93,59,154,205,22,115,107,5,244,29,248,89,113,163,67,229,65,143,107,214,93,190,38,228,253,227,107,124,
206,98,122,180,96,121,22,250,74,252,154,111,109,201,237,196,67,194,60,238,42,199,229,74,109,29,182,105,211,96,209,229,220,90,92,254,183,241,27,82,174,237,151,32,127,68,102,107,94,202,201,67,178,0,183,
86,105,91,102,5,112,41,64,175,19,46,60,36,222,83,91,114,91,36,52,61,42,22,250,200,10,117,169,152,117,52,155,212,250,138,30,171,46,61,127,94,40,200,89,9,228,35,66,57,22,132,130,124,82,128,190,125,149,247,
63,159,180,93,189,2,121,33,64,135,36,110,94,35,153,124,72,211,146,27,146,150,220,62,233,191,174,84,218,241,188,174,105,205,40,75,220,171,1,244,199,37,230,204,75,147,120,88,92,230,180,52,60,62,86,30,114,
155,149,87,49,23,147,118,150,175,64,206,93,224,25,111,42,122,214,150,220,144,88,231,14,225,155,139,91,114,43,145,218,97,170,122,244,73,124,158,177,138,90,254,251,101,223,209,136,36,156,90,37,28,149,140,
94,59,238,183,149,235,221,148,90,87,183,93,127,193,183,214,219,55,75,56,170,187,245,198,53,75,192,95,150,206,210,221,69,231,213,200,140,103,179,132,126,1,244,172,21,2,122,189,0,182,77,104,6,153,169,3,
178,244,90,171,160,119,137,251,119,83,218,73,169,13,228,156,103,243,208,231,73,152,25,215,180,228,158,214,244,18,254,75,86,46,191,176,74,61,106,172,172,82,93,126,78,41,8,150,11,232,78,1,236,249,18,204,
103,100,32,251,5,204,79,20,165,223,87,174,117,91,218,177,178,118,201,231,90,127,147,177,188,29,223,37,150,89,105,205,89,1,248,126,105,124,252,249,26,244,24,20,175,172,171,173,231,100,178,135,149,4,181,
28,64,199,165,47,120,147,84,21,39,203,247,246,201,162,219,103,202,205,62,44,219,182,215,67,218,174,221,6,116,174,117,253,151,132,194,77,151,215,136,80,164,171,138,142,83,46,220,146,91,174,212,198,242,
104,57,175,4,127,139,101,2,218,47,11,255,183,8,128,71,202,77,247,201,78,142,47,137,107,125,74,42,142,245,146,5,77,34,152,107,157,207,201,4,223,40,187,228,72,184,153,40,199,109,194,133,15,138,135,93,168,
37,183,92,169,141,228,10,104,45,20,198,20,64,151,226,161,111,193,207,136,27,239,147,218,119,191,196,170,125,210,81,122,68,106,245,245,148,106,145,245,239,10,232,25,9,71,239,44,199,131,50,184,83,154,78,
215,195,248,15,105,28,175,85,6,202,125,219,128,214,157,35,51,92,220,66,127,17,191,80,148,252,90,81,244,155,2,234,180,16,247,125,210,174,91,111,153,215,144,232,26,51,103,101,16,183,202,110,143,218,193,
90,144,68,180,77,60,231,73,252,89,151,244,24,88,116,108,119,236,103,218,111,44,150,87,72,76,58,46,153,241,42,113,151,33,1,246,222,114,131,63,233,146,162,75,73,155,251,85,171,152,145,181,254,221,194,43,
79,8,53,58,32,201,243,1,177,212,187,52,52,103,173,82,91,118,109,169,222,50,205,249,45,244,37,178,145,107,22,255,36,1,247,128,4,245,171,37,65,45,72,108,237,165,44,174,148,70,101,195,86,93,223,191,92,38,
253,114,169,222,246,200,82,203,106,218,133,23,146,126,97,13,85,151,74,231,206,42,188,123,49,160,187,164,161,208,145,152,179,69,92,233,152,16,247,59,196,170,239,212,187,31,91,209,108,108,168,60,112,30,
47,16,143,169,251,219,15,23,157,58,178,65,225,81,221,143,237,117,169,100,49,160,211,206,3,232,118,137,69,131,66,124,251,37,131,78,10,101,170,117,249,221,122,255,75,224,154,12,234,74,231,88,121,213,173,
227,51,146,44,119,73,56,58,161,59,77,153,197,82,249,102,221,83,117,68,51,201,207,74,74,99,210,157,25,21,174,121,74,102,162,254,184,234,189,154,221,29,237,93,20,189,146,218,33,175,189,199,237,26,82,61,
33,187,138,95,32,46,126,72,42,186,245,152,244,186,67,132,120,196,231,5,228,186,31,234,153,55,199,100,87,217,100,81,112,86,50,248,205,50,227,147,18,147,14,175,131,146,203,145,170,103,109,68,204,139,139,
141,200,42,229,229,226,226,159,21,35,56,223,254,168,110,200,136,128,122,86,146,245,105,153,236,103,86,1,218,139,95,95,23,16,167,100,125,122,55,254,165,117,253,160,141,147,62,81,250,72,209,229,73,25,216,
105,205,70,133,123,196,58,215,178,50,176,148,212,137,156,151,230,74,191,76,224,49,153,216,103,98,211,241,162,228,13,229,205,171,101,6,14,10,161,94,143,250,124,37,210,209,108,72,120,76,72,252,156,128,185,
93,58,96,79,88,125,211,99,185,114,84,10,153,237,154,223,157,214,21,211,135,104,118,65,204,73,166,172,193,245,43,154,202,104,165,75,190,235,33,39,53,155,184,206,148,215,23,101,96,127,45,86,178,71,247,91,
134,139,101,175,116,173,190,175,28,107,131,104,91,253,192,128,166,113,59,95,222,28,208,172,92,110,6,48,73,85,246,67,162,223,180,184,246,81,153,248,135,36,41,28,233,129,30,149,192,79,138,103,63,44,60,247,
152,210,190,171,255,128,96,45,219,2,123,37,175,150,255,224,112,78,243,251,249,189,194,53,143,232,157,254,3,210,203,152,16,70,52,181,248,77,61,84,102,45,114,88,6,64,214,172,102,37,187,247,154,121,156,115,
145,156,114,41,252,139,140,42,163,154,53,241,141,100,28,23,149,255,7,63,70,123,176,84,162,0,121,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::icon_saw_png = (const char*) resource_MainSynthGui_icon_saw_png;
const int MainSynthGui::icon_saw_pngSize = 3058;

// JUCER_RESOURCE: case_main_png, 65490, "../../Resources/case_main.png"
static const unsigned char resource_MainSynthGui_case_main_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,244,0,0,1,119,8,6,0,0,0,83,242,185,252,0,0,32,0,73,68,65,84,120,156,236,189,75,
186,36,171,206,44,8,249,221,238,157,64,141,163,90,53,133,154,255,16,106,4,183,255,83,141,112,192,100,50,9,240,240,88,143,220,169,115,114,47,127,128,16,32,100,146,28,247,168,255,207,255,253,255,254,127,
165,148,255,93,254,67,84,197,181,6,247,26,252,229,242,243,90,45,173,180,82,235,188,219,218,235,46,94,155,247,74,169,138,169,106,100,147,144,157,191,186,102,24,245,81,178,192,243,132,125,239,103,107,190,
72,43,112,175,218,242,178,29,117,223,136,89,93,255,55,68,244,50,139,186,253,124,103,122,148,190,180,18,207,4,151,87,164,244,144,239,241,177,234,67,84,239,93,90,169,8,202,160,174,225,245,213,24,71,227,
155,213,81,124,117,223,55,102,163,145,220,213,220,10,117,238,50,7,179,252,85,192,148,219,25,196,149,221,104,165,180,90,74,109,246,214,249,132,191,26,179,213,44,3,213,215,72,23,93,31,162,115,110,42,180,
45,211,222,42,91,107,174,181,117,199,51,125,85,235,247,169,181,243,65,250,63,255,171,148,242,127,125,183,20,95,69,74,225,148,14,85,250,59,38,23,21,165,94,128,210,154,4,112,172,104,64,137,139,46,80,39,
91,147,118,173,79,70,10,232,144,151,228,137,0,187,208,92,101,184,42,241,64,195,213,176,226,138,144,81,153,227,22,13,147,90,116,53,40,175,108,98,47,219,68,221,38,234,238,80,11,254,70,115,153,233,165,42,
159,201,149,201,121,210,7,229,40,168,118,179,246,121,92,79,228,81,124,20,191,200,217,81,203,77,59,63,182,164,156,171,58,239,14,25,174,53,141,237,85,234,232,112,90,89,46,33,32,226,143,25,43,44,23,121,67,
93,190,171,12,45,33,67,185,14,84,81,198,66,94,54,246,33,239,29,111,184,151,3,38,108,87,106,245,246,22,207,13,144,87,49,176,212,28,158,179,109,136,156,80,33,230,79,162,255,253,191,74,41,255,167,252,135,
34,244,200,155,70,82,139,122,148,151,209,247,75,169,94,10,23,180,153,185,131,9,173,20,167,129,89,202,64,192,200,82,230,66,49,205,119,199,35,114,191,203,92,31,224,215,140,131,40,58,239,134,174,93,141,254,
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

const char* MainSynthGui::case_main_png = (const char*) resource_MainSynthGui_case_main_png;
const int MainSynthGui::case_main_pngSize = 65490;

// JUCER_RESOURCE: case_effects_png, 12243, "../../Resources/case_effects.png"
static const unsigned char resource_MainSynthGui_case_effects_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,48,0,0,0,224,8,6,0,0,0,245,229,150,42,0,0,32,0,73,68,65,84,120,156,237,221,205,
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

const char* MainSynthGui::case_effects_png = (const char*) resource_MainSynthGui_case_effects_png;
const int MainSynthGui::case_effects_pngSize = 12243;

// JUCER_RESOURCE: levelIndicator_png, 731, "../../Resources/level indicator.png"
static const unsigned char resource_MainSynthGui_levelIndicator_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,228,0,0,0,64,8,6,0,0,0,203,84,4,181,0,0,2,162,73,68,65,84,120,156,237,221,
203,106,83,81,20,128,225,117,210,180,73,154,106,132,182,70,139,104,65,161,180,79,80,156,249,20,190,137,83,117,234,155,248,56,34,14,138,83,5,193,32,148,10,22,39,219,129,141,189,229,102,47,201,74,251,125,
16,72,78,86,78,246,32,228,103,39,129,84,91,59,219,37,0,72,167,68,255,237,185,138,136,147,111,213,71,183,207,28,170,162,154,218,218,184,122,181,165,230,210,172,215,0,112,203,156,222,7,149,82,142,142,150,
40,229,248,18,229,104,244,212,245,163,199,159,221,74,149,227,243,48,159,234,237,78,59,34,34,126,31,254,158,241,82,0,230,84,41,17,213,184,221,105,137,211,189,28,28,229,201,158,111,242,49,123,230,249,81,
143,136,16,101,128,75,24,27,227,136,136,106,178,177,43,36,198,243,165,214,191,210,238,180,195,199,215,0,48,27,181,147,55,68,25,0,102,163,118,246,128,40,3,192,244,157,11,114,132,40,3,192,180,13,12,114,
132,40,3,192,52,13,13,114,196,223,40,247,127,129,13,0,92,159,250,184,129,207,123,123,113,240,227,96,26,107,1,128,27,105,107,103,123,236,204,200,29,50,0,48,29,130,12,0,9,8,50,0,36,48,246,59,228,97,222,
124,123,59,217,220,131,215,23,125,10,24,203,235,144,89,243,26,188,93,202,203,87,19,205,85,239,223,253,247,185,237,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,
0,72,64,144,1,32,129,106,247,197,243,50,106,224,211,135,143,254,237,9,0,46,193,191,61,1,192,156,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,
64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,
1,65,6,128,4,4,25,0,18,16,100,0,72,160,62,234,206,198,114,35,214,31,175,199,198,179,141,105,173,7,0,110,156,78,171,19,251,223,247,71,206,12,13,114,99,185,17,247,214,59,241,240,233,110,44,44,216,72,3,192,
69,253,250,121,24,139,141,197,232,125,233,13,157,25,88,218,126,140,91,119,151,197,24,0,46,169,181,210,140,238,147,110,172,61,90,27,58,115,174,182,98,12,0,87,111,92,148,79,21,87,140,1,224,250,140,138,242,
191,234,138,49,0,92,191,97,81,174,69,136,49,0,76,211,160,40,215,197,24,0,174,81,53,248,112,243,78,51,238,111,118,163,68,68,239,107,47,234,171,27,171,177,212,90,18,99,0,184,2,101,72,128,7,105,173,52,163,
187,217,141,218,66,45,254,0,69,210,101,25,211,69,99,163,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::levelIndicator_png = (const char*) resource_MainSynthGui_levelIndicator_png;
const int MainSynthGui::levelIndicator_pngSize = 731;

// JUCER_RESOURCE: presetsPanel_png, 26127, "../../Resources/presets panel.png"
static const unsigned char resource_MainSynthGui_presetsPanel_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,207,0,0,0,107,8,6,0,0,0,136,96,111,102,0,0,32,0,73,68,65,84,120,156,237,189,
77,175,110,75,146,30,20,177,246,189,85,93,85,237,182,27,155,182,91,22,6,201,3,144,44,89,12,122,80,98,192,144,63,192,128,191,192,47,96,206,140,33,63,171,36,44,24,32,89,32,4,18,178,37,91,106,76,91,77,87,
215,215,221,111,48,200,140,136,231,121,50,215,187,247,62,231,158,211,85,213,25,85,251,158,119,173,149,43,51,50,50,190,50,50,50,151,71,132,125,34,184,252,29,56,112,224,192,129,3,7,14,28,56,240,219,12,33,
127,31,134,111,62,88,62,157,228,107,254,189,204,58,94,236,56,208,7,14,28,56,112,224,192,129,3,7,126,123,33,204,236,213,204,190,155,255,62,230,95,62,123,23,124,196,121,118,27,78,242,139,153,125,11,127,
63,156,255,30,231,249,192,129,3,7,14,28,56,112,224,192,111,43,132,153,253,198,204,126,53,255,205,191,215,249,247,46,7,250,61,206,115,166,101,124,107,102,63,48,179,63,152,127,63,152,239,159,200,243,129,
3,7,14,28,56,112,224,192,129,223,118,192,200,243,119,102,246,107,51,251,229,252,251,181,13,71,250,205,116,14,127,35,231,57,163,205,223,154,217,143,204,236,39,214,142,243,139,141,212,141,147,247,124,224,
192,129,3,7,14,28,56,112,224,183,29,48,215,249,97,195,145,78,7,250,231,102,246,11,235,72,244,173,131,124,23,121,214,104,115,58,206,63,154,247,208,105,62,112,224,192,129,3,7,14,28,56,112,224,183,29,208,
119,197,189,123,223,90,103,83,252,194,222,136,66,63,115,158,127,96,102,63,182,118,154,127,96,157,219,124,156,230,3,7,14,28,56,112,224,192,129,3,191,171,128,153,19,121,16,70,238,229,251,185,153,253,181,
13,39,250,93,206,115,70,156,127,108,102,127,52,255,253,214,78,94,243,129,3,7,14,28,56,112,224,192,129,223,47,72,7,58,83,146,115,47,159,217,112,156,23,7,90,157,231,204,113,254,161,141,136,243,143,103,101,
153,166,113,224,192,129,3,7,14,28,56,112,224,192,239,27,164,15,156,254,46,30,105,71,57,208,215,230,197,111,173,79,212,192,252,230,3,7,14,28,56,112,224,192,129,3,7,126,95,33,83,56,212,23,38,63,248,27,121,
1,79,213,248,161,157,84,141,3,7,14,28,56,112,224,192,129,3,127,123,64,179,48,190,179,113,50,71,165,111,124,35,5,127,96,124,170,198,113,156,15,28,56,112,224,192,129,3,7,14,252,109,2,12,40,127,103,242,33,
21,76,219,120,177,39,33,234,3,7,14,28,56,112,224,192,129,3,7,254,150,128,166,50,231,38,194,138,60,99,126,199,103,111,16,252,233,79,127,250,47,158,61,199,15,179,188,241,145,150,3,7,14,28,56,112,224,192,
129,3,7,10,220,125,251,123,7,63,251,217,207,254,236,83,155,177,225,15,231,215,181,127,97,115,3,161,71,132,219,112,162,255,208,204,254,120,254,251,141,125,130,243,124,231,52,71,68,253,229,53,254,123,224,
192,129,3,7,14,28,56,112,224,192,123,33,157,102,252,55,255,118,240,137,78,116,216,112,152,255,202,204,254,98,254,251,157,71,68,122,213,127,100,195,121,254,145,65,104,250,189,160,142,51,58,204,143,199,
131,238,109,177,59,142,244,129,3,7,14,28,56,112,224,192,129,27,184,115,140,209,105,190,174,235,214,145,254,68,7,250,213,70,212,249,47,204,236,47,205,236,215,30,17,47,54,28,230,63,182,225,64,103,218,198,
187,1,29,103,116,152,119,17,231,187,168,243,113,158,15,28,56,112,224,192,129,3,7,14,220,129,58,195,26,117,198,223,238,78,142,116,194,39,56,208,121,210,198,95,218,112,160,127,225,17,241,141,141,19,54,254,
190,125,66,202,6,58,206,233,48,63,30,143,37,218,124,151,186,113,224,192,129,3,7,14,28,56,112,224,192,71,97,231,48,107,20,58,29,232,235,234,184,240,7,29,104,76,221,248,119,102,246,243,116,158,255,208,216,
121,126,23,168,227,156,127,119,209,103,77,219,56,14,244,129,3,7,14,28,56,112,224,192,129,143,130,110,26,212,63,140,58,167,19,253,25,14,52,58,207,127,245,201,206,243,51,199,249,206,137,78,216,57,205,199,
145,62,112,224,192,129,3,7,14,28,56,112,7,187,156,103,117,162,119,78,243,247,224,64,127,190,243,252,30,199,25,175,205,78,190,243,129,3,7,14,28,56,112,224,192,129,207,131,247,228,61,239,28,230,207,116,
160,201,121,126,119,138,198,14,52,178,140,142,243,179,148,141,147,186,113,224,192,129,3,7,14,28,56,112,224,83,96,119,206,51,166,108,60,30,143,197,201,190,174,171,238,71,196,155,231,67,63,109,255,163,145,
103,141,58,191,190,190,46,78,243,179,188,103,179,147,182,113,224,192,129,3,7,14,28,56,112,224,99,240,44,109,227,61,249,206,249,247,242,242,242,209,232,243,247,19,121,214,220,230,93,186,134,58,207,249,
222,113,148,15,28,56,112,224,192,129,3,7,14,124,4,118,254,99,58,201,25,77,70,103,58,163,205,88,54,163,207,207,62,168,242,22,124,150,243,156,157,184,75,209,216,221,223,213,115,224,192,129,3,7,14,28,56,
112,224,192,123,0,157,222,244,47,241,222,227,241,176,235,186,150,192,237,227,241,176,151,151,151,237,59,31,129,207,118,158,119,206,242,46,117,3,223,195,127,15,28,56,112,224,192,129,3,7,14,28,120,47,164,
15,137,81,230,244,57,51,29,35,125,79,205,117,126,22,208,125,47,124,146,243,188,139,42,223,125,20,229,238,211,220,199,121,62,112,224,192,129,3,7,14,28,56,240,185,128,41,27,25,117,206,251,249,76,29,232,
44,247,41,209,231,79,118,158,241,247,179,63,44,179,123,247,192,129,3,7,14,28,56,112,224,192,129,143,64,58,194,207,126,63,243,71,243,250,171,58,207,207,156,100,117,148,207,102,193,3,7,14,28,56,112,224,
192,129,3,223,23,168,63,137,155,6,241,95,140,62,223,249,175,31,133,239,45,231,121,247,220,204,236,239,252,228,239,218,159,252,131,127,108,255,236,63,253,51,251,207,254,233,63,183,255,224,239,254,135,246,
237,183,63,24,101,170,172,89,60,194,44,194,190,180,107,157,243,139,187,118,92,158,185,185,173,88,117,45,119,245,249,230,23,151,28,45,5,180,194,101,3,74,106,43,78,181,220,118,100,193,86,127,248,166,15,
120,133,149,132,89,184,213,4,109,142,85,226,22,142,111,134,121,116,93,225,218,55,184,138,217,146,67,171,177,43,248,253,130,251,236,47,180,197,212,135,254,204,31,137,215,110,172,9,101,199,151,132,146,41,
43,222,111,215,173,149,249,214,235,245,198,138,240,39,195,202,103,107,229,43,159,62,161,220,247,129,84,97,242,150,110,120,214,234,51,121,191,131,117,156,119,210,238,112,21,45,15,75,221,56,200,83,156,20,
105,41,67,175,58,200,133,131,78,10,166,140,231,179,152,85,151,92,121,97,75,122,37,154,85,45,102,41,199,62,188,169,105,238,225,153,114,84,54,249,212,122,159,50,6,18,205,158,179,99,210,241,153,186,38,173,
30,64,211,91,169,28,178,45,186,56,184,132,98,76,87,171,21,184,183,69,31,29,173,103,228,127,203,174,221,219,187,239,19,96,252,22,36,119,3,133,138,218,97,236,144,7,228,189,29,226,100,144,98,237,52,189,243,
22,21,119,186,244,89,227,247,224,80,69,8,11,209,51,169,57,152,69,110,213,76,190,107,96,203,111,209,95,186,230,91,219,214,248,133,161,167,225,240,124,227,61,82,15,220,221,252,154,18,0,184,61,34,236,55,
191,249,149,253,219,63,255,215,246,191,254,239,255,147,253,95,255,247,191,180,127,249,127,252,207,91,7,154,106,255,155,202,121,126,230,44,239,144,250,175,254,203,255,218,254,244,31,254,199,246,15,254,
248,31,217,79,126,252,19,187,174,209,228,235,235,195,30,143,48,123,132,61,230,223,160,63,40,126,219,241,107,42,8,48,24,91,76,213,116,197,230,110,223,185,103,233,141,198,189,243,41,62,10,207,124,149,187,
118,20,212,128,188,37,143,219,142,74,195,183,74,226,185,154,69,231,34,222,64,228,206,124,188,75,70,243,90,21,133,167,0,75,45,243,69,101,91,71,167,190,126,66,107,111,209,244,29,122,208,69,209,61,235,223,
242,174,173,44,182,211,233,219,138,111,107,172,154,224,62,104,223,116,226,188,201,65,78,94,214,35,30,255,40,235,132,99,189,43,175,146,98,190,37,243,115,249,221,187,232,239,17,152,239,19,62,197,11,124,
75,144,191,103,216,9,26,250,24,38,108,60,187,84,70,20,203,60,49,170,1,245,173,122,101,232,245,101,124,161,50,159,66,18,107,37,228,212,111,169,13,175,220,169,194,173,239,5,55,115,50,93,120,44,26,76,107,
214,151,111,144,216,181,75,56,227,187,155,50,139,87,132,116,177,29,209,141,11,220,61,123,2,218,189,55,208,197,234,119,126,106,241,144,243,111,125,61,72,13,233,100,97,96,65,61,130,6,246,210,243,113,121,
2,109,86,191,158,75,245,51,239,227,94,166,191,15,105,255,20,55,196,235,63,109,42,145,133,104,12,196,44,248,182,114,144,91,80,18,78,76,178,233,41,221,18,59,140,207,221,236,114,55,243,17,184,27,103,52,155,
93,47,151,93,238,246,195,31,252,200,254,163,63,253,167,246,143,255,225,127,98,127,254,255,254,27,251,239,255,199,255,150,154,217,249,165,119,206,244,71,225,123,249,194,224,51,248,207,255,217,127,97,63,
249,209,31,214,245,227,245,97,175,175,97,175,175,15,123,125,132,197,35,44,30,15,123,132,153,61,48,198,123,195,94,192,37,43,195,164,9,29,170,207,167,245,15,46,52,202,100,116,37,57,4,124,1,196,130,156,31,
136,38,22,14,239,212,101,203,109,112,44,92,59,242,150,84,189,147,47,239,124,242,247,151,205,136,248,218,180,139,90,65,215,249,185,249,90,99,236,247,239,124,42,220,245,88,235,126,70,145,103,160,206,230,
166,217,55,45,55,62,208,194,55,12,38,40,152,137,109,85,103,7,170,222,58,21,168,52,247,173,148,178,93,130,10,218,21,106,244,30,80,49,111,235,169,126,77,99,41,29,105,81,4,193,148,85,145,33,210,194,183,179,
108,202,183,147,101,223,208,248,150,29,213,156,238,120,45,219,138,106,215,92,86,99,164,60,213,58,47,22,189,176,224,97,85,176,115,253,204,56,212,36,78,12,46,111,168,62,51,160,169,52,131,14,78,181,115,135,
154,217,194,111,204,213,169,87,238,25,6,35,229,59,26,135,148,250,221,6,49,106,139,108,136,145,169,114,254,84,117,80,213,240,154,229,171,160,43,188,4,61,121,19,40,251,198,82,32,174,159,238,33,121,211,111,
245,200,86,69,134,240,204,116,208,192,71,179,228,16,139,16,254,178,154,136,21,73,179,190,103,236,114,35,247,91,81,20,213,177,227,249,146,159,20,173,216,151,221,53,205,52,105,127,230,185,62,216,33,2,47,
236,236,201,157,174,67,38,81,198,44,222,203,123,1,101,222,80,238,59,226,222,76,32,199,72,62,230,121,205,110,126,133,189,92,110,47,223,152,249,203,101,215,139,15,71,250,229,178,127,244,39,255,100,180,2,
121,207,119,240,125,164,16,127,246,134,193,221,53,2,58,206,229,52,127,55,29,232,239,30,211,113,14,139,215,65,191,136,60,214,110,117,84,9,62,162,47,111,236,227,120,166,76,48,43,39,105,195,70,89,177,188,
77,126,24,200,216,61,225,218,17,37,10,102,136,83,244,214,140,144,236,226,157,21,83,68,158,208,212,205,121,156,61,239,238,122,210,102,205,54,207,87,197,177,115,209,119,198,19,95,66,7,0,53,148,9,33,209,
66,40,146,162,205,164,0,249,20,27,71,118,91,245,134,95,57,165,197,204,103,132,214,252,46,62,127,71,187,157,225,202,39,237,146,124,28,248,77,49,157,166,11,110,60,126,171,202,215,69,185,175,239,226,248,
102,28,68,175,16,165,30,70,60,148,191,119,196,84,161,127,230,188,236,134,241,173,123,155,170,119,122,34,158,148,208,17,234,230,196,201,209,229,109,11,11,135,177,82,71,229,61,125,202,91,97,85,151,69,80,
196,114,56,54,176,78,37,122,5,83,229,116,146,190,114,220,202,111,220,231,27,20,43,196,142,156,109,164,250,185,172,177,66,94,0,240,69,229,189,137,150,191,45,255,213,176,221,207,90,119,55,239,7,232,125,
182,170,107,189,113,153,230,216,173,246,232,14,163,167,29,124,226,124,214,29,220,0,6,45,102,143,250,170,43,123,203,156,133,173,161,30,181,189,75,94,196,64,194,200,121,197,151,214,154,22,123,65,200,45,
8,74,239,23,166,217,203,244,19,207,119,109,123,203,5,59,195,152,215,15,123,6,200,85,28,163,207,43,236,0,182,3,250,182,202,239,199,110,4,157,199,160,92,151,153,95,102,241,50,130,42,87,152,153,93,246,242,
114,85,217,247,108,254,251,136,255,250,12,62,41,109,227,189,207,43,170,107,102,143,199,112,156,191,251,245,195,94,191,11,123,125,60,236,245,187,87,123,60,204,226,145,71,223,81,77,246,220,26,173,112,103,
108,158,149,169,33,119,185,54,159,190,88,247,193,231,160,151,200,234,186,71,56,205,118,169,197,101,102,181,233,143,22,17,27,190,235,95,233,233,5,255,245,250,78,213,238,20,229,151,113,116,238,4,252,153,
17,120,11,35,21,196,79,5,151,186,238,93,150,5,167,140,124,110,222,204,183,110,212,43,85,235,114,93,58,179,28,134,71,71,47,203,155,233,202,70,121,86,74,200,203,31,39,147,56,22,245,75,156,233,137,203,72,
37,161,117,27,83,106,188,101,2,82,150,60,92,3,168,68,238,181,2,180,194,15,186,230,213,36,167,87,91,71,33,158,32,195,64,183,55,29,5,65,21,245,10,217,223,77,159,110,133,118,119,189,67,2,234,83,179,68,253,
49,183,160,137,68,88,187,37,67,6,152,66,227,137,106,53,52,120,125,7,209,74,121,202,27,14,5,246,157,105,95,100,35,4,213,63,117,175,194,214,104,57,184,89,209,102,153,157,36,217,205,114,227,235,172,216,221,
227,223,207,86,253,197,50,15,87,1,215,181,10,202,18,68,109,59,112,50,200,72,242,106,248,163,158,17,78,80,109,145,247,206,121,163,136,163,245,189,217,254,215,176,20,208,176,252,187,115,236,24,167,241,235,
45,71,115,229,104,46,17,79,239,237,223,154,191,91,185,220,148,7,104,134,100,154,139,77,31,41,113,165,205,73,203,146,13,153,227,188,219,139,180,197,7,116,227,126,36,159,40,44,98,131,148,209,27,28,169,14,
51,157,125,57,201,44,136,136,207,190,184,217,117,185,189,188,92,22,113,89,88,216,75,60,204,205,205,237,97,215,203,181,110,21,1,71,250,35,126,235,123,225,179,210,54,222,135,192,64,254,245,187,215,233,52,
135,125,247,120,29,81,231,215,176,239,190,27,185,207,35,224,28,92,23,57,10,102,6,81,105,212,57,243,5,97,68,172,207,121,236,63,224,72,188,71,101,62,23,207,125,179,79,117,215,147,250,171,157,114,232,129,
78,102,150,209,215,22,30,165,99,64,3,179,81,140,54,77,12,74,156,114,230,63,223,191,237,31,8,191,58,88,80,237,196,137,123,230,224,180,246,54,68,84,154,104,136,55,138,123,17,196,121,25,76,239,103,131,137,
234,212,235,70,148,177,195,101,230,192,247,75,193,169,179,49,251,134,137,99,183,176,243,160,240,113,123,111,227,215,131,84,20,214,83,10,139,6,104,56,72,197,51,194,50,201,2,109,92,251,162,89,165,199,42,
76,108,235,146,228,156,68,153,227,170,107,253,5,236,248,112,116,50,136,223,118,176,214,198,78,198,186,226,184,49,168,110,160,87,224,230,205,144,48,223,139,20,168,49,145,10,218,8,206,251,74,127,192,235,
243,220,19,108,251,9,5,253,177,209,29,137,151,232,17,203,177,111,139,238,200,35,96,251,35,159,53,219,146,41,157,162,53,126,11,153,244,93,122,120,11,31,55,124,123,80,170,191,71,19,223,193,61,78,171,59,
130,186,111,181,17,59,62,216,185,59,14,132,221,174,246,248,13,79,77,177,101,31,30,6,207,204,116,34,68,113,96,89,90,83,157,123,167,118,151,125,125,75,111,31,244,30,215,147,182,107,190,23,202,235,130,16,
13,71,60,65,202,42,64,177,142,32,111,168,229,151,231,24,130,250,125,139,93,228,205,231,133,233,249,174,159,92,215,13,37,86,57,197,90,83,222,167,252,119,250,219,76,183,241,166,177,83,133,102,6,186,33,109,
20,214,254,196,244,110,240,103,181,116,121,216,229,110,175,47,102,17,15,251,38,220,30,97,230,223,186,189,190,62,236,122,121,233,180,163,39,240,125,159,244,246,189,124,158,59,175,119,191,221,230,231,187,
31,97,143,215,135,61,190,123,88,252,102,58,206,175,15,123,188,230,134,193,199,176,97,192,125,55,230,199,114,96,116,235,32,42,33,100,72,114,138,140,21,197,146,21,159,111,139,95,86,205,147,162,80,203,42,
44,34,209,72,93,190,231,141,48,162,30,0,173,71,225,145,66,143,209,111,67,78,78,36,109,101,209,157,56,61,152,66,217,191,237,59,27,133,67,190,74,64,112,34,244,16,0,130,14,44,117,57,30,143,177,147,182,49,
133,198,202,243,3,156,158,45,145,202,239,189,162,46,204,76,157,244,108,255,81,136,99,61,64,115,80,222,46,37,194,130,211,22,39,50,61,108,98,113,196,251,239,34,59,45,47,125,208,141,75,132,38,148,165,241,
91,77,19,1,210,120,7,154,191,66,203,219,152,18,241,88,229,231,206,73,146,124,220,78,113,158,4,89,34,144,236,124,236,156,135,198,138,87,24,152,170,78,247,158,70,236,137,23,21,238,30,192,125,25,159,210,
103,122,127,85,132,253,115,227,156,44,234,224,6,131,90,236,46,249,217,225,172,21,220,243,1,163,201,242,229,90,0,242,95,209,160,23,255,148,74,118,192,207,119,67,127,143,234,13,102,124,95,157,146,214,141,
76,215,214,13,200,95,187,22,222,240,153,8,184,252,91,248,237,116,86,83,91,49,230,154,158,173,9,241,83,238,43,90,210,228,81,213,172,170,159,209,48,40,42,188,82,133,169,61,108,8,30,211,126,182,63,240,216,
234,142,40,27,238,132,229,99,234,76,95,6,100,240,144,216,147,42,163,246,211,229,55,235,97,166,90,183,149,177,192,167,124,49,133,226,177,168,91,177,86,228,119,196,74,254,165,78,92,25,92,91,86,46,225,117,
196,46,223,233,45,105,197,140,74,178,46,107,93,152,37,149,223,222,20,146,141,206,114,55,123,248,88,97,185,194,236,241,18,246,106,15,115,191,44,94,195,30,238,246,250,157,217,229,102,215,55,123,201,211,
8,52,254,254,234,95,24,252,8,140,175,186,88,255,189,142,127,95,95,195,30,223,229,167,188,195,30,175,115,115,144,230,120,169,82,45,104,206,244,90,210,96,199,1,125,131,90,206,154,255,229,12,200,142,228,
45,218,25,137,109,234,192,24,51,239,162,213,159,229,123,170,112,170,192,62,131,157,227,144,191,159,31,247,167,251,133,58,114,157,138,108,126,17,50,241,150,181,190,181,63,55,56,63,179,34,111,90,24,142,
4,122,42,67,51,195,195,207,117,169,40,141,112,171,51,91,157,214,108,193,141,28,254,241,58,58,67,204,75,165,164,233,30,86,44,124,123,3,91,182,150,231,235,50,218,184,126,200,189,72,165,58,175,53,186,71,
94,212,110,35,24,49,202,162,193,87,68,177,40,26,155,16,92,225,221,112,78,11,24,56,102,255,188,104,186,236,93,171,119,20,221,205,138,134,219,216,152,231,252,78,15,231,68,24,140,118,143,151,83,127,52,255,
118,145,37,29,44,196,102,153,12,8,145,215,193,249,36,88,121,6,87,28,230,211,224,210,251,213,24,225,255,73,135,36,143,27,164,5,8,27,121,208,40,66,191,178,242,96,30,33,67,218,155,188,8,231,77,105,78,50,
105,13,188,117,109,22,158,46,100,214,91,105,79,116,24,40,49,27,251,197,227,56,54,131,118,187,15,253,141,190,153,35,205,243,63,105,163,90,30,208,105,233,254,246,253,181,31,107,238,40,245,143,110,169,93,
237,14,34,141,251,253,249,172,228,19,236,129,3,191,137,227,138,227,186,44,163,83,159,54,56,19,209,163,222,72,28,209,254,88,155,170,122,222,53,241,239,213,113,115,123,228,106,211,108,114,183,228,159,116,
160,16,216,211,149,196,13,159,61,53,233,109,251,61,117,88,62,113,116,236,70,106,2,118,164,209,23,157,87,106,112,250,52,56,169,184,193,101,89,65,202,174,154,153,121,79,201,34,188,211,43,202,47,66,238,69,
170,63,80,51,144,117,122,102,90,10,1,236,251,21,118,77,250,92,179,214,135,135,185,199,200,129,126,196,243,97,249,66,240,197,157,103,51,183,120,88,71,152,35,42,207,57,94,195,94,31,54,143,172,179,57,19,
48,51,140,98,66,77,119,171,191,42,148,186,33,96,45,77,214,223,86,166,143,98,84,143,118,173,215,158,173,111,75,16,187,153,59,29,157,98,190,213,41,235,165,178,199,200,201,163,138,153,69,11,123,237,138,9,
83,238,242,215,164,36,235,83,86,220,169,52,163,166,199,41,181,236,52,69,174,6,128,145,46,212,115,132,128,96,171,193,101,227,196,101,65,50,66,242,146,53,154,106,214,138,191,140,116,43,134,181,112,35,178,
174,100,244,85,24,186,9,65,255,110,179,63,239,236,93,14,24,118,1,105,134,154,126,217,44,196,138,112,216,1,52,90,93,216,235,248,166,124,30,27,252,213,85,125,75,177,33,108,6,51,157,17,48,216,30,222,242,
179,108,184,90,229,174,163,2,210,184,92,47,67,169,14,14,189,112,199,255,102,237,128,8,207,0,5,196,238,26,12,193,82,247,125,58,235,228,32,60,49,160,127,108,86,125,12,142,109,155,88,100,187,139,188,75,191,
55,122,35,240,113,233,86,151,55,153,147,31,105,0,29,87,191,186,239,205,89,60,236,233,238,112,58,85,208,187,20,210,127,60,96,64,5,167,192,62,168,115,149,6,93,113,2,60,82,38,132,63,118,163,187,242,252,158,
251,99,58,110,27,63,180,244,68,24,208,221,161,61,25,30,115,20,139,205,0,203,187,157,243,236,146,215,188,65,119,49,76,42,31,248,75,159,235,179,68,109,34,36,178,188,236,79,192,119,29,219,146,130,108,172,
224,90,153,92,156,42,202,131,167,127,150,113,92,183,189,45,92,66,122,82,239,71,233,56,55,202,61,174,123,75,117,140,119,182,169,66,178,232,247,188,12,138,178,143,215,246,25,215,59,14,93,198,204,112,26,
198,227,190,190,127,167,51,93,254,229,250,214,149,152,157,110,233,154,137,12,212,26,75,249,117,153,217,99,248,96,151,61,44,252,178,184,220,30,15,55,127,152,93,143,65,198,225,55,222,91,171,47,1,95,220,
121,126,148,67,60,254,114,115,224,227,117,204,208,99,166,116,140,217,3,68,21,69,2,58,72,48,151,57,36,58,92,75,186,243,191,67,217,207,129,165,104,140,215,174,76,51,155,198,26,35,215,78,134,234,33,44,166,
246,124,113,7,132,231,66,127,4,136,130,42,154,186,118,170,103,116,183,93,185,236,31,22,96,55,8,23,215,98,35,163,1,37,85,141,102,59,42,60,171,105,193,123,42,60,252,182,75,233,157,66,75,167,111,121,25,205,
208,130,241,51,247,46,244,241,110,111,33,88,38,114,216,192,201,24,100,225,153,51,235,252,88,29,26,208,241,220,40,88,250,121,169,38,109,217,172,226,222,237,136,114,91,233,12,60,15,57,219,84,54,68,6,166,
115,145,54,81,73,134,104,247,170,44,188,75,87,60,54,170,200,91,106,150,4,9,107,57,212,119,86,120,150,61,149,201,211,84,3,56,114,148,150,85,200,35,13,64,55,8,31,172,254,10,211,153,70,46,64,138,60,123,7,
227,95,227,162,139,171,28,163,185,119,123,160,15,196,171,243,70,208,141,254,173,14,117,254,170,13,104,112,13,142,3,202,135,142,206,186,213,22,106,191,141,68,106,47,87,157,228,248,34,223,220,235,9,120,
89,29,6,210,7,193,220,55,236,2,98,206,113,95,90,238,53,148,131,155,241,184,1,221,15,130,235,161,141,190,82,16,100,172,108,153,106,10,109,59,55,175,79,234,62,130,251,142,206,219,14,105,98,220,216,20,96,
158,90,216,207,118,116,89,117,247,102,253,98,62,138,54,217,89,2,115,123,148,225,130,81,222,93,239,251,153,50,177,43,172,125,200,190,170,37,197,30,73,245,217,63,247,206,229,192,118,178,57,152,129,213,4,
37,199,189,138,38,95,136,16,110,244,82,54,147,41,50,142,247,111,222,19,43,65,117,165,30,208,113,94,41,213,37,212,54,113,217,205,70,94,148,235,57,214,143,215,209,135,235,186,134,195,236,115,174,125,153,
189,164,24,60,18,199,175,11,95,62,109,35,163,204,17,22,175,54,35,204,35,26,245,136,104,198,15,31,17,232,132,73,81,202,165,222,105,70,44,47,74,167,134,51,120,32,3,25,51,153,12,42,210,133,102,140,250,98,
4,70,143,236,217,169,152,69,194,211,73,160,130,33,140,44,66,2,21,87,223,192,59,67,38,230,121,27,27,188,61,115,221,153,188,220,56,7,148,8,46,97,54,242,145,242,197,33,243,201,197,206,237,130,238,38,199,
185,244,192,20,22,25,60,93,26,26,207,64,89,59,143,221,96,26,86,58,212,212,202,98,124,65,186,45,145,99,237,220,236,227,29,108,93,18,56,147,191,194,120,162,231,201,2,221,12,226,232,125,221,139,19,152,148,
132,10,28,152,102,233,28,116,40,66,9,197,50,128,52,128,110,119,181,61,169,141,169,220,48,162,26,19,241,116,11,180,190,252,65,249,135,145,114,214,248,83,23,110,61,144,106,120,99,216,186,238,178,73,249,
22,116,42,104,44,209,146,100,253,62,35,247,1,124,223,242,222,56,207,222,54,74,112,157,22,175,133,32,64,89,244,164,214,219,33,82,185,215,222,65,213,26,128,171,115,172,171,31,171,180,239,105,33,174,79,0,
115,102,3,93,144,121,4,100,26,105,221,239,245,96,186,129,108,87,171,83,230,209,29,113,174,103,219,21,57,117,16,117,223,238,227,12,172,59,240,137,70,185,197,59,176,214,105,202,107,75,36,16,234,5,209,154,
245,162,111,166,122,54,175,22,87,2,122,133,250,132,43,87,210,80,254,42,204,250,152,142,49,249,165,235,225,77,114,154,170,32,253,193,231,165,107,161,45,74,37,107,125,130,167,111,85,103,192,126,69,119,208,
122,132,176,184,200,197,222,160,237,136,82,116,201,232,189,230,43,241,4,220,249,55,171,45,226,17,12,218,161,78,66,21,96,6,219,233,52,215,122,245,94,97,153,167,199,60,117,235,218,47,177,33,72,112,211,126,
33,98,141,67,237,173,154,118,181,79,12,147,125,9,6,171,240,27,89,65,163,28,101,7,181,115,125,157,171,113,21,152,138,212,20,97,17,121,252,220,228,227,178,179,163,132,199,192,247,165,133,255,126,129,253,
11,193,23,119,158,107,203,21,120,154,233,16,88,248,252,51,139,199,195,144,233,217,140,136,70,157,151,235,110,122,120,190,85,102,56,218,60,242,33,78,72,43,215,128,186,195,72,225,78,38,7,215,64,240,231,
95,216,38,46,223,245,198,29,196,159,163,120,69,57,21,88,51,91,237,5,11,228,178,26,88,237,80,44,76,114,65,231,189,199,164,196,78,233,7,30,129,22,35,145,24,52,13,231,108,109,117,90,9,76,152,14,88,35,69,
246,2,157,184,186,78,5,62,174,193,36,44,147,27,195,97,134,14,53,253,161,94,159,212,121,96,212,35,31,183,58,35,163,11,117,86,75,58,62,207,132,92,216,109,160,180,233,43,247,162,134,96,81,104,96,148,219,
224,205,127,144,22,143,94,189,113,136,234,224,178,249,120,58,29,7,170,63,0,111,98,108,33,203,96,94,82,163,164,199,225,188,207,116,56,150,254,108,46,157,101,165,78,180,16,251,95,178,29,96,236,139,102,56,
238,14,206,40,52,83,135,83,52,211,160,155,193,60,37,142,183,177,134,32,247,62,192,128,64,231,118,41,80,56,196,116,3,243,22,161,45,138,36,167,28,226,248,224,106,134,44,133,211,171,6,99,2,247,111,89,89,
6,128,140,233,238,93,208,25,122,234,130,178,245,178,129,18,144,226,178,65,6,21,207,150,214,179,1,170,194,224,123,187,64,75,94,239,199,54,168,221,126,214,118,134,123,231,226,79,177,147,161,107,57,8,130,
170,169,114,33,142,16,251,75,37,147,5,181,58,3,75,248,148,143,141,38,45,203,10,29,142,19,217,82,107,253,174,82,36,60,82,91,19,240,62,155,185,29,59,44,15,195,35,55,188,204,71,110,228,192,110,64,76,15,235,
207,104,143,0,85,73,96,1,131,177,173,177,230,54,187,188,85,10,87,247,157,165,30,115,143,115,236,216,102,2,34,162,49,48,0,22,66,235,146,83,204,189,46,220,242,206,116,106,103,189,169,15,105,239,186,195,
51,168,7,21,79,74,106,91,51,47,241,195,111,98,120,184,217,229,51,43,97,202,206,195,44,46,148,243,92,105,127,62,142,223,55,124,133,156,231,152,12,54,6,125,24,94,55,183,203,60,94,71,234,70,152,153,95,179,
108,51,117,206,56,170,38,80,154,36,232,193,188,99,209,67,188,22,112,88,22,201,129,82,245,116,21,199,240,185,185,226,8,77,164,28,30,147,225,83,11,94,87,62,149,21,50,117,128,181,44,119,186,42,166,168,47,
230,93,65,58,199,184,182,13,172,10,206,44,141,97,83,146,106,66,250,208,117,119,135,156,49,119,34,207,168,21,140,142,3,37,160,174,52,208,225,87,61,68,163,157,116,74,199,190,232,71,61,203,190,95,137,12,
244,87,76,36,144,224,194,119,165,222,238,67,218,157,75,34,135,54,121,54,223,202,218,82,17,144,90,232,217,252,195,25,105,91,46,237,170,145,104,165,162,74,112,121,43,194,44,46,227,9,23,43,235,229,176,13,
184,118,227,231,36,119,162,172,49,63,183,84,224,214,187,97,188,135,244,123,27,76,247,121,208,125,227,152,50,158,35,105,130,99,215,9,163,23,97,110,151,244,28,101,21,35,27,67,235,222,245,149,156,149,146,
223,128,231,136,175,129,46,137,201,227,80,2,121,205,125,238,27,0,131,225,23,190,106,248,21,68,51,163,8,43,141,118,60,191,70,94,102,125,224,92,87,12,58,170,108,160,252,209,219,160,42,129,5,182,229,153,
13,82,79,236,101,196,221,106,79,133,59,74,229,120,215,177,31,234,40,64,219,172,243,87,164,174,197,41,80,221,221,149,135,33,207,123,57,151,121,141,145,65,212,51,202,3,46,202,207,35,245,222,202,39,165,111,
54,93,189,117,11,128,199,89,46,18,39,18,204,57,86,206,227,179,208,212,177,59,4,87,144,111,53,174,199,175,89,94,214,62,125,237,103,215,252,70,15,241,177,216,244,220,59,208,85,227,88,10,146,245,110,204,
177,116,227,207,176,235,184,179,61,165,33,12,111,93,94,252,2,124,48,111,149,76,208,202,172,11,13,26,144,235,23,77,63,39,215,227,97,208,24,38,142,45,99,117,99,182,165,53,27,216,45,51,3,191,99,183,79,12,
71,137,159,94,230,193,19,80,158,72,185,212,199,58,155,249,95,109,25,112,237,53,74,231,155,67,63,76,255,113,98,55,254,189,54,216,127,89,248,242,206,179,59,253,121,117,118,94,123,47,65,99,28,180,102,228,
197,180,105,14,198,83,110,35,117,25,40,138,230,9,142,34,149,82,232,178,145,67,227,105,196,178,193,204,127,110,111,47,168,14,131,165,135,137,31,42,11,20,194,5,103,116,86,242,61,84,116,237,8,165,129,198,
44,33,7,101,149,2,111,84,93,116,223,171,90,54,158,110,234,24,185,45,21,21,190,169,126,210,200,1,33,170,172,204,36,187,171,218,117,185,65,165,135,146,81,71,181,4,133,219,9,191,216,176,26,230,209,149,202,
236,199,11,11,109,140,75,254,206,193,118,51,131,93,215,99,56,48,117,4,181,252,16,226,84,176,184,75,152,144,72,250,161,158,51,53,39,164,66,187,111,160,200,137,140,87,243,186,37,79,64,254,174,46,193,149,
46,117,30,49,154,199,89,170,167,196,31,61,44,196,183,105,211,202,84,183,82,130,220,151,199,200,242,66,165,113,104,166,144,23,47,160,130,85,197,73,57,207,190,182,131,117,47,0,75,255,194,35,121,90,200,130,
175,200,110,191,166,109,34,95,79,126,78,146,68,137,88,25,221,226,33,131,251,179,97,92,90,165,103,110,48,81,216,225,129,56,92,202,112,66,137,149,47,177,42,68,87,211,52,46,208,133,35,95,216,96,12,102,217,
171,16,54,191,164,31,202,96,160,183,183,171,96,121,3,16,36,221,109,45,183,244,28,251,11,188,139,58,39,133,133,217,1,198,220,229,190,26,9,226,143,89,23,150,69,17,8,46,137,234,137,72,88,206,88,112,225,202,
203,214,152,117,234,15,232,210,174,157,252,125,227,228,181,227,159,182,137,40,81,65,144,194,2,29,56,226,77,34,90,65,200,5,233,0,117,196,97,64,92,174,45,123,235,88,103,107,178,158,164,231,68,98,190,19,
221,148,98,152,180,67,109,19,232,210,95,48,30,53,238,0,91,129,90,59,94,237,66,231,81,150,83,63,119,112,74,117,18,142,51,17,48,133,160,241,119,23,61,187,199,183,105,193,114,217,43,92,209,147,211,217,6,
113,223,50,35,233,122,118,100,32,41,117,238,111,139,83,251,146,46,111,125,13,248,226,206,243,85,12,235,197,79,101,48,252,154,93,207,227,80,58,22,159,81,170,101,0,82,104,69,245,241,202,57,107,7,118,244,
230,155,21,242,234,56,95,190,123,93,81,24,12,63,182,21,251,229,237,24,205,210,218,16,247,95,157,35,226,189,30,114,78,193,242,98,142,241,223,86,224,221,38,226,79,214,165,223,193,110,227,111,82,192,45,164,
152,195,157,237,99,46,229,112,217,125,173,15,253,129,137,95,152,214,37,64,130,218,2,204,203,57,86,209,174,166,1,119,104,216,95,52,166,237,232,185,165,3,183,210,163,54,238,180,214,23,167,213,65,241,206,
21,8,88,95,237,200,230,60,70,199,244,57,68,210,201,160,79,7,87,116,89,234,3,177,165,56,236,19,37,112,89,156,113,86,155,61,236,150,99,113,30,51,100,93,108,179,94,246,241,58,108,136,44,222,171,49,119,187,
34,141,212,136,232,32,175,247,170,65,243,80,202,227,48,2,221,3,77,137,132,78,47,88,170,113,75,137,237,2,253,197,41,172,119,177,19,61,100,85,49,78,134,150,254,96,116,210,213,209,70,30,16,182,15,25,128,
52,62,193,175,17,78,32,255,189,113,47,113,201,40,226,228,189,122,54,165,180,217,239,214,56,86,26,131,6,43,145,223,54,70,189,136,49,223,89,196,210,156,110,92,94,35,63,219,69,9,23,221,39,227,79,209,109,
172,159,84,34,20,154,252,218,47,49,46,61,154,151,141,227,192,120,188,118,145,245,89,186,113,178,198,63,240,38,13,241,124,94,195,134,140,198,130,231,70,228,164,103,21,217,21,154,229,105,58,203,4,77,181,
7,76,214,120,165,111,167,150,19,103,176,174,219,165,76,192,67,42,90,216,56,117,227,132,139,244,42,188,16,76,135,94,5,104,158,33,55,248,98,250,211,68,162,154,187,132,79,250,217,213,100,89,117,236,226,68,
230,8,138,79,18,227,227,29,232,147,164,242,164,201,17,226,132,4,210,69,22,219,148,25,157,53,140,124,240,226,204,8,29,224,7,176,182,186,199,192,159,81,113,193,102,151,182,209,174,154,17,135,94,169,100,
230,83,112,118,74,63,25,12,229,5,55,118,60,147,178,16,12,187,243,61,0,0,32,0,73,68,65,84,214,253,49,144,41,119,187,42,0,155,183,38,205,189,237,254,215,130,175,23,121,182,73,96,79,134,158,219,133,220,205,
253,178,203,98,230,35,205,161,154,75,154,46,85,213,157,13,19,72,195,70,76,13,198,112,64,71,82,217,177,234,218,22,102,154,82,118,97,68,243,173,241,202,170,81,143,205,251,45,96,25,169,201,231,16,153,131,
138,120,145,4,233,208,66,90,100,65,221,167,56,138,64,39,77,220,209,73,226,165,189,37,74,3,77,155,15,135,48,253,52,176,79,141,3,180,199,3,203,47,149,115,86,214,100,70,154,64,25,145,161,129,65,240,141,150,
244,189,245,157,173,192,242,93,10,110,241,140,117,20,72,61,47,136,164,164,196,247,87,209,68,37,233,50,180,42,182,122,163,233,208,187,250,135,229,108,71,8,163,110,23,209,98,213,205,60,9,217,25,203,103,
115,27,93,65,33,99,10,149,249,236,99,209,110,49,230,38,81,197,126,55,163,242,93,207,242,122,227,58,21,50,97,79,147,138,29,85,17,199,126,109,59,6,139,90,113,28,94,41,168,250,162,47,59,248,130,194,110,149,
183,183,29,143,252,141,114,136,239,122,27,11,188,93,239,6,76,62,131,151,157,47,135,213,60,79,109,215,52,87,81,236,201,205,156,198,2,47,18,141,235,229,228,115,210,74,228,48,149,113,221,139,34,247,77,105,
97,129,100,128,134,171,243,27,7,229,102,86,184,220,144,21,59,243,233,15,4,164,180,229,147,192,161,164,61,15,102,87,57,14,244,241,141,137,11,53,177,228,215,206,254,16,25,153,207,113,242,211,248,50,79,104,
106,201,50,14,190,210,152,163,146,128,145,83,66,105,170,221,174,151,26,114,114,236,120,120,152,39,204,140,157,187,224,162,200,139,65,186,212,40,92,212,253,175,16,200,148,183,30,119,82,251,104,4,167,144,
214,202,13,50,127,149,5,184,218,93,174,48,12,50,2,120,133,149,174,80,43,46,160,7,38,17,209,190,218,150,183,167,172,169,174,91,210,153,192,200,234,112,32,149,188,121,96,17,31,179,233,228,206,254,213,32,
52,47,227,202,2,111,124,133,202,100,172,84,230,22,150,118,65,2,203,77,60,46,192,201,107,172,39,253,125,134,100,51,133,195,251,239,107,194,87,57,231,185,162,155,222,34,59,126,94,102,254,176,17,136,139,
185,1,15,21,22,16,89,194,39,111,17,106,40,235,86,112,21,97,224,180,88,227,121,76,207,92,53,127,39,33,64,89,108,115,152,132,231,25,163,181,47,201,88,180,156,232,102,22,168,46,18,195,142,203,6,212,53,245,
193,232,158,27,109,32,88,132,9,113,156,125,137,242,5,189,240,110,199,57,239,161,217,29,109,104,192,202,38,142,136,23,181,147,5,221,22,135,186,151,191,98,254,151,149,254,78,201,44,66,217,5,24,177,189,141,
32,63,168,114,249,38,33,51,90,86,13,145,147,142,233,69,163,226,240,233,204,90,80,78,221,130,95,55,81,4,0,238,162,171,145,159,171,81,160,196,193,217,110,89,72,116,12,228,12,104,81,70,11,198,47,251,23,112,
157,229,154,80,128,252,18,229,241,166,15,226,171,142,194,198,9,228,165,73,94,107,90,242,24,39,98,62,59,16,162,3,48,54,210,57,145,190,143,240,144,156,182,245,185,32,202,158,207,218,49,229,201,193,152,240,
115,187,152,213,135,255,164,60,57,60,213,180,180,22,168,57,181,171,153,81,88,239,144,9,177,239,78,129,169,203,197,33,54,116,16,39,253,81,246,200,144,26,140,163,67,120,97,240,34,173,112,113,35,69,17,233,
253,230,98,211,240,82,148,21,196,69,170,16,86,195,146,13,157,175,105,197,1,234,230,213,61,193,77,102,17,139,110,9,39,49,232,116,67,198,60,156,175,119,93,39,119,204,141,38,144,146,197,100,164,192,212,9,
44,196,199,245,5,123,6,18,138,165,112,156,11,15,184,35,70,162,117,193,104,255,106,140,169,83,109,103,27,150,148,34,234,124,8,157,251,250,18,28,73,63,68,204,128,26,56,118,165,15,108,140,143,201,251,69,
170,150,207,236,210,26,161,23,28,169,38,163,118,152,121,136,41,240,159,165,109,148,255,161,55,166,198,150,77,240,87,33,223,182,180,167,9,155,118,169,115,250,164,3,46,218,165,190,236,212,147,156,180,184,
153,217,133,186,166,87,12,171,65,215,128,158,224,227,114,93,85,121,19,196,108,17,218,225,24,3,159,79,199,248,114,144,203,140,54,251,224,241,175,29,117,54,251,42,145,103,51,135,255,93,102,246,106,147,113,
104,247,239,101,113,133,93,248,169,38,51,148,0,80,236,210,198,110,160,84,137,173,122,174,47,203,30,36,83,66,230,181,227,213,140,9,131,80,46,62,210,86,25,207,7,20,137,117,97,152,29,126,148,85,104,153,230,
194,81,145,193,120,46,175,98,36,141,106,137,86,72,49,103,180,121,229,150,202,16,187,144,227,33,184,168,82,145,241,81,57,99,103,218,72,71,133,247,102,30,93,210,205,209,104,117,49,9,91,202,2,207,11,73,5,
39,196,128,135,27,181,8,253,16,195,176,240,76,83,153,163,236,169,108,38,174,98,227,154,203,7,190,189,201,102,142,69,237,56,215,77,15,35,31,63,60,199,70,227,47,236,24,1,66,139,50,161,8,181,242,172,49,221,
123,204,251,197,78,251,71,47,124,246,55,13,98,57,214,130,18,99,82,3,159,147,227,106,85,243,159,193,80,93,192,197,185,60,250,116,147,141,140,165,206,3,8,69,122,17,55,93,58,237,144,90,35,159,23,79,32,121,
8,120,142,161,106,139,253,112,102,105,183,185,249,21,159,103,187,46,47,114,191,100,202,177,1,92,189,240,77,26,26,246,163,165,174,81,152,215,151,208,144,210,158,244,135,173,3,180,153,88,237,10,22,135,0,
207,208,42,129,232,11,28,118,37,19,126,157,212,171,163,81,232,208,134,90,23,44,72,177,108,58,40,50,197,93,71,158,25,192,155,223,72,179,81,149,236,136,50,141,35,101,36,219,185,204,212,79,234,54,120,116,
48,146,158,50,153,252,189,152,46,176,55,58,97,1,223,23,170,247,254,137,213,128,237,225,178,173,27,87,155,152,207,188,198,122,171,94,96,188,72,183,206,59,213,138,167,132,176,30,165,195,8,67,38,129,196,
112,97,16,109,90,128,184,24,248,75,139,14,124,6,210,233,39,95,20,177,70,199,116,202,180,78,82,208,85,130,134,215,84,20,17,24,120,209,77,82,151,202,73,176,137,225,196,73,101,41,154,79,150,113,206,186,0,
41,60,233,198,204,36,133,3,132,71,162,125,227,150,215,179,244,34,43,10,61,93,103,203,114,95,17,190,252,57,207,249,223,57,115,120,205,83,53,252,97,110,51,103,40,163,124,115,118,137,112,151,15,135,135,18,
245,70,169,86,140,24,149,26,145,170,196,195,140,70,71,151,160,69,49,140,251,88,0,78,8,40,230,155,165,156,249,149,148,5,230,29,205,134,138,181,92,243,174,173,132,188,48,0,225,112,137,196,168,78,39,134,
70,190,76,63,96,222,187,210,224,165,160,224,108,55,123,189,48,228,158,65,149,108,108,208,22,141,46,184,181,229,74,7,17,5,143,86,32,50,47,30,58,184,228,101,238,44,216,68,12,39,74,76,115,80,42,106,9,119,
81,228,214,47,171,67,46,237,178,147,215,70,96,92,227,228,135,113,202,28,243,94,118,111,62,87,243,84,210,160,138,210,12,148,37,190,65,194,100,238,192,143,120,218,76,226,133,116,139,150,47,34,117,42,127,
32,215,98,136,185,86,67,195,149,31,44,82,244,24,166,2,101,244,137,7,74,60,160,76,111,102,9,122,152,147,1,52,68,28,229,65,143,36,107,94,67,217,126,115,81,25,43,222,6,39,219,101,179,26,212,39,114,18,220,
75,199,52,142,220,157,117,18,5,176,120,27,188,202,179,226,206,237,56,148,101,189,10,255,149,121,29,105,18,23,61,158,158,106,177,39,56,244,161,235,15,25,157,156,188,177,200,58,104,138,152,35,228,82,198,
160,31,181,241,185,251,36,221,6,252,29,126,243,184,59,117,144,251,78,80,234,94,145,90,37,209,45,69,117,35,15,182,170,81,170,38,102,228,86,134,127,31,25,28,245,178,27,186,213,12,19,15,144,233,18,54,224,
145,36,70,218,193,54,156,131,187,74,182,194,128,32,83,110,157,27,130,223,216,157,128,255,238,38,135,40,19,105,65,216,102,172,206,248,168,18,3,19,19,47,87,154,69,50,79,165,69,117,195,240,27,101,148,176,
193,142,224,216,226,170,78,247,111,73,245,17,235,128,126,78,183,212,247,86,85,144,118,62,247,123,177,141,88,230,51,6,126,129,119,247,209,241,206,204,30,162,106,234,162,170,103,98,54,211,114,133,162,6,
157,184,213,159,201,67,201,177,99,47,139,215,223,232,75,151,248,154,240,21,156,103,199,49,24,119,188,7,105,134,89,250,56,22,177,188,176,33,123,169,151,174,81,233,135,213,40,142,59,215,134,174,221,14,213,
61,115,222,184,13,16,184,72,239,181,153,7,153,175,248,18,28,53,64,16,208,232,13,77,181,105,136,150,35,131,39,103,24,97,208,94,64,31,22,197,39,23,235,53,40,153,185,230,155,130,82,39,137,64,93,228,232,68,
15,23,41,238,164,61,90,79,99,223,20,83,66,57,74,168,66,144,157,3,190,144,166,182,247,148,0,98,88,90,24,231,227,128,165,162,124,133,198,12,42,96,134,222,139,44,181,11,74,7,103,254,150,74,59,160,188,23,
189,212,69,107,155,53,234,32,158,191,233,119,41,61,236,87,246,157,42,198,104,11,204,12,164,135,121,155,171,132,231,228,8,25,59,25,198,180,74,3,130,26,98,73,95,122,135,66,220,21,163,201,166,25,56,125,46,
203,145,67,14,209,254,147,109,17,83,240,52,170,171,19,22,225,183,150,55,179,78,3,16,35,11,47,168,250,16,169,232,31,40,107,248,16,230,9,141,22,78,196,249,164,129,229,76,73,11,78,63,82,199,129,155,74,85,
158,85,211,102,105,74,114,240,177,162,130,125,160,200,166,135,93,16,253,163,169,180,55,45,11,101,160,209,168,73,188,90,238,146,153,229,24,95,198,31,55,234,231,227,114,191,76,78,7,166,24,227,83,248,234,
241,167,68,184,213,45,108,153,111,89,92,124,97,223,92,23,46,190,188,193,219,137,181,115,97,25,65,173,28,219,221,100,64,116,235,64,21,233,1,52,170,113,76,121,65,39,47,49,98,9,114,50,114,208,110,181,53,
255,69,69,111,182,57,129,13,211,19,6,253,59,106,218,253,79,135,157,233,134,253,221,186,230,132,143,62,71,51,215,158,3,235,179,210,32,14,206,52,166,154,120,119,54,113,195,180,58,152,83,53,142,160,175,192,
91,24,18,0,182,169,29,218,61,141,177,39,235,196,65,46,100,230,64,58,44,105,83,120,14,156,198,226,29,83,173,221,44,167,85,159,140,223,41,191,13,29,93,189,48,175,255,229,243,235,247,47,242,60,28,215,57,
243,243,48,183,87,203,153,150,251,195,218,121,136,177,84,169,22,98,35,188,235,224,15,138,151,56,95,214,81,212,212,108,234,184,145,214,135,22,192,0,162,82,232,166,250,98,81,110,251,98,128,163,98,140,138,
51,122,217,198,50,231,22,222,68,52,54,6,140,34,79,17,32,103,216,247,221,108,63,223,177,141,226,130,227,242,72,9,52,66,168,251,180,239,75,36,26,151,32,233,55,52,90,214,126,94,130,190,49,16,176,86,8,242,
46,41,191,104,5,229,64,111,64,24,157,131,181,175,50,81,224,222,175,25,69,138,15,222,128,136,151,149,34,176,118,88,178,240,186,51,166,199,22,79,249,72,45,46,124,141,38,205,231,59,69,154,89,176,184,172,
232,121,137,243,245,180,71,207,1,100,201,231,209,77,232,183,246,166,185,77,190,167,209,89,34,179,79,179,52,178,137,208,135,151,216,103,27,108,109,140,55,240,225,169,62,44,135,205,83,107,191,133,13,215,
113,175,220,227,49,17,11,15,50,210,228,80,93,82,191,202,228,141,51,188,107,248,50,116,2,112,69,203,138,95,74,231,61,209,35,163,255,200,80,173,143,218,80,238,113,28,154,34,160,141,46,80,147,160,178,232,
23,172,222,141,22,122,156,167,227,12,186,99,153,68,150,62,223,108,172,90,58,38,191,37,225,155,87,58,193,94,200,187,60,49,16,253,96,226,72,227,106,102,138,171,172,94,145,147,21,102,53,217,114,156,196,62,
233,150,244,135,38,39,137,157,55,62,41,95,221,115,171,241,117,151,119,137,6,233,92,43,14,36,212,128,15,246,238,34,30,225,241,114,77,127,230,162,196,139,77,71,210,95,75,155,32,161,126,65,137,252,117,149,
78,116,54,78,220,119,149,61,112,68,185,187,172,41,22,113,218,140,73,86,86,54,113,255,226,166,38,188,47,206,42,181,51,110,230,94,198,97,42,130,95,203,147,74,176,95,102,115,163,158,129,46,82,121,80,199,
41,159,65,99,102,11,93,84,63,87,159,80,7,207,40,233,248,7,108,211,53,234,171,104,115,70,83,225,247,18,228,252,74,240,85,114,158,193,34,89,45,191,89,95,167,29,161,207,213,135,146,2,204,156,14,6,56,188,
89,82,219,33,89,65,65,117,101,76,30,244,21,131,181,28,230,86,137,77,16,68,89,209,44,31,96,169,95,163,12,46,230,172,253,229,122,105,163,21,56,189,237,156,182,245,116,49,32,181,113,41,32,214,34,68,168,165,
83,37,10,209,32,157,133,185,155,121,54,115,21,14,77,120,84,94,172,72,18,207,118,92,69,38,185,93,36,203,34,164,142,29,49,202,146,117,38,98,41,33,167,214,123,192,47,254,160,7,216,173,250,221,27,88,150,1,
2,125,39,138,29,154,184,85,166,218,219,221,78,77,235,49,224,55,80,177,240,180,192,65,201,209,230,53,75,167,118,58,184,98,217,214,168,115,128,247,16,140,2,57,230,1,47,39,159,117,239,183,251,250,118,134,
100,242,115,155,196,165,8,59,230,59,57,3,131,210,155,225,192,9,205,146,226,168,171,238,241,16,99,14,202,4,35,46,87,223,134,218,199,0,22,223,236,108,20,22,95,158,35,111,67,95,29,165,221,250,37,79,77,81,
94,224,226,195,47,41,74,27,189,216,55,16,33,228,53,193,47,87,91,92,229,111,190,5,52,199,0,66,53,1,73,156,149,22,59,199,183,120,215,12,28,240,149,46,102,198,155,11,23,67,178,115,211,133,194,69,154,116,
128,56,218,231,240,18,114,5,142,125,229,183,66,237,233,56,136,143,211,147,14,194,81,177,130,40,117,24,241,47,238,35,177,77,239,146,51,203,157,35,93,130,229,112,21,64,195,40,115,92,137,55,133,83,208,150,
160,222,20,223,90,88,218,144,55,106,37,214,105,202,2,250,234,2,93,50,102,177,94,29,65,189,200,82,177,78,10,154,77,43,85,74,236,101,167,98,121,167,66,154,81,202,118,170,68,126,117,110,44,207,178,59,133,
71,200,112,187,140,255,141,135,47,50,56,74,51,31,180,174,8,169,101,250,17,53,16,163,222,146,110,28,215,16,28,238,59,211,213,177,80,243,235,244,6,238,135,107,60,220,198,46,147,49,164,25,121,190,108,134,
165,111,219,255,82,240,229,211,54,124,152,166,252,115,27,185,207,225,215,248,74,38,136,2,178,53,250,105,20,189,201,50,201,216,88,0,181,23,57,178,61,88,41,80,183,167,33,0,223,46,41,35,209,187,217,249,21,
81,148,221,121,91,74,67,88,118,249,124,53,24,1,206,17,132,247,64,97,36,190,164,70,98,214,134,145,168,169,64,162,254,123,81,5,116,234,2,87,221,74,63,123,249,148,71,91,209,187,185,132,165,3,152,222,138,
44,186,12,11,28,80,125,119,25,131,69,121,79,168,76,78,79,140,215,250,22,158,96,173,95,37,22,71,86,34,92,57,41,233,143,150,52,23,112,132,154,143,252,211,94,6,164,239,100,127,169,208,14,69,44,64,104,181,
246,238,125,110,73,133,30,119,175,189,5,105,54,7,150,68,175,107,252,103,68,135,66,124,42,81,214,115,92,85,127,23,29,240,76,245,165,63,168,144,251,89,235,130,198,95,21,61,209,65,73,99,227,152,182,238,159,
202,251,254,122,9,186,47,93,93,49,41,140,220,32,165,58,91,109,195,69,123,10,188,41,126,217,52,212,253,168,233,177,235,24,9,140,50,69,215,153,237,174,253,131,223,110,166,169,15,61,129,70,207,128,121,115,
244,7,39,28,40,215,218,17,249,141,186,91,97,118,135,87,32,176,30,172,18,121,219,44,163,149,176,182,65,239,120,246,169,59,10,32,122,34,83,9,205,106,44,181,124,71,244,58,47,190,23,236,161,54,225,107,92,
29,35,109,236,89,3,243,23,234,44,206,148,111,41,73,25,244,13,207,120,119,99,246,205,12,87,31,119,95,145,69,45,152,71,102,142,59,152,63,156,52,198,186,132,31,87,214,188,125,76,119,250,248,35,192,81,122,
13,78,24,111,176,51,139,203,185,191,198,125,228,230,122,108,71,147,26,164,187,228,21,104,7,85,176,244,53,213,98,54,75,231,253,203,75,235,136,175,39,89,180,19,155,136,230,11,97,17,23,149,53,126,220,141,
138,124,226,164,47,210,227,175,247,209,117,197,158,183,109,193,213,218,210,39,216,166,65,5,186,187,154,6,191,9,229,198,178,235,14,152,184,217,229,215,156,100,15,143,242,74,31,243,43,59,208,95,37,231,217,
224,175,133,192,43,74,178,91,122,10,51,58,200,220,12,207,34,8,98,90,221,82,70,169,0,1,172,142,131,7,9,121,196,164,89,209,70,73,39,158,85,141,56,118,151,93,183,134,104,103,9,117,176,145,49,119,78,120,157,
135,161,59,228,2,20,110,107,22,170,219,146,1,101,121,120,31,237,48,96,98,168,22,132,150,83,78,204,246,206,77,227,20,176,141,3,180,210,70,121,10,56,116,169,154,39,46,33,243,194,158,14,184,88,50,191,10,
186,2,181,80,145,14,99,28,137,39,114,208,123,54,222,248,149,187,220,117,63,113,122,107,233,210,87,14,97,5,110,85,176,212,21,204,228,70,170,116,55,82,78,189,228,172,154,217,50,3,188,28,78,186,168,246,26,
65,252,16,130,79,218,180,83,232,77,189,214,127,163,222,194,188,121,102,221,109,15,64,187,189,86,43,135,218,129,157,64,216,49,222,100,178,36,234,146,10,34,53,7,179,178,117,116,11,163,87,217,113,93,34,37,
173,3,122,201,109,209,229,14,116,35,60,103,239,36,87,60,180,191,136,111,69,80,39,207,35,217,52,122,142,120,132,45,120,233,53,101,191,67,192,2,117,110,109,180,180,150,207,218,12,157,50,112,179,74,181,21,
122,21,242,180,9,217,159,157,136,103,123,203,228,198,224,221,110,208,225,183,86,187,162,198,145,204,48,51,135,92,147,220,216,88,13,229,38,175,88,204,7,95,76,28,42,173,8,213,100,201,79,113,80,15,109,41,
161,77,90,7,144,101,183,200,162,215,196,211,219,202,122,34,228,83,102,111,83,62,22,59,225,44,103,139,222,12,121,104,224,176,137,199,229,214,253,221,248,228,65,229,54,11,114,89,45,246,219,120,204,115,81,
36,95,190,138,136,162,255,168,101,65,241,142,137,104,130,98,102,17,155,253,20,57,170,234,109,114,120,64,7,147,135,143,245,243,168,179,117,99,107,164,32,29,91,125,39,249,128,90,156,203,154,145,186,43,217,
76,103,121,225,61,180,185,14,114,185,155,225,169,63,65,100,158,129,9,79,153,243,193,163,229,63,38,9,110,244,205,23,130,175,144,243,60,59,159,4,48,55,191,230,223,35,187,59,29,32,88,242,109,7,56,13,216,
252,15,209,56,223,94,7,195,45,7,26,114,191,210,36,210,12,112,19,41,64,201,67,169,157,209,98,117,52,49,170,181,203,139,68,74,240,172,111,150,149,194,37,186,232,24,69,231,107,229,137,7,85,26,241,173,251,
217,206,186,17,105,119,157,85,172,155,97,132,193,151,251,76,243,214,57,110,96,13,234,97,141,195,187,13,107,153,133,89,47,56,10,69,109,84,236,176,58,97,108,103,169,191,74,243,176,69,169,178,126,106,226,
220,27,71,112,152,208,105,37,6,147,113,202,103,1,231,234,42,31,36,213,102,223,179,135,125,10,1,226,51,77,74,157,106,51,158,134,57,228,142,231,123,221,208,162,139,145,112,240,161,128,217,203,42,144,169,
9,168,180,47,226,65,231,201,47,12,125,109,148,157,247,29,248,43,106,82,180,140,164,85,4,189,38,192,18,189,159,52,69,35,190,140,25,150,53,32,69,180,147,232,198,199,231,245,106,88,242,162,147,81,104,238,
163,238,99,245,253,174,244,141,35,190,163,68,69,206,203,203,155,250,14,156,140,240,41,103,27,29,178,118,86,30,172,75,123,139,226,113,199,223,248,174,77,92,82,162,193,201,200,149,141,61,41,4,33,3,225,75,
70,193,227,179,146,38,224,166,171,128,163,119,20,160,131,151,77,101,216,36,247,7,187,61,174,97,137,221,214,181,153,53,200,197,178,196,205,233,157,150,203,98,39,232,143,30,177,214,170,3,3,5,243,69,117,
102,8,29,55,158,25,10,17,212,72,185,241,15,228,117,232,175,126,101,86,253,227,250,232,86,233,39,208,155,46,167,215,84,174,247,42,107,11,211,8,205,239,248,41,87,68,22,243,3,125,34,125,41,17,97,78,77,89,
39,193,74,182,58,185,142,86,150,230,159,238,101,88,244,245,164,83,230,205,21,14,220,144,178,124,62,24,124,27,252,208,113,138,117,73,231,241,28,123,9,196,233,193,10,91,133,105,133,99,142,145,39,13,2,112,
114,208,133,211,103,225,96,40,174,146,140,13,196,219,38,125,200,3,57,207,249,145,20,235,96,236,184,191,213,122,95,12,190,202,71,82,138,210,126,217,216,36,104,213,89,159,12,53,142,124,123,108,24,94,36,
59,5,218,165,13,52,92,193,101,122,129,218,151,255,38,7,208,6,150,152,106,107,42,36,94,201,184,122,227,15,68,168,186,175,249,107,231,62,131,128,224,91,245,142,207,218,130,94,117,210,36,83,141,75,210,63,
117,199,218,16,131,63,178,135,155,135,21,217,83,225,74,74,198,204,107,174,106,36,58,1,194,19,206,31,240,72,58,173,19,150,181,77,60,6,112,20,214,68,57,30,32,237,14,161,79,15,110,250,11,134,141,213,84,246,
63,31,99,122,134,56,177,24,1,206,238,8,27,223,225,193,17,47,168,196,204,174,11,28,44,11,242,14,2,189,190,89,194,239,232,226,108,130,27,101,236,207,138,23,227,188,175,27,39,29,40,67,88,141,67,89,218,39,
37,7,213,242,209,110,155,93,163,128,195,110,66,243,220,14,244,157,17,136,111,131,235,88,198,187,205,220,232,92,56,93,40,149,155,86,124,101,85,230,115,46,200,62,32,224,103,208,63,55,11,54,141,75,7,117,
202,161,122,165,138,194,6,199,209,247,157,80,136,76,208,224,101,11,131,54,244,12,161,252,35,192,10,116,44,201,247,188,223,180,152,26,118,115,182,174,203,117,183,29,90,116,145,191,76,129,192,177,118,24,
107,250,208,145,57,213,181,182,235,98,51,160,222,98,242,59,5,160,157,18,101,177,240,113,142,229,166,186,237,240,161,162,157,5,194,104,194,59,116,232,110,227,228,90,105,169,219,197,228,173,186,176,57,25,
162,229,117,100,235,172,3,130,59,23,244,61,36,95,111,239,23,129,124,134,22,2,74,185,145,19,171,147,192,12,234,229,245,110,50,154,125,95,174,177,231,192,24,180,42,145,213,46,71,132,224,56,131,199,227,242,
88,108,145,110,16,30,193,141,238,245,232,66,182,235,236,175,132,243,228,27,54,231,174,43,164,155,107,99,226,237,87,58,166,222,0,125,224,97,165,172,114,146,81,155,255,12,29,233,236,106,243,19,157,243,92,
142,116,246,214,167,238,185,118,200,126,81,248,42,57,207,243,23,252,239,50,183,71,47,184,123,37,36,244,172,117,25,201,213,36,72,75,139,142,224,167,55,215,27,71,194,28,115,6,123,121,46,77,73,203,217,152,
185,97,58,4,109,94,193,62,164,177,172,114,177,25,106,17,60,196,140,156,7,112,98,157,163,130,170,202,176,145,52,41,28,43,131,119,192,120,164,4,199,130,211,252,247,146,13,120,6,244,145,134,115,249,17,111,
103,217,192,50,137,19,233,223,37,246,13,85,207,136,16,56,174,52,111,2,155,80,93,163,202,214,165,114,92,69,208,229,83,252,96,1,159,12,33,189,198,97,51,210,219,205,23,164,116,238,248,124,214,0,9,172,156,
103,137,165,156,211,30,146,6,73,122,196,41,89,81,150,228,112,140,56,149,97,99,76,234,122,39,139,80,116,231,213,66,5,200,214,28,125,29,163,201,95,77,132,26,68,200,121,253,200,148,185,164,93,46,59,120,17,
23,78,163,24,137,39,21,202,227,93,13,162,19,119,101,97,178,141,129,255,246,192,161,29,100,116,231,46,44,171,158,162,192,120,85,174,31,231,137,24,164,95,92,232,102,173,239,186,172,47,84,115,254,143,32,
36,72,145,247,111,165,11,121,58,212,188,168,65,82,116,166,119,50,220,105,127,38,31,144,34,113,224,30,128,94,71,156,105,221,74,30,107,79,149,22,237,155,130,179,168,138,206,204,150,213,64,58,100,124,35,
75,27,178,86,212,207,251,118,78,8,234,70,88,57,30,148,84,231,147,23,188,111,172,243,29,224,197,165,179,208,174,27,167,53,160,83,87,125,157,227,147,206,178,242,51,76,144,28,112,34,63,124,58,181,237,18,
34,164,46,196,54,145,42,198,52,180,13,190,120,185,10,110,227,137,180,168,185,190,119,121,250,0,137,213,120,234,134,228,117,207,213,198,138,47,56,248,90,82,38,101,105,195,241,171,129,173,190,199,215,58,
49,194,143,95,210,37,218,219,148,127,210,49,44,63,164,23,75,46,119,22,125,86,1,60,132,94,136,155,200,169,119,45,217,78,237,153,243,188,202,180,141,171,40,243,123,151,182,49,108,66,71,152,75,201,168,177,
48,203,243,174,231,13,159,54,44,153,2,207,46,20,70,83,163,146,21,38,108,185,18,141,39,48,191,188,184,243,13,232,115,150,106,224,170,211,38,145,179,89,163,119,127,140,150,151,144,99,54,14,84,117,80,37,
123,145,116,52,141,84,85,189,158,155,11,102,62,215,78,247,245,69,11,44,25,185,157,129,17,223,133,47,208,100,55,82,148,171,61,255,245,14,137,65,212,125,214,65,142,130,43,27,241,166,38,174,118,25,71,188,
185,78,184,56,150,62,124,213,28,196,205,8,168,241,1,154,211,163,140,176,34,150,57,244,145,203,80,128,127,68,25,142,85,203,108,153,19,126,179,210,39,190,32,156,29,58,53,4,84,243,7,33,8,39,193,254,206,113,
172,127,238,116,24,161,59,221,221,214,146,140,147,166,150,148,33,221,87,142,178,184,21,229,50,8,217,54,94,247,221,166,129,33,219,53,14,6,180,8,99,231,223,202,47,44,227,248,214,49,120,106,123,17,221,157,
142,91,251,101,198,68,103,143,74,87,192,84,83,248,198,97,235,168,111,234,224,201,126,192,203,187,13,144,43,194,170,16,152,119,247,90,139,113,144,109,151,75,95,41,215,127,58,139,129,227,89,144,121,242,
48,155,38,126,12,211,47,203,37,63,212,70,42,216,32,66,58,39,255,91,180,98,185,100,251,162,76,101,60,249,119,26,62,210,53,163,110,105,24,38,14,170,63,148,175,120,5,98,9,135,20,106,225,46,71,9,234,36,164,
97,127,138,140,237,25,182,118,198,54,54,104,83,112,43,70,249,11,5,49,203,160,78,64,222,235,52,155,141,38,216,96,78,213,210,99,167,255,194,250,68,217,110,172,22,87,25,178,147,187,102,217,137,119,172,72,
206,140,203,133,0,220,176,202,50,138,117,197,124,12,252,70,171,90,155,62,41,11,137,110,156,72,153,78,36,7,127,34,115,130,126,17,39,158,101,95,218,93,77,62,117,30,90,181,176,244,11,135,96,100,154,237,184,
229,245,145,61,75,31,243,43,194,87,73,219,160,47,194,100,206,211,36,194,53,21,224,171,185,141,227,55,112,122,34,113,207,27,1,174,123,240,160,150,80,134,7,34,12,110,189,59,85,243,237,12,114,78,227,226,
213,106,45,106,182,56,236,170,71,52,138,140,155,30,151,179,40,189,153,120,68,84,179,13,209,244,119,17,10,108,184,234,20,124,13,95,29,99,209,155,24,80,49,1,94,102,102,126,81,20,171,90,1,154,184,74,7,17,
2,39,43,234,154,169,164,179,219,75,70,16,191,198,50,27,174,244,145,112,195,243,228,112,121,11,207,26,49,195,22,219,32,18,255,128,33,90,92,84,97,166,50,215,160,236,186,136,140,221,226,0,228,4,64,61,51,
19,254,49,38,85,76,245,134,184,172,187,85,139,150,168,127,47,243,25,161,107,197,215,231,47,179,67,231,102,185,50,216,180,112,158,190,242,232,225,149,244,53,73,129,239,170,198,195,124,72,172,14,105,179,
76,250,130,156,140,165,172,89,69,91,242,252,116,58,115,89,141,238,38,42,212,184,33,205,217,57,92,141,128,195,227,209,249,128,194,69,223,89,213,173,68,131,94,41,254,69,70,214,20,16,50,104,26,143,129,231,
54,99,149,232,188,105,73,192,115,168,83,232,101,202,98,204,86,212,187,94,198,29,43,119,70,19,65,124,110,61,214,18,251,74,61,132,149,33,44,65,238,26,46,103,175,202,90,122,15,239,193,103,218,83,215,141,
84,67,232,96,86,129,231,227,71,142,117,234,153,107,73,131,213,223,116,15,228,103,153,22,232,25,241,144,74,86,43,162,229,42,119,196,183,62,173,156,100,21,165,72,251,118,139,110,88,4,82,242,210,108,241,
39,58,27,211,69,190,65,115,68,210,209,166,243,219,124,189,176,140,147,229,180,182,17,141,152,38,51,145,35,46,54,190,80,168,160,72,212,19,39,93,10,105,116,56,214,85,113,247,143,236,99,22,131,38,29,250,
215,34,235,133,160,170,27,74,115,216,121,134,186,15,96,67,150,106,172,234,117,227,1,48,118,210,45,3,84,204,79,57,230,188,39,170,27,91,177,211,113,199,91,171,192,251,190,32,77,228,139,15,211,143,44,94,
207,103,183,26,244,139,192,87,56,231,57,137,155,31,26,206,107,159,253,119,179,52,220,215,195,122,246,159,202,10,20,214,156,101,21,179,160,159,109,44,108,117,254,170,112,19,9,84,189,44,27,4,178,228,100,
182,219,200,108,216,186,149,95,67,5,253,102,181,53,174,174,42,90,159,104,46,153,156,101,113,89,93,211,66,176,13,225,153,86,176,41,40,160,145,150,226,40,120,190,220,198,153,38,10,191,65,132,231,202,107,
92,170,11,51,221,85,203,87,42,225,179,153,105,136,215,72,7,19,181,245,64,59,215,238,146,197,40,218,44,229,110,180,227,51,96,1,52,54,116,48,137,20,244,44,121,176,157,246,220,240,138,13,99,135,118,71,29,
105,6,42,242,57,55,174,44,151,248,50,207,251,252,127,211,90,55,89,57,212,162,159,194,198,64,161,30,199,136,207,146,134,181,193,35,98,153,160,32,174,75,20,196,13,202,108,202,239,153,84,2,155,222,56,207,
119,240,221,48,131,149,220,206,1,116,122,87,56,171,198,148,200,50,223,7,71,32,144,103,86,254,237,77,49,179,76,45,219,26,231,153,66,23,65,188,185,174,156,188,69,162,61,163,76,53,152,109,196,153,71,84,167,
153,177,240,97,105,62,135,155,241,91,149,44,156,10,108,86,250,197,12,79,100,152,40,173,60,132,29,71,239,77,61,107,242,50,160,178,140,46,225,23,58,221,197,111,219,140,137,25,232,79,239,123,216,244,130,
138,48,125,175,209,99,7,160,95,28,181,230,205,159,221,128,166,238,143,39,221,56,233,216,5,41,62,142,107,144,196,241,98,173,19,54,154,171,189,172,178,74,50,76,15,19,12,205,194,46,239,83,165,74,199,106,
196,187,156,226,238,70,167,227,121,217,147,128,126,184,71,215,147,95,8,220,40,191,170,67,21,37,17,6,229,107,234,234,105,91,128,109,167,118,108,161,175,32,86,49,48,108,102,147,177,92,88,45,172,246,34,229,
102,14,10,212,162,110,89,198,152,203,162,163,58,240,13,168,36,255,233,160,98,113,138,167,62,108,47,128,62,245,249,196,192,244,199,114,240,109,208,82,152,151,157,8,163,236,45,252,213,252,155,91,110,177,
179,81,171,203,219,176,28,93,85,0,22,240,196,147,219,136,184,95,9,190,184,243,140,57,139,110,25,129,158,159,196,181,24,3,82,51,30,12,243,226,225,103,222,131,225,112,71,54,86,177,67,217,10,142,149,202,
40,208,51,231,225,1,227,44,60,133,51,107,191,136,137,155,9,100,37,101,118,3,212,12,69,232,0,31,145,160,218,136,84,175,142,114,245,1,3,138,128,198,194,168,67,137,3,45,110,172,86,245,185,104,40,158,247,
170,171,251,105,73,169,140,9,20,240,229,55,226,205,138,19,157,192,104,82,128,67,196,176,126,188,34,141,147,42,121,238,4,226,129,145,154,249,241,59,57,11,152,149,16,245,19,204,114,126,10,247,234,208,128,
241,7,19,16,37,80,62,240,111,157,242,2,67,176,203,101,149,222,44,134,110,57,64,131,38,3,94,111,114,80,90,150,22,187,171,240,115,71,71,192,3,250,55,158,197,48,186,208,102,126,224,166,223,21,228,131,105,
114,17,15,207,122,138,247,131,199,82,28,174,229,43,105,89,146,25,120,163,98,167,140,38,31,42,5,32,130,156,125,89,86,3,128,161,151,207,219,110,196,11,47,90,228,91,182,6,95,180,238,104,167,208,121,18,32,
242,149,191,113,223,122,61,163,254,117,105,82,89,101,140,64,198,81,80,231,24,155,245,170,78,174,220,101,36,23,35,174,74,3,81,215,240,204,55,134,87,87,30,250,101,60,5,99,171,119,84,229,34,14,85,84,7,124,
210,245,202,205,108,131,247,82,215,104,110,111,20,77,164,94,65,151,34,140,213,78,222,84,130,180,110,168,178,57,41,137,166,109,149,245,85,31,236,248,174,110,72,160,135,73,3,117,87,254,164,42,164,217,33,
240,113,65,229,244,53,190,229,172,235,29,228,141,37,41,173,91,22,150,211,23,150,254,108,0,241,72,190,154,117,83,244,22,199,82,86,177,64,123,85,29,239,105,218,172,29,87,194,37,47,145,48,132,107,115,71,
79,184,177,15,214,68,198,7,168,207,13,2,89,211,41,117,172,183,248,138,26,134,222,130,114,159,67,239,85,175,113,121,165,19,224,8,91,115,230,234,134,248,55,89,212,235,63,221,29,12,50,64,223,81,231,38,78,
245,191,242,37,219,177,254,154,240,85,34,207,148,243,108,240,231,102,120,252,206,99,187,212,105,27,9,218,8,181,180,169,166,176,95,117,186,239,206,109,164,83,149,213,96,11,149,21,192,158,132,53,19,4,183,
67,66,218,247,198,243,54,115,132,118,22,14,99,197,232,201,204,83,28,212,72,163,114,150,232,4,96,72,140,185,203,141,146,74,185,243,153,140,181,148,3,9,218,12,13,206,43,211,112,96,32,68,86,68,197,201,234,
205,164,212,176,247,211,189,25,88,103,186,164,116,178,10,160,227,210,237,214,241,132,147,47,189,186,32,34,151,138,98,113,51,183,64,10,50,121,4,156,207,238,141,209,191,1,52,48,155,246,110,201,95,175,233,
214,243,97,206,254,165,129,166,194,215,244,153,16,15,82,133,84,97,243,232,196,210,87,26,116,187,29,189,31,255,92,134,81,222,233,26,85,217,94,250,206,198,122,188,137,59,212,97,10,184,244,197,103,170,201,
4,47,195,231,139,202,121,59,217,218,24,149,252,13,178,198,125,53,208,35,185,163,28,175,7,61,154,84,224,141,137,30,188,208,50,87,154,128,64,116,126,42,226,205,249,235,73,155,94,246,94,190,206,168,147,103,
235,246,118,58,166,250,137,214,202,79,74,0,0,32,0,73,68,65,84,199,105,121,253,167,234,147,69,121,168,32,199,228,234,215,170,136,232,225,85,72,136,166,212,238,162,39,91,243,140,113,195,77,217,179,183,112,
214,22,174,142,181,174,158,233,80,152,162,70,145,142,81,111,7,45,132,46,169,143,131,223,77,61,165,206,12,199,13,104,221,101,234,2,161,185,44,207,47,219,189,161,63,183,218,75,231,221,129,227,176,166,30,
240,25,201,172,115,113,115,99,165,149,80,254,47,140,143,218,67,174,113,214,54,57,144,82,4,39,210,20,125,237,85,4,183,107,146,61,199,154,79,115,106,178,165,226,104,195,53,158,245,24,229,120,229,196,170,
117,101,227,215,125,88,180,214,66,59,234,37,201,204,218,123,215,201,38,0,126,181,211,145,144,69,146,137,41,156,190,67,108,51,127,56,41,143,205,26,79,217,210,152,229,101,2,36,189,109,115,28,183,223,188,
40,189,50,157,177,58,2,115,250,146,237,84,171,174,250,242,240,213,206,121,182,121,194,70,246,123,156,243,108,164,132,198,89,198,160,2,200,153,14,248,175,42,146,104,70,54,131,4,250,213,229,89,70,82,121,
216,112,16,80,144,103,174,232,213,194,67,70,203,134,227,84,197,107,244,65,179,195,166,224,128,168,65,234,207,16,230,83,101,55,126,166,211,205,70,166,48,22,227,185,80,65,20,131,9,125,251,151,40,227,52,
14,20,21,185,186,3,89,134,20,77,87,200,159,246,180,229,72,73,74,147,32,25,157,125,45,121,119,194,204,179,50,227,62,235,175,237,45,253,173,180,201,35,128,208,72,13,164,42,111,48,149,10,206,156,209,64,164,
115,178,170,6,116,134,130,38,108,221,89,87,237,181,65,29,166,10,219,118,122,72,128,187,136,17,124,142,79,76,158,163,113,79,190,165,60,154,176,101,227,21,200,23,57,135,18,81,69,143,3,87,34,186,41,80,236,
16,157,24,92,48,234,194,8,123,245,72,38,70,203,191,58,134,249,104,206,150,171,149,217,63,164,21,77,232,157,217,29,135,37,87,17,174,36,17,160,144,124,66,186,1,43,69,132,151,66,65,180,232,238,172,204,60,
124,240,164,133,58,172,89,21,208,248,226,40,21,235,7,49,180,110,156,230,164,244,198,38,53,212,166,75,179,64,24,178,1,165,215,219,185,81,213,77,11,39,64,228,114,90,192,192,87,139,234,204,40,122,196,63,
34,247,242,110,178,59,69,218,160,95,195,33,211,190,15,208,19,70,182,31,13,162,45,33,171,68,215,80,74,164,199,117,211,28,208,66,29,186,8,158,60,152,25,44,163,63,211,160,59,69,153,191,179,118,236,19,183,
147,166,108,56,114,189,186,147,248,81,127,163,235,114,151,175,156,214,184,239,21,250,202,158,249,178,151,253,205,70,134,83,200,50,14,226,66,114,139,170,46,177,35,127,225,186,234,167,122,40,23,85,188,238,
191,225,180,64,129,57,190,89,215,50,48,196,203,77,55,141,66,35,125,115,82,64,243,33,97,199,36,243,62,144,41,141,38,34,26,160,180,145,218,167,19,41,180,73,219,62,155,25,166,243,36,123,92,126,25,6,101,221,
46,163,52,196,175,4,95,229,168,186,14,179,227,117,15,50,233,8,112,34,56,166,136,17,52,142,70,214,140,14,132,159,4,198,86,63,116,167,247,251,78,62,77,199,13,25,193,13,157,1,60,127,20,84,235,112,66,220,
138,97,150,61,61,182,187,70,172,187,29,230,232,172,15,28,198,29,15,163,60,227,76,223,155,24,67,143,148,181,35,10,36,54,107,42,127,205,21,155,82,26,245,32,68,108,37,178,40,167,73,168,126,78,74,211,160,
213,28,145,152,117,56,56,123,249,34,43,223,187,205,57,195,185,113,138,82,232,187,56,113,112,114,2,175,133,102,184,161,78,135,14,197,186,34,229,185,89,212,195,234,3,56,89,101,178,208,197,237,154,109,114,
193,131,199,103,101,232,230,41,204,81,167,104,180,195,181,103,89,174,136,243,215,123,0,87,251,14,17,86,135,242,179,175,237,228,142,126,17,206,48,238,117,228,115,119,116,208,2,55,109,161,147,78,125,95,
45,75,64,67,23,187,181,169,108,38,138,248,204,17,123,192,53,121,19,25,44,216,127,95,112,233,8,226,184,108,199,182,252,92,20,94,114,10,65,47,104,87,205,104,130,82,12,52,11,179,203,234,178,12,20,166,235,
66,195,153,54,50,128,53,92,102,144,179,59,218,92,52,84,117,65,137,145,109,205,26,73,48,131,12,171,91,211,162,201,0,116,195,107,201,195,196,147,46,194,248,0,66,36,96,4,240,95,62,92,116,150,240,72,187,188,
208,182,209,196,50,243,210,43,122,191,49,56,73,89,180,109,220,87,238,34,66,64,185,129,34,167,58,46,227,48,21,83,147,37,117,0,108,92,156,60,239,160,196,82,118,199,123,209,58,201,198,216,4,140,45,234,22,
104,194,22,154,2,95,162,174,97,121,75,251,194,253,95,226,184,14,227,80,52,73,185,244,101,161,131,38,51,134,14,163,83,59,58,233,115,25,20,78,45,85,238,135,181,97,103,251,185,100,245,74,179,8,219,20,224,
200,7,131,199,68,121,239,148,84,93,58,218,127,162,154,77,251,25,249,115,233,18,125,213,217,0,47,228,53,212,19,147,158,120,167,130,91,68,231,170,22,139,140,71,208,189,250,130,45,4,27,221,234,176,58,235,
160,130,242,218,151,135,175,252,145,148,36,66,206,24,70,244,114,24,161,201,1,178,161,162,148,223,150,242,112,69,198,103,139,69,163,67,215,206,130,207,79,89,203,213,133,58,204,80,183,108,236,131,180,88,
194,100,4,13,208,201,64,126,74,33,105,131,145,198,95,149,160,47,72,220,117,28,234,67,37,9,8,120,240,134,187,118,145,179,181,142,54,211,82,120,254,88,215,127,171,29,174,182,165,180,233,194,233,32,184,68,
223,27,173,218,121,101,37,154,69,101,157,34,87,120,166,130,161,222,85,144,241,137,50,164,168,91,216,246,252,80,233,95,9,62,16,102,61,154,207,129,246,24,130,103,94,239,93,239,188,140,70,205,106,20,206,
160,160,140,65,71,28,157,108,132,83,223,199,29,56,180,164,39,56,210,254,238,122,193,214,201,111,152,205,59,148,11,238,35,208,145,66,34,187,20,35,24,14,166,139,232,7,141,74,195,134,168,222,56,10,101,223,
0,114,140,73,0,120,61,204,13,136,92,202,158,141,76,190,89,29,153,13,32,78,148,110,177,225,47,254,87,9,39,170,147,100,113,226,135,155,180,237,146,1,227,128,69,85,227,36,1,173,59,83,55,9,115,106,66,30,29,
91,118,151,131,111,57,30,232,0,59,235,88,224,139,244,241,120,229,16,244,57,58,84,76,196,213,113,237,66,102,202,193,74,251,196,209,245,94,219,3,16,61,203,9,255,82,123,233,248,189,195,111,16,69,84,100,193,
229,172,134,214,213,1,104,149,88,87,34,171,136,155,115,225,75,245,202,124,150,195,238,102,35,34,110,171,10,90,102,254,59,59,128,186,129,190,38,203,78,223,125,50,90,247,157,37,2,202,194,207,110,150,20,
101,253,236,84,105,111,59,80,32,203,167,208,71,159,125,105,59,214,1,195,188,198,115,148,213,255,229,160,79,234,13,176,249,164,216,17,1,65,8,38,228,41,199,84,242,234,242,46,226,50,198,207,171,137,177,58,
137,227,5,155,104,53,61,199,109,93,165,162,122,27,9,213,34,60,33,14,10,184,226,209,116,213,167,137,243,165,125,255,194,240,21,206,121,246,50,6,53,232,158,2,119,141,19,54,108,42,153,135,202,122,208,0,116,
116,98,50,184,74,58,92,146,59,220,186,199,172,24,118,178,82,180,67,88,117,211,112,250,202,200,88,82,199,107,175,219,88,9,206,183,253,154,44,17,102,248,69,190,37,247,114,251,121,100,16,82,200,167,36,135,
168,94,0,9,85,79,111,113,90,145,174,72,135,77,217,41,21,253,21,64,85,250,240,27,133,233,2,131,189,201,161,155,212,153,101,81,150,92,135,167,148,246,64,183,249,195,103,247,250,92,237,169,66,33,114,149,
167,156,48,52,109,74,221,204,182,73,200,1,31,250,224,141,227,115,155,138,7,213,197,165,72,111,233,61,81,160,199,217,119,37,45,227,196,21,176,113,96,231,28,119,27,106,6,36,209,152,180,121,220,148,107,126,
164,205,95,139,179,134,67,30,53,61,195,225,173,146,139,69,129,6,177,98,164,167,241,72,37,92,80,38,163,25,125,159,69,100,241,189,104,94,225,232,105,235,67,110,148,12,138,23,113,124,121,215,225,94,55,205,
71,72,6,57,209,109,10,99,70,170,188,202,174,189,199,1,145,71,20,2,107,186,108,188,244,81,162,244,203,208,57,245,201,117,195,229,121,167,177,180,32,27,205,109,87,249,118,2,196,103,90,12,115,219,143,93,
117,36,17,52,25,90,70,74,244,8,178,27,111,28,31,79,219,105,159,235,71,25,252,40,5,103,76,66,105,3,219,101,22,3,189,229,173,251,178,160,207,201,72,224,68,59,109,25,200,157,234,143,244,111,234,57,202,15,
58,93,42,74,96,48,119,188,138,248,55,221,156,72,144,207,8,35,79,217,139,41,190,80,98,179,110,143,114,170,171,60,204,0,105,71,231,120,184,218,236,181,171,173,141,53,77,8,82,240,74,175,247,219,225,236,162,
61,227,41,184,187,97,214,137,53,141,103,95,92,200,7,53,14,189,218,172,135,41,32,166,154,214,76,77,111,247,57,129,18,12,19,126,72,62,25,225,240,220,36,159,43,42,104,35,177,255,26,177,191,46,56,141,171,
222,68,109,223,207,2,14,112,168,178,53,136,24,128,245,190,94,28,137,47,15,95,97,195,224,32,59,58,206,201,176,175,168,124,167,3,184,156,108,161,186,29,127,188,169,164,64,27,91,234,220,30,236,81,78,207,
14,90,157,136,82,6,177,117,173,57,224,10,130,135,181,178,16,202,111,231,231,201,44,172,78,160,17,199,253,15,110,230,240,37,182,84,248,200,252,84,7,159,98,98,64,147,146,128,214,136,228,216,49,137,103,61,
209,2,180,132,184,196,41,228,136,29,26,30,80,6,106,24,99,40,67,208,254,102,38,237,168,38,7,124,104,172,64,186,211,33,68,229,21,64,244,220,176,86,84,35,203,234,132,47,80,96,197,113,101,94,107,175,152,233,
82,168,103,213,115,3,71,113,40,56,73,83,197,192,88,206,151,201,22,1,33,115,130,51,31,134,57,175,134,168,69,208,168,27,245,3,169,154,99,151,188,27,208,117,135,200,141,153,218,63,162,27,188,147,5,116,197,
33,144,54,50,121,118,216,108,40,140,11,66,187,74,161,52,207,215,46,164,216,234,157,43,253,152,217,170,211,251,171,98,194,165,40,24,120,36,43,68,198,187,104,215,179,110,195,129,103,69,22,204,219,246,77,
201,39,80,150,74,77,47,240,23,34,237,173,179,204,196,249,181,46,70,227,21,237,180,140,247,112,147,162,166,83,0,143,135,92,11,239,170,142,66,160,143,112,100,117,66,165,128,178,92,21,158,247,123,205,50,
58,182,214,188,128,226,35,122,20,233,186,232,231,212,119,102,195,105,138,185,207,196,141,87,131,196,121,81,8,239,21,139,89,85,233,209,128,137,64,150,117,197,177,63,185,58,241,218,183,67,44,30,144,158,
176,147,121,51,187,98,82,218,81,119,152,217,86,155,237,2,22,227,247,226,20,38,222,80,155,81,253,136,175,219,133,27,23,182,169,111,131,105,7,41,102,217,235,98,239,32,39,48,126,143,19,239,101,145,119,145,
111,55,65,156,226,13,57,121,196,161,190,129,2,123,49,232,120,95,66,209,209,213,246,135,12,168,94,7,8,144,188,209,110,164,126,55,55,120,202,211,170,221,109,241,172,56,151,190,245,210,78,43,99,162,102,250,
109,62,235,160,255,149,35,109,27,34,127,89,248,242,71,213,149,34,134,25,130,143,233,77,253,190,194,252,33,171,180,54,183,134,165,190,154,10,215,204,12,115,176,198,53,74,254,102,182,181,28,174,9,204,54,
153,169,119,152,171,123,108,228,28,107,20,142,162,192,97,214,78,225,96,91,78,198,239,188,33,39,163,224,219,25,161,98,13,21,213,187,45,86,94,101,57,59,28,117,78,178,105,119,40,100,41,144,116,188,224,163,
62,21,109,230,241,160,136,227,118,73,171,201,80,21,161,234,68,124,113,25,157,156,116,53,156,136,52,89,173,165,247,170,39,185,232,100,69,103,198,144,247,230,216,194,81,78,45,248,221,147,237,214,112,242,
229,124,109,31,71,12,140,4,230,26,15,223,153,41,198,147,143,123,30,34,205,59,229,138,55,205,200,75,229,124,167,33,229,122,201,167,198,141,163,14,209,125,119,30,46,163,174,25,211,141,75,224,68,119,121,
37,251,44,56,241,233,11,56,208,182,194,38,186,54,196,23,206,10,241,204,25,6,227,98,184,41,107,52,118,193,251,139,113,189,213,231,206,178,134,136,166,99,173,30,24,170,63,200,183,117,25,119,212,81,148,94,
33,95,50,235,186,212,124,9,47,231,111,154,65,110,220,54,217,112,198,37,98,193,17,207,134,174,211,14,98,80,20,249,30,55,227,182,18,30,85,238,246,146,44,30,114,161,128,14,137,246,2,205,185,109,126,121,209,
52,205,205,46,186,7,236,153,77,150,58,172,27,132,43,34,233,189,219,180,10,201,4,179,120,192,89,124,220,200,81,45,62,220,208,34,249,133,179,212,156,244,209,179,35,23,119,122,21,241,195,55,105,197,116,70,
132,123,245,98,70,240,75,39,137,188,75,255,232,153,5,209,146,142,252,76,194,68,247,149,153,3,101,43,127,110,250,67,207,55,79,106,79,202,188,84,183,196,64,39,185,89,167,95,34,94,9,112,90,136,205,148,142,
219,101,217,158,86,184,200,64,202,243,96,163,233,13,44,170,16,54,149,2,83,97,116,183,85,0,58,96,70,252,26,214,156,128,182,185,105,130,215,48,64,153,99,143,93,203,242,97,70,199,206,193,222,132,212,211,
54,157,229,30,183,196,96,209,72,95,20,190,206,105,27,215,80,134,227,115,138,102,225,151,133,187,133,63,234,72,201,138,42,1,115,13,27,216,162,232,115,32,43,79,177,26,112,203,156,162,81,86,62,150,145,194,
133,10,2,103,132,228,40,77,197,50,223,215,44,96,84,96,120,232,80,214,133,88,232,107,188,41,11,14,95,95,138,51,49,170,149,230,168,126,65,24,211,211,129,129,25,98,80,173,88,214,250,68,9,105,185,122,82,185,
161,201,212,109,124,168,28,41,223,157,198,67,45,191,81,80,248,27,198,164,250,14,198,135,20,15,124,254,46,125,214,82,66,58,33,97,191,116,109,89,210,78,240,213,166,104,138,41,42,187,108,211,91,191,36,31,
7,111,136,45,7,139,116,57,68,225,80,113,205,150,17,92,44,54,113,174,176,133,244,174,174,122,195,101,247,39,8,33,192,223,28,240,3,217,90,20,178,165,0,176,67,128,105,113,185,255,118,190,31,228,110,162,131,
106,243,121,243,150,206,71,96,216,23,232,97,71,69,31,112,167,185,28,103,137,125,186,4,232,28,124,203,59,205,164,251,158,52,37,213,208,115,15,194,140,233,168,88,174,82,163,131,216,215,53,217,92,104,48,
251,182,27,255,92,234,164,163,211,208,68,231,123,62,237,152,27,166,66,225,106,9,146,112,47,75,138,19,180,11,56,120,118,2,150,39,120,45,71,39,110,110,34,2,44,74,64,19,13,116,152,91,77,124,60,86,106,227,
239,158,63,170,224,98,221,240,158,99,127,12,232,159,203,213,58,170,221,95,112,47,65,151,112,211,138,105,117,92,208,95,2,76,184,146,71,19,197,110,53,55,16,83,213,52,121,49,178,155,122,230,190,58,140,4,
174,154,211,64,207,230,135,211,90,94,116,87,201,142,221,70,23,90,238,204,250,144,139,132,152,59,142,43,186,90,106,109,39,24,79,122,16,208,86,49,216,77,241,194,191,245,44,89,87,96,26,117,216,137,189,220,
97,101,166,95,35,190,80,81,187,209,199,219,9,72,137,225,197,223,58,208,73,42,118,85,3,33,110,203,228,171,202,187,51,153,220,204,23,225,17,208,78,100,95,95,178,62,183,235,50,214,13,238,230,215,8,208,94,
238,58,114,95,28,190,66,206,243,56,162,238,242,203,46,55,123,248,99,228,250,94,131,41,175,185,3,225,49,143,206,89,15,203,159,128,27,67,166,34,164,205,108,82,126,225,111,165,236,178,241,187,25,167,29,153,
28,244,224,119,0,167,161,104,54,237,174,58,127,97,141,192,114,206,45,51,186,228,77,49,34,203,118,96,94,226,209,85,78,82,148,222,180,172,254,80,52,28,180,102,17,25,112,44,101,156,229,141,5,254,29,176,51,
54,102,152,63,41,238,21,208,49,102,119,107,85,205,165,191,187,253,28,57,206,229,105,71,118,221,112,241,171,150,57,1,191,219,213,226,40,27,85,252,132,56,20,238,182,156,109,176,177,136,114,79,20,30,221,
7,13,229,82,249,109,221,150,10,168,247,19,152,161,113,20,222,152,198,50,31,231,7,5,20,45,172,29,119,182,35,30,202,231,219,60,181,170,232,98,67,90,140,50,123,224,55,175,101,121,195,9,137,150,24,245,243,
27,122,111,95,247,157,138,174,225,152,143,175,52,118,184,23,193,141,190,64,216,52,205,26,26,15,114,138,195,169,110,226,187,121,131,198,33,32,175,190,137,7,125,5,227,67,218,6,150,112,203,57,65,71,199,56,
130,170,203,10,148,148,13,14,122,201,146,247,13,56,210,107,229,83,188,121,111,20,43,3,6,123,7,42,107,208,44,71,159,251,179,255,170,25,115,51,201,144,202,31,60,91,48,116,166,13,157,208,80,52,74,65,205,
47,60,242,94,156,108,148,71,135,49,68,42,213,239,122,221,215,113,135,21,147,150,197,190,230,210,45,228,144,142,190,41,56,49,129,149,156,118,242,6,86,237,148,101,69,185,41,181,113,170,72,178,240,56,105,
173,229,140,72,136,72,2,117,194,114,98,157,99,238,176,127,128,7,82,37,128,250,146,149,101,115,85,57,60,67,17,199,1,178,201,99,196,98,60,154,57,238,35,197,6,19,44,88,6,199,111,70,169,213,53,78,223,165,
96,246,158,142,130,50,67,175,55,247,2,153,217,186,64,111,105,43,102,11,142,180,9,41,151,109,163,252,235,140,6,10,179,243,35,21,25,93,251,212,247,229,55,94,195,111,116,135,204,134,113,97,95,19,190,188,
243,124,185,249,203,252,123,117,187,94,220,34,46,139,235,97,246,242,98,175,175,143,209,239,151,65,244,80,239,153,188,14,240,146,192,98,96,158,223,120,211,69,68,102,125,179,140,216,225,110,107,138,150,
207,208,161,47,131,43,42,203,77,36,135,121,107,105,117,183,169,111,163,232,51,251,171,151,91,25,63,82,41,27,103,198,137,132,162,200,155,2,134,110,122,20,242,16,243,193,105,235,110,41,214,153,206,46,142,
34,59,155,104,48,54,191,137,110,184,49,166,55,209,164,162,212,250,233,180,38,109,146,238,194,119,0,115,118,156,52,159,120,228,68,234,146,136,85,243,72,222,219,40,88,68,157,20,5,185,229,235,174,96,152,
144,148,247,205,104,183,45,148,122,41,17,82,9,176,53,183,253,172,186,144,246,111,246,17,253,173,28,154,230,9,206,29,237,15,220,32,79,117,116,111,212,37,66,129,242,84,74,212,201,120,222,118,105,7,133,127,
67,251,118,110,170,240,115,221,192,38,110,154,205,160,67,143,193,188,219,246,231,15,7,194,228,22,27,2,96,251,156,156,152,55,31,142,90,150,152,85,77,8,242,249,174,255,132,12,200,207,218,57,95,111,85,127,
129,223,3,74,38,190,100,170,57,94,169,174,168,242,155,142,254,194,15,202,38,75,125,235,35,237,186,75,33,157,0,63,253,82,241,218,1,150,158,197,63,65,33,185,89,98,95,198,108,221,160,214,54,133,87,50,193,
173,89,232,173,50,81,95,179,173,116,157,16,126,149,205,134,75,199,157,233,150,69,68,135,14,108,217,158,104,102,237,205,28,106,182,20,109,151,82,246,173,229,100,81,95,136,34,217,30,3,198,109,204,204,140,
87,87,28,194,95,153,162,8,81,212,112,150,52,168,165,26,198,85,16,101,17,28,197,190,134,9,251,45,227,246,88,221,141,105,203,167,27,142,61,154,136,212,191,101,97,34,76,207,176,238,128,209,124,89,210,206,
10,181,220,3,180,10,42,244,18,177,187,163,140,190,60,245,7,212,187,13,146,130,43,133,174,210,229,102,254,98,195,105,246,177,249,240,42,7,122,70,157,221,199,249,207,95,17,190,124,206,243,5,157,187,220,
226,114,123,92,62,8,241,146,12,62,162,96,30,144,55,187,74,56,192,205,64,137,209,227,146,232,20,118,221,188,128,53,25,2,6,142,252,130,172,79,148,232,202,107,168,84,55,120,46,191,181,134,52,149,170,8,49,
5,160,205,19,126,10,179,240,10,48,16,193,194,194,5,89,209,96,25,158,132,4,93,167,145,82,157,182,246,163,149,74,59,234,187,200,250,221,88,111,170,222,24,57,172,10,157,64,68,178,157,105,43,127,141,181,62,
27,184,196,54,113,191,209,41,239,4,81,252,229,200,25,231,208,138,1,91,216,4,88,107,140,109,211,20,247,2,116,223,90,54,122,51,235,134,250,165,88,159,247,16,77,61,161,155,205,224,114,35,241,235,196,17,69,
162,88,111,141,36,223,136,132,32,13,2,136,185,162,217,79,36,107,29,133,41,75,227,210,216,158,19,155,19,24,5,88,169,217,25,119,192,101,111,71,65,99,4,210,82,82,112,132,22,72,227,94,34,101,147,223,56,98,
126,227,174,132,9,98,174,55,160,156,234,70,40,139,145,230,172,84,82,175,200,73,31,140,95,237,47,114,185,195,79,176,242,45,158,106,253,149,91,63,42,189,57,112,208,198,26,98,124,142,176,153,217,242,61,128,
118,104,52,13,226,174,87,26,20,226,241,228,116,170,60,59,254,142,179,249,74,236,167,177,73,160,238,167,61,161,205,72,70,193,129,108,192,205,56,26,24,188,201,146,109,130,224,34,178,118,7,232,188,222,219,
215,217,127,140,140,214,125,39,150,233,159,169,43,17,57,231,64,65,244,126,135,121,57,83,32,28,106,194,254,98,159,36,204,187,13,28,236,37,22,87,213,242,26,55,216,17,45,97,108,204,114,181,17,250,134,244,
80,198,35,71,98,94,111,207,89,55,163,227,99,171,247,108,9,118,65,187,29,224,147,145,146,17,102,126,141,180,141,107,44,90,13,231,249,26,145,232,151,225,79,126,88,180,63,19,190,202,71,82,114,150,16,47,151,
61,30,102,223,92,97,126,133,61,98,18,221,243,183,139,243,204,42,255,118,230,15,2,219,133,165,8,149,149,80,101,152,225,231,111,213,33,88,244,36,26,144,69,87,59,63,163,194,132,144,188,200,66,77,187,63,22,
166,94,208,55,222,240,184,62,199,59,237,148,27,59,51,217,8,45,191,72,219,88,49,221,231,92,68,131,47,88,237,156,5,174,10,243,135,239,12,92,214,165,74,85,233,121,115,93,248,2,63,81,55,114,3,235,218,85,51,
219,237,119,184,29,73,130,214,36,91,60,118,93,189,27,110,156,190,172,213,142,49,163,101,247,32,134,42,69,23,225,55,84,98,195,86,125,36,199,112,166,87,97,73,234,203,174,54,237,15,247,108,71,59,229,153,
117,234,242,196,41,66,101,49,249,82,87,180,170,180,188,202,113,38,164,168,153,173,107,6,198,220,130,35,178,124,138,69,202,203,147,85,80,251,145,219,52,122,173,0,217,103,135,49,48,163,104,171,12,221,126,
146,162,203,12,239,161,241,83,208,142,92,219,238,173,190,66,111,218,196,241,119,13,95,98,19,52,35,182,73,11,137,64,17,99,45,70,164,235,91,86,72,164,146,122,85,180,148,136,218,115,27,17,236,40,189,69,148,
69,7,163,211,178,41,76,142,207,77,61,119,112,171,196,4,63,206,41,50,18,168,27,30,126,86,95,189,26,88,205,204,89,46,123,186,58,109,142,149,64,227,41,195,219,238,132,45,99,247,126,4,181,147,23,224,193,124,
184,27,214,55,219,109,23,100,244,224,38,165,112,25,99,218,17,184,14,244,189,61,217,251,7,108,85,66,222,117,42,135,123,125,238,117,161,217,93,74,220,29,80,15,50,0,123,89,101,41,92,47,14,17,104,179,151,
25,144,253,154,240,85,62,146,114,93,151,189,188,216,96,134,135,217,107,60,204,166,211,236,143,48,127,204,143,50,0,95,208,111,67,157,62,153,20,78,119,232,99,171,208,193,146,133,178,226,152,221,41,16,201,
70,160,32,243,9,42,11,220,20,98,40,12,192,58,79,211,56,68,195,210,189,221,238,123,124,23,30,224,123,158,108,10,13,229,174,242,34,26,138,13,111,116,219,146,65,127,239,80,89,31,9,56,217,100,50,224,80,193,
232,10,150,117,169,156,45,211,250,73,240,238,223,58,159,245,155,223,123,124,247,119,84,125,172,42,133,236,9,121,43,121,3,222,0,199,103,171,213,54,99,80,170,73,157,132,165,10,117,252,198,47,192,146,250,
164,88,174,125,199,178,137,255,69,81,210,253,100,103,199,231,102,234,228,41,254,139,189,7,103,79,63,215,35,241,20,49,151,252,124,220,191,81,222,79,253,37,151,103,57,32,64,237,208,33,223,141,132,213,38,
103,150,229,205,23,250,178,149,133,172,239,245,182,24,15,116,180,161,7,245,42,179,219,184,209,58,75,29,135,103,50,20,52,128,187,3,103,158,189,42,214,114,227,14,1,142,66,227,158,48,142,119,113,188,232,
212,136,157,109,223,146,181,251,93,143,81,71,77,29,75,149,194,184,174,210,47,122,19,120,70,123,131,9,59,220,119,69,244,235,46,81,223,195,247,233,176,32,53,134,174,236,96,135,47,180,161,223,146,99,43,38,
114,1,158,239,187,240,144,241,145,179,149,35,209,45,87,37,168,223,46,101,48,184,138,201,55,178,202,128,248,42,231,212,170,145,219,27,27,92,1,39,50,70,91,84,246,186,142,202,73,27,96,106,131,8,167,94,150,
246,173,241,219,172,91,155,45,215,59,156,198,228,217,51,199,249,178,118,156,95,204,94,190,177,142,64,127,175,188,248,54,124,178,243,220,135,84,247,53,254,238,175,231,245,236,32,174,176,120,201,66,49,152,
237,117,48,70,60,196,57,200,98,240,155,89,83,247,240,238,24,119,195,92,170,206,36,114,129,188,55,24,190,141,101,59,196,233,204,136,233,113,86,117,107,70,160,158,186,184,98,183,135,93,255,238,174,115,75,
32,70,162,175,109,201,59,170,37,60,161,218,106,16,158,188,187,131,164,82,58,102,119,189,25,50,218,134,59,208,179,136,86,170,140,199,44,235,217,130,173,10,165,43,7,140,225,154,206,62,202,246,160,236,46,
143,55,244,25,194,29,181,100,20,182,68,118,126,158,248,185,25,127,109,13,171,109,26,109,155,165,238,225,38,191,76,25,64,165,168,199,38,5,252,234,149,140,55,71,125,233,79,220,11,184,26,31,51,72,183,242,
197,94,224,235,203,228,68,235,127,54,60,40,239,198,252,181,44,181,222,73,129,34,180,129,230,107,105,219,204,194,119,14,147,32,189,8,174,240,57,161,211,60,141,228,95,228,37,77,120,69,188,186,127,40,175,
253,235,137,57,116,25,143,29,169,148,62,27,241,194,141,187,45,94,46,175,175,212,146,158,111,57,115,105,126,25,15,40,73,78,137,214,42,129,2,108,139,89,117,138,109,19,163,54,124,205,206,5,233,14,124,198,
41,3,91,30,127,115,198,162,194,182,23,190,53,61,164,229,116,160,201,156,179,29,214,141,136,135,9,122,91,117,113,135,63,107,250,237,88,2,34,55,90,125,177,99,93,27,235,224,156,72,146,21,247,122,200,181,
74,99,132,229,93,119,182,12,41,2,64,58,233,166,14,108,255,238,222,135,96,39,156,239,209,239,247,251,31,62,82,139,182,124,153,141,84,59,183,58,89,99,164,252,186,189,188,204,244,141,25,137,222,183,106,79,
253,212,247,124,81,246,14,190,215,200,243,30,17,183,235,10,123,249,102,48,128,251,101,175,115,54,241,120,13,123,184,13,165,254,104,166,51,67,97,72,198,1,146,203,121,162,237,128,181,18,189,27,122,188,126,
210,147,126,195,205,248,243,181,187,114,106,134,110,74,147,2,2,131,228,92,58,157,118,135,27,153,171,212,74,26,104,240,22,55,218,74,131,237,67,51,243,216,83,107,170,122,137,38,183,114,95,232,45,90,149,
106,75,99,144,247,168,255,110,156,242,193,78,160,75,93,187,141,10,59,33,93,76,133,27,69,228,10,223,119,189,108,11,189,137,106,168,135,221,56,242,110,72,131,233,160,192,169,37,59,87,165,251,251,44,239,
250,61,220,253,140,11,244,61,127,227,247,157,89,122,143,50,122,47,30,59,41,198,103,124,175,106,117,147,232,120,255,183,54,44,81,213,178,146,80,249,169,89,72,150,76,113,91,250,179,20,129,39,208,226,129,
57,203,136,169,242,57,223,185,179,187,75,191,73,25,238,141,125,35,149,194,189,26,155,42,10,66,123,199,243,187,102,223,107,251,179,238,118,66,193,33,220,165,92,128,115,6,254,206,6,9,3,130,192,208,202,6,
151,128,254,209,107,84,237,59,20,46,213,115,103,55,66,112,148,99,27,205,44,183,157,142,107,156,200,185,240,113,152,70,163,201,209,84,198,192,149,132,205,138,208,194,43,248,234,122,155,90,13,42,189,235,
63,214,165,60,31,116,141,191,216,29,16,5,45,246,102,193,144,80,16,5,32,41,81,171,251,182,199,255,94,23,126,46,172,245,144,125,216,160,179,211,142,245,236,153,178,176,85,172,136,111,168,5,176,63,69,254,
160,231,239,129,123,253,150,215,28,16,115,183,114,160,47,183,225,60,127,147,14,116,140,141,131,84,243,77,187,159,225,40,239,224,195,206,243,91,8,104,212,57,147,210,95,190,25,36,121,181,24,142,243,21,246,
120,9,123,60,204,226,49,4,123,23,121,254,50,112,103,160,243,217,91,12,241,126,97,105,70,89,189,51,102,34,84,23,115,42,128,209,77,17,126,206,109,189,105,116,135,234,162,68,184,126,54,150,79,28,148,77,51,
119,207,118,104,172,56,117,187,174,116,127,230,107,97,117,50,116,75,215,197,14,139,13,94,245,239,247,1,27,220,117,220,245,184,64,50,210,62,57,37,181,166,104,81,62,77,160,173,127,245,103,107,3,213,168,
237,70,235,3,20,208,129,191,211,220,59,45,189,208,71,29,164,116,110,86,43,78,37,158,161,76,207,102,218,9,165,189,160,129,222,109,234,217,84,243,97,88,77,6,159,161,192,46,135,230,183,43,62,239,146,175,
207,5,17,112,244,73,158,124,55,167,94,237,33,67,55,105,87,57,190,173,41,81,111,164,39,188,49,40,232,226,7,92,71,81,93,86,84,64,14,239,168,186,83,71,170,215,48,65,106,28,235,169,5,133,184,27,167,189,111,
162,83,45,231,164,45,112,167,44,87,249,217,174,164,45,233,1,179,157,183,6,27,113,93,244,52,216,54,116,208,182,134,162,21,214,51,173,196,123,19,158,228,56,239,208,136,137,231,82,171,53,79,144,93,76,156,
92,170,201,73,135,227,203,212,87,114,16,67,134,159,234,102,162,133,153,57,41,111,136,103,7,150,127,191,15,146,245,110,17,68,164,0,37,230,99,219,248,36,77,27,98,9,32,171,250,217,55,135,42,109,177,78,157,
147,95,199,204,77,131,47,47,243,220,231,111,46,187,94,110,106,184,137,56,191,85,246,189,240,73,145,103,109,8,29,230,77,233,250,117,125,51,34,206,175,62,54,12,250,195,236,229,49,114,151,243,175,128,118,
101,69,59,7,54,175,63,193,76,168,211,146,255,212,145,81,102,148,147,90,77,214,53,91,144,15,99,176,117,22,214,138,158,233,169,93,25,118,3,246,121,148,123,184,139,161,168,210,110,35,176,195,225,13,159,118,
227,12,168,73,99,108,247,138,80,141,235,59,250,71,202,108,67,85,244,6,146,18,116,132,222,166,62,169,226,246,190,26,65,42,251,92,213,47,25,213,104,227,238,154,246,141,67,115,131,130,37,122,65,143,181,169,
149,68,213,183,123,244,57,58,214,247,198,171,108,230,250,188,241,217,83,202,177,141,70,178,148,120,80,125,58,116,156,120,14,136,81,100,45,211,171,224,56,61,176,232,207,170,201,38,159,141,28,18,85,197,
61,3,9,100,116,182,178,150,6,6,248,224,46,143,49,164,213,157,80,0,194,52,148,234,16,235,235,31,82,179,194,80,79,181,216,91,101,191,4,164,147,179,210,155,129,220,29,249,125,175,255,248,247,202,227,207,
84,71,232,89,199,84,38,64,149,172,142,233,122,136,221,188,159,206,140,56,115,136,48,69,217,131,11,129,180,108,247,174,175,176,106,106,106,19,225,214,85,64,164,140,153,83,117,199,110,211,37,224,136,217,
209,85,227,246,204,201,139,75,87,110,123,142,170,38,139,60,19,10,213,59,210,87,21,84,74,173,11,38,150,46,87,210,243,48,60,189,101,52,11,68,120,175,220,170,131,99,182,12,116,146,2,79,114,25,160,167,185,
236,171,223,95,61,159,236,32,250,77,146,185,97,240,138,145,186,49,157,231,225,56,163,110,127,187,227,59,255,245,83,224,179,210,54,222,147,51,18,143,176,235,165,15,0,246,111,220,252,101,164,105,60,30,227,
95,123,12,130,133,133,217,99,22,245,27,126,72,39,64,199,114,62,203,242,124,88,160,22,94,21,119,147,127,195,180,85,242,2,7,0,155,83,41,6,28,23,253,139,150,42,202,48,46,203,147,96,197,251,85,80,148,224,
227,109,201,176,49,140,216,207,181,119,251,231,183,80,93,94,251,190,106,53,3,5,189,241,80,116,138,46,70,228,221,82,250,38,242,59,227,137,163,56,158,139,139,166,61,121,174,19,229,142,46,126,237,183,78,
40,147,124,250,102,160,221,104,124,228,189,124,119,33,229,141,161,106,121,204,20,30,196,127,186,18,192,183,201,209,69,29,169,143,233,58,234,218,13,47,218,139,213,176,43,125,93,238,137,241,188,171,40,9,
177,176,54,202,233,13,95,191,203,206,58,95,63,19,234,119,194,202,139,128,246,27,207,238,158,223,149,99,177,220,57,25,207,90,95,62,23,116,3,237,142,98,187,90,34,107,217,246,143,154,151,148,28,116,102,150,
86,161,128,126,240,66,95,89,186,34,99,251,86,23,17,81,170,235,13,94,184,205,211,214,114,218,30,235,40,68,145,108,224,66,108,25,143,157,29,70,124,182,15,89,121,180,61,127,83,11,125,8,72,215,56,182,10,246,
211,204,66,120,209,203,169,205,119,39,157,222,19,50,197,254,60,19,129,101,108,93,126,245,53,83,188,159,49,223,235,91,183,232,109,202,112,91,66,57,65,254,153,36,62,131,143,142,101,242,223,220,85,51,55,
13,142,35,235,230,6,66,121,227,151,191,250,229,120,229,29,126,233,231,230,59,155,125,98,218,198,174,209,188,143,127,17,97,255,246,255,249,87,246,167,127,242,79,102,216,61,89,213,205,46,27,78,117,100,228,
121,58,76,48,243,189,211,7,61,180,234,160,188,165,176,239,238,127,30,17,255,102,193,73,80,211,77,97,61,212,121,111,236,116,248,60,22,106,82,212,237,62,151,58,135,39,47,195,132,15,66,126,162,246,216,141,
166,140,90,203,202,155,14,253,78,164,235,26,124,25,42,35,133,23,27,247,30,93,128,134,246,77,205,120,103,61,180,161,143,56,203,123,58,238,235,102,217,208,207,83,63,119,254,215,218,223,26,19,44,243,214,
120,189,199,19,170,177,220,144,180,199,52,29,135,116,98,187,192,86,39,160,21,133,122,239,78,47,123,27,196,1,68,71,154,48,181,13,33,55,157,215,104,1,61,147,247,239,174,169,141,77,217,39,125,116,51,10,120,
237,82,97,159,145,136,13,56,242,216,110,90,154,13,221,213,152,111,179,108,60,147,128,221,253,253,57,29,102,190,204,133,178,25,0,0,5,178,73,68,65,84,108,222,94,9,219,18,243,142,125,252,119,72,224,51,124,
126,119,239,35,202,239,153,9,211,77,29,53,174,59,102,80,228,51,26,59,158,173,1,165,13,142,32,67,203,247,175,50,21,48,100,253,17,150,250,125,97,180,13,161,158,58,228,0,19,221,103,67,178,239,4,252,198,62,
0,95,63,81,89,84,203,158,23,81,31,171,22,86,28,222,170,245,35,10,225,83,193,111,126,39,60,105,75,77,224,157,94,188,107,185,84,123,110,22,116,8,146,79,189,225,163,206,199,235,171,253,155,63,255,87,246,
191,253,159,255,203,166,158,213,47,189,43,243,81,248,236,211,54,208,81,214,231,17,97,255,221,255,240,223,216,227,49,194,201,17,241,36,189,227,192,129,3,7,14,28,56,112,224,192,129,143,1,58,193,250,239,
174,220,223,200,105,27,119,222,188,58,211,187,127,17,142,35,125,224,192,129,3,7,14,28,56,112,224,163,176,219,20,184,251,247,206,79,253,28,7,250,179,55,12,62,67,204,204,200,105,190,251,125,224,192,129,
3,7,14,28,56,112,224,192,71,224,238,236,230,157,147,188,115,152,191,186,243,124,93,87,57,192,121,253,250,250,186,32,119,93,151,61,30,143,219,244,142,3,7,14,28,56,112,224,192,129,3,7,62,10,187,20,141,235,
186,182,206,178,222,207,235,79,129,239,45,231,57,17,121,60,30,118,93,99,147,71,230,58,167,163,141,209,102,140,64,31,56,112,224,192,129,3,7,14,28,56,240,30,120,79,62,243,117,93,229,32,239,28,234,175,158,
243,140,72,154,217,18,133,206,231,233,76,227,59,186,105,240,164,110,28,56,112,224,192,129,3,7,14,28,248,20,216,165,107,220,57,203,25,220,253,27,117,158,211,105,198,104,179,153,213,117,58,201,233,48,227,
230,65,133,19,129,62,112,224,192,129,3,7,14,28,56,112,7,119,17,231,252,119,231,60,103,4,26,163,208,159,147,178,97,102,230,17,241,141,153,253,161,153,253,253,249,239,155,14,245,79,127,250,211,127,97,102,
229,56,191,190,190,214,111,252,67,167,25,35,206,232,40,31,167,249,192,129,3,7,14,28,56,112,224,192,123,225,238,164,141,187,212,13,116,152,95,94,94,200,121,254,217,207,126,246,103,239,104,242,59,51,251,
43,51,251,119,102,246,87,223,203,23,6,53,215,57,33,29,106,77,215,80,135,249,56,208,7,14,28,56,112,224,192,129,3,7,222,2,141,24,171,243,108,102,75,148,121,151,251,252,89,56,124,74,228,217,172,163,207,102,
182,68,155,53,242,156,191,19,78,218,198,129,3,7,14,28,56,112,224,192,129,143,192,179,180,141,252,189,75,217,80,71,58,225,157,81,103,51,137,60,167,243,252,19,99,231,249,93,46,249,51,7,26,157,230,93,234,
134,217,113,152,15,28,56,112,224,192,129,3,7,14,124,28,238,190,57,242,86,222,115,194,7,28,231,48,118,158,127,238,17,241,98,102,63,50,179,63,54,179,63,50,179,31,216,248,184,253,187,64,29,104,140,60,155,
217,187,242,158,15,28,56,112,224,192,129,3,7,14,28,248,8,188,245,229,64,141,60,39,124,192,113,54,51,123,152,217,175,205,236,47,205,236,47,204,236,23,30,17,151,13,135,249,143,108,56,208,63,50,179,151,143,
32,143,14,244,93,212,25,159,229,111,132,227,76,31,56,112,224,192,129,3,7,14,28,184,131,247,228,59,223,69,159,19,62,232,56,155,153,189,154,217,47,108,56,206,127,105,102,191,246,136,112,27,169,26,127,104,
195,121,254,80,234,70,2,58,208,102,28,113,214,40,244,14,142,243,124,224,192,129,3,7,14,28,56,112,224,14,238,54,250,61,251,146,32,194,39,56,206,152,178,241,23,243,223,239,124,58,173,159,149,186,145,160,
14,116,181,124,147,178,113,28,230,3,7,14,28,56,112,224,192,129,3,31,5,253,98,245,91,95,14,252,4,199,217,108,147,178,97,102,175,233,60,187,117,234,198,223,51,179,31,219,112,168,63,233,44,143,59,39,58,225,
108,26,60,112,224,192,129,3,7,14,28,56,240,41,176,59,231,249,14,62,209,105,54,27,81,231,87,51,251,107,51,251,247,54,83,54,204,44,208,121,206,232,243,223,51,179,191,99,102,63,180,79,136,62,31,56,112,224,
192,129,3,7,14,28,56,240,59,14,15,51,251,149,153,253,127,54,156,231,95,216,112,166,35,207,116,78,239,250,215,102,246,115,27,57,207,185,145,240,243,78,146,62,112,224,192,129,3,7,14,28,56,112,224,119,7,
194,204,126,99,195,97,254,185,13,255,248,117,222,167,15,162,96,193,111,230,223,139,125,70,250,198,129,3,7,14,28,56,112,224,192,129,3,191,67,144,1,229,95,217,112,156,127,97,195,63,174,60,99,77,203,72,7,
250,151,243,239,55,54,194,214,39,49,249,192,129,3,7,14,28,56,112,224,192,239,51,132,13,191,87,125,97,242,131,245,83,220,234,109,231,121,207,223,218,137,64,31,56,112,224,192,129,3,7,14,28,248,253,132,244,
129,127,99,99,147,224,207,109,248,195,149,174,145,160,206,115,190,156,47,218,124,233,71,54,242,159,191,181,225,64,31,39,250,192,129,3,7,14,28,56,112,224,192,239,58,132,181,239,251,107,235,60,231,191,182,
77,212,217,108,239,60,103,69,191,134,202,126,101,102,63,177,225,68,127,107,35,221,227,56,209,7,14,28,56,112,224,192,129,3,7,126,23,33,157,230,76,211,72,167,249,23,54,124,224,173,227,108,246,220,121,78,
7,250,213,198,215,85,242,239,15,108,68,161,95,140,157,232,227,72,31,56,112,224,192,129,3,7,14,28,248,109,133,48,118,154,243,164,185,95,26,111,14,92,82,53,16,238,156,103,108,228,117,54,144,158,249,31,88,
59,208,120,42,199,113,158,15,28,56,112,224,192,129,3,7,14,252,182,66,250,181,25,16,78,199,249,151,198,209,230,167,7,101,248,7,190,240,151,31,82,121,177,145,186,145,127,63,180,206,133,62,112,224,192,129,
3,7,14,28,56,112,224,183,17,48,29,249,55,240,247,106,111,68,155,17,62,226,60,155,181,131,124,205,191,23,59,145,231,3,7,14,28,56,112,224,192,129,3,191,253,128,145,103,204,172,200,103,239,130,143,58,207,
244,174,157,124,231,3,7,14,28,56,112,224,192,129,3,191,59,16,242,247,97,248,255,1,194,166,215,110,107,255,5,38,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::presetsPanel_png = (const char*) resource_MainSynthGui_presetsPanel_png;
const int MainSynthGui::presetsPanel_pngSize = 26127;


//[EndFile] You can add extra defines here...
//[/EndFile]
