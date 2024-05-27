#include "ELWeaponFallMove.h"

AELWeaponFallMove::AELWeaponFallMove(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponHeight = 0.00f;
    this->bEnableFootIKOnly_N = false;
}

bool AELWeaponFallMove::IsEnableFootIKOnly() const {
    return false;
}

float AELWeaponFallMove::GetWeaponHeight() const {
    return 0.0f;
}




