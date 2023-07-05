#include "ELAchievementUtilityFunction.h"

void UELAchievementUtilityFunction::UnlockCareerStackAchievment() {
}

void UELAchievementUtilityFunction::UnlockAchievementCore(EELAchievementList _AchievementType) {
}

void UELAchievementUtilityFunction::UnlockAchievement(EELAchievementList _AchievementType) {
}

void UELAchievementUtilityFunction::StackAchievementCount(EELAchievementList _Achievement, int32 _Count) {
}

void UELAchievementUtilityFunction::SetupAchievementQuery() {
}

void UELAchievementUtilityFunction::SetStackSaveAchievementInfo(EELAchievementList _Achievement, bool _stack) {
}

void UELAchievementUtilityFunction::SetAchievementStatus(EELAchievementList _Achievement, bool _Status, uint8 _saveDataAccessFlag) {
}

void UELAchievementUtilityFunction::SetAchievementCountCommon(EELAchievementList _Achievement, int32 _Count, uint8 _saveDataAccessFlag) {
}

void UELAchievementUtilityFunction::SetAchievementCount(EELAchievementList _Achievement, int32 _Count, uint8 _saveDataAccessFlag) {
}

ESaveDataProcResult UELAchievementUtilityFunction::SaveRequestAchievementDataCore(uint8 _saveDataAccessFlag) {
    return ESaveDataProcResult::None;
}

void UELAchievementUtilityFunction::SaveRequestAchievementData(uint8 _saveDataAccessFlag) {
}

bool UELAchievementUtilityFunction::IsUnlockSteamAchievement(EELAchievementList AchievementType) {
    return false;
}

bool UELAchievementUtilityFunction::IsSaveCount(EELAchievementList _Achievement, uint8 _saveDataAccessFlag) {
    return false;
}

bool UELAchievementUtilityFunction::IsEnableSavedata(uint8 _saveDataAccessFlag) {
    return false;
}

bool UELAchievementUtilityFunction::IsEnableSaveAchievementInCareer() {
    return false;
}

TArray<EELAchievementList> UELAchievementUtilityFunction::GetStackSaveAchievementArray() {
    return TArray<EELAchievementList>();
}

bool UELAchievementUtilityFunction::GetAchievementStatus(EELAchievementList _Achievement, uint8 _saveDataAccessFlag) {
    return false;
}

UELGameInstance* UELAchievementUtilityFunction::GetAchievementGameInstance() {
    return NULL;
}

int32 UELAchievementUtilityFunction::GetAchievementCountCommon(EELAchievementList _Achievement, uint8 _saveDataAccessFlag) {
    return 0;
}

int32 UELAchievementUtilityFunction::GetAchievementCount(EELAchievementList _Achievement, uint8 _saveDataAccessFlag) {
    return 0;
}

void UELAchievementUtilityFunction::ClearAllAchievements() {
}

void UELAchievementUtilityFunction::ClearAchievement(EELAchievementList AchievementType) {
}

bool UELAchievementUtilityFunction::CheckUnlockAddAchievementCount(EELAchievementList _AchievementType, int32 _Add) {
    return false;
}

bool UELAchievementUtilityFunction::CheckUnlockAchievementCore(EELAchievementList AchievementType, int32 AddCount) {
    return false;
}

void UELAchievementUtilityFunction::CheckUnlockAchievement(EELAchievementList AchievementType, int32 AddCount) {
}

int32 UELAchievementUtilityFunction::AddAchievementCountCommon(EELAchievementList _Achievement, int32 _Add, uint8 _saveDataAccessFlag) {
    return 0;
}

int32 UELAchievementUtilityFunction::AddAchievementCount(EELAchievementList _Achievement, int32 _Add, uint8 _saveDataAccessFlag) {
    return 0;
}

UELAchievementUtilityFunction::UELAchievementUtilityFunction() {
}

