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

    mBtnLoadPreset.reset (new TextButton ("new button"));
    addAndMakeVisible (mBtnLoadPreset.get());
    mBtnLoadPreset->setButtonText (TRANS("Load selected preset"));
    mBtnLoadPreset->addListener (this);

    mBtnLoadPreset->setBounds (648, 304, 150, 24);

    mListCategories.reset (new ListBox());
    addAndMakeVisible (mListCategories.get());
    mListCategories->setName ("new component");

    mListCategories->setBounds (16, 24, 384, 264);

    mListPresets.reset (new ListBox());
    addAndMakeVisible (mListPresets.get());
    mListPresets->setName ("new component");

    mListPresets->setBounds (416, 24, 384, 264);

    mBtnCancel.reset (new TextButton ("new button"));
    addAndMakeVisible (mBtnCancel.get());
    mBtnCancel->setButtonText (TRANS("Cancel"));
    mBtnCancel->addListener (this);
    mBtnCancel->setColour (TextButton::buttonColourId, Colour (0xff8f8f8f));

    mBtnCancel->setBounds (512, 304, 112, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (810, 340);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PresetBrowser::~PresetBrowser()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    mBtnLoadPreset = nullptr;
    mListCategories = nullptr;
    mListPresets = nullptr;
    mBtnCancel = nullptr;


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

    if (buttonThatWasClicked == mBtnLoadPreset.get())
    {
        //[UserButtonCode_mBtnLoadPreset] -- add your button handler code here..
        //[/UserButtonCode_mBtnLoadPreset]
    }
    else if (buttonThatWasClicked == mBtnCancel.get())
    {
        //[UserButtonCode_mBtnCancel] -- add your button handler code here..
        //[/UserButtonCode_mBtnCancel]
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
                 fixedSize="0" initialWidth="810" initialHeight="340">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="new button" id="6805fe86685143fd" memberName="mBtnLoadPreset"
              virtualName="" explicitFocusOrder="0" pos="648 304 150 24" buttonText="Load selected preset"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GENERICCOMPONENT name="new component" id="6ef5f11df063921e" memberName="mListCategories"
                    virtualName="ListBox" explicitFocusOrder="0" pos="16 24 384 264"
                    class="Component" params=""/>
  <GENERICCOMPONENT name="new component" id="856c69efd786e83f" memberName="mListPresets"
                    virtualName="ListBox" explicitFocusOrder="0" pos="416 24 384 264"
                    class="Component" params=""/>
  <TEXTBUTTON name="new button" id="6ae7aeccbdc87e60" memberName="mBtnCancel"
              virtualName="" explicitFocusOrder="0" pos="512 304 112 24" bgColOff="ff8f8f8f"
              buttonText="Cancel" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
