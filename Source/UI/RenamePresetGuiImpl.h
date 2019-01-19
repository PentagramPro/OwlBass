

#pragma once
#include "Ui/RenamePresetGui.h"
#include "VSTComponents\OwlUI\IGuiListener.h"
class CRenamePresetGuiImpl : public RenamePresetGui {
public:
	CRenamePresetGuiImpl(IGuiListener& listener);

	void buttonClicked(Button* buttonThatWasClicked) override;
	void SetNameAndCategory(const std::string& name, const std::string& category);
private:
	IGuiListener & mGuiListener;
};