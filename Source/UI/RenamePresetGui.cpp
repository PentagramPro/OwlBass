/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "RenamePresetGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
RenamePresetGui::RenamePresetGui ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    mTxtCategory.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (mTxtCategory.get());
    mTxtCategory->setMultiLine (false);
    mTxtCategory->setReturnKeyStartsNewLine (false);
    mTxtCategory->setReadOnly (false);
    mTxtCategory->setScrollbarsShown (true);
    mTxtCategory->setCaretVisible (true);
    mTxtCategory->setPopupMenuEnabled (true);
    mTxtCategory->setText (String());

    mTxtCategory->setBounds (80, 8, 232, 24);

    mBtnSave.reset (new TextButton ("new button"));
    addAndMakeVisible (mBtnSave.get());
    mBtnSave->setButtonText (TRANS("Save"));
    mBtnSave->addListener (this);

    mBtnSave->setBounds (216, 80, 94, 24);

    mTxtName.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (mTxtName.get());
    mTxtName->setMultiLine (false);
    mTxtName->setReturnKeyStartsNewLine (false);
    mTxtName->setReadOnly (false);
    mTxtName->setScrollbarsShown (true);
    mTxtName->setCaretVisible (true);
    mTxtName->setPopupMenuEnabled (true);
    mTxtName->setText (String());

    mTxtName->setBounds (80, 40, 232, 24);

    label.reset (new Label ("new label",
                            TRANS("Category:")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (8, 8, 71, 24);

    label2.reset (new Label ("new label",
                             TRANS("Name:")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (8, 40, 71, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

RenamePresetGui::~RenamePresetGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    mTxtCategory = nullptr;
    mBtnSave = nullptr;
    mTxtName = nullptr;
    label = nullptr;
    label2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void RenamePresetGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void RenamePresetGui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void RenamePresetGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == mBtnSave.get())
    {
        //[UserButtonCode_mBtnSave] -- add your button handler code here..
        //[/UserButtonCode_mBtnSave]
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

<JUCER_COMPONENT documentType="Component" className="RenamePresetGui" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTEDITOR name="new text editor" id="2504e16f43df4d3c" memberName="mTxtCategory"
              virtualName="" explicitFocusOrder="0" pos="80 8 232 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="6a0b5493966a81ba" memberName="mBtnSave"
              virtualName="" explicitFocusOrder="0" pos="216 80 94 24" buttonText="Save"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="9ba6ce8f7441987d" memberName="mTxtName"
              virtualName="" explicitFocusOrder="0" pos="80 40 232 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="1edc56a42fa02557" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 8 71 24" edTextCol="ff000000" edBkgCol="0"
         labelText="Category:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="80228d27827d1545" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="8 40 71 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Name:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
