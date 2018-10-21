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

#include "BodePlot.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "Synth/FourierProbeVoice.h"
//[/MiscUserDefs]

//==============================================================================
BodePlot::BodePlot ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

BodePlot::~BodePlot()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BodePlot::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
	if (mFourierProbe) {
		auto& buffer = mFourierProbe->GetOutputBuffer();
		mBodePath.clear();
		const int length = buffer.getNumSamples();

		mBodePath.startNewSubPath(std::log10l(length), buffer.getSample(0, 0)+0.01);

		for (int i = 0; i < length; i++) {
			double sample = -buffer.getSample(0, i);
			if (std::isinf(sample) || std::isnan(sample)) {
				sample = 0;
			}
			mBodePath.lineTo(std::log10l(length-i), sample);
		}
		mBodePath.scaleToFit(0, 0, getWidth(), getHeight(), false);

	}

	if(!mBodePath.isEmpty())
		g.strokePath(mBodePath, PathStrokeType(2));
	juce::Timer::callAfterDelay(100, [this]() {
		repaint();
	});
    //[/UserPaint]
}

void BodePlot::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void BodePlot::SetVoiceModule(CFourierProbeVoice& voice) {
	mFourierProbe = &voice;
	/*AudioBuffer<float> buffer;
	juce::Random rnd;
	juce::dsp::FFT fft(8);

	rnd.setSeedRandomly();

	buffer.setSize(2, fft.getSize()*2);
	buffer.clear();

	for (int i = 0; i < buffer.getNumSamples()/2; i++) {
		buffer.setSample(0, i, rnd.nextFloat());
		buffer.setSample(1, i, rnd.nextFloat());
	}

	voice.ProcessBlock(buffer, 0, buffer.getNumSamples()/2);

	const int channel = 0;
	fft.performFrequencyOnlyForwardTransform(buffer.getWritePointer(channel));
	mBodePath.clear();

	const int oneFourth = buffer.getNumSamples() / 4;
	mBodePath.startNewSubPath(0, buffer.getSample(channel, oneFourth));
	for (int i = 0; i < oneFourth; i++) {
		const double sample = buffer.getSample(channel, i+ oneFourth);
		mBodePath.lineTo(i, sample);
	}


	mBodePath.scaleToFit(0, 0, getWidth(), getHeight(), false);*/
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="BodePlot" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
