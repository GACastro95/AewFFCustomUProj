#include "YDebugMenuManager.h"

UYDebugMenuManager::UYDebugMenuManager() {
    this->m_pcController = NULL;
}

bool UYDebugMenuManager::UnregistRoot(const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuManager::Setup(UWorld* _pcWorld) {
    return false;
}

void UYDebugMenuManager::SetShowMenu(bool _bShow) {
}

void UYDebugMenuManager::SetPlayerController(APlayerController* _pcPlayerController) {
}

bool UYDebugMenuManager::SetEnableInputForImGui(bool _bEnable) {
    return false;
}

bool UYDebugMenuManager::SetDebugMenuManagerGlobalInstance(UYDebugMenuManager* _pcInst) {
    return false;
}

bool UYDebugMenuManager::ScreenShot(FString& _rstrFilePath, bool bShowGameUI) {
    return false;
}

bool UYDebugMenuManager::ResetWidget() {
    return false;
}

bool UYDebugMenuManager::ResetImGuiInputFlags() {
    return false;
}

bool UYDebugMenuManager::RegistRoot(UYDebugMenuRootBase* _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuManager::LoadJsonForDebugMenuManager() {
    return false;
}

bool UYDebugMenuManager::IsShowMenu() const {
    return false;
}

bool UYDebugMenuManager::IsShowChildUI() {
    return false;
}

bool UYDebugMenuManager::IsEnableMainMenuDebugMenu() {
    return false;
}

bool UYDebugMenuManager::IsEnableInputForImGui() {
    return false;
}

bool UYDebugMenuManager::IsEnableIngameDebugMenu() {
    return false;
}

bool UYDebugMenuManager::IsEnableDebugMenuSystem() {
    return false;
}

bool UYDebugMenuManager::IsEnableDebugCamera() {
    return false;
}

bool UYDebugMenuManager::GetDebugMenuManagerGlobalInstance(UYDebugMenuManager*& _pcInst) {
    return false;
}

APlayerController* UYDebugMenuManager::GetController() {
    return NULL;
}

UYDebugMenuRootBase* UYDebugMenuManager::FindRoot(const FString& _strRegistKey) {
    return NULL;
}

bool UYDebugMenuManager::CreateYDebugSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey, UYDebugMenuRootBase* _pcParent) {
    return false;
}

bool UYDebugMenuManager::CreateYDebugMenuRootBase(UYDebugMenuRootBase*& _pcInst, const FString& _strRegistKey) {
    return false;
}

bool UYDebugMenuManager::CreateYDebugMenuManager(UYDebugMenuManager*& _pcInst) {
    return false;
}

bool UYDebugMenuManager::ClearDebugMenuManagerGlobalInstance() {
    return false;
}


