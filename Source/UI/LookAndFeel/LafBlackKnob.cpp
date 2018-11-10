
#include "LafBlackKnob.h"

CLafBlackKnob::CLafBlackKnob()
{
	mImgBlackKnob = ImageCache::getFromMemory(BinaryData::black_knob_png, BinaryData::black_knob_pngSize);
	mImgBlackKnobSwitch = ImageCache::getFromMemory(BinaryData::black_knob_switch_png, BinaryData::black_knob_switch_pngSize);
	mImgSliderHandle = ImageCache::getFromMemory(BinaryData::slider_handle_png, BinaryData::slider_handle_pngSize);
	mImgSliderGap = ImageCache::getFromMemory(BinaryData::slider_gap_png, BinaryData::slider_gap_pngSize);
	mImgButton = ImageCache::getFromMemory(BinaryData::button_png, BinaryData::button_pngSize);
}

void CLafBlackKnob::drawToggleButton(Graphics & g, ToggleButton &b, bool isMouseOverButton, bool isButtonDown)
{
	const double width = b.getWidth();
	const double height = b.getHeight();
	Rectangle<float> buttonTarget(0, 0, width, height);
	g.drawImage(mImgButton, buttonTarget, RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize);

	const float size = 0.4;
	g.setColour(Colour(255, 87, 118));
	if (b.getToggleState())
		g.fillEllipse(width / 2 * (1 - size), height / 2 * (1 - size), width*size, height*size);
}

void CLafBlackKnob::drawButtonBackground(Graphics &g, Button & button, const Colour & backgroundColour, bool isMouseOverButton, bool isButtonDown)
{
	if (IsOfType("no_background", button)) {
		if (isMouseOverButton) {
			g.setColour(Colour((uint8)255, 255, 255, (uint8)20));
			g.fillRect(0, 0, button.getWidth(), button.getHeight());
		}
		return;
	}

	LookAndFeel_V4::drawButtonBackground(g, button, backgroundColour, isMouseOverButton, isButtonDown);
}


void CLafBlackKnob::drawLinearSlider(Graphics &g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle, Slider &slider)
{
	
	Rectangle<float> gapTarget(x, y, width, height);
	g.drawImage(mImgSliderGap, gapTarget, RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize);

	Rectangle<float> handleTarget(x, sliderPos - height / 2, width, height);
	g.drawImage(mImgSliderHandle, handleTarget, RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize);
	
}

void CLafBlackKnob::drawRotarySlider(Graphics &g, int x, int y, int width, int height, 
	float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider &slider)
{
	auto* image = &mImgBlackKnob;
	bool isSwitch = false;
	if (IsOfType("switch", slider)) {
		image = &mImgBlackKnobSwitch;
		isSwitch = true;
	}

	const float rangeScale = isSwitch ? 0.5f : 1.0f;
	const float range = rotaryEndAngle - rotaryStartAngle;
	float angle = rotaryStartAngle + range*sliderPosProportional*rangeScale+range*(1-rangeScale)/2;
	
	
	
	DrawKnobImage(g, *image, x, y, width, height, angle);

	if (!isSwitch) {
		Path p;
		
		p.addArc(x, y, width, height, rotaryStartAngle, angle,true);
		p.applyTransform(AffineTransform::scale(0.85,0.85, x + width / 2, y + height / 2));
		if (IsOfType("effect",slider)) {
		 	g.setColour(Colour(128, 232, 129));
		}
		else {
			g.setColour(Colour(255, 87, 118));
		}
		g.strokePath(p, PathStrokeType(3));
	}
}

void CLafBlackKnob::DrawKnobImage(Graphics & g, Image & img, int x, int y, int width, int height, float angle)
{
	const float destAspect = (float)width / height;
	const float srcAspect = (float)img.getWidth() / img.getHeight();
	if (destAspect < srcAspect) {
		height = width / srcAspect;
	}
	else if(destAspect>srcAspect){
		width = height * srcAspect;
	}
	
	auto transform = AffineTransform::fromTargetPoints(0, 0, x, y, img.getWidth(), 0, x + width, y, 0, img.getHeight(), x, y + height)
		.followedBy(AffineTransform::rotation(angle, x + width / 2, y + height / 2))
		.followedBy(AffineTransform::scale(0.85,0.85, x + width / 2, y + height / 2));

	g.drawImageTransformed(img , transform);
}

bool CLafBlackKnob::IsOfType(const std::string & type, TooltipClient & component) const
{
	const std::string tooltip = component.getTooltip().toStdString();
	auto p = tooltip.find_first_of(";", 0);
	if (p == std::string::npos)
		return false;
	const std::string types = tooltip.substr(0, p);
	return types.find(type, 0)!=std::string::npos;
}
