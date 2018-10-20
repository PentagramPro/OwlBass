
#include "PresetItemAdapter.h"

int CPresetItemAdapter::getNumRows()
{
	return mItems.size();
}

void CPresetItemAdapter::paintListBoxItem(int rowNumber, Graphics & g, int width, int height, bool rowIsSelected)
{
	if (rowIsSelected) {
		g.setColour(Colour(90, 90, 90));
		g.fillRoundedRectangle(0, 0, width, height, 5);
	}

	g.setColour(Colour(255, 255, 255));
	g.drawText(mItems[rowNumber], 0, 0, width, height, Justification::centredLeft);
}

void CPresetItemAdapter::SetItems(const std::vector<std::string>& itemsList)
{
	mItems = itemsList;
}

std::string CPresetItemAdapter::GetItemAt(int index)
{
	if (index < 0 || index >= mItems.size()) {
		return "";
	}
	return mItems[index];
}

void CPresetItemAdapter::selectedRowsChanged(int lastRowSelected)
{
	for (auto& listener : GetListeners()) {
		listener->OnItemSelected(*this,lastRowSelected);
	}
}
