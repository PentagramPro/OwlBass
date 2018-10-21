#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/ListenerRegistry.h"
#include <string>
#include <vector>

class CPresetItemAdapter;

class IPresetItemListener {
public:
	virtual void OnItemSelected(CPresetItemAdapter& adapter, int index) = 0;
};

class CPresetItemAdapter : public ListBoxModel, public CListenerRegistry<IPresetItemListener> {
public:
    int getNumRows () override;
    void paintListBoxItem (int rowNumber, Graphics &g, int width, int height, bool rowIsSelected) override;
    
	void SetItems(const std::vector<std::string>& itemsList);
	std::string GetItemAt(int index);

private:
	virtual void selectedRowsChanged(int lastRowSelected) override;

	std::vector<std::string> mItems;
};