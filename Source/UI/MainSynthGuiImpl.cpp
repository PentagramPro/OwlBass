#include "MainSynthGuiImpl.h"
#include "Version.h"
#include "VSTComponents/Owl/SynthStateManager.h"

CMainSynthGuiImpl::CMainSynthGuiImpl()
{
	mPresetBrowser.reset(new CPresetBrowserImpl());
	
	mPresetListenerHandle = mPresetBrowser->AddListener(*this);
	mAppVersion->setText(std::string("v")+AppVersion,juce::NotificationType::dontSendNotification);
	mBtnRename->setVisible(false);
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
		mPresetBrowser->UpdateFileList();
	} else if (buttonClicked == mBtnPresetNext.get()) {
		mPresetBrowser->NextPreset();
	} else if (buttonClicked == mBtnPresetPrev.get()) {
		mPresetBrowser->PreviousPreset();
	}
	else if (buttonClicked == mBtnRename.get() && mRenamePreset) {
		addAndMakeVisible(*mRenamePreset.get());

	}
}

void CMainSynthGuiImpl::Initialize(IGuiListener* listener, CSynthStateManager& stateManager)
{
	if (!mRenamePreset) {
		mRenamePreset.reset(new CRenamePresetGuiImpl(stateManager));
	}
	mListener = listener;
	mStateManager = &stateManager;
	mStateManagerListenerHandle = mStateManager->AddListener(*this);
	OnNameAndCategoryChanged();
}

void CMainSynthGuiImpl::OnLoadPreset(const std::string & filePath)
{
	if (mStateManager) {
		mStateManager->LoadStateFromFile(filePath);
	}
	
	mBtnRename->setVisible(mStateManager->HasCurrentPath());
	
}

void CMainSynthGuiImpl::OnNameAndCategoryChanged()
{
	const auto& info = mStateManager->GetState().GetStateInfo();
	mPresetDescr->setText(info.category + " / " + info.name, NotificationType::dontSendNotification);
	mRenamePreset->SetNameAndCategory(info.name, info.category);
}

