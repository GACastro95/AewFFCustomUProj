#include "ELNetworkObserverBase.h"

void UELNetworkObserverBase::SetNetworkEquipment(EELNetworkStatus NetworkStatus) {
}

EELNetworkType UELNetworkObserverBase::GetNetType() const {
    return EELNetworkType::Unknown;
}

EELNetworkStatus UELNetworkObserverBase::GetNetStatus() const {
    return EELNetworkStatus::Disabled;
}

EELApplicationStatus UELNetworkObserverBase::GetAppStatus() const {
    return EELApplicationStatus::Unknown;
}

void UELNetworkObserverBase::Debug_SetDisableYGS2(bool Disable) {
}

void UELNetworkObserverBase::Debug_SetDisableNetwork(bool Disable) {
}

void UELNetworkObserverBase::Debug_SetDisableEOS(bool Disable) {
}

UELNetworkObserverBase::UELNetworkObserverBase() {
}

