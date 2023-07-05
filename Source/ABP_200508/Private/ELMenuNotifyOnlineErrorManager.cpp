#include "ELMenuNotifyOnlineErrorManager.h"

void UELMenuNotifyOnlineErrorManager::StartErrorCheck() {
}

void UELMenuNotifyOnlineErrorManager::Shutdown() {
}

void UELMenuNotifyOnlineErrorManager::Setup() {
}

void UELMenuNotifyOnlineErrorManager::SetOnlineGameMode(bool _value) {
}

void UELMenuNotifyOnlineErrorManager::PauseErrorCheck() {
}

void UELMenuNotifyOnlineErrorManager::OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult) {
}

bool UELMenuNotifyOnlineErrorManager::GetOnlineGameMode() const {
    return false;
}

void UELMenuNotifyOnlineErrorManager::EndErrorCheck() {
}

void UELMenuNotifyOnlineErrorManager::DebugForceError() {
}

UELMenuNotifyOnlineErrorManager::UELMenuNotifyOnlineErrorManager() {
    this->m_bInitialized = false;
    this->m_bPausedErrorCheck = false;
    this->m_bOnlineGameMode = false;
    this->m_NotifyOnlineErrorActor = NULL;
}

