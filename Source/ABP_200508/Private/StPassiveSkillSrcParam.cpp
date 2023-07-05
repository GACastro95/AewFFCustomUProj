#include "StPassiveSkillSrcParam.h"

FStPassiveSkillSrcParam::FStPassiveSkillSrcParam() {
    this->ValidTarget = false;
    this->SelfHPPercent = 0.00f;
    this->TargetHPPercent = 0.00f;
    this->SelfMomentumPercent = 0.00f;
    this->TargetMomentumPercent = 0.00f;
    this->SelfSpecialState = false;
    this->TargetSpecialState = false;
    this->SelfBloodStainState = false;
}

