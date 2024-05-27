#include "YDebugMenuSubMenuBase.h"

UYDebugMenuSubMenuBase::UYDebugMenuSubMenuBase() {
}

bool UYDebugMenuSubMenuBase::UpdateSimpleMenuUIRecursive(const FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

void UYDebugMenuSubMenuBase::SetRegistKey(const FString& _strRegistKey) {
}

void UYDebugMenuSubMenuBase::SetParentSubMenu(UYDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase) {
}

void UYDebugMenuSubMenuBase::SetParentRoot(UYDebugMenuRootBase* _pcDebugMenuRootBase) {
}

void UYDebugMenuSubMenuBase::SetDefaultParam(const FYDebugMenuSubMenuDefaultParam& _stParam) {
}

void UYDebugMenuSubMenuBase::SetActive(bool _bActive) {
}

bool UYDebugMenuSubMenuBase::RemoveSubMenu(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuSubMenuBase::IsActive() const {
    return false;
}

FString UYDebugMenuSubMenuBase::GetRegistKey() {
    return TEXT("");
}

bool UYDebugMenuSubMenuBase::FindSubMenu(UYDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuSubMenuBase::FindSimpleMenuUIRecursive(FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuSubMenuBase::CreateSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuSubMenuBase::AddSubMenu(UYDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey) {
    return false;
}


