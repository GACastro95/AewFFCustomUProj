#include "ELCAWMenuWidgetBase.h"

void UELCAWMenuWidgetBase::UnlockBlockAllInput(const bool bBlockAllInput) {
}

void UELCAWMenuWidgetBase::SetBlockLock(const bool bNewValue) {
}

void UELCAWMenuWidgetBase::SetBlockAllInput(bool& bSuccess, const bool bNewValue) {
}




void UELCAWMenuWidgetBase::LockBlockAllInput(const bool bBlockAllInput) {
}

bool UELCAWMenuWidgetBase::IsLockedBlockAllInput() const {
    return false;
}

bool UELCAWMenuWidgetBase::IsDisplayUnitUS() const {
    return false;
}

bool UELCAWMenuWidgetBase::IsActiveController(const AELGameCommonPlayerControllerBase* Controller) const {
    return false;
}

bool UELCAWMenuWidgetBase::GetBlockLock() const {
    return false;
}

UELCAWMenuWidgetBase::UELCAWMenuWidgetBase() {
    this->ZoomSpeed = 1.00f;
    this->TriggerAccSpeed = 0.50f;
    this->TriggerCurve = NULL;
}

