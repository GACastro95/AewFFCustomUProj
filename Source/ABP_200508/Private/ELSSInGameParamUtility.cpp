#include "ELSSInGameParamUtility.h"

bool UELSSInGameParamUtility::GetWrestlerTypeResourceParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWeaponTrapParam(const UObject* WorldContextObject, int32 ID, FSSWeaponTrapParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWeaponThrowParam(const UObject* WorldContextObject, int32 ID, FSSWeaponThrowParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWeaponParam(const UObject* WorldContextObject, int32 ID, FSSWeaponParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWeaponMeleeParam(const UObject* WorldContextObject, int32 ID, FSSWeaponMeleeParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetWeaponGunParam(const UObject* WorldContextObject, int32 ID, FSSWeaponGunParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetVictoryCutsceneParam(const UObject* WorldContextObject, int32 ID, FSSVictoryCutsceneParam& OutRow) {
    return false;
}

int32 UELSSInGameParamUtility::GetVictoryCutsceneId(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, ESSWrestlerType inWrestlerType) {
    return 0;
}

bool UELSSInGameParamUtility::GetVehicleParam(const UObject* WorldContextObject, int32 ID, FSSVehicleParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetUseItemParam(const UObject* WorldContextObject, const FName& RowName, FSSUseItemParam& OutRow) {
    return false;
}

UAnimMontage* UELSSInGameParamUtility::GetTauntMontage(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, ESSWrestlerType inWrestlerType) {
    return NULL;
}

bool UELSSInGameParamUtility::GetSystemMotionParam(const UObject* WorldContextObject, const FName& RowName, FSSSystemMotionParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetShieldParam(const UObject* WorldContextObject, int32 ID, FSSShieldParam& OutRow) {
    return false;
}

void UELSSInGameParamUtility::GetRewardAbilityFromStampedeLevel(const UObject* WorldContextObject, int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId) {
}

bool UELSSInGameParamUtility::GetMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetMoveParam(const UObject* WorldContextObject, const FName& RowName, FSSMoveParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetJukeBoxParamFromWrestlerId(const UObject* WorldContextObject, UDataTable* inTable, EWrestlerID_N inWrestlerId, FJukeBoxParam& OutRow, FName& outRowName) {
    return false;
}

bool UELSSInGameParamUtility::GetItemParam(const UObject* WorldContextObject, int32 ID, FSSItemParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetItemIdAll(const UObject* WorldContextObject, TArray<int32>& outArray) {
    return false;
}

bool UELSSInGameParamUtility::GetHitEffectParam(const UObject* WorldContextObject, ESSHitEffectType Type, FSSHitEffectParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow) {
    return false;
}

int32 UELSSInGameParamUtility::GetHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) {
    return 0;
}

void UELSSInGameParamUtility::GetHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) {
}

UTexture2D* UELSSInGameParamUtility::GetHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId) {
    return NULL;
}

bool UELSSInGameParamUtility::GetHeatSkillDefaultSettings(const UObject* WorldContextObject, int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetHeatMoveSet(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetHeatLevelParam(const UObject* WorldContextObject, int32 inHeatLevel, FSSHeatLevelParam& OutRow) {
    return false;
}

int32 UELSSInGameParamUtility::GetHeatLevelExp(const UObject* WorldContextObjectint, int32 inHeatLevel) {
    return 0;
}

bool UELSSInGameParamUtility::GetGuardReactionParam(const UObject* WorldContextObject, ESSGuardReactionType inGuardReaction, FSSGuardReactionParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetFallParam(const UObject* WorldContextObject, float inHeightDiff, int32 inMaxLandingLevel, FSSFallParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetEffectParam(const UObject* WorldContextObject, const FName& RowName, FSSEffectParam& OutRow) {
    return false;
}

AELSSDatabase* UELSSInGameParamUtility::GetDatabase(const UObject* WorldContextObject) {
    return NULL;
}

bool UELSSInGameParamUtility::GetDamageReactionParam(const UObject* WorldContextObject, const FName& RowName, FSSDamageReactionParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetCommonAttackParam(const UObject* WorldContextObject, const FName& RowName, FSSAttackParam& OutRow) {
    return false;
}

int32 UELSSInGameParamUtility::GetAttentionLevelPoint(const UObject* WorldContextObjectint, int32 inAttentionLevel) {
    return 0;
}

bool UELSSInGameParamUtility::GetAttentionLevelParam(const UObject* WorldContextObject, int32 inAttentionLevel, FSSAttentionLevelParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetAttackParamListFromMoveId(const UObject* WorldContextObject, int32 MoveId, TArray<FSSAttackParam>& outRows) {
    return false;
}

bool UELSSInGameParamUtility::GetAttackParam(const UObject* WorldContextObject, int32 MoveId, int32 AttackHitId, FSSAttackParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetAttachParam(const UObject* WorldContextObject, const FName& RowName, FSSAttachParam& OutRow) {
    return false;
}

ESSArmorType UELSSInGameParamUtility::GetArmorType(const UObject* WorldContextObject, ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState) {
    return ESSArmorType::Default;
}

bool UELSSInGameParamUtility::GetAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow) {
    return false;
}

bool UELSSInGameParamUtility::GetAbilityKindParam(const UObject* WorldContextObject, ESSAbilityKind Kind, FSSAbilityKindParam& OutRow) {
    return false;
}

ESSAbilityCalcMethod UELSSInGameParamUtility::GetAbilityCalcMethod(const UObject* WorldContextObject, ESSAbilityKind Kind) {
    return ESSAbilityCalcMethod::None;
}

float UELSSInGameParamUtility::CalcResultStarGrade(const UObject* WorldContextObject, int32 inScore) {
    return 0.0f;
}

ESSResultGradeABC UELSSInGameParamUtility::CalcResultGradeFromKillCount(const UObject* WorldContextObject, int32 inKillCount) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC UELSSInGameParamUtility::CalcResultGradeFromFeverCount(const UObject* WorldContextObject, int32 inFeverCount) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC UELSSInGameParamUtility::CalcResultGradeFromAttentionPoint(const UObject* WorldContextObject, int32 inAttentionPoint) {
    return ESSResultGradeABC::A_High;
}

int32 UELSSInGameParamUtility::CalcResultAEWCash(const UObject* WorldContextObject, int32 inScore) {
    return 0;
}

int32 UELSSInGameParamUtility::CalcHeatLevelFromExp(const UObject* WorldContextObject, int32 inExp) {
    return 0;
}

ESSGuardReactionType UELSSInGameParamUtility::CalcGuardReactionType(const UObject* WorldContextObject, ESSGuardBreakerType inGuardBreakerType, int32 inGuardLevel) {
    return ESSGuardReactionType::None;
}

int32 UELSSInGameParamUtility::CalcAttentionLevelFromPoint(const UObject* WorldContextObject, int32 inPoint) {
    return 0;
}

UELSSInGameParamUtility::UELSSInGameParamUtility() {
}

