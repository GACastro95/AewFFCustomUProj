#include "SSStateRequestParam.h"

FSSStateRequestParam::FSSStateRequestParam() {
    this->ID = 0;
    this->Trigger = ESSActionTransitTrigger::None;
    this->TargetActor = NULL;
    this->InputFlg = false;
    this->InputYaw = 0.00f;
}

