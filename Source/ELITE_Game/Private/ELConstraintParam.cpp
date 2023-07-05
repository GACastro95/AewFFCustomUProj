#include "ELConstraintParam.h"

FELConstraintParam::FELConstraintParam() {
    this->TargetAP = EWrestlerAP::Head_00;
    this->ReferenceAP = EWrestlerAP::Head_00;
    this->MaxBlendRate = 0.00f;
    this->BlendType = EAnimPlayType::OneShot;
    this->InBlendTime = 0.00f;
    this->OutBlendTime = 0.00f;
}

