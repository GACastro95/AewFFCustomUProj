#include "SaveDataAccessData.h"

FSaveDataAccessData::FSaveDataAccessData() {
    this->ObjectClass = NULL;
    this->bWhenFailedIsNeedNewData = false;
    this->RequestCapacity = 0;
    this->SlotNum = 0;
    this->Timeout = 0.00f;
}

