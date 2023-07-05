#include "ELDebugMenuRootBase.h"

bool UELDebugMenuRootBase::UpdateSimpleMenuUIRecursive(const FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuRootBase::SetShortcut(const TArray<FELDebugMenuShortcutKeySettings>& _cKeys, const FString& _strRegistKey, EELDebugMenuShortcutType _eShortCutType) {
}

void UELDebugMenuRootBase::SetRegistKey(const FString& _strRegistKey) {
}

void UELDebugMenuRootBase::SetParentRootMenu(UELDebugMenuRootBase* _pcDebugMenuRootBase) {
}

void UELDebugMenuRootBase::SetParent(UELDebugMenuManager* _pcDebugMenuManager) {
}

void UELDebugMenuRootBase::SetOpenFlag(bool _bOpen) {
}

void UELDebugMenuRootBase::SetMenuTitle(const FString& _strMenuTitle) {
}

void UELDebugMenuRootBase::SetGamePadFocus(bool _bGamePadFocus) {
}

void UELDebugMenuRootBase::SetDefaultParam(const FELDebugMenuRootDefaultParam& _stParam) {
}

void UELDebugMenuRootBase::SetActive(bool _bActive) {
}

bool UELDebugMenuRootBase::RemoveSubRootMenu(const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::RemoveSubMenu(const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::IsPressedShortcutKey(EELDebugMenuShortcutType& _reShortCutType, APlayerController* _pcPlayerController) {
    return false;
}

bool UELDebugMenuRootBase::IsOpened() {
    return false;
}

bool UELDebugMenuRootBase::IsGamePadFocus() {
    return false;
}

bool UELDebugMenuRootBase::IsActive() const {
    return false;
}

bool UELDebugMenuRootBase::InitDebugMenuRootBase() {
    return false;
}

FString UELDebugMenuRootBase::GetRegistKey() {
    return TEXT("");
}

FString UELDebugMenuRootBase::GetMenuTitle() {
    return TEXT("");
}

bool UELDebugMenuRootBase::FindSubRootMenu(UELDebugMenuRootBase*& _pcSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::FindSubMenu(UELDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::FindSimpleMenuUIRecursive(FELDebugMenuSimpleUIParam& _rststParam, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::CreateSubRootMenu(UELDebugMenuRootBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::CreateSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuRootBase::BindDrawCore() {
}

void UELDebugMenuRootBase::BindChangedOpenFlag() {
}

void UELDebugMenuRootBase::BindActionCore() {
}

bool UELDebugMenuRootBase::AddSubRootMenu(UELDebugMenuRootBase* _pcSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuRootBase::AddSubMenu(UELDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuRootBase::AddShortcut(const FString& _strRegistKey, const TArray<FELDebugMenuShortcutKeySettings>& _cKeys, EELDebugMenuShortcutType _eShortCutType) {
}

UELDebugMenuRootBase::UELDebugMenuRootBase() {
}

