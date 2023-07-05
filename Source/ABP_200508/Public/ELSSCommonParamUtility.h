#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YGS2SSPlayerData.h"
#include "ESSAbilityCalcMethod.h"
#include "ESSAbilityKind.h"
#include "ESSArmorType.h"
#include "ESSDamageReason.h"
#include "ESSDamageReceiverState.h"
#include "ESSHeatSkillCategory.h"
#include "ESSMoveCommand.h"
#include "ESSPlayerRankRange.h"
#include "ESSWrestlerType.h"
#include "SSAbilityKindParam.h"
#include "SSAbilityParam.h"
#include "SSAttackParam.h"
#include "SSAttentionAdjustParam.h"
#include "SSAttentionLevelParam.h"
#include "SSCharacterAdjust.h"
#include "SSGameRuleParam.h"
#include "SSHeatLevelParam.h"
#include "SSHeatMoveSet.h"
#include "SSHeatSkillDefaultSettings.h"
#include "SSHeatSkillParam.h"
#include "SSItemParam.h"
#include "SSLoadoutPresetDefaultParam.h"
#include "SSMoveParam.h"
#include "SSPlayerRankParam.h"
#include "SSPlayerRankRangeParam.h"
#include "SSRoundAdjustParam.h"
#include "SSWeaponCommonParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerTypeParam.h"
#include "SSWrestlerTypeResourceParam.h"
#include "ELSSCommonParamUtility.generated.h"

class UELSSCommonDatabase;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELSSCommonParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSCommonParamUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSWrestlerTypeResourceParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSWeaponCommonParam(const UObject* WorldContextObject, int32 ID, FSSWeaponCommonParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSRoundAdjustParam(const UObject* WorldContextObject, FSSRoundAdjustParam& outData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetSSRewardAbilityFromStampedeLevel(const UObject* WorldContextObject, int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSPlayerRankResultBasePoint(const UObject* WorldContextObject, int32 inPlayerRankPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerRankRangeParamByRankPoint(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankRangeParam& OutParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerRankRangeParam(const UObject* WorldContextObject, ESSPlayerRankRange InRange, FSSPlayerRankRangeParam& OutParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerRankParamAndNextInfo(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankParam& OutParam, int32& outExpToNext, float& outExpRateToNext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerRankParam(const UObject* WorldContextObject, int32 inRankPoint, FSSPlayerRankParam& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSPlayerRankMatchEntryCost(const UObject* WorldContextObject, int32 inPlayerRankPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSPlayerRankIllegalPenalty(const UObject* WorldContextObject, int32 inPlayerRankPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSPlayerRankDisconnectPenalty(const UObject* WorldContextObject, int32 inPlayerRankPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSMoveParam(const UObject* WorldContextObject, const FName& RowName, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSLoadoutPresetDefaultParam(const UObject* WorldContextObject, int32 inPresetNo, FSSLoadoutPresetDefaultParam& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSItemParam(const UObject* WorldContextObject, int32 ID, FSSItemParam& OutRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSItemIdAll(const UObject* WorldContextObject, TArray<int32>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSSHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetSSHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSHeatSkillDefaultSettings(const UObject* WorldContextObject, int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSHeatMoveSet(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSHeatLevelParam(const UObject* WorldContextObject, int32 inHeatLevel, FSSHeatLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSHeatLevelExp(const UObject* WorldContextObject, int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSGameRuleParam(const UObject* WorldContextObject, FSSGameRuleParam& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSCommonDatabase* GetSSCommonDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommonAttackParam(const UObject* WorldContextObject, const FName& RowName, FSSAttackParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCharacterAdjustParam(const UObject* WorldContextObject, FSSCharacterAdjust& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSAttentionLevelPoint(const UObject* WorldContextObject, int32 inAttentionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAttentionLevelParam(const UObject* WorldContextObject, int32 inAttentionLevel, FSSAttentionLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAttentionAdjustParam(const UObject* WorldContextObject, FSSAttentionAdjustParam& outData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAttackParamListFromMoveId(const UObject* WorldContextObject, int32 MoveId, TArray<FSSAttackParam>& outRows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAttackParam(const UObject* WorldContextObject, int32 MoveId, int32 AttackHitId, FSSAttackParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSArmorType GetSSArmorType(const UObject* WorldContextObject, ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSAbilityKindParam(const UObject* WorldContextObject, ESSAbilityKind Kind, FSSAbilityKindParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetSSAbilityIconTexture(const UObject* WorldContextObject, int32 inAbilityId, bool inWithOutline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ESSAbilityCalcMethod GetSSAbilityCalcMethod(const UObject* WorldContextObject, ESSAbilityKind Kind);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CalcSSStampedeLevelFromExp(const UObject* WorldContextObject, int32 inExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcSSPlayerRankUpdate(const UObject* WorldContextObject, int32 inCurrentRankPoint, int32 inAddPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalcSSPlayerRankDisconnectPenalty(const UObject* WorldContextObject, const FYGS2SSPlayerData& InParam, bool inIllegalCheck, FYGS2SSPlayerData& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcSSHeatLevelFromExp(const UObject* WorldContextObject, int32 inExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcSSAttentionLevelFromPoint(const UObject* WorldContextObject, int32 inPoint);
    
};

