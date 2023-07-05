#include "SSButtonHoldState.h"

FSSButtonHoldState::FSSButtonHoldState() {
    this->RawHold = false;
    this->Hold = false;
    this->LongPressTriggered = false;
    this->HoldTime = 0.00f;
    this->TapTrigger = ESSActionTransitTrigger::None;
    this->LongPressTrigger = ESSActionTransitTrigger::None;
    this->DashTapTrigger = ESSActionTransitTrigger::None;
    this->DashLongPressTrigger = ESSActionTransitTrigger::None;
}

