#include "SSWeaponParam.h"

FSSWeaponParam::FSSWeaponParam() {
    this->ID = 0;
    this->WeaponType = ESSWeaponType::None;
    this->Rarity = ESSRarity::None;
    this->Attack1MoveId = 0;
    this->Attack2MoveId = 0;
    this->ScaleWhenDrop = 0.00f;
    this->IconImage = NULL;
}

