
#include "PresetBrowserImpl.h"
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/SynthState.h"
#include <set>

CPresetBrowserImpl::CPresetBrowserImpl()
{
	mPresetDir = File::getSpecialLocation(File::SpecialLocationType::currentExecutableFile).getParentDirectory().getChildFile("presets");
	mPresetDir.createDirectory();

	
	mListenerHandles.push_back(mCategoryItems.AddListener(*this));
	mListenerHandles.push_back(mPresetItems.AddListener(*this));

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

	
	std::set<std::string> result;

	for (const auto& item : mPresets) {
		result.insert(item.first);
	}

	mCategoryItems.SetItems(std::vector<std::string>(result.begin(),result.end()));
	mListCategories->updateContent();

	if (mPresets.size() > 0) {
		mSelectedCategory = mPresets.begin()->first;
		mListCategories->selectRow(0);
	}


	UpdatePresetNamesList();
	repaint();
}

void CPresetBrowserImpl::OnItemSelected(CPresetItemAdapter & adapter, int index)
{
	if (&adapter == &mCategoryItems) {
		mSelectedCategory = mCategoryItems.GetItemAt(index);
		UpdatePresetNamesList();
	}
}

void CPresetBrowserImpl::buttonClicked(Button * buttonClicked)
{
	if (buttonClicked == mBtnLoadPreset.get()) {
		getParentComponent()->removeChildComponent(this);
	}
	else if (buttonClicked == mBtnCancel.get()) {
		getParentComponent()->removeChildComponent(this);
	}
}

void CPresetBrowserImpl::UpdatePresetNamesList()
{
	auto list = mPresets.find(mSelectedCategory);
	if (list == mPresets.end()) {
		mPresetItems.SetItems({});
	}
	else {
		std::vector<std::string> names;
		for (auto& preset : list->second) {
			names.push_back(preset.mName);
		}
		mPresetItems.SetItems(names);
	}

	mListPresets->updateContent();
}