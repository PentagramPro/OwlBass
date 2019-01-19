#pragma once
#include "MainSynthGui.h"
#include "OwlBassGui.h"
#include "RenamePresetGuiImpl.h"
#include "VSTComponents/PresetBrowser/PresetBrowserImpl.h"
#include "VSTComponents/OwlUI/IGuiListener.h"
#include "VSTComponents/PresetBrowser/IPresetBrowserListeners.h"
#include "VSTComponents/Owl/ListenerHandle.h"

class CMainSynthGuiImpl : public OwlBassGui, public IPresetBrowserListener {
public:
	CMainSynthGuiImpl();
	virtual ~CMainSynthGuiImpl();
	void sliderValueChanged(Slider* sliderThatWasMoved) override;
	void buttonClicked(Button* buttonThatWasClicked) override;

	void SetListener(IGuiListener* listener);
	void SetPresetNameAndCategory(const std::string &name, const std::string &category);
private:
	std::unique_ptr<CPresetBrowserImpl> mPresetBrowser;
	std::unique_ptr<CRenamePresetGuiImpl> mRenamePreset;
	IListenerHandle mPresetListenerHandle;
	IGuiListener * mListener = nullptr;

	// Inherited via IPresetBrowserListener
	virtual void OnLoadPreset(const std::string & filePath) override;
};