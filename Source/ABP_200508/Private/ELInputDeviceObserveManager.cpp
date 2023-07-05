#include "ELInputDeviceObserveManager.h"

void UELInputDeviceObserveManager::UpdateInputDeviceMap(const int32 _updateSrcDeviceIndex, const int32 _updateDstDeviceIndex) {
}

void UELInputDeviceObserveManager::StartCheckConnectionStatus() {
}

void UELInputDeviceObserveManager::SetShowDisconnectedDeviceId(const int32 ControllerId) {
}

void UELInputDeviceObserveManager::SetManipulateKeyboardeMode(bool Enable) {
}

void UELInputDeviceObserveManager::SetLightbarColor(int32 ControllerId, FColor Color) {
}

void UELInputDeviceObserveManager::SetExhibitionPlayerIndex(int32 _targetControllerID, int32 _Index) {
}

void UELInputDeviceObserveManager::SetDecideMatchControllerID(int32 ID) {
}

void UELInputDeviceObserveManager::SetAssignHostPad(int32 _targetControllerID) {
}

void UELInputDeviceObserveManager::OnOpenedDisconnectedDialog() {
}

void UELInputDeviceObserveManager::OnManipulateDecideBtn(APlayerController* PlayerController) {
}

void UELInputDeviceObserveManager::OnManipulateCursor(bool _isLeft) {
}

void UELInputDeviceObserveManager::OnClosedDisconnectedDialog() {
}

bool UELInputDeviceObserveManager::IsJoyCon(int32 Index) {
    return false;
}

bool UELInputDeviceObserveManager::IsHandheldStyle(int32 Index) {
    return false;
}

bool UELInputDeviceObserveManager::IsConnectedHostPad() {
    return false;
}

bool UELInputDeviceObserveManager::IsConnectedDevice(int32 _targetControllerID) {
    return false;
}

bool UELInputDeviceObserveManager::IsCheckingConnectionStatus() const {
    return false;
}

bool UELInputDeviceObserveManager::IsAssignedExhibitionPlayerIndex() {
    return false;
}

bool UELInputDeviceObserveManager::IsActiveNotifyDisconnectedDialog() {
    return false;
}

void UELInputDeviceObserveManager::GetJoinedLocalExhibitionControllerIdList(TArray<int32>& _Result) {
}

int32 UELInputDeviceObserveManager::GetInputControllerNum() {
    return 0;
}

int32 UELInputDeviceObserveManager::GetGameHostPadID() {
    return 0;
}

int32 UELInputDeviceObserveManager::GetExhibitionPlayerIndex(int32 _targetControllerID) {
    return 0;
}

EInputDeviceGameFlowType UELInputDeviceObserveManager::GetCurrentGameFlowStatus() {
    return EInputDeviceGameFlowType::None;
}

void UELInputDeviceObserveManager::GetCurrentControllerIds(TArray<int32>& _Result) {
}

void UELInputDeviceObserveManager::GetBindControllerUserNameList(const TArray<int32>& _targetControllerIdList, TArray<FText>& _Result) {
}

void UELInputDeviceObserveManager::GetBindControllerUserName(const int32 _targetControllerID, FText& _Result) {
}

void UELInputDeviceObserveManager::EndCheckConnectionStatus() {
}

void UELInputDeviceObserveManager::ClearJoinLocalExhibition() {
}

void UELInputDeviceObserveManager::ClearGameFlowStatus() {
}

void UELInputDeviceObserveManager::ClearExhibitionPlayerIndexMap() {
}

void UELInputDeviceObserveManager::CheckLocalConnectedDevice(UObject* _pWorldContextObject) {
}

void UELInputDeviceObserveManager::CheckExistHostController() {
}

void UELInputDeviceObserveManager::ChangeGameFlowStatus(EInputDeviceGameFlowType _type) {
}

void UELInputDeviceObserveManager::BackupOldDeviceInfo() {
}

void UELInputDeviceObserveManager::AddJoinLocalExhibition(int32 _targetControllerID) {
}

UELInputDeviceObserveManager::UELInputDeviceObserveManager() {
    this->m_NotifyGamepadDisconnectedActor = NULL;
    this->m_GameFlowType = EInputDeviceGameFlowType::None;
    this->m_GameHostControllerID = -1;
    this->m_ManipulateKeyboardeMode = false;
}

