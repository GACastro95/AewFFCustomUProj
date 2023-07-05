#include "ELSSOutGameStateBase.h"


AELSSOutGameDatabase* AELSSOutGameStateBase::GetOutGameDatabase() const {
    return NULL;
}

AELSSOutGameStateBase::AELSSOutGameStateBase() {
    this->DatabaseType = NULL;
    this->Database = NULL;
    this->SaveDataManager = NULL;
    this->SaveDataManagerClass = NULL;
}

