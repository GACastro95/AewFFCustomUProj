#include "SSErrorTextDataToSSAPI.h"

FSSErrorTextDataToSSAPI::FSSErrorTextDataToSSAPI() {
    this->ErrorType = eErrorStatusType::eErrorStatusType_None;
    this->ErrorRetry = 0;
    this->ShowErrorCode = false;
    this->ShowErrorCodeForSwitch = false;
    this->ShowDialogTypeText = false;
    this->OverrideErrDialogType = EErrDialogType::EErrDialogType_Default;
}

