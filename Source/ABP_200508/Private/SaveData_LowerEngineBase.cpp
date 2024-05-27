#include "SaveData_LowerEngineBase.h"

USaveData_LowerEngineBase::USaveData_LowerEngineBase() {
}

bool USaveData_LowerEngineBase::UpdateLocalFileList(bool _bProjectSavedDir) {
    return false;
}

ESaveDataProcResult USaveData_LowerEngineBase::SaveRawData(USaveGame_RawData* _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_LowerEngineBase::LoadRawData_PS4(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex, TArray<uint8>& OutSaveData) {
    return ESaveDataProcResult::None;
}

ESaveDataProcResult USaveData_LowerEngineBase::LoadRawData(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

bool USaveData_LowerEngineBase::IsExistsRawData(const FString& _strFileKey, int32 _sFileUserIndex) {
    return false;
}

bool USaveData_LowerEngineBase::GetLocalQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo) {
    return false;
}

int32 USaveData_LowerEngineBase::GetLocalFileListByType(TArray<FSaveData_FileInfo>& _refFileList, const FString& _strFilterName) {
    return 0;
}

int32 USaveData_LowerEngineBase::GetLocalFileList(TArray<FSaveData_FileInfo>& _refFileList) {
    return 0;
}

ESaveDataProcResult USaveData_LowerEngineBase::DeleteRawData(const FString& _strFileKey, int32 _sFileUserIndex) {
    return ESaveDataProcResult::None;
}

bool USaveData_LowerEngineBase::CheckValidAllocationOnLocal(int32 _sFileSize) {
    return false;
}


