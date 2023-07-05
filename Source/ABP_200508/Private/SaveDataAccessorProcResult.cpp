#include "SaveDataAccessorProcResult.h"

FSaveDataAccessorProcResult::FSaveDataAccessorProcResult() {
    this->SaveDataAccessorEvent = ESaveDataAccessorEvent::Encrypted;
    this->Result = ESaveDataProcResult::None;
}

