
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

void CPresetBrowserImpl::NextPreset()
{
	mSelectedPresetIndex++;
	const SRecord* result = GetPresetByCategoryAndIndex(mSelectedCategory, mSelectedPresetIndex);

	if (!result) {
		mSelectedPresetIndex = 0;
		auto nextCat = std::next(mPresets.find(mSelectedCategory));
		if (nextCat == mPresets.end()) {
			nextCat = mPresets.begin();
		}
		mSelectedCategory = nextCat->first;

		if (nextCat->second.size() > mSelectedPresetIndex) {
			result = &nextCat->second[mSelectedPresetIndex];
		}
	}

	for (auto& listener : GetListeners()) {
		listener->OnLoadPreset(result->mFile.getFullPathName().toStdString());
	}

}

void CPresetBrowserImpl::PreviousPreset()
{
	mSelectedPresetIndex--;
	const SRecord* result = GetPresetByCategoryAndIndex(mSelectedCategory, mSelectedPresetIndex);

	if (!result) {
		

		auto prevCat = std::prev(mPresets.find(mSelectedCategory));
		if (prevCat == mPresets.end()) {
			mSelectedCategory = mPresets.rbegin()->first;
			mSelectedPresetIndex = mPresets.rbegin()->second.size() - 1;
		}
		else {
			mSelectedCategory = prevCat->first;
			mSelectedPresetIndex = prevCat->second.size() - 1;
		}

		result = GetPresetByCategoryAndIndex(mSelectedCategory, mSelectedPresetIndex);
	}

	for (auto& listener : GetListeners()) {
		listener->OnLoadPreset(result->mFile.getFullPathName().toStdString());
	}
}

std::string CPresetBrowserImpl::GetPresetDescription() const
{
	auto result = GetPresetByCategoryAndIndex(mSelectedCategory, mSelectedPresetIndex);
	if (result == nullptr) {
		return "unknown";
	}


	return mSelectedCategory+" / "+result->mName;
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
	} else if (&adapter == &mPresetItems) {
		mSelectedPresetIndex = index;
	}
}

void CPresetBrowserImpl::buttonClicked(Button * buttonClicked)
{
	if (buttonClicked == mBtnLoadPreset.get()) {
		getParentComponent()->removeChildComponent(this);
		
		auto res = GetPresetByCategoryAndIndex(mSelectedCategory, mSelectedPresetIndex);
		if (res) {
			for (auto& listener : GetListeners()) {
				listener->OnLoadPreset(res->mFile.getFullPathName().toStdString());
			}
		}
		
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
	mListPresets->selectRow(-1);
	mSelectedPresetIndex = -1;
	mListPresets->updateContent();
}

const CPresetBrowserImpl::SRecord* CPresetBrowserImpl::GetPresetByCategoryAndIndex(const std::string & category, int index) const
{
	auto list = mPresets.find(category);
	if (list != mPresets.end() && index >= 0 && index<list->second.size()) {
		return &list->second[index];
	}

	return nullptr;
}
