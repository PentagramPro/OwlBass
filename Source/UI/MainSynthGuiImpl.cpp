#include "MainSynthGuiImpl.h"

CMainSynthGuiImpl::CMainSynthGuiImpl()
{
	mPresetBrowser.reset(new PresetBrowser());
}

void CMainSynthGuiImpl::sliderValueChanged(Slider * sliderThatWasMoved)
{
	if (mListener) {
		mListener->OnValueChanged(sliderThatWasMoved->getName().toStdString(), sliderThatWasMoved->getValue());
	}
}

void CMainSynthGuiImpl::buttonClicked(Button * buttonThatWasClicked)
{
	if (mListener) {
		mListener->OnValueChanged(buttonThatWasClicked->getName().toStdString(), buttonThatWasClicked->getToggleState());
	}
	if (buttonThatWasClicked == openPresetBrowser.get()) {
		addAndMakeVisible(*mPresetBrowser.get());
		 
	}
}

void CMainSynthGuiImpl::SetListener(IGuiListener * listener)
{
	mListener = listener;
}