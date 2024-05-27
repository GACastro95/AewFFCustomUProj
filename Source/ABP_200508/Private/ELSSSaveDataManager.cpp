#include "ELSSSaveDataManager.h"

AELSSSaveDataManager::AELSSSaveDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AELSSSaveDataManager::SetLoadoutPresetName(int32 inPresetIndex, const FString& inPresetName) {
}

void AELSSSaveDataManager::SetLoadoutPresetIndex(int32 InIndex) {
}

void AELSSSaveDataManager::SetLoadoutPresetHeatSkillTreeEquipFlag(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex, bool inEquip) {
}

void AELSSSaveDataManager::SetLoadoutPresetHeatSkillSetting(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillSlotIndex, int32 inSelectedTreeIndex) {
}

void AELSSSaveDataManager::SetLoadoutPresetHeatSkill(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillIndex, int32 inHeatSkillId) {
}

void AELSSSaveDataManager::SetLoadoutPresetFinisherId(int32 inPresetIndex, int32 inFinisherId) {
}

void AELSSSaveDataManager::SetLoadoutPresetAbility(int32 inPresetIndex, int32 inAbilitySlot, int32 inAbilityId) {
}

void AELSSSaveDataManager::GetSSPlayerEquipSettingsFromSaveData(FSSPlayerEquipSettings& outData) {
}

int32 AELSSSaveDataManager::GetLoadoutPresetNum() const {
    return 0;
}

int32 AELSSSaveDataManager::GetLoadoutPresetNameMaxLength() const {
    return 0;
}

FString AELSSSaveDataManager::GetLoadoutPresetName(int32 inPresetIndex) const {
    return TEXT("");
}

int32 AELSSSaveDataManager::GetLoadoutPresetIndex() const {
    return 0;
}

bool AELSSSaveDataManager::GetLoadoutPresetHeatSkillTreeEquipFlag(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex) const {
    return false;
}

int32 AELSSSaveDataManager::GetLoadoutPresetHeatSkillSetting(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillSlotIndex) const {
    return 0;
}

int32 AELSSSaveDataManager::GetLoadoutPresetHeatSkill(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillIndex) const {
    return 0;
}

int32 AELSSSaveDataManager::GetLoadoutPresetFinisherId(int32 inPresetIndex) const {
    return 0;
}

int32 AELSSSaveDataManager::GetLoadoutPresetAbility(int32 inPresetIndex, int32 inAbilitySlot) const {
    return 0;
}

void AELSSSaveDataManager::ConvertJsonTest() {
}


