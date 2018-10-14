#pragma once
#include "MainSynthGui.h"
#include "PresetBrowser.h"
#include "IGuiListener.h"

class CMainSynthGuiImpl : public MainSynthGui {
public:
	CMainSynthGuiImpl();
	void sliderValueChanged(Slider* sliderThatWasMoved) override;
	void buttonClicked(Button* buttonThatWasClicked) override;

	void SetListener(IGuiListener* listener);

private:
	std::unique_ptr<PresetBrowser> mPresetBrowser;
	IGuiListener * mListener = nullptr;
};