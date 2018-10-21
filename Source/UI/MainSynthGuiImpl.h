#pragma once
#include "MainSynthGui.h"
#include "PresetBrowserImpl.h"
#include "IGuiListener.h"
#include "IPresetBrowserListeners.h"
#include "VSTComponents/Owl/ListenerHandle.h"

class CMainSynthGuiImpl : public MainSynthGui, public IPresetBrowserListener {
public:
	CMainSynthGuiImpl();
	void sliderValueChanged(Slider* sliderThatWasMoved) override;
	void buttonClicked(Button* buttonThatWasClicked) override;

	void SetListener(IGuiListener* listener);

private:
	std::unique_ptr<CPresetBrowserImpl> mPresetBrowser;
	IListenerHandle mPresetListenerHandle;
	IGuiListener * mListener = nullptr;

	// Inherited via IPresetBrowserListener
	virtual void OnLoadPreset(const std::string & filePath) override;
};