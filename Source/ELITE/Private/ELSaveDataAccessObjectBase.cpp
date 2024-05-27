#include "ELSaveDataAccessObjectBase.h"
#include "Templates/SubclassOf.h"

UELSaveDataAccessObjectBase::UELSaveDataAccessObjectBase() {
    this->bAccessCache = true;
    this->m_IsCachedData = false;
    this->m_SaveDataType = ESaveDataType::Unknown;
    this->LastResult = ESaveDataProcResult::None;
}

bool UELSaveDataAccessObjectBase::WriteData_Implementation(USaveDataObjectBase* SaveDataObject, const bool bInitialize) {
    return false;
}

void UELSaveDataAccessObjectBase::UpdateData(ESaveDataType _saveDataType, FSaveDataUpdatedDelegate _delegate, const float Timeout) {
}

UELSaveDataAccessObjectBase* UELSaveDataAccessObjectBase::Update(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataUpdatedDelegate Delegate, const float Timeout) {
    return NULL;
}

UELSaveDataAccessObjectBase* UELSaveDataAccessObjectBase::Save(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataCreatedDelegate Delegate, const float Timeout) {
    return NULL;
}

void UELSaveDataAccessObjectBase::RequestTermination(const bool IsSuccess, const ESaveDataProcResult ProcResult) {
}

bool UELSaveDataAccessObjectBase::ReadData_Implementation(USaveDataObjectBase* SaveDataObject) {
    return false;
}

void UELSaveDataAccessObjectBase::OnUnbindAccessor_Implementation(USaveData_AccessorBase* SaveDataAccessor) {
}

bool UELSaveDataAccessObjectBase::OnStartUpdateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType) {
    return false;
}

bool UELSaveDataAccessObjectBase::OnStartLoadData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType) {
    return false;
}

bool UELSaveDataAccessObjectBase::OnStartCreateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType) {
    return false;
}

ESaveDataProcResult UELSaveDataAccessObjectBase::OnRequestTermination_Implementation(const bool IsSuccess, const ESaveDataProcResult InProcResult) {
    return ESaveDataProcResult::None;
}

void UELSaveDataAccessObjectBase::OnLoadedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor) {
}

void UELSaveDataAccessObjectBase::OnCreatedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor) {
}

void UELSaveDataAccessObjectBase::LoadData(ESaveDataType _saveDataType, FSaveDataLoadedDelegate _delegate, const float Timeout) {
}

UELSaveDataAccessObjectBase* UELSaveDataAccessObjectBase::Load(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataLoadedDelegate Delegate, const float Timeout) {
    return NULL;
}

bool UELSaveDataAccessObjectBase::IsSupportSaveDataType_Implementation(const ESaveDataType& SaveDataType) {
    return false;
}

bool UELSaveDataAccessObjectBase::IsRequestComplete_Implementation() {
    return false;
}

bool UELSaveDataAccessObjectBase::IsAccessCache() const {
    return false;
}

USaveDataObjectBase* UELSaveDataAccessObjectBase::GetSaveDataObject(TSubclassOf<USaveDataObjectBase> Class, ESaveDataProcResult& ProcResult, USaveData_AccessorBase* SaveDataAccessor, const uint8 AccessFlags) const {
    return NULL;
}

ESaveDataType UELSaveDataAccessObjectBase::GetRequestedSaveDataType() const {
    return ESaveDataType::Unknown;
}

ESaveDataProcResult UELSaveDataAccessObjectBase::GetLastResult() const {
    return ESaveDataProcResult::None;
}

UELSaveDataAccessObjectBase* UELSaveDataAccessObjectBase::CreateSaveDataAccessObject(const ESaveDataType SaveDataType, UObject* Outer) {
    return NULL;
}

void UELSaveDataAccessObjectBase::CreateData(ESaveDataType _saveDataType, FSaveDataCreatedDelegate _delegate, const float Timeout) {
}

void UELSaveDataAccessObjectBase::Callback_RequestProcessEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}


