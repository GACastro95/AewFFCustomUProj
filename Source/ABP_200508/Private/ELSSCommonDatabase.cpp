#include "ELSSCommonDatabase.h"

void UELSSCommonDatabase::MakeSortedAbilityParamArray(ESSAbilitySortType inSortType) {
}

void UELSSCommonDatabase::Initialize() {
}

bool UELSSCommonDatabase::GetWrestlerTypeResourceParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetWrestlerTypeParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetWrestlerParam(EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetWeaponCommonParam(int32 ID, FSSWeaponCommonParam& OutRow) {
    return false;
}

void UELSSCommonDatabase::GetSortedAbilityParamArray(ESSAbilitySortType inSortType, TArray<FSSAbilityParam>& outAbilityParam) {
}

void UELSSCommonDatabase::GetRewardAbilityFromStampedeLevel(int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId) {
}

bool UELSSCommonDatabase::GetMoveParamById(int32 MoveId, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetMoveParam(const FName& RowName, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetItemParam(int32 ID, FSSItemParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetHeatSkillParam(int32 ID, FSSHeatSkillParam& OutRow) {
    return false;
}

int32 UELSSCommonDatabase::GetHeatSkillIdFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) const {
    return 0;
}

void UELSSCommonDatabase::GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) const {
}

UTexture2D* UELSSCommonDatabase::GetHeatSkillIconTexture(int32 inHeatSkillId) const {
    return NULL;
}

bool UELSSCommonDatabase::GetHeatSkillDefaultSettings(int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetHeatMoveSet(ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetHeatLevelParam(int32 inHeatLevel, FSSHeatLevelParam& OutRow) {
    return false;
}

int32 UELSSCommonDatabase::GetHeatLevelExp(int32 inHeatLevel) {
    return 0;
}

bool UELSSCommonDatabase::GetCommonAttackParam(const FName& RowName, FSSAttackParam& OutParam) {
    return false;
}

int32 UELSSCommonDatabase::GetAttentionLevelPoint(int32 inAttentionLevel) {
    return 0;
}

bool UELSSCommonDatabase::GetAttentionLevelParam(int32 inAttentionLevel, FSSAttentionLevelParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetAttackParamListFromMoveId(int32 MoveId, TArray<FSSAttackParam>& outRows) {
    return false;
}

bool UELSSCommonDatabase::GetAttackParam(int32 MoveId, int32 AttackHitId, FSSAttackParam& OutParam) const {
    return false;
}

ESSArmorType UELSSCommonDatabase::GetArmorType(ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState) const {
    return ESSArmorType::Default;
}

bool UELSSCommonDatabase::GetAbilityParam(int32 ID, FSSAbilityParam& OutRow) {
    return false;
}

bool UELSSCommonDatabase::GetAbilityKindParam(ESSAbilityKind Kind, FSSAbilityKindParam& OutRow) {
    return false;
}

UTexture2D* UELSSCommonDatabase::GetAbilityIconTexture(int32 inAbilityId, bool inWithOutline) const {
    return NULL;
}

ESSAbilityCalcMethod UELSSCommonDatabase::GetAbilityCalcMethod(ESSAbilityKind Kind) const {
    return ESSAbilityCalcMethod::None;
}

void UELSSCommonDatabase::ConvertDataTableToArray() {
}

int32 UELSSCommonDatabase::CalcHeatLevelFromExp(int32 inExp) {
    return 0;
}

int32 UELSSCommonDatabase::CalcAttentionLevelFromPoint(int32 inPoint) {
    return 0;
}

UELSSCommonDatabase::UELSSCommonDatabase() {
    this->MasterData = NULL;
    this->AbilityResourceParamTable = NULL;
    this->AbilityKindParamTable = NULL;
    this->WrestlerParamTable = NULL;
    this->WrestlerTypeResourceParamTable = NULL;
    this->HeatSkillDefaultSettingsTable = NULL;
    this->HeatSkillIconTable = NULL;
    this->CommonAttackParamTable = NULL;
    this->MoveParamTable = NULL;
    this->StampedeRankParamTable = NULL;
    this->PlayerRankParamTable = NULL;
    this->PlayerRankRangeParamTable = NULL;
    this->LoadoutPresetDefaultParamTable = NULL;
    this->GameRuleParamTable = NULL;
    this->StateInfoTable = NULL;
}

