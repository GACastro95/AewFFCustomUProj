#include "SSAttackInfo.h"

FSSAttackInfo::FSSAttackInfo() {
    this->StateHash = 0;
    this->MoveCommand = ESSMoveCommand::None;
    this->HitDirMode = ESSAttackHitDirMode::Default;
    this->RequiredWeapon = NULL;
    this->Available = false;
    this->WeaponMove = false;
    this->SyncAttack = false;
}

