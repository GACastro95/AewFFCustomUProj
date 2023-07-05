#include "SSMoveSetGrapple.h"

FSSMoveSetGrapple::FSSMoveSetGrapple() {
    this->WrestlerType = ESSWrestlerType::None;
    this->MoveSetLevel = 0;
    this->Throw1 = 0;
    this->Throw1_Lv = ESSMoveLevel::Lv1;
    this->Throw2 = 0;
    this->Throw2_Lv = ESSMoveLevel::Lv1;
    this->DashThrow1 = 0;
    this->DashThrow1_Lv = ESSMoveLevel::Lv1;
    this->DashThrow2 = 0;
    this->DashThrow2_Lv = ESSMoveLevel::Lv1;
}

