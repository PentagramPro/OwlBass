#pragma once
#include "PresetBrowser.h"
#include "PresetItemAdapter.h"
#include <unordered_map>
#include <vector>
#include "../Common/ListenerHandle.h"

class CPresetBrowserImpl : public PresetBrowser, public IPresetItemListener {
  public:
	  CPresetBrowserImpl();

	  void paint(Graphics& g) override;

private:
	struct SRecord {
		std::string mName;
		juce::File mFile;
	};
	
	void UpdateFileList();
	void UpdatePresetNamesList();

	// Inherited via IPresetItemListener
	virtual void OnItemSelected(CPresetItemAdapter & adapter, int index) override;

	void buttonClicked(Button* buttonThatWasClicked) override;

	juce::File mPresetDir;

	std::unordered_map<std::string,std::vector<SRecord>> mPresets;
	std::string mSelectedCategory = "";

	CPresetItemAdapter mCategoryItems;
	CPresetItemAdapter mPresetItems;

	std::vector<IListenerHandle> mListenerHandles;

	
};