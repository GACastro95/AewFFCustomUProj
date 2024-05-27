#include "ELDebugMenuSubMenuBase.h"

UELDebugMenuSubMenuBase::UELDebugMenuSubMenuBase() {
}

bool UELDebugMenuSubMenuBase::UpdateSimpleMenuUIRecursive(const FELDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

void UELDebugMenuSubMenuBase::SetRegistKey(const FString& _strRegistKey) {
}

void UELDebugMenuSubMenuBase::SetParentSubMenu(UELDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase) {
}

void UELDebugMenuSubMenuBase::SetParentRoot(UELDebugMenuRootBase* _pcDebugMenuRootBase) {
}

void UELDebugMenuSubMenuBase::SetDefaultParam(const FELDebugMenuSubMenuDefaultParam& _stParam) {
}

void UELDebugMenuSubMenuBase::SetActive(bool _bActive) {
}

bool UELDebugMenuSubMenuBase::RemoveSubMenu(const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuSubMenuBase::IsActive() const {
    return false;
}

FString UELDebugMenuSubMenuBase::GetRegistKey() {
    return TEXT("");
}

bool UELDebugMenuSubMenuBase::FindSubMenu(UELDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuSubMenuBase::FindSimpleMenuUIRecursive(FELDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuSubMenuBase::CreateSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey_pcParent) {
    return false;
}

bool UELDebugMenuSubMenuBase::AddSubMenu(UELDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey) {
    return false;
}


