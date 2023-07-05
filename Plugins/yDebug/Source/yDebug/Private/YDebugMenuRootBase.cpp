#include "YDebugMenuRootBase.h"

bool UYDebugMenuRootBase::UpdateSimpleMenuUIRecursive(const FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

void UYDebugMenuRootBase::SetShortcut(const TArray<FDebugMenuShortcutKeySettings>& _cKey, const FString& _strRegistKey, EYDebugMenuShortcutType _eShortCutType) {
}

void UYDebugMenuRootBase::SetRegistKey(const FString& _strRegistKey) {
}

void UYDebugMenuRootBase::SetParentRootMenu(UYDebugMenuRootBase* _pcDebugMenuRootBase) {
}

void UYDebugMenuRootBase::SetParent(UYDebugMenuManager* _pcDebugMenuManager) {
}

void UYDebugMenuRootBase::SetOpenFlag(bool _bOpen) {
}

void UYDebugMenuRootBase::SetMenuTitle(const FString& _strMenuTitle) {
}

void UYDebugMenuRootBase::SetGamePadFocus(bool _bGamePadFocus) {
}

void UYDebugMenuRootBase::SetDefaultParam(const FYDebugMenuRootDefaultParam& _stParam) {
}

void UYDebugMenuRootBase::SetActive(bool _bActive) {
}

bool UYDebugMenuRootBase::RemoveSubRootMenu(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::RemoveSubMenu(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::IsPressedShortcutKey(EYDebugMenuShortcutType& _reShortCutType, APlayerController* _pcPlayerController) {
    return false;
}

bool UYDebugMenuRootBase::IsOpened() {
    return false;
}

bool UYDebugMenuRootBase::IsGamePadFocus() {
    return false;
}

bool UYDebugMenuRootBase::IsActive() const {
    return false;
}

FString UYDebugMenuRootBase::GetRegistKey() {
    return TEXT("");
}

FString UYDebugMenuRootBase::GetMenuTitle() {
    return TEXT("");
}

bool UYDebugMenuRootBase::FindSubRootMenu(UYDebugMenuRootBase*& _pcSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::FindSubMenu(UYDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::FindSimpleMenuUIRecursive(FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::CreateSubRootMenu(UYDebugMenuRootBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::CreateSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::AddSubRootMenu(UYDebugMenuRootBase* _pcSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuRootBase::AddSubMenu(UYDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

void UYDebugMenuRootBase::AddShortcut(const FString& _strRegistKey, const TArray<FDebugMenuShortcutKeySettings>& _cKey, EYDebugMenuShortcutType _eShortCutType) {
}

UYDebugMenuRootBase::UYDebugMenuRootBase() {
}

