
#include "RenamePresetGuiImpl.h"

CRenamePresetGuiImpl::CRenamePresetGuiImpl(IGuiListener & listener) : mGuiListener(listener)
{
}

void CRenamePresetGuiImpl::buttonClicked(Button * buttonThatWasClicked)
{
	mGuiListener.OnSavePreset(mTxtName->getText().toStdString(), mTxtCategory->getText().toStdString());

}
