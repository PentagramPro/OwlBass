
#include "LafBlackKnob.h"

CLafBlackKnob::CLafBlackKnob()
{
	mImgBlackKnob = ImageCache::getFromMemory(BinaryData::black_knob_png, BinaryData::black_knob_pngSize);
	mImgBlackKnobSwitch = ImageCache::getFromMemory(BinaryData::black_knob_switch_png, BinaryData::black_knob_switch_pngSize);
}

void CLafBlackKnob::drawRotarySlider(Graphics &g, int x, int y, int width, int height, 
	float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider &slider)
{

	bool isSwitch = false;
	float angle = rotaryStartAngle + (rotaryEndAngle - rotaryStartAngle)*sliderPosProportional;
	auto* image = &mImgBlackKnob;
	
	if (IsOfType("switch",slider)) {
		image = &mImgBlackKnobSwitch;
		isSwitch = true;
	} 

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

bool CLafBlackKnob::IsOfType(const std::string & type, Slider & slider)
{
	const std::string tooltip = slider.getTooltip().toStdString();
	auto p = tooltip.find_first_of(";", 0);
	if (p == std::string::npos)
		return false;
	const std::string types = tooltip.substr(0, p);
	return types.find(type, 0)!=std::string::npos;
}
