#include "SSErrorTextDataToYGS2API.h"

FSSErrorTextDataToYGS2API::FSSErrorTextDataToYGS2API() {
    this->ErrorType = EYGS2ErrorType::NoRequest;
    this->ErrorRetry = 0;
    this->ShowErrorCode = false;
    this->ShowErrorCodeForSwitch = false;
}

