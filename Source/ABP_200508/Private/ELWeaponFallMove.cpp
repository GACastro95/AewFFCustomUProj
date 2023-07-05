#include "ELWeaponFallMove.h"

bool AELWeaponFallMove::IsEnableFootIKOnly() const {
    return false;
}

float AELWeaponFallMove::GetWeaponHeight() const {
    return 0.0f;
}



AELWeaponFallMove::AELWeaponFallMove() {
    this->WeaponHeight = 0.00f;
    this->bEnableFootIKOnly_N = false;
}

