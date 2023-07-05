#include "SSMoveParam.h"

FSSMoveParam::FSSMoveParam() {
    this->ID = 0;
    this->StateBP = NULL;
    this->RotationSpeedScale = 0.00f;
    this->IsWeaponMove = false;
    this->AttackWithArmor = false;
    this->ActionCameraID = ESSActionCameraID::None;
    this->ComboMoveId = 0;
    this->ReachMoveId = 0;
    this->ThrowPredictionPowerScale = 0.00f;
    this->ThrowPredictionFrequency = 0.00f;
}

