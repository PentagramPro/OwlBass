#pragma once
#include "PresetBrowser.h"
#include "PresetItemAdapter.h"

class CPresetBrowserImpl : public PresetBrowser {
  public:
	  CPresetBrowserImpl();

	  void paint(Graphics& g) override;

private:
	juce::File mPresetDir;

	CPresetItemAdapter mCategoryItems;
	CPresetItemAdapter mPresetItems;
};