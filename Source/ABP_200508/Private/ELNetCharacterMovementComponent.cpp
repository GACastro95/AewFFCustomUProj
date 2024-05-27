#include "ELNetCharacterMovementComponent.h"

UELNetCharacterMovementComponent::UELNetCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ELNetCharacterOwner = NULL;
    this->NetworkDeltaTime = 0.00f;
    this->NetworkRootMotionPositionDiffThreshold = 0.10f;
    this->NetworkPositionDiffThreshold = 0.10f;
    this->NetworkPositionDiffAccelScale = 2.00f;
}

void UELNetCharacterMovementComponent::SetNoReplication(bool flg) {
}


