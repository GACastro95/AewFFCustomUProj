#include "SSFgfFlowStateSyncParam.h"

FSSFgfFlowStateSyncParam::FSSFgfFlowStateSyncParam() {
    this->RoundNo = 0;
    this->FirstHalfFlag = 0;
    this->State = ESSFgfRoundFlowState::None;
    this->SyncId = 0;
}

