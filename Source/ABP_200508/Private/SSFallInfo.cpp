#include "SSFallInfo.h"

FSSFallInfo::FSSFallInfo() {
    this->Reason = ESSFallReason::None;
    this->ApexZ = 0.00f;
    this->LaunchAttackOwner = NULL;
    this->LaunchDamage = 0.00f;
    this->MaxLandingLevel = 0;
    this->DoubleJumpCount = 0;
}

