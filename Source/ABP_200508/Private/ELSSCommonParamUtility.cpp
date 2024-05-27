#include "ELSSCommonParamUtility.h"

UELSSCommonParamUtility::UELSSCommonParamUtility() {
}

bool UELSSCommonParamUtility::MakeSSRuleStatusByScheduleId(const UObject* WorldContextObject, int32 inRuleScheduleId, FSSRuleStatus& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSWrestlerTypeResourceParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSWeaponCommonParam(const UObject* WorldContextObject, int32 ID, FSSWeaponCommonParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleScheduleParamArray(const UObject* WorldContextObject, TArray<FSSRuleScheduleParam>& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleScheduleParam(const UObject* WorldContextObject, int32 inRuleScheduleId, FSSRuleScheduleParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleScheduleList(const UObject* WorldContextObject, FDateTime inDateTimeUTC, TArray<FSSRuleScheduleParam>& outParamList) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleResourceParamByRuleId(const UObject* WorldContextObject, int32 inRuleId, FSSRuleResourceParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleResourceParam(const UObject* WorldContextObject, int32 inRuleResourceId, FSSRuleResourceParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleParamArray(const UObject* WorldContextObject, TArray<FSSRuleParam>& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRuleParam(const UObject* WorldContextObject, int32 inRuleId, FSSRuleParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSRoundAdjustParam(const UObject* WorldContextObject, FSSRoundAdjustParam& outData) {
    return false;
}

void UELSSCommonParamUtility::GetSSRewardAbilityFromStampedeLevel(const UObject* WorldContextObject, int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId) {
}

int32 UELSSCommonParamUtility::GetSSPlayerRankResultBasePoint(const UObject* WorldContextObject, int32 inPlayerRankPoint) {
    return 0;
}

bool UELSSCommonParamUtility::GetSSPlayerRankRangeParamByRankPoint(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankRangeParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSPlayerRankRangeParam(const UObject* WorldContextObject, ESSPlayerRankRange InRange, FSSPlayerRankRangeParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSPlayerRankParamAndNextInfo(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankParam& OutParam, int32& outExpToNext, float& outExpRateToNext) {
    return false;
}

bool UELSSCommonParamUtility::GetSSPlayerRankParam(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankParam& OutParam) {
    return false;
}

int32 UELSSCommonParamUtility::GetSSPlayerRankMatchEntryCost(const UObject* WorldContextObject, int32 inPlayerRankPoint) {
    return 0;
}

int32 UELSSCommonParamUtility::GetSSPlayerRankIllegalPenalty(const UObject* WorldContextObject, int32 inPlayerRankPoint) {
    return 0;
}

int32 UELSSCommonParamUtility::GetSSPlayerRankDisconnectPenalty(const UObject* WorldContextObject, int32 inPlayerRankPoint) {
    return 0;
}

bool UELSSCommonParamUtility::GetSSMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSMoveParam(const UObject* WorldContextObject, const FName& RowName, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSLoadoutPresetDefaultParam(const UObject* WorldContextObject, int32 inPresetNo, FSSLoadoutPresetDefaultParam& OutParam) {
    return false;
}

bool UELSSCommonParamUtility::GetSSItemParam(const UObject* WorldContextObject, int32 ID, FSSItemParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSItemIdAll(const UObject* WorldContextObject, TArray<int32>& outArray) {
    return false;
}

bool UELSSCommonParamUtility::GetSSHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow) {
    return false;
}

int32 UELSSCommonParamUtility::GetSSHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) {
    return 0;
}

void UELSSCommonParamUtility::GetSSHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) {
}

UTexture2D* UELSSCommonParamUtility::GetSSHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId) {
    return NULL;
}

bool UELSSCommonParamUtility::GetSSHeatSkillDefaultSettings(const UObject* WorldContextObject, int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSHeatMoveSet(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSHeatLevelParam(const UObject* WorldContextObject, int32 inHeatLevel, FSSHeatLevelParam& OutRow) {
    return false;
}

int32 UELSSCommonParamUtility::GetSSHeatLevelExp(const UObject* WorldContextObject, int32 inHeatLevel) {
    return 0;
}

bool UELSSCommonParamUtility::GetSSGeneralParam(const UObject* WorldContextObject, FSSGeneralParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSGameRuleParam(const UObject* WorldContextObject, FSSGameRuleParam& outData) {
    return false;
}

UELSSCommonDatabase* UELSSCommonParamUtility::GetSSCommonDatabase(const UObject* WorldContextObject) {
    return NULL;
}

bool UELSSCommonParamUtility::GetSSCommonAttackParam(const UObject* WorldContextObject, const FName& RowName, FSSAttackParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSCharacterAdjustParam(const UObject* WorldContextObject, FSSCharacterAdjust& outData) {
    return false;
}

int32 UELSSCommonParamUtility::GetSSAttentionLevelPoint(const UObject* WorldContextObject, int32 inAttentionLevel) {
    return 0;
}

bool UELSSCommonParamUtility::GetSSAttentionLevelParam(const UObject* WorldContextObject, int32 inAttentionLevel, FSSAttentionLevelParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSAttentionAdjustParam(const UObject* WorldContextObject, FSSAttentionAdjustParam& outData) {
    return false;
}

bool UELSSCommonParamUtility::GetSSAttackParamListFromMoveId(const UObject* WorldContextObject, int32 MoveId, TArray<FSSAttackParam>& outRows) {
    return false;
}

bool UELSSCommonParamUtility::GetSSAttackParam(const UObject* WorldContextObject, int32 MoveId, int32 AttackHitId, FSSAttackParam& OutRow) {
    return false;
}

ESSArmorType UELSSCommonParamUtility::GetSSArmorType(const UObject* WorldContextObject, ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState) {
    return ESSArmorType::Default;
}

bool UELSSCommonParamUtility::GetSSAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow) {
    return false;
}

bool UELSSCommonParamUtility::GetSSAbilityKindParam(const UObject* WorldContextObject, ESSAbilityKind Kind, FSSAbilityKindParam& OutRow) {
    return false;
}

UTexture2D* UELSSCommonParamUtility::GetSSAbilityIconTexture(const UObject* WorldContextObject, int32 inAbilityId, bool inWithOutline) {
    return NULL;
}

ESSAbilityCalcMethod UELSSCommonParamUtility::GetSSAbilityCalcMethod(const UObject* WorldContextObject, ESSAbilityKind Kind) {
    return ESSAbilityCalcMethod::None;
}

bool UELSSCommonParamUtility::FindSSRuleScheduleParamByRuleId(const UObject* WorldContextObject, int32 inRuleId, FSSRuleScheduleParam& OutParam) {
    return false;
}

int32 UELSSCommonParamUtility::CalcSSStampedeLevelFromExp(const UObject* WorldContextObject, int32 inExp) {
    return 0;
}

int32 UELSSCommonParamUtility::CalcSSPlayerRankUpdate(const UObject* WorldContextObject, int32 inCurrentRankPoint, int32 inAddPoint) {
    return 0;
}

bool UELSSCommonParamUtility::CalcSSPlayerRankDisconnectPenalty(const UObject* WorldContextObject, const FYGS2SSPlayerData& InParam, bool inIllegalCheck, FYGS2SSPlayerData& OutParam) {
    return false;
}

int32 UELSSCommonParamUtility::CalcSSHeatLevelFromExp(const UObject* WorldContextObject, int32 inExp) {
    return 0;
}

int32 UELSSCommonParamUtility::CalcSSAttentionLevelFromPoint(const UObject* WorldContextObject, int32 inPoint) {
    return 0;
}


