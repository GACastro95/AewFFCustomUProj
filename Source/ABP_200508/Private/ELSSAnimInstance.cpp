#include "ELSSAnimInstance.h"

void UELSSAnimInstance::SetUpperBodyAnimState(ESSUpperBodyAnimState State) {
}

void UELSSAnimInstance::SetEnableUpperBodyAnim(bool IsOn) {
}

bool UELSSAnimInstance::IsEnableUpperBodyAnim() const {
    return false;
}

float UELSSAnimInstance::GetUpperBodyAnimAlpha(bool inCheckEnabled) const {
    return 0.0f;
}

void UELSSAnimInstance::DisableNotifyMontage(UAnimMontage* Montage) {
}

bool UELSSAnimInstance::CheckDisableNotifyMontage(UAnimMontage* Montage) {
    return false;
}

UELSSAnimInstance::UELSSAnimInstance() {
    this->IdleAnimation = NULL;
    this->UpperBodyAnimEnable = false;
    this->UpperBodyAnimState = ESSUpperBodyAnimState::Default;
    this->UpperBodyAnimAlpha = 0.00f;
    this->UpperBodyAnimAlphaBlendTime = 0.15f;
    this->bActiveUpperBodyAnim = false;
    this->AimOffsetAlpha = 0.00f;
    this->GunAimOffsetYaw = 0.00f;
    this->GunAimOffsetPitch = 0.00f;
    this->bShouldSkipUpdateSubAnimInst = false;
    this->bShouldSkipUpdateFacialAnimInst = false;
}

