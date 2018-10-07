#pragma once

#include "../../../JuceLibraryCode/JuceHeader.h"

class CLafBlackKnob : public LookAndFeel_V4 {
public:
        CLafBlackKnob();
		void drawRotarySlider(Graphics&, int x, int y, int width, int height,
			float sliderPosProportional, float rotaryStartAngle,
			float rotaryEndAngle, Slider&) override;

private:
	void DrawKnobImage(Graphics& g, Image& img, int x, int y, int width, int height, float angle);
	bool IsOfType(const std::string& type, Slider& slider);
	Image mImgBlackKnob;
	Image mImgBlackKnobSwitch;
};