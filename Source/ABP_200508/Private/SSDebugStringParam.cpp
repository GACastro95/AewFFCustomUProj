#include "SSDebugStringParam.h"

FSSDebugStringParam::FSSDebugStringParam() {
    this->Category = ESSDebugStringCategory::Default;
    this->SortOrder = 0;
    this->Duration = 0.00f;
    this->AutoDisable = false;
    this->PrintToLog = false;
    this->HideFlag = ESSLocalDebugFlag::None;
}

