

#pragma once
#include "Ui/RenamePresetGui.h"
#include "VSTComponents\OwlUI\IGuiListener.h"

class CSynthStateManager;

class CRenamePresetGuiImpl : public RenamePresetGui {
public:
	CRenamePresetGuiImpl(CSynthStateManager & stateManager);

	void buttonClicked(Button* buttonThatWasClicked) override;
	void SetNameAndCategory(const std::string& name, const std::string& category);
private:
	CSynthStateManager & mStateManager;
};