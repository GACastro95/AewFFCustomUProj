#include "ELSSOnlineTestAnimInstance.h"

void UELSSOnlineTestAnimInstance::SetEnableDirectionSlot(bool inEnable) {
}

bool UELSSOnlineTestAnimInstance::IsEnableDirectionSlot() const {
    return false;
}

float UELSSOnlineTestAnimInstance::GetDirectionSlotAngle() const {
    return 0.0f;
}

FVector UELSSOnlineTestAnimInstance::GetActorVelocity() const {
    return FVector{};
}

float UELSSOnlineTestAnimInstance::GetActorSpeed() const {
    return 0.0f;
}

UELSSOnlineTestAnimInstance::UELSSOnlineTestAnimInstance() {
    this->enableDirectionSlot = false;
    this->directionSlotAngle = 0.00f;
    this->OwningActor = NULL;
    this->actorSpeed = 0.00f;
}

