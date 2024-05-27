#include "ELDebugMenuManager.h"

UELDebugMenuManager::UELDebugMenuManager() {
}

bool UELDebugMenuManager::UnregistRoot(const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuManager::Setup(UWorld* _pcWorld) {
    return false;
}

void UELDebugMenuManager::SetShowMenu(bool _bShow) {
}

void UELDebugMenuManager::SetPlayerController(APlayerController* _pcPlayerController) {
}

bool UELDebugMenuManager::SetEnableInputForImGui(bool _bEnable) {
    return false;
}

bool UELDebugMenuManager::SetELDebugMenuManagerGlobalInstance(UELDebugMenuManager* _pcInst) {
    return false;
}

bool UELDebugMenuManager::ScreenShot(FString& _rstrFilePath, bool bShowGameUI) {
    return false;
}

bool UELDebugMenuManager::RegistRoot(UELDebugMenuRootBase* _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuManager::LoadJsonForELDebugMenuManager() {
    return false;
}

bool UELDebugMenuManager::IsShowMenu() const {
    return false;
}

bool UELDebugMenuManager::IsShowChildUI() {
    return false;
}

bool UELDebugMenuManager::IsEnableInputForImGui() {
    return false;
}

bool UELDebugMenuManager::IsEnableIngameELDebugMenu() {
    return false;
}

bool UELDebugMenuManager::IsEnableELDebugMenuSystem() {
    return false;
}

bool UELDebugMenuManager::IsEnableELDebugCamera() {
    return false;
}

UWorld* UELDebugMenuManager::GetWorldForBP(const UObject* WorldContextObject) const {
    return NULL;
}

bool UELDebugMenuManager::GetELDebugMenuManagerGlobalInstance(UELDebugMenuManager*& _pcInst) {
    return false;
}

APlayerController* UELDebugMenuManager::GetController() {
    return NULL;
}

UELDebugMenuRootBase* UELDebugMenuManager::FindRoot(const FString& _strRegistKey) {
    return NULL;
}

bool UELDebugMenuManager::ELResetWidget() {
    return false;
}

bool UELDebugMenuManager::ELResetImGuiInputFlags() {
    return false;
}

bool UELDebugMenuManager::CreateELDebugSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey, UELDebugMenuRootBase* _pcParent) {
    return false;
}

bool UELDebugMenuManager::CreateELDebugMenuRootBase(UELDebugMenuRootBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UELDebugMenuManager::CreateELDebugMenuManager(UELDebugMenuManager*& _pcInst) {
    return false;
}

bool UELDebugMenuManager::ClearELDebugMenuManagerGlobalInstance() {
    return false;
}


