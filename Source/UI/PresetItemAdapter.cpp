
#include "PresetItemAdapter.h"

int CPresetItemAdapter::getNumRows()
{
	return mItems.size();
}

void CPresetItemAdapter::paintListBoxItem(int rowNumber, Graphics & g, int width, int height, bool rowIsSelected)
{
	g.drawText(mItems[rowNumber], 0, 0, width, height, Justification::centred);
}

void CPresetItemAdapter::SetItems(const std::vector<std::string>& itemsList)
{
	mItems = itemsList;
}
