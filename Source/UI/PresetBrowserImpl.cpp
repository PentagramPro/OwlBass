
#include "PresetBrowserImpl.h"
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/SynthState.h"
#include <set>

CPresetBrowserImpl::CPresetBrowserImpl()
{
	mPresetDir = File::getSpecialLocation(File::SpecialLocationType::currentExecutableFile).getParentDirectory().getChildFile("presets");
	mPresetDir.createDirectory();

	
	

	mListCategories->setModel(&mCategoryItems);
	mListPresets->setModel(&mPresetItems);

	UpdateFileList();
}

void CPresetBrowserImpl::paint(Graphics & g)
{
	

	PresetBrowser::paint(g);
}

void CPresetBrowserImpl::UpdateFileList()
{
	mPresets.clear();
	mSelectedCategory = "";

	const auto files = mPresetDir.findChildFiles(File::TypesOfFileToFind::findFiles, true);
	for (const auto& file : files) {
		MemoryBlock block;
		if (!file.loadFileAsData(block))
			continue;

		
		const auto info = CSynthState::GetStateInfoFromData((const char*)block.getData(), block.getSize());
		mPresets[info.category].push_back({ info.name,file });
		
	}

	if (mPresets.size() > 0) {
		mSelectedCategory = mPresets.begin()->first;
	} 

	
	std::set<std::string> result;

	for (const auto& item : mPresets) {
		result.insert(item.first);
	}


	mCategoryItems.SetItems(std::vector<std::string>(result.begin(),result.end()));
	mListCategories->updateContent();
	repaint();
}
