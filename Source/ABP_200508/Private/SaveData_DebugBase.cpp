#include "SaveData_DebugBase.h"

bool USaveData_DebugBase::StartDataReset(bool _bProjectSavedDir, const FString& _strTargetFileName, USaveDataSystem* _pcSaveDataSystem) {
    return false;
}

bool USaveData_DebugBase::SetServerLoginInfo(const FString& _strDevAuthSrv, const FString& _strName) {
    return false;
}

void USaveData_DebugBase::SetLoggedOn(bool _bLoggedIn) {
}

void USaveData_DebugBase::SetEnableOnline(bool _bEnableOnline) {
}

bool USaveData_DebugBase::IsLoggedOn() const {
    return false;
}

bool USaveData_DebugBase::IsEnableOnline() const {
    return false;
}

bool USaveData_DebugBase::ImportFiles(TArray<FString> _strFileList, USaveDataSystem* _pcSaveDataSystem) {
    return false;
}

bool USaveData_DebugBase::GetServerLoginInfo(FString& _strDevAuthSrv, FString& _strName) const {
    return false;
}

bool USaveData_DebugBase::ExportTexts(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName, USaveDataSystem* _pcSaveDataSystem) {
    return false;
}

bool USaveData_DebugBase::ExportFiles(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName, USaveDataSystem* _pcSaveDataSystem) {
    return false;
}

USaveData_DebugBase::USaveData_DebugBase() {
}

