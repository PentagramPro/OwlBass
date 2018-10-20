#include "MainSynthGuiImpl.h"

CMainSynthGuiImpl::CMainSynthGuiImpl()
{
	mPresetBrowser.reset(new CPresetBrowserImpl());
}

void CMainSynthGuiImpl::sliderValueChanged(Slider * sliderThatWasMoved)
{
	if (mListener) {
		mListener->OnValueChanged(sliderThatWasMoved->getName().toStdString(), sliderThatWasMoved->getValue());
	}
}

void CMainSynthGuiImpl::buttonClicked(Button * buttonClicked)
{
	if (mListener) {
		mListener->OnValueChanged(buttonClicked->getName().toStdString(), buttonClicked->getToggleState());
	}
	if (buttonClicked == openPresetBrowser.get()) {
		addAndMakeVisible(*mPresetBrowser.get());
		mPresetBrowser->setBounds((getWidth() - mPresetBrowser->getWidth()) / 2, 0, mPresetBrowser->getWidth(), mPresetBrowser->getHeight());
	} else if (buttonClicked == mBtnPresetNext.get()) {
		mPresetBrowser->NextPreset();
		openPresetBrowser->setButtonText(mPresetBrowser->GetPresetDescription());
	} else if (buttonClicked == mBtnPresetPrev.get()) {
		mPresetBrowser->PreviousPreset();
		openPresetBrowser->setButtonText(mPresetBrowser->GetPresetDescription());
	}
}

void CMainSynthGuiImpl::SetListener(IGuiListener * listener)
{
	mListener = listener;
	mPresetBrowser->SetGuiListener(listener);
}