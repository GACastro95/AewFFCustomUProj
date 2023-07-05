#include "ELDebugMenuSimpleUIParamBase.h"

FELDebugMenuSimpleUIParamBase::FELDebugMenuSimpleUIParamBase() {
    this->Type = EELDebugMenuSimpleUIType::Text;
    this->ShowUI = false;
    this->Disabled = false;
    this->Value = 0.00f;
    this->DefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->UseUIColor = false;
}

