
#include "RenamePresetGuiImpl.h"
#include "VSTComponents/Owl/SynthStateManager.h"

CRenamePresetGuiImpl::CRenamePresetGuiImpl(CSynthStateManager & stateManager) : mStateManager(stateManager)
{
}

void CRenamePresetGuiImpl::buttonClicked(Button * buttonThatWasClicked)
{
	mStateManager.SetNameAndCategory(mTxtName->getText().toStdString(), mTxtCategory->getText().toStdString());
	mStateManager.SaveStateToFile(mStateManager.GetCurrentPath());
	getParentComponent()->removeChildComponent(this);
}

void CRenamePresetGuiImpl::SetNameAndCategory(const std::string& name, const std::string& category)
{
	mTxtCategory->setText(category);
	mTxtName->setText(name);
}
