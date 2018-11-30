#include "MainSynthGuiImpl.h"

CMainSynthGuiImpl::CMainSynthGuiImpl()
{
	mPresetBrowser.reset(new CPresetBrowserImpl());
	mPresetListenerHandle = mPresetBrowser->AddListener(*this);

}

CMainSynthGuiImpl::~CMainSynthGuiImpl()
{
	setLookAndFeel(nullptr);
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
	} else if (buttonClicked == mBtnPresetPrev.get()) {
		mPresetBrowser->PreviousPreset();
	}
}

void CMainSynthGuiImpl::SetListener(IGuiListener * listener)
{
	mListener = listener;
}

void CMainSynthGuiImpl::OnLoadPreset(const std::string & filePath)
{
	if (mListener) {
		mListener->OnLoadPreset(filePath);
	}
}

void CMainSynthGuiImpl::SetPresetNameAndCategory(const std::string &name, const std::string &category) {
    mPresetDescr->setText(category+" / "+name, NotificationType::dontSendNotification);
}
