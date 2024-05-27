#include "SaveDataSystem.h"

USaveDataSystem::USaveDataSystem() {
    this->m_pcDebugBase = NULL;
    this->m_pcLowerEngine = NULL;
    this->m_pcCache = NULL;
}

bool USaveDataSystem::UpdateLocalFileList_Immediate(bool _bProjectSavedDir) {
    return false;
}

bool USaveDataSystem::UnregistCache(USaveData_AccessorBase* _pcSaveDataAccessor) {
    return false;
}

bool USaveDataSystem::StartDataReset(bool _bProjectSavedDir, const FString& _strTargetFileName) {
    return false;
}

bool USaveDataSystem::SetSaveDataSystemForGlobal(USaveDataSystem* _pcInstance) {
    return false;
}

bool USaveDataSystem::SetOnlineParam(const FString& _strProductUserID) {
    return false;
}

ESaveDataProcResult USaveDataSystem::SaveRawData_Immediate(USaveGame_RawData* _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

bool USaveDataSystem::RequestUpdateTitleFileList(const TArray<FString>& _cSearchTags) {
    return false;
}

bool USaveDataSystem::RequestUpdateOnlineFileList() {
    return false;
}

bool USaveDataSystem::RequestUpdateLocalFileList(bool _bProjectSavedDir) {
    return false;
}

bool USaveDataSystem::RequestLoad(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bDownload, bool _bCache, bool _bBackGroundDecrypt) {
    return false;
}

bool USaveDataSystem::RequestGetLocalQuotaInfo() {
    return false;
}

bool USaveDataSystem::RequestDownload(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bTitleFile) {
    return false;
}

bool USaveDataSystem::RequestDeleteOnServer(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex) {
    return false;
}

bool USaveDataSystem::RequestDelete(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex) {
    return false;
}

bool USaveDataSystem::RequestCopy(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strSrcKey, int32 _sSrcFileUserIndex, const FString& _strDestKey, int32 _sDestFileUserIndex) {
    return false;
}

bool USaveDataSystem::RequestConvertPS5FromPS4(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bCache) {
    return false;
}

void USaveDataSystem::ReleaseSaveDataCache(UObject* WorldContextObject) {
}

bool USaveDataSystem::RegistCache(USaveData_AccessorBase* _pcSaveDataAccessor) {
    return false;
}

ESaveDataProcResult USaveDataSystem::LoadRawData_Immediate_PS4(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex, TArray<uint8>& OutSaveData) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveDataSystem::LoadRawData_Immediate(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

bool USaveDataSystem::IsWaitForBGTask() {
    return false;
}

bool USaveDataSystem::IsValidDataForRawData(USaveGame_RawData* _pcRawData, bool _bDebugMode) {
    return false;
}

bool USaveDataSystem::IsUpdatingTitleFileList() {
    return false;
}

bool USaveDataSystem::IsUpdatingOnlineFileList() {
    return false;
}

bool USaveDataSystem::IsUpdatingLocalQuotaInfo() {
    return false;
}

bool USaveDataSystem::IsUpdatingLocalFileList() {
    return false;
}

bool USaveDataSystem::IsExistsRawData_Immediate(const FString& _strFileKey, int32 _sFileUserIndex) {
    return false;
}

bool USaveDataSystem::ImportFiles(TArray<FString> _strFileList) {
    return false;
}

int32 USaveDataSystem::GetTitleFileList(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

bool USaveDataSystem::GetSaveDataSystemForGlobal(USaveDataSystem*& _pcInstance) {
    return false;
}

FString USaveDataSystem::GetProductUserID() const {
    return TEXT("");
}

bool USaveDataSystem::GetProcessor(USaveData_ProcessBase*& _pcProcessBase, ESaveDataProcessType _enProcessType) {
    return false;
}

int32 USaveDataSystem::GetOnlineFileList(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

bool USaveDataSystem::GetLocalQuotaInfo_Immediate(FSaveData_QuotaInfo& _stQuataInfo) {
    return false;
}

bool USaveDataSystem::GetLocalQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo) {
    return false;
}

int32 USaveDataSystem::GetLocalFileListByType(TArray<FSaveData_FileInfo>& _refFileList, const FString& _strFilterName) {
    return 0;
}

int32 USaveDataSystem::GetLocalFileList_Immediate(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

int32 USaveDataSystem::GetLocalFileList(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

FString USaveDataSystem::GetEpicAccountID() const {
    return TEXT("");
}

bool USaveDataSystem::GetDebugBase(USaveData_DebugBase*& _pcDebugBase) {
    return false;
}

bool USaveDataSystem::FindCache(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strFileKey) {
    return false;
}

bool USaveDataSystem::ExportTexts(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName) {
    return false;
}

bool USaveDataSystem::ExportFiles(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName) {
    return false;
}

ESaveDataProcResult USaveDataSystem::DeleteRawData_Immediate(const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

bool USaveDataSystem::CreateSaveDataSystem(USaveDataSystem*& _pcSaveDataSystem, const FString& _strEpicAccountUserID, const FString& _strEncryptionKey, bool _bEnableDebug) {
    return false;
}

bool USaveDataSystem::CreateSaveDataObject(USaveDataObjectBase*& _pcSaveDataObject, ESaveDataType _enType) {
    return false;
}

bool USaveDataSystem::CreateAccessorWithRawData(USaveData_AccessorBase*& _pcSaveDataAccessor, USaveGame_RawData* _pcRawData, bool _bCopyData) {
    return false;
}

bool USaveDataSystem::CreateAccessor(USaveData_AccessorBase*& _pcSaveDataAccessor, ESaveDataType _enType) {
    return false;
}

bool USaveDataSystem::ClearCache() {
    return false;
}

bool USaveDataSystem::CheckValidAllocationOnLocal_Immediate(int32 _sFileSize) {
    return false;
}

bool USaveDataSystem::ChangeAccount(const FString& _strEpicAccountUserID) {
    return false;
}


