
#include "RenamePresetGuiImpl.h"

CRenamePresetGuiImpl::CRenamePresetGuiImpl(IGuiListener & listener) : mGuiListener(listener)
{
}

void CRenamePresetGuiImpl::buttonClicked(Button * buttonThatWasClicked)
{
	mGuiListener.OnSavePreset(mTxtName->getText().toStdString(), mTxtCategory->getText().toStdString());
	getParentComponent()->removeChildComponent(this);
}

void CRenamePresetGuiImpl::SetNameAndCategory(const std::string& name, const std::string& category)
{
	mTxtCategory->setText(category);
	mTxtName->setText(name);
}
