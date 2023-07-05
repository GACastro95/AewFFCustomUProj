#include "ELCareerSkillManager.h"

bool AELCareerSkillManager::UnlockSkill(int32 _SelectIndex, int32 _LevelIndex) {
    return false;
}

void AELCareerSkillManager::SetSkillCategory(int32 _Category) {
}

void AELCareerSkillManager::SaveWrestlerParam() {
}

void AELCareerSkillManager::LoadSkillManagerParam() {
}

int32 AELCareerSkillManager::GetUnlockCost(int32 _Index, int32 _LevelIndex) {
    return 0;
}

bool AELCareerSkillManager::GetSkillUsed(int32 _Index) {
    return false;
}

void AELCareerSkillManager::GetSkillThumbnail(int32 _Index, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

ECareerSkillState AELCareerSkillManager::GetSkillState(int32 _SelectIndex) {
    return ECareerSkillState::Lock;
}

int32 AELCareerSkillManager::GetSkillSort(int32 _Index) {
    return 0;
}

int32 AELCareerSkillManager::GetSkillNo(int32 _Index) {
    return 0;
}

FName AELCareerSkillManager::GetSkillNameStringID(int32 _Index, int32 _LevelIndex) {
    return NAME_None;
}

void AELCareerSkillManager::GetSkillImage(int32 _Index, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

int32 AELCareerSkillManager::GetSkillCategory() {
    return 0;
}

TArray<int32> AELCareerSkillManager::GetPassiveSkillStateList() {
    return TArray<int32>();
}

FCareerParameterSkillArray AELCareerSkillManager::GetParameterSkillStateArrayList() {
    return FCareerParameterSkillArray{};
}

int32 AELCareerSkillManager::GetParameterSkillLevel(int32 _Index) {
    return 0;
}

FName AELCareerSkillManager::GetDescriptionStringID(int32 _Index, int32 _LevelIndex) {
    return NAME_None;
}

TArray<FCareerPassiveSkillData> AELCareerSkillManager::GetCareerPassiveSkillTableBase() {
    return TArray<FCareerPassiveSkillData>();
}

TArray<FCareerParameterSkillData> AELCareerSkillManager::GetCareerParameterSkillTableBase() {
    return TArray<FCareerParameterSkillData>();
}

TArray<FCareerActionSkillData> AELCareerSkillManager::GetCareerActionSkillTableBase() {
    return TArray<FCareerActionSkillData>();
}

TArray<int32> AELCareerSkillManager::GetActionSkillStateList() {
    return TArray<int32>();
}

bool AELCareerSkillManager::CheckOpenParameterSkill(int32 _SelectIndex) {
    return false;
}

void AELCareerSkillManager::AddCareerPassiveSkillData(FCareerPassiveSkillData _Data) {
}

void AELCareerSkillManager::AddCareerParameterSkillData(FCareerParameterSkillData _Data) {
}

void AELCareerSkillManager::AddCareerActionSkillData(FCareerActionSkillData _Data) {
}

AELCareerSkillManager::AELCareerSkillManager() {
}

