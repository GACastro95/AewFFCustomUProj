#include "SaveData_QuotaInfo.h"

FSaveData_QuotaInfo::FSaveData_QuotaInfo() {
    this->QuotaSize = 0;
    this->TotalUsedSize = 0;
    this->RemainSize = 0;
    this->AllocatableSize = 0;
    this->ValidQuotaSize = false;
    this->ValidTotalUsedSize = false;
    this->ValidRemainSize = false;
    this->ValidAllocatableSize = false;
}

