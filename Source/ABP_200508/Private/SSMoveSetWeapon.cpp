#include "SSMoveSetWeapon.h"

FSSMoveSetWeapon::FSSMoveSetWeapon() {
    this->WrestlerType = ESSWrestlerType::None;
    this->MoveSetLevel = 0;
    this->Weapon1_Lv = ESSMoveLevel::Lv1;
    this->Weapon2_Lv = ESSMoveLevel::Lv1;
    this->HpItemBonus_Lv = ESSHpItemBonusLevel::Lv1;
}

