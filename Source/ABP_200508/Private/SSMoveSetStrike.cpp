#include "SSMoveSetStrike.h"

FSSMoveSetStrike::FSSMoveSetStrike() {
    this->WrestlerType = ESSWrestlerType::None;
    this->MoveSetLevel = 0;
    this->Punch1 = 0;
    this->Punch1_Lv = ESSMoveLevel::Lv1;
    this->Punch2 = 0;
    this->Punch2_Lv = ESSMoveLevel::Lv1;
    this->Kick1 = 0;
    this->Kick1_Lv = ESSMoveLevel::Lv1;
    this->Kick2 = 0;
    this->Kick2_Lv = ESSMoveLevel::Lv1;
    this->DashPunch1 = 0;
    this->DashPunch1_Lv = ESSMoveLevel::Lv1;
    this->DashPunch2 = 0;
    this->DashPunch2_Lv = ESSMoveLevel::Lv1;
}

