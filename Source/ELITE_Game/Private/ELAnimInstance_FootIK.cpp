#include "ELAnimInstance_FootIK.h"

void UELAnimInstance_FootIK::UpdateHipsBlendRatio(const float DeltaTime, const bool bEnable, const float OverrideSpeed) {
}

FVector UELAnimInstance_FootIK::GetCurrentHipsOffset() const {
    return FVector{};
}

UELAnimInstance_FootIK::UELAnimInstance_FootIK() {
    this->bHipsBlend = false;
    this->HipsBlendRatio = 0.00f;
    this->DefaultHipsBlendSpeed = 10.00f;
}

