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
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include "VSTComponents/Owl/Toolbox.h"
//[/Headers]

#include "LevelIndicator.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LevelIndicator::LevelIndicator ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

LevelIndicator::~LevelIndicator()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LevelIndicator::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
	g.setColour(Colour::fromRGB(0, 0, 0));
	g.fillAll();

	const float safeRatio = 0.7f;

	if (mPropertiesRegistry) {
		const float value = mPropertiesRegistry->GetPropertyValueRaw(getName().toStdString());

		g.setColour(Colour::fromRGB(128,232,129));
		g.fillRect(0.0f, 0.0f, getWidth()*safeRatio*Toolbox::clamp(value,0.0f,1.0f), (float)getHeight());

		if (value > 1) {
			g.setColour(Colour::fromRGB(255, 87, 118));
			g.fillRect(getWidth()*safeRatio, 0.0f, getWidth()*safeRatio*Toolbox::clamp(value-1.0f, 0.0f, 1.0f-safeRatio), (float)getHeight());
		}
	}
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
	juce::Timer::callAfterDelay(50, [this]() {
		repaint();
	});
    //[/UserPaint]
}

void LevelIndicator::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void LevelIndicator::SetPropertiesRegistry(CPropertiesRegistry & properties)
{
	mPropertiesRegistry = &properties;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LevelIndicator" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
