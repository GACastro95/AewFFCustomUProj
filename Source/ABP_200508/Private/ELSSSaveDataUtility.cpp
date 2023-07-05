#include "ELSSSaveDataUtility.h"

void UELSSSaveDataUtility::SetUsingLoadoutPresetFlag(const UObject* WorldContextObject, int32 inPresetIndex, bool InFlag) {
}

bool UELSSSaveDataUtility::SetupSSModeSaveData(const UObject* WorldContextObject) {
    return false;
}

void UELSSSaveDataUtility::SetLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex, const FString& inPresetName) {
}

void UELSSSaveDataUtility::SetLoadoutPresetIndex(const UObject* WorldContextObject, int32 InIndex) {
}

void UELSSSaveDataUtility::SetLoadoutPresetHeatSkillTreeEquipFlag(const UObject* WorldContextObject, int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex, bool inEquip) {
}

void UELSSSaveDataUtility::SetLoadoutPresetFinisherId(const UObject* WorldContextObject, int32 inPresetIndex, int32 inFinisherId) {
}

void UELSSSaveDataUtility::SetLoadoutPresetAbility(const UObject* WorldContextObject, int32 inPresetIndex, int32 inAbilitySlot, int32 inAbilityId) {
}

void UELSSSaveDataUtility::SetDefaultLoadoutPresetNameAll(const UObject* WorldContextObject) {
}

void UELSSSaveDataUtility::SetDefaultLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex) {
}

void UELSSSaveDataUtility::SaveRequestSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELSSSaveDataUtility::ResetSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag) {
}

bool UELSSSaveDataUtility::IsFinishedSetupSSModeSaveData(const UObject* WorldContextObject) {
    return false;
}

void UELSSSaveDataUtility::InitializeLoadoutSettings(const UObject* WorldContextObject) {
}

bool UELSSSaveDataUtility::GetUsingLoadoutPresetFlag(const UObject* WorldContextObject, int32 inPresetIndex) {
    return false;
}

int32 UELSSSaveDataUtility::GetLoadoutPresetNum(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSSaveDataUtility::GetLoadoutPresetNameMaxLength(const UObject* WorldContextObject) {
    return 0;
}

FString UELSSSaveDataUtility::GetLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex) {
    return TEXT("");
}

int32 UELSSSaveDataUtility::GetLoadoutPresetIndex(const UObject* WorldContextObject) {
    return 0;
}

bool UELSSSaveDataUtility::GetLoadoutPresetHeatSkillTreeEquipFlag(const UObject* WorldContextObject, int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex) {
    return false;
}

int32 UELSSSaveDataUtility::GetLoadoutPresetFinisherId(const UObject* WorldContextObject, int32 inPresetIndex) {
    return 0;
}

int32 UELSSSaveDataUtility::GetLoadoutPresetAbility(const UObject* WorldContextObject, int32 inPresetIndex, int32 inAbilitySlot) {
    return 0;
}

void UELSSSaveDataUtility::CopySSModeSaveDataToGameData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELSSSaveDataUtility::CopyGameDataToSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag) {
}

UELSSSaveDataUtility::UELSSSaveDataUtility() {
}

