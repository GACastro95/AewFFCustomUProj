#include "SSFallParam.h"

FSSFallParam::FSSFallParam() {
    this->LandingLevel = 0;
    this->HeightDiff = 0;
    this->LandState = NULL;
    this->RunJumpLandState = NULL;
    this->DoubleJumpLandState = NULL;
    this->DamageCoefOnFall = 0.00f;
    this->DamageCoefOnDamage = 0.00f;
    this->InvolveProp = false;
    this->CameraShake = ESSCameraShakeType::None;
}

