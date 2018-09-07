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
    //[/Constructor_pre]

    slider2.reset (new Slider ("ADSRVol.Attack"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (24, 288, 40, 104);

    slider3.reset (new Slider ("ADSRVol.Release"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::LinearVertical);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (88, 288, 40, 104);

    label.reset (new Label ("new label",
                            TRANS("OSC")));
    addAndMakeVisible (label.get());
    label->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (24, 16, 128, 24);

    label2.reset (new Label ("new label",
                             TRANS("Filter")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (304, 16, 160, 24);

    label3.reset (new Label ("new label",
                             TRANS("Amplifier Envelope")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (16, 256, 168, 24);

    slider4.reset (new Slider ("OSC1.Volume"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider4->addListener (this);

    slider4->setBounds (16, 40, 88, 72);

    slider5.reset (new Slider ("OSC2.Volume"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (0, 1, 0);
    slider5->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider5->addListener (this);

    slider5->setBounds (16, 112, 88, 72);

    label4.reset (new Label ("new label",
                             TRANS("main")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (-8, 40, 56, 24);

    label5.reset (new Label ("new label",
                             TRANS("sub1")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (-8, 112, 56, 24);

    slider6.reset (new Slider ("OSC3.Volume"));
    addAndMakeVisible (slider6.get());
    slider6->setRange (0, 1, 0);
    slider6->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider6->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider6->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider6->addListener (this);

    slider6->setBounds (16, 184, 88, 72);

    label6.reset (new Label ("new label",
                             TRANS("sub2")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (-8, 184, 56, 24);

    slider7.reset (new Slider ("Filter.CutoffFreq"));
    addAndMakeVisible (slider7.get());
    slider7->setRange (0, 1, 0);
    slider7->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->addListener (this);

    slider7->setBounds (304, 40, 88, 72);

    label7.reset (new Label ("new label",
                             TRANS("cutoff")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (320, 96, 56, 24);

    slider8.reset (new Slider ("Filter.Q"));
    addAndMakeVisible (slider8.get());
    slider8->setRange (0, 1, 0);
    slider8->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->addListener (this);

    slider8->setBounds (376, 40, 88, 72);

    label8.reset (new Label ("new label",
                             TRANS("Q")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (392, 96, 56, 24);

    label9.reset (new Label ("new label",
                             TRANS("Filter Envelope")));
    addAndMakeVisible (label9.get());
    label9->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label9->setBounds (304, 144, 168, 24);

    slider10.reset (new Slider ("ADSRVol.Sustain"));
    addAndMakeVisible (slider10.get());
    slider10->setRange (0, 1, 0);
    slider10->setSliderStyle (Slider::LinearVertical);
    slider10->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider10->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider10->addListener (this);

    slider10->setBounds (56, 288, 40, 104);

    label10.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label10.get());
    label10->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label10->setBounds (24, 384, 40, 24);

    label12.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label12.get());
    label12->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label12->setJustificationType (Justification::centred);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label12->setBounds (56, 384, 40, 24);

    label13.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label13.get());
    label13->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label13->setBounds (88, 384, 40, 24);

    slider11.reset (new Slider ("ADSRFilter.Attack"));
    addAndMakeVisible (slider11.get());
    slider11->setRange (0, 1, 0);
    slider11->setSliderStyle (Slider::LinearVertical);
    slider11->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider11->addListener (this);

    slider11->setBounds (314, 174, 40, 104);

    slider12.reset (new Slider ("ADSRFilter.Release"));
    addAndMakeVisible (slider12.get());
    slider12->setRange (0, 1, 0);
    slider12->setSliderStyle (Slider::LinearVertical);
    slider12->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider12->addListener (this);

    slider12->setBounds (378, 174, 40, 104);

    slider14.reset (new Slider ("ADSRFilter.Sustain"));
    addAndMakeVisible (slider14.get());
    slider14->setRange (0, 1, 0);
    slider14->setSliderStyle (Slider::LinearVertical);
    slider14->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider14->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider14->addListener (this);

    slider14->setBounds (346, 174, 40, 104);

    label14.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label14.get());
    label14->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label14->setBounds (314, 270, 40, 24);

    label16.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label16.get());
    label16->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label16->setBounds (346, 270, 40, 24);

    label17.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label17.get());
    label17->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label17->setBounds (378, 270, 40, 24);

    slider15.reset (new Slider ("OSC1.Divider"));
    addAndMakeVisible (slider15.get());
    slider15->setRange (1, 4, 1);
    slider15->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider15->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider15->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider15->addListener (this);

    slider15->setBounds (96, 48, 71, 56);

    slider16.reset (new Slider ("OSC2.Divider"));
    addAndMakeVisible (slider16.get());
    slider16->setRange (1, 4, 1);
    slider16->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider16->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider16->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider16->addListener (this);

    slider16->setBounds (96, 120, 71, 56);

    slider17.reset (new Slider ("OSC3.Divider"));
    addAndMakeVisible (slider17.get());
    slider17->setRange (1, 4, 1);
    slider17->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider17->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider17->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider17->addListener (this);

    slider17->setBounds (96, 192, 74, 56);

    slider18.reset (new Slider ("OSC1.Waveform"));
    addAndMakeVisible (slider18.get());
    slider18->setRange (1, 3, 1);
    slider18->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider18->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider18->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider18->addListener (this);

    slider18->setBounds (160, 48, 71, 56);

    slider19.reset (new Slider ("OSC2.Waveform"));
    addAndMakeVisible (slider19.get());
    slider19->setRange (1, 3, 1);
    slider19->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider19->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider19->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider19->addListener (this);

    slider19->setBounds (160, 120, 71, 56);

    slider20.reset (new Slider ("OSC3.Waveform"));
    addAndMakeVisible (slider20.get());
    slider20->setRange (1, 3, 1);
    slider20->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider20->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider20->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider20->addListener (this);

    slider20->setBounds (160, 192, 74, 56);

    slider9.reset (new Slider ("Filter.EnvelopeScale"));
    addAndMakeVisible (slider9.get());
    slider9->setRange (0, 1, 0);
    slider9->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider9->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider9->addListener (this);

    slider9->setBounds (456, 24, 72, 104);

    label11.reset (new Label ("new label",
                              TRANS("Envelope")));
    addAndMakeVisible (label11.get());
    label11->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label11->setBounds (456, 96, 72, 24);

    slider.reset (new Slider ("Delay.Wet"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 1, 0);
    slider->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (296, 344, 63, 64);

    label15.reset (new Label ("new label",
                              TRANS("Delay\n")));
    addAndMakeVisible (label15.get());
    label15->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label15->setBounds (312, 320, 168, 24);

    label18.reset (new Label ("new label",
                              TRANS("wet")));
    addAndMakeVisible (label18.get());
    label18->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label18->setJustificationType (Justification::centred);
    label18->setEditable (false, false, false);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label18->setBounds (296, 392, 64, 24);

    slider13.reset (new Slider ("ReferenceOscillator.Detune"));
    addAndMakeVisible (slider13.get());
    slider13->setRange (0, 1, 0);
    slider13->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider13->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider13->addListener (this);

    slider13->setBounds (152, 264, 111, 64);

    label19.reset (new Label ("new label",
                              TRANS("detune")));
    addAndMakeVisible (label19.get());
    label19->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label19->setJustificationType (Justification::centred);
    label19->setEditable (false, false, false);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label19->setBounds (176, 312, 64, 24);

    slider21.reset (new Slider ("UnisonMixer.Volume"));
    addAndMakeVisible (slider21.get());
    slider21->setRange (0, 0.5, 0);
    slider21->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider21->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider21->addListener (this);

    slider21->setBounds (152, 336, 111, 64);

    label20.reset (new Label ("new label",
                              TRANS("volume")));
    addAndMakeVisible (label20.get());
    label20->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label20->setBounds (176, 384, 64, 24);

    slider22.reset (new Slider ("Delay.Delay"));
    addAndMakeVisible (slider22.get());
    slider22->setRange (0, 1, 0);
    slider22->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider22->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider22->addListener (this);

    slider22->setBounds (360, 344, 63, 64);

    label21.reset (new Label ("new label",
                              TRANS("time")));
    addAndMakeVisible (label21.get());
    label21->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label21->setJustificationType (Justification::centred);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label21->setBounds (360, 392, 64, 24);

    slider23.reset (new Slider ("Delay.Feedback"));
    addAndMakeVisible (slider23.get());
    slider23->setRange (0, 1, 0);
    slider23->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider23->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider23->addListener (this);

    slider23->setBounds (424, 344, 63, 64);

    label22.reset (new Label ("new label",
                              TRANS("feedback")));
    addAndMakeVisible (label22.get());
    label22->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label22->setJustificationType (Justification::centred);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label22->setBounds (424, 392, 64, 24);

    label23.reset (new Label ("new label",
                              TRANS("Chorus")));
    addAndMakeVisible (label23.get());
    label23->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label23->setBounds (440, 144, 168, 24);

    slider24.reset (new Slider ("Chorus.Wet"));
    addAndMakeVisible (slider24.get());
    slider24->setRange (0, 1, 0);
    slider24->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider24->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider24->addListener (this);

    slider24->setBounds (429, 166, 63, 64);

    label24.reset (new Label ("new label",
                              TRANS("wet")));
    addAndMakeVisible (label24.get());
    label24->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label24->setJustificationType (Justification::centred);
    label24->setEditable (false, false, false);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label24->setBounds (429, 214, 64, 24);

    slider25.reset (new Slider ("Chorus.Lfo"));
    addAndMakeVisible (slider25.get());
    slider25->setRange (0, 1, 0);
    slider25->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider25->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider25->addListener (this);

    slider25->setBounds (493, 166, 63, 64);

    label25.reset (new Label ("new label",
                              TRANS("lfo\n")));
    addAndMakeVisible (label25.get());
    label25->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label25->setJustificationType (Justification::centred);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label25->setBounds (493, 214, 64, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 480);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainSynthGui::~MainSynthGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
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
    slider24 = nullptr;
    label24 = nullptr;
    slider25 = nullptr;
    label25 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainSynthGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

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
	if (mListener) {
		mListener->OnValueChanged(sliderThatWasMoved->getName().toStdString(), sliderThatWasMoved->getValue());
	}
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

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void MainSynthGui::SetListener(IGuiListener * listener)
{
	mListener = listener;
}
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
                 fixedSize="0" initialWidth="600" initialHeight="480">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="ADSRVol.Attack" id="e686dcf41ff8f723" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="24 288 40 104" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRVol.Release" id="19e4bee93ea59267" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="88 288 40 104" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="cb473a02381fc25e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 16 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fc97faf8d67fc441" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="304 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="691b291fae04a656" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="16 256 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amplifier Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="OSC1.Volume" id="64cd19f61a09fafc" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="16 40 88 72" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Volume" id="5b6363a9393426b5" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="16 112 88 72" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="8b601101dbaa262f" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="-8 40 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="main" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="51bdd6e7adc460f1" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="-8 112 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC3.Volume" id="4f70b9dfb7d22046" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="16 184 88 72" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="98130ba7d077c9a8" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="-8 184 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.CutoffFreq" id="b5ddfb611a52b59e" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="304 40 88 72" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="f2561c1e16491f99" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="320 96 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="cutoff" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.Q" id="32ff76d91d4131a8" memberName="slider8" virtualName=""
          explicitFocusOrder="0" pos="376 40 88 72" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="48e7205aa5fa5143" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="392 96 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f4b91f7fa1d6b033" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="304 144 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="ADSRVol.Sustain" id="47081380203247f0" memberName="slider10"
          virtualName="" explicitFocusOrder="0" pos="56 288 40 104" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5eb3065fc48cd13c" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="24 384 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="efd670deeff2cfc7" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="56 384 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2f0c3fb14ccd3bbd" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="88 384 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ADSRFilter.Attack" id="b7c6f52502efa9c4" memberName="slider11"
          virtualName="" explicitFocusOrder="0" pos="314 174 40 104" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Release" id="a612ede8993ce62a" memberName="slider12"
          virtualName="" explicitFocusOrder="0" pos="378 174 40 104" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Sustain" id="908f631705334540" memberName="slider14"
          virtualName="" explicitFocusOrder="0" pos="346 174 40 104" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5979d19c19347180" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="314 270 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2461a2ec3f347fff" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="346 270 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2661e2cc57cd8376" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="378 270 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC1.Divider" id="f5dccfd9a2ecb31f" memberName="slider15"
          virtualName="" explicitFocusOrder="0" pos="96 48 71 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Divider" id="27fba3479be46b37" memberName="slider16"
          virtualName="" explicitFocusOrder="0" pos="96 120 71 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Divider" id="1a27da7fbd80f73" memberName="slider17"
          virtualName="" explicitFocusOrder="0" pos="96 192 74 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC1.Waveform" id="93ec2e964f54eaf6" memberName="slider18"
          virtualName="" explicitFocusOrder="0" pos="160 48 71 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="3.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Waveform" id="a72293c4b71df00c" memberName="slider19"
          virtualName="" explicitFocusOrder="0" pos="160 120 71 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="3.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Waveform" id="f512996821af000" memberName="slider20"
          virtualName="" explicitFocusOrder="0" pos="160 192 74 56" thumbcol="ff6495ed"
          min="1.00000000000000000000" max="3.00000000000000000000" int="1.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="Filter.EnvelopeScale" id="ca2b8d2bd3d5be06" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="456 24 72 104" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="2744ff8c0fec8fa" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="456 96 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Envelope" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Wet" id="f02a07f8a8edc9" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="296 344 63 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="7d1d2877a9909ff4" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="312 320 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2e9d93e276cf4ffd" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="296 392 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="wet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ReferenceOscillator.Detune" id="179c2467b254d1c1" memberName="slider13"
          virtualName="" explicitFocusOrder="0" pos="152 264 111 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="3fd1e9e11b37a09e" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="176 312 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="detune" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="UnisonMixer.Volume" id="b64e5d44b2af789a" memberName="slider21"
          virtualName="" explicitFocusOrder="0" pos="152 336 111 64" min="0.00000000000000000000"
          max="0.50000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="2e34fa49a2369321" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="176 384 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Delay" id="fef0c0a17fbbe76b" memberName="slider22"
          virtualName="" explicitFocusOrder="0" pos="360 344 63 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="6a484cbc8a86f45b" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="360 392 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="time" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Feedback" id="e2542a2a711671ab" memberName="slider23"
          virtualName="" explicitFocusOrder="0" pos="424 344 63 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="3c2f6ccb4ec0e07b" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="424 392 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="feedback" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="98b57b38ca5faf1d" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="440 144 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Chorus" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <SLIDER name="Chorus.Wet" id="5368775b170396ed" memberName="slider24"
          virtualName="" explicitFocusOrder="0" pos="429 166 63 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="55b1ebded2b1c262" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="429 214 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="wet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Chorus.Lfo" id="2202e097e51ba4b1" memberName="slider25"
          virtualName="" explicitFocusOrder="0" pos="493 166 63 64" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="8764af513f87c67d" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="493 214 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="lfo&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
