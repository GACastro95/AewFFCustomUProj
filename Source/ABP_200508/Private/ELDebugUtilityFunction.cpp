#include "ELDebugUtilityFunction.h"

UELDebugUtilityFunction::UELDebugUtilityFunction() {
}

FString UELDebugUtilityFunction::TakeScreenShotsCore(bool _showUI, const FString& _settingfileName, const FString& _fileDirectory) {
    return TEXT("");
}

void UELDebugUtilityFunction::SetSuspensionAutoPlayEvent(bool _Suspention) {
}

void UELDebugUtilityFunction::SetAutoPlayStartFlag() {
}

void UELDebugUtilityFunction::SetAutoPlayRecIndex(bool createNewfile) {
}

bool UELDebugUtilityFunction::SetAutoPlaylogInfoArrayCore() {
    return false;
}

bool UELDebugUtilityFunction::SetAutoPlaylogInfoArray() {
    return false;
}

void UELDebugUtilityFunction::SaveAutoPlayTimeSetting(int32 _Minute, int32 _second, int32 _Milli) {
}

void UELDebugUtilityFunction::SaveAutoPlayShowTutorial(bool show) {
}

void UELDebugUtilityFunction::SaveAutoPlaySettingFile() {
}

void UELDebugUtilityFunction::SaveAutoPlayRecordingFileName(const FString& _Filename) {
}

void UELDebugUtilityFunction::SaveAutoPlayOutputSuccessResult(bool Result) {
}

void UELDebugUtilityFunction::SaveAutoPlayOutputFaildResult(bool Result) {
}

void UELDebugUtilityFunction::SaveAutoPlayMultipleFile(bool _multi) {
}

void UELDebugUtilityFunction::SaveAutoPlayMailSetting(const FString& _Success, const FString& _Error) {
}

void UELDebugUtilityFunction::SaveAutoPlayLoopSetting(bool _Loop) {
}

void UELDebugUtilityFunction::SaveAutoPlayLoopMaxCount(int32 _LoopCount) {
}

void UELDebugUtilityFunction::SaveAutoPlayJustInputlogText(FKey _input, const FString& _widgetPath) {
}

void UELDebugUtilityFunction::SaveAutoPlayInputlogText(FKey _input) {
}

void UELDebugUtilityFunction::SaveAutoPlayFileName(const FString& _Filename) {
}

void UELDebugUtilityFunction::SaveAutoPlayErrorMaxSetting(int32 _Max) {
}

void UELDebugUtilityFunction::SaveAutoPlayCreateNewRecordingFile(bool _create) {
}

void UELDebugUtilityFunction::SaveAutoMatchVictorySceneMode(bool _mode) {
}

void UELDebugUtilityFunction::SaveAutoMatchSkipEntranceSecond(int32 _second) {
}

void UELDebugUtilityFunction::SaveAutoMatchSkipEntrance(bool _skip) {
}

void UELDebugUtilityFunction::SaveAutoMatchSettingFile() {
}

void UELDebugUtilityFunction::SaveAutoMatchOutputSuccessResult(bool Result) {
}

void UELDebugUtilityFunction::SaveAutoMatchOutputFaildResult(bool Result) {
}

void UELDebugUtilityFunction::SaveAutoMatchMailSetting(const FString& _Success, const FString& _Error) {
}

void UELDebugUtilityFunction::SaveAutoMatchLoopMaxCount(int32 _Count) {
}

void UELDebugUtilityFunction::SaveAutoMatchErrorCheck(bool _check) {
}

void UELDebugUtilityFunction::SaveAutoMatchAnimationDebugView(bool _view) {
}

bool UELDebugUtilityFunction::IsSuspensionAutoPlayEvent() {
    return false;
}

bool UELDebugUtilityFunction::IsDelayAutoPlayEvent() {
    return false;
}

void UELDebugUtilityFunction::InitAutoPlaySettingFile() {
}

void UELDebugUtilityFunction::InitAutoMatchSettingFile() {
}

UELGameInstance* UELDebugUtilityFunction::GetDebugGameInstance() {
    return NULL;
}

FString UELDebugUtilityFunction::GetAutoTestSaveDirPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlaySettingFileName() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayScreenshotFolderPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayResultFolderPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayRecFileName() {
    return TEXT("");
}

TArray<FString> UELDebugUtilityFunction::GetAutoPlayPathArray() {
    return TArray<FString>();
}

FString UELDebugUtilityFunction::GetAutoPlayPath(int32 _Index) {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayJustInputFileName() {
    return TEXT("");
}

TArray<FKey> UELDebugUtilityFunction::GetAutoPlayInputlogArray() {
    return TArray<FKey>();
}

FKey UELDebugUtilityFunction::GetAutoPlayInputlog(int32 _Index) {
    return FKey{};
}

TArray<FString> UELDebugUtilityFunction::GetAutoPlayInfoArray() {
    return TArray<FString>();
}

FString UELDebugUtilityFunction::GetAutoPlayInfo(int32 _Index) {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayFolderPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoPlayFileName() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoMatchSettingFileName() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoMatchScreenshotFolderPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoMatchResultFolderPath() {
    return TEXT("");
}

FString UELDebugUtilityFunction::GetAutoMatchFolderPath() {
    return TEXT("");
}

void UELDebugUtilityFunction::DeleteAutoPlayFile() {
}

FString UELDebugUtilityFunction::AutoTestCreateLogCore(bool isError, const FString& inputString, const FString& settingfileName, const FString& fileDirectory) {
    return TEXT("");
}

FString UELDebugUtilityFunction::AutoPlayTakeScreenShots(bool _showUI) {
    return TEXT("");
}

FString UELDebugUtilityFunction::AutoPlayCreateLog(bool isError, const FString& inputString) {
    return TEXT("");
}

FString UELDebugUtilityFunction::AutoMatchTakeScreenShots(bool _showUI) {
    return TEXT("");
}

FString UELDebugUtilityFunction::AutoMatchCreateLog(bool isError, const FString& inputString) {
    return TEXT("");
}


