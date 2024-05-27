#include "SaveDataObjectBase.h"

USaveDataObjectBase::USaveDataObjectBase() {
    this->m_pcSaveGameBase = NULL;
}

void USaveDataObjectBase::SetProductUserID(const FString& _strProductUserID) {
}

bool USaveDataObjectBase::IsValidType() const {
    return false;
}

bool USaveDataObjectBase::IsValidRawData(const USaveGame_RawData* _pcRawData) const {
    return false;
}

bool USaveDataObjectBase::IsValidData() const {
    return false;
}

bool USaveDataObjectBase::IsUpdated() const {
    return false;
}

bool USaveDataObjectBase::IsReadOnly() const {
    return false;
}

int32 USaveDataObjectBase::GetRawDataSize() const {
    return 0;
}

FString USaveDataObjectBase::GetProductUserID() const {
    return TEXT("");
}

bool USaveDataObjectBase::GetHeader(FELSaveDataHeader& _stHeader) const {
    return false;
}

void USaveDataObjectBase::Dispose() {
}


