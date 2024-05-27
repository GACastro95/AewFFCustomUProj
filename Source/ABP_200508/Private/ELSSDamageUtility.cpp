#include "ELSSDamageUtility.h"

UELSSDamageUtility::UELSSDamageUtility() {
}

ESSDamageReason UELSSDamageUtility::ConvertToDamageReason(const UObject* WorldContextObject, ESSAttackType AttackType, bool IsPlayingSyncMotion, bool isWeaponAttack, bool isIgnoreGuard) {
    return ESSDamageReason::None;
}


