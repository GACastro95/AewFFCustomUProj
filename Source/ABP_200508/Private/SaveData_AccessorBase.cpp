#include "SaveData_AccessorBase.h"

USaveData_AccessorBase::USaveData_AccessorBase() {
    this->m_pcSaveGameBaseShared = NULL;
    this->m_pcSaveGame_RawData = NULL;
}

bool USaveData_AccessorBase::SetupSaveGame_RawData(USaveGame_RawData* _pcRawData, bool _bCopyData) {
    return false;
}

void USaveData_AccessorBase::SetUpdatedData() {
}

bool USaveData_AccessorBase::Setup(ESaveDataAccessorProcMode _enProcMode, USaveDataSystem* _pcRefSystem) {
    return false;
}

void USaveData_AccessorBase::SetRequestCacheFlag(bool _bCacheRequest) {
}

bool USaveData_AccessorBase::SetFileKey(const FString& _strFileKey, int32 _sFileUserIndex) {
    return false;
}

void USaveData_AccessorBase::SetDebugModeForBackGroundProcess(bool _bDebugMode) {
}

bool USaveData_AccessorBase::SetDataType(ESaveDataType _enSaveDataType) {
    return false;
}

void USaveData_AccessorBase::SetCachedFlag(bool _bCache) {
}

ESaveDataProcResult USaveData_AccessorBase::RequestUpload() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestUpdateTitleFileList(const TArray<FString>& _cSearchTags) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestUpdateOnlineFileList() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestUpdateLocalFileList(bool _bProjectSavedDir) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestSave(bool _bUpload) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestLoad(bool _bDownload, bool _bBackGroundDecrypt) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestGetLocalQuotaInfo() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestDownload(bool _bTitleFile) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestDeleteOnServer() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestDelete() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestCopy(const FString& _strFileKeyDest, int32 _sDestFileUserIndex) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::RequestConvertPS5FromPS4() {
    return ESaveDataProcResult::None;
}

bool USaveData_AccessorBase::IsUpdatedData() const {
    return false;
}

bool USaveData_AccessorBase::IsSuccessBackGroundProcResult() const {
    return false;
}

bool USaveData_AccessorBase::IsCanceledTask() {
    return false;
}

bool USaveData_AccessorBase::IsBusy() {
    return false;
}

ESaveDataProcResult USaveData_AccessorBase::ImmediateSave(bool _bDebugMode) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::ImmediateLoad(bool _bDebugMode) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::ImmediateDelete() {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_AccessorBase::ImmediateCopy(const FString& _strFileKeyDest, int32 _sDestFileUserIndex) {
    return ESaveDataProcResult::None;
}

TArray<FString> USaveData_AccessorBase::GetSearchTags() const {
    return TArray<FString>();
}

bool USaveData_AccessorBase::GetSaveGame_RawData(USaveGame_RawData*& _pcRawData) {
    return false;
}

ESaveDataType USaveData_AccessorBase::GetSaveDataType() const {
    return ESaveDataType::Unknown;
}

ESaveDataProcResult USaveData_AccessorBase::GetSaveDataObject(USaveDataObjectBase*& _pcSaveDataObject, uint8 _uSaveDataAccessFlags) {
    return ESaveDataProcResult::None;
}

bool USaveData_AccessorBase::GetSaveDataFileKeyWithType(FString& _strFileName, ESaveDataType _enType, int32 _strFileIndex) {
    return false;
}

bool USaveData_AccessorBase::GetQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo) const {
    return false;
}

ESaveDataAccessorProcMode USaveData_AccessorBase::GetProcMode() const {
    return ESaveDataAccessorProcMode::None;
}

ESaveDataProcResult USaveData_AccessorBase::GetLastBackGroundProcResult() const {
    return ESaveDataProcResult::None;
}

int32 USaveData_AccessorBase::GetFileUserIndex() const {
    return 0;
}

int32 USaveData_AccessorBase::GetFileList(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

FString USaveData_AccessorBase::GetFileKey(bool _bWithProductUserID) const {
    return TEXT("");
}

bool USaveData_AccessorBase::GetDebugModeForBackGroundProcess() const {
    return false;
}

int32 USaveData_AccessorBase::GetDataAccessRefCount() const {
    return 0;
}

bool USaveData_AccessorBase::Dispose() {
    return false;
}

bool USaveData_AccessorBase::ConvertSaveDataTypeAndIndexFromFileKey(ESaveDataType& _enType, int32& _sFileIndex, const FString& _strFileName) {
    return false;
}


