#include "ELDebugMenuUIBase.h"

bool UELDebugMenuUIBase::UpdateChildMenuUI(const FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey) {
    return false;
}

FELDebugMenuDialogResult UELDebugMenuUIBase::ShowDialog(const FString& _strTitle, const FString& _strMessage, FELDebugMenuDialogButtonType _enButtonType) {
    return FELDebugMenuDialogResult::None;
}

void UELDebugMenuUIBase::SetDisabled(bool _bDisabled) {
}

bool UELDebugMenuUIBase::ResetUIValue(const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuUIBase::RemoveUI(const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuUIBase::OnUIUpdated() {
}

bool UELDebugMenuUIBase::IsDisabled() {
    return false;
}

bool UELDebugMenuUIBase::FindChildMenuUI(FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuUIBase::DrawSimpleUI() {
}

bool UELDebugMenuUIBase::AddUI(const FELDebugMenuSimpleUIParam& _stParam, const FString& _strRegistKey) {
    return false;
}

UELDebugMenuUIBase::UELDebugMenuUIBase() {
}

