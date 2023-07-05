#include "StPassiveSkillData_Situation.h"

FStPassiveSkillData_Situation::FStPassiveSkillData_Situation() {
    this->fGameplaySec_Under = 0.00f;
    this->fGameplaySec_Over = 0.00f;
    this->fSelfHP_Under = 0.00f;
    this->fSelfHP_Over = 0.00f;
    this->fTargetHP_Under = 0.00f;
    this->fTargetHP_Over = 0.00f;
    this->bDiffHP_Over = false;
    this->bDiffHP_Under = false;
    this->bBlood = false;
    this->fSelfMomentum_Over = 0.00f;
    this->fSelfMomentum_Under = 0.00f;
    this->bSelfSpecialState = false;
    this->fTargetMomentum_Over = 0.00f;
    this->fTargetMomentum_Under = 0.00f;
    this->bTargetSpecialState = false;
}

