#include "DebugCareerParam_AutoEvent.h"

FDebugCareerParam_AutoEvent::FDebugCareerParam_AutoEvent() {
    this->ePlayer = EWrestlerID_N::None;
    this->eRival = EWrestlerID_N::None;
    this->eDate = EWrestlerID_N::None;
    this->StartNo = 0;
    this->EndNo = 0;
    this->bStartTrigger = false;
    this->bAbortTrigger = false;
    this->bResumeTrigger = false;
    this->bDebugInfo = false;
}

