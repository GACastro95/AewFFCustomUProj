#include "YDebugMenuSimpleUIParamBase.h"

FYDebugMenuSimpleUIParamBase::FYDebugMenuSimpleUIParamBase() {
    this->Type = EYDebugMenuSimpleUIType::Text;
    this->ShowUI = false;
    this->Disabled = false;
    this->Value = 0.00f;
    this->DefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->UseUIColor = false;
}

