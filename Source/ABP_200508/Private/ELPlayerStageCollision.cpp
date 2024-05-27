#include "ELPlayerStageCollision.h"

UELPlayerStageCollision::UELPlayerStageCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Player_Native = NULL;
    this->Enable = false;
    this->OldEnableState = false;
    this->OldCollisionType = 0;
}

void UELPlayerStageCollision::SetStageCollisionManualEnable(bool bEnable) {
}

void UELPlayerStageCollision::ResetAlreadyInterpolateFlag() {
}

void UELPlayerStageCollision::MoveCapsule(AActor* Actor, const FVector& Location, const FTransform& Transform, FHitResult& HitResult, bool bSweep) {
}

bool UELPlayerStageCollision::IsTargetMovesStageCollisionValue_Implementation() {
    return false;
}

bool UELPlayerStageCollision::IsMyMovesStageCollisionValue_Implementation() {
    return false;
}

bool UELPlayerStageCollision::IsEnableStageCollision() {
    return false;
}

bool UELPlayerStageCollision::IsCompletedInterpolation() {
    return false;
}

bool UELPlayerStageCollision::IsAlreadyHit_Implementation(const FName& Tag) {
    return false;
}




