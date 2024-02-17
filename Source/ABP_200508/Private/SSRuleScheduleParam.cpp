#include "SSRuleScheduleParam.h"

FSSRuleScheduleParam::FSSRuleScheduleParam() {
    this->ID = 0;
    this->Enabled = false;
    this->RuleId = 0;
    this->Type = ESSScheduleType::Permanent;
    this->NthDays = 0;
    this->Priority = 0;
    this->Mon = false;
    this->Tue = false;
    this->Wed = false;
    this->Thu = false;
    this->Fri = false;
    this->Sat = false;
    this->Sun = false;
}

