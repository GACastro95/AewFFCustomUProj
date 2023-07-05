#include "YDebugMenuUIBase.h"

bool UYDebugMenuUIBase::UpdateChildMenuUI(const FYDebugMenuSimpleUIParam& _stDebugMenuSimpleUIParam, const FString& _strRegistKey) {
    return false;
}

FYDebugMenuDialogResult UYDebugMenuUIBase::ShowDialog(const FString& _strTitle, const FString& _strMessage, FYDebugMenuDialogButtonType _enButtonType) {
    return FYDebugMenuDialogResult::None;
}

void UYDebugMenuUIBase::SetDisabled(bool _bDisabled) {
}

bool UYDebugMenuUIBase::ResetUIValue(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuUIBase::RemoveUI(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuUIBase::IsDisabled() {
    return false;
}

bool UYDebugMenuUIBase::FindChildMenuUI(FYDebugMenuSimpleUIParam& _stDebugMenuSimpleUIParam, const FString& _strRegistKey) {
    return false;
}

void UYDebugMenuUIBase::DrawSimpleUI() {
}

bool UYDebugMenuUIBase::AddUI(const FYDebugMenuSimpleUIParam& _stParam, const FString& _strRegistKey) {
    return false;
}

UYDebugMenuUIBase::UYDebugMenuUIBase() {
}

