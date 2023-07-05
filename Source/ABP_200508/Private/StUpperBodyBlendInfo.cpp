#include "StUpperBodyBlendInfo.h"

FStUpperBodyBlendInfo::FStUpperBodyBlendInfo() {
    this->ConditionType = EUpperBodyBlendCondition::CoreHP_Over;
    this->Arg01 = 0.00f;
    this->Arg02 = 0;
    this->CoolTime = 0.00f;
    this->limit = 0;
}

