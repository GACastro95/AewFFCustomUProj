#include "ELHandsDamageArea.h"

bool AELHandsDamageArea::IsEnableEffect() {
    return false;
}

float AELHandsDamageArea::GetDamageRateTime() {
    return 0.0f;
}

int32 AELHandsDamageArea::GetDamageAmount() {
    return 0;
}

AELHandsDamageArea::AELHandsDamageArea() {
    this->DamageRateTime_N = 0.00f;
    this->DamageAmount = 0;
    this->EnableDanageEffect = false;
}

