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

#include "PresetBrowser.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PresetBrowser::PresetBrowser ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    textButton.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton.get());
    textButton->setButtonText (TRANS("Save current preset"));
    textButton->addListener (this);

    textButton->setBounds (648, 304, 150, 24);

    presetName.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (presetName.get());
    presetName->setMultiLine (false);
    presetName->setReturnKeyStartsNewLine (false);
    presetName->setReadOnly (false);
    presetName->setScrollbarsShown (true);
    presetName->setCaretVisible (true);
    presetName->setPopupMenuEnabled (true);
    presetName->setText (String());

    presetName->setBounds (432, 304, 208, 24);

    label.reset (new Label ("new label",
                            TRANS("preset name:")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (336, 304, 96, 24);

    label2.reset (new Label ("new label",
                             TRANS("category name:")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (8, 304, 96, 24);

    presetName2.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (presetName2.get());
    presetName2->setMultiLine (false);
    presetName2->setReturnKeyStartsNewLine (false);
    presetName2->setReadOnly (false);
    presetName2->setScrollbarsShown (true);
    presetName2->setCaretVisible (true);
    presetName2->setPopupMenuEnabled (true);
    presetName2->setText (String());

    presetName2->setBounds (104, 304, 216, 24);

    mListCategories.reset (new ListBox());
    addAndMakeVisible (mListCategories.get());
    mListCategories->setName ("new component");

    mListCategories->setBounds (16, 24, 384, 264);

    mListPresets.reset (new ListBox());
    addAndMakeVisible (mListPresets.get());
    mListPresets->setName ("new component");

    mListPresets->setBounds (416, 24, 384, 264);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PresetBrowser::~PresetBrowser()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textButton = nullptr;
    presetName = nullptr;
    label = nullptr;
    label2 = nullptr;
    presetName2 = nullptr;
    mListCategories = nullptr;
    mListPresets = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PresetBrowser::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PresetBrowser::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PresetBrowser::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton.get())
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
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

<JUCER_COMPONENT documentType="Component" className="PresetBrowser" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="new button" id="6805fe86685143fd" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="648 304 150 24" buttonText="Save current preset"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="90c929677f97ad7d" memberName="presetName"
              virtualName="" explicitFocusOrder="0" pos="432 304 208 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="ca788e73f442613d" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="336 304 96 24" edTextCol="ff000000"
         edBkgCol="0" labelText="preset name:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="389c71aeec9003a3" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="8 304 96 24" edTextCol="ff000000"
         edBkgCol="0" labelText="category name:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="94d5c0326733090f" memberName="presetName2"
              virtualName="" explicitFocusOrder="0" pos="104 304 216 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <GENERICCOMPONENT name="new component" id="6ef5f11df063921e" memberName="mListCategories"
                    virtualName="ListBox" explicitFocusOrder="0" pos="16 24 384 264"
                    class="Component" params=""/>
  <GENERICCOMPONENT name="new component" id="856c69efd786e83f" memberName="mListPresets"
                    virtualName="ListBox" explicitFocusOrder="0" pos="416 24 384 264"
                    class="Component" params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
