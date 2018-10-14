
#include "PresetBrowserImpl.h"
#include "../JuceLibraryCode/JuceHeader.h"

CPresetBrowserImpl::CPresetBrowserImpl()
{
	mPresetDir = File::getSpecialLocation(File::SpecialLocationType::currentExecutableFile).getChildFile("presets");
	mPresetDir.createDirectory();

	mCategoryItems.SetItems({ "item" });

	mListCategories->setModel(&mCategoryItems);
	mListPresets->setModel(&mPresetItems);
}

void CPresetBrowserImpl::paint(Graphics & g)
{
	

	PresetBrowser::paint(g);
}
