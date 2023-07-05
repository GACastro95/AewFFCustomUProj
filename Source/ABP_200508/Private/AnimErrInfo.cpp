#include "AnimErrInfo.h"

FAnimErrInfo::FAnimErrInfo() {
    this->CategoryID = 0;
    this->errType = EAnimErrType::NoError;
    this->PreviewIdx = 0;
    this->DistanceOffset = 0.00f;
    this->AllOffset = 0.00f;
}

