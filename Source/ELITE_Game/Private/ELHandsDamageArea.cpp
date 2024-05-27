#include "ELHandsDamageArea.h"

AELHandsDamageArea::AELHandsDamageArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageRateTime_N = 0.00f;
    this->DamageAmount = 0;
    this->EnableDanageEffect = false;
}

bool AELHandsDamageArea::IsEnableEffect() {
    return false;
}

float AELHandsDamageArea::GetDamageRateTime() {
    return 0.0f;
}

int32 AELHandsDamageArea::GetDamageAmount() {
    return 0;
}

bool AELHandsDamageArea::AlreadyHit(AActor* Target) {
    return false;
}

void AELHandsDamageArea::AddHitActor(AActor* Target) {
}


