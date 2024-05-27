#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "JukeBoxParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESSAbilityCalcMethod.h"
#include "ESSAbilityKind.h"
#include "ESSArmorType.h"
#include "ESSDamageReason.h"
#include "ESSDamageReceiverState.h"
#include "ESSGuardBreakerType.h"
#include "ESSGuardReactionType.h"
#include "ESSHeatSkillCategory.h"
#include "ESSHitEffectType.h"
#include "ESSMoveCommand.h"
#include "ESSResultGradeABC.h"
#include "ESSWrestlerType.h"
#include "SSAbilityKindParam.h"
#include "SSAbilityParam.h"
#include "SSAttachParam.h"
#include "SSAttackParam.h"
#include "SSAttentionLevelParam.h"
#include "SSDamageReactionParam.h"
#include "SSEffectParam.h"
#include "SSFallParam.h"
#include "SSGuardReactionParam.h"
#include "SSHeatLevelParam.h"
#include "SSHeatMoveSet.h"
#include "SSHeatSkillDefaultSettings.h"
#include "SSHeatSkillParam.h"
#include "SSHitEffectParam.h"
#include "SSItemParam.h"
#include "SSMoveParam.h"
#include "SSPlayerStartLocatorParam.h"
#include "SSShieldParam.h"
#include "SSSystemMotionParam.h"
#include "SSUseItemParam.h"
#include "SSVehicleParam.h"
#include "SSVictoryCutsceneParam.h"
#include "SSWeaponGunParam.h"
#include "SSWeaponMeleeParam.h"
#include "SSWeaponParam.h"
#include "SSWeaponThrowParam.h"
#include "SSWeaponTrapParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerTypeParam.h"
#include "SSWrestlerTypeResourceParam.h"
#include "ELSSInGameParamUtility.generated.h"

class AELSSDatabase;
class UAnimMontage;
class UDataTable;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSInGameParamUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerTypeResourceParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponTrapParam(const UObject* WorldContextObject, int32 ID, FSSWeaponTrapParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponThrowParam(const UObject* WorldContextObject, int32 ID, FSSWeaponThrowParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponParam(const UObject* WorldContextObject, int32 ID, FSSWeaponParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponMeleeParam(const UObject* WorldContextObject, int32 ID, FSSWeaponMeleeParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponGunParam(const UObject* WorldContextObject, int32 ID, FSSWeaponGunParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetVictoryCutsceneParam(const UObject* WorldContextObject, int32 ID, FSSVictoryCutsceneParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetVictoryCutsceneId(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, ESSWrestlerType inWrestlerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetVehicleParam(const UObject* WorldContextObject, int32 ID, FSSVehicleParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUseItemParam(const UObject* WorldContextObject, const FName& RowName, FSSUseItemParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAnimMontage* GetTauntMontage(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, ESSWrestlerType inWrestlerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSystemMotionParam(const UObject* WorldContextObject, const FName& RowName, FSSSystemMotionParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerStartLocatorParam(const UObject* WorldContextObject, int32 ID, FSSPlayerStartLocatorParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShieldParam(const UObject* WorldContextObject, int32 ID, FSSShieldParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRewardAbilityFromStampedeLevel(const UObject* WorldContextObject, int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetMoveParam(const UObject* WorldContextObject, const FName& RowName, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetJukeBoxParamFromWrestlerId(const UObject* WorldContextObject, UDataTable* inTable, EWrestlerID_N inWrestlerId, FJukeBoxParam& OutRow, FName& outRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetItemParam(const UObject* WorldContextObject, int32 ID, FSSItemParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetItemIdAll(const UObject* WorldContextObject, TArray<int32>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHitEffectParam(const UObject* WorldContextObject, ESSHitEffectType Type, FSSHitEffectParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHeatSkillDefaultSettings(const UObject* WorldContextObject, int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHeatMoveSet(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHeatLevelParam(const UObject* WorldContextObject, int32 inHeatLevel, FSSHeatLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObjectint"))
    static int32 GetHeatLevelExp(const UObject* WorldContextObjectint, int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGuardReactionParam(const UObject* WorldContextObject, ESSGuardReactionType inGuardReaction, FSSGuardReactionParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFallParam(const UObject* WorldContextObject, float inHeightDiff, int32 inMaxLandingLevel, FSSFallParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetEffectParam(const UObject* WorldContextObject, const FName& RowName, FSSEffectParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSDatabase* GetDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDamageReactionParam(const UObject* WorldContextObject, const FName& RowName, FSSDamageReactionParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetCommonAttackParam(const UObject* WorldContextObject, const FName& RowName, FSSAttackParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObjectint"))
    static int32 GetAttentionLevelPoint(const UObject* WorldContextObjectint, int32 inAttentionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAttentionLevelParam(const UObject* WorldContextObject, int32 inAttentionLevel, FSSAttentionLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAttackParamListFromMoveId(const UObject* WorldContextObject, int32 MoveId, TArray<FSSAttackParam>& outRows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAttackParam(const UObject* WorldContextObject, int32 MoveId, int32 AttackHitId, FSSAttackParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAttachParam(const UObject* WorldContextObject, const FName& RowName, FSSAttachParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSArmorType GetArmorType(const UObject* WorldContextObject, ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAbilityKindParam(const UObject* WorldContextObject, ESSAbilityKind Kind, FSSAbilityKindParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSAbilityCalcMethod GetAbilityCalcMethod(const UObject* WorldContextObject, ESSAbilityKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcResultStarGrade(const UObject* WorldContextObject, int32 inScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSResultGradeABC CalcResultGradeFromKillCount(const UObject* WorldContextObject, int32 inKillCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSResultGradeABC CalcResultGradeFromJewelPoint(const UObject* WorldContextObject, int32 inJewelPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSResultGradeABC CalcResultGradeFromFeverCount(const UObject* WorldContextObject, int32 inFeverCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSResultGradeABC CalcResultGradeFromBallLevelPoint(const UObject* WorldContextObject, int32 inBallLevelPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSResultGradeABC CalcResultGradeFromAttentionPoint(const UObject* WorldContextObject, int32 inAttentionPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcResultAEWCash(const UObject* WorldContextObject, int32 inScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcHeatLevelFromExp(const UObject* WorldContextObject, int32 inExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSGuardReactionType CalcGuardReactionType(const UObject* WorldContextObject, ESSGuardBreakerType inGuardBreakerType, int32 inGuardLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcAttentionLevelFromPoint(const UObject* WorldContextObject, int32 inPoint);
    
};

