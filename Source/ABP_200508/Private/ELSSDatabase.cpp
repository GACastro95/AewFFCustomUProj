#include "ELSSDatabase.h"

bool AELSSDatabase::GetWeaponTrapParam(int32 ID, FSSWeaponTrapParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetWeaponThrowParam(int32 ID, FSSWeaponThrowParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetWeaponParam(int32 ID, FSSWeaponParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetWeaponMeleeParam(int32 ID, FSSWeaponMeleeParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetWeaponGunParam(int32 ID, FSSWeaponGunParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetVictoryCutsceneParam(int32 ID, FSSVictoryCutsceneParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetVehicleParam(int32 ID, FSSVehicleParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetUseItemParam(const FName& RowName, FSSUseItemParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetSystemMotionParam(const FName& RowName, FSSSystemMotionParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetShieldParam(int32 ID, FSSShieldParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetItemResourceParam(int32 ID, FSSItemResourceParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetHitEffectParam(ESSHitEffectType Type, FSSHitEffectParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetGuardReactionParam(ESSGuardReactionType inGuardReaction, FSSGuardReactionParam& OutRow) const {
    return false;
}

bool AELSSDatabase::GetFallParam(float inHeightDiff, int32 inMaxLandLevel, FSSFallParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetEffectParam(const FName& RowName, FSSEffectParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetDamageReactionParam(const FName& RowName, FSSDamageReactionParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetAttachParam(const FName& RowName, FSSAttachParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetAIPlayerStampedeLevelParam(int32 ID, FSSAIPlayerStampedeLevelParam& OutRow) {
    return false;
}

bool AELSSDatabase::GetAIPlayerParam(int32 ID, FSSAIPlayerParam& OutRow) {
    return false;
}

float AELSSDatabase::CalcResultStarGrade(int32 inScore) {
    return 0.0f;
}

ESSResultGradeABC AELSSDatabase::CalcResultGradeFromKillCount(int32 inKillCount) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC AELSSDatabase::CalcResultGradeFromJewelPoint(int32 inJewelPoint) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC AELSSDatabase::CalcResultGradeFromFeverCount(int32 inFeverCount) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC AELSSDatabase::CalcResultGradeFromBallLevelPoint(int32 inBallLevelPoint) {
    return ESSResultGradeABC::A_High;
}

ESSResultGradeABC AELSSDatabase::CalcResultGradeFromAttentionPoint(int32 inAttentionPoint) {
    return ESSResultGradeABC::A_High;
}

int32 AELSSDatabase::CalcResultAEWCash(int32 inScore) {
    return 0;
}

ESSGuardReactionType AELSSDatabase::CalcGuardReactionType(ESSGuardBreakerType inGuardBreakerType, int32 inGuardLevel) const {
    return ESSGuardReactionType::None;
}

AELSSDatabase::AELSSDatabase() {
    this->EffectParamTable = NULL;
    this->HitEffectParamTable = NULL;
    this->ItemResourceParamTable = NULL;
    this->UseItemParamTable = NULL;
    this->ShieldParamTable = NULL;
    this->WeaponParamTable = NULL;
    this->WeaponMeleeParamTable = NULL;
    this->WeaponGunParamTable = NULL;
    this->WeaponThrowParamTable = NULL;
    this->WeaponTrapParamTable = NULL;
    this->VehicleParamTable = NULL;
    this->VehicleSpawnParamForRoundTable = NULL;
    this->AttachParamTable = NULL;
    this->SystemMotionParamTable = NULL;
    this->DamageReactionParamTable = NULL;
    this->AIPlayerParamTable = NULL;
    this->AIPlayerStampedeLevelParamTable = NULL;
    this->GuardReactionParamTable = NULL;
    this->GuardConditionParamTable = NULL;
    this->FallParamTable = NULL;
    this->ResultKillCountGradeTable = NULL;
    this->ResultAttentionGradeTable = NULL;
    this->ResultFeverGradeTable = NULL;
    this->ResultStarGradeTable = NULL;
    this->ResultJewelGradeTable = NULL;
    this->ResultBallLevelGradeTable = NULL;
    this->VictoryCutsceneParamTable = NULL;
    this->PlayerStartLocatorParamTable = NULL;
    this->RuleAdjustParamTable = NULL;
    this->FgfFieldPatternParamTable = NULL;
    this->FgfBallLevelParamTable = NULL;
}

