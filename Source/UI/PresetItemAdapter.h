#pragma once
#include "../../JuceLibraryCode/JuceHeader.h"
#include <string>
#include <vector>

class CPresetItemAdapter : public ListBoxModel {
public:
    int getNumRows () override;
    void paintListBoxItem (int rowNumber, Graphics &g, int width, int height, bool rowIsSelected) override;
    
	void SetItems(const std::vector<std::string>& itemsList);

private:
	std::vector<std::string> mItems;
};