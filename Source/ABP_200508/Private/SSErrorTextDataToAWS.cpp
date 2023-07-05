#include "SSErrorTextDataToAWS.h"

FSSErrorTextDataToAWS::FSSErrorTextDataToAWS() {
    this->ErrorID = 0;
    this->ErrorRetry = 0;
    this->ShowErrorCode = false;
    this->ShowErrorCodeForSwitch = false;
    this->OverrideErrDialogType = EErrDialogType::EErrDialogType_Default;
}

