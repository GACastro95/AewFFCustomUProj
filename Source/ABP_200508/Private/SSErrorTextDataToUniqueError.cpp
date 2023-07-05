#include "SSErrorTextDataToUniqueError.h"

FSSErrorTextDataToUniqueError::FSSErrorTextDataToUniqueError() {
    this->ErrorType = ESSOnlineErrorType::ESSOnlineErrorType_None;
    this->ShowErrorCode = false;
    this->ShowErrorCodeForSwitch = false;
    this->OverrideErrDialogType = EErrDialogType::EErrDialogType_Default;
}

