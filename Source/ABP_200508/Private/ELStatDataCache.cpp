#include "ELStatDataCache.h"

FELStatDataCache::FELStatDataCache() {
    this->Value = 0;
    this->IngestValue = 0;
    this->DataType = EELStatsDataType::Unknown;
    this->bQueried = false;
    this->bDirty = false;
    this->bWaitIngest = false;
}

