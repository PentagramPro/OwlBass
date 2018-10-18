#pragma once
#include "PresetBrowser.h"
#include "PresetItemAdapter.h"
#include <unordered_map>
#include <vector>

class CPresetBrowserImpl : public PresetBrowser {
  public:
	  CPresetBrowserImpl();

	  void paint(Graphics& g) override;

private:
	struct SRecord {
		std::string mName;
		juce::File mFile;
	};
	
	void UpdateFileList();

	juce::File mPresetDir;

	std::unordered_map<std::string,std::vector<SRecord>> mPresets;
	std::string mSelectedCategory = "";

	CPresetItemAdapter mCategoryItems;
	CPresetItemAdapter mPresetItems;
};