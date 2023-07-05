#include "ELSSResponseBase.h"

FELSSResponseBase::FELSSResponseBase() {
    this->ErrorType = eErrorStatusType::eErrorStatusType_None;
    this->errorStatusId = 0;
    this->errorStatusIdAWS = 0;
}

