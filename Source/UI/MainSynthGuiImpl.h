#pragma once
#include "MainSynthGui.h"
#include "OwlBassGui.h"
#include "RenamePresetGuiImpl.h"

#include "ISynthStateManagerListener.h"
#include "VSTComponents/PresetBrowser/PresetBrowserImpl.h"
#include "VSTComponents/OwlUI/IGuiListener.h"
#include "VSTComponents/PresetBrowser/IPresetBrowserListeners.h"
#include "VSTComponents/Owl/ListenerHandle.h"

class CSynthStateManager;

class CMainSynthGuiImpl : public OwlBassGui, public IPresetBrowserListener, public ISynthStateManagerListener {
public:
	CMainSynthGuiImpl();
	virtual ~CMainSynthGuiImpl();
	void sliderValueChanged(Slider* sliderThatWasMoved) override;
	void buttonClicked(Button* buttonThatWasClicked) override;

	void Initialize(IGuiListener* listener, CSynthStateManager& stateManager);
	
private:
	std::unique_ptr<CPresetBrowserImpl> mPresetBrowser;
	std::unique_ptr<CRenamePresetGuiImpl> mRenamePreset;
	IListenerHandle mPresetListenerHandle;
	IListenerHandle mStateManagerListenerHandle;

	IGuiListener * mListener = nullptr;
	CSynthStateManager* mStateManager;

	// Inherited via IPresetBrowserListener
	virtual void OnLoadPreset(const std::string & filePath) override;

	virtual void OnNameAndCategoryChanged() override;
};