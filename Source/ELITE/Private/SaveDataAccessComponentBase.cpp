#include "SaveDataAccessComponentBase.h"

USaveDataAccessComponentBase::USaveDataAccessComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBusy = false;
    this->JobIndex = 0;
    this->Params.AddDefaulted(13);
    this->bSilent = false;
    this->bCreateNew = false;
}

void USaveDataAccessComponentBase::StartSave(const TArray<ESaveDataType>& List) {
}

void USaveDataAccessComponentBase::StartLoad() {
}

void USaveDataAccessComponentBase::SaveProcess(const int32 Index) {
}

void USaveDataAccessComponentBase::LoadProcess(const int32 Index) {
}

UELSaveDataAccessObjectBase* USaveDataAccessComponentBase::GetSaveDataAccessObject(const ESaveDataType& DataType) {
    return NULL;
}


