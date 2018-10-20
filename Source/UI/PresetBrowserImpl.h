#pragma once
#include "PresetBrowser.h"
#include "PresetItemAdapter.h"
#include <map>
#include <vector>
#include "../Common/ListenerHandle.h"
#include "../UI/IGuiListener.h"

class CPresetBrowserImpl : public PresetBrowser, public IPresetItemListener {
  public:
	  CPresetBrowserImpl();

	  void paint(Graphics& g) override;

	  void SetGuiListener(IGuiListener* listener) {
		  mGuiListener = listener;
	  }
	  void NextPreset();
	  void PreviousPreset();
	  std::string GetPresetDescription() const;
private:
	struct SRecord {
		std::string mName;
		juce::File mFile;
	};
	
	void UpdateFileList();
	void UpdatePresetNamesList();
	const SRecord* GetPresetByCategoryAndIndex(const std::string& category, int index) const;

	// Inherited via IPresetItemListener
	virtual void OnItemSelected(CPresetItemAdapter & adapter, int index) override;

	void buttonClicked(Button* buttonThatWasClicked) override;

	juce::File mPresetDir;

	std::map<std::string,std::vector<SRecord>> mPresets;
	std::string mSelectedCategory = "";
	int mSelectedPresetIndex = -1;

	CPresetItemAdapter mCategoryItems;
	CPresetItemAdapter mPresetItems;

	std::vector<IListenerHandle> mListenerHandles;
	IGuiListener* mGuiListener = nullptr;
	
};