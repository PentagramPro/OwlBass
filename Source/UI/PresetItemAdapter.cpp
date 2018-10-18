
#include "PresetItemAdapter.h"

int CPresetItemAdapter::getNumRows()
{
	return mItems.size();
}

void CPresetItemAdapter::paintListBoxItem(int rowNumber, Graphics & g, int width, int height, bool rowIsSelected)
{
	if (rowIsSelected) {
		g.setColour(Colour(50, 50, 50));
		g.fillRoundedRectangle(0, 0, width, height, 10);
	}

	g.setColour(Colour(255, 255, 255));
	g.drawText(mItems[rowNumber], 0, 0, width, height, Justification::centredLeft);
}

void CPresetItemAdapter::SetItems(const std::vector<std::string>& itemsList)
{
	mItems = itemsList;
}
