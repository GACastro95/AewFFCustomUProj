#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAbilityParam.h"
#include "SSArmorTypeParam.h"
#include "SSAttackParam.h"
#include "SSAttentionAdjustParam.h"
#include "SSAttentionLevelParam.h"
#include "SSAttentionScoreParam.h"
#include "SSCharacterAdjust.h"
#include "SSGeneralParam.h"
#include "SSHeatLevelParam.h"
#include "SSHeatMoveSet.h"
#include "SSHeatSkillParam.h"
#include "SSHeatSkillTreeParam.h"
#include "SSItemBoxSpawnParamForRound.h"
#include "SSItemParam.h"
#include "SSLotItemCategoryParam.h"
#include "SSLotItemParam.h"
#include "SSLotSpawnNumParam.h"
#include "SSLotWeaponParam.h"
#include "SSPlayerRankRangeParam.h"
#include "SSRoundAdjustParam.h"
#include "SSRoundParam.h"
#include "SSRuleParam.h"
#include "SSRuleScheduleParam.h"
#include "SSStormFinalParam.h"
#include "SSWeaponCommonParam.h"
#include "SSWrestlerTypeParam.h"
#include "ELSSMasterData.generated.h"

class UELSSMasterDataRawData;
class ULevel;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELSSMasterData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterDataRawData* RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWrestlerTypeParam> WrestlerTypeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatLevelParam> HeatLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterAdjust> CharacterAdjustArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSArmorTypeParam> ArmorTypeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttackParam> AttackParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSItemParam> ItemParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWeaponCommonParam> WeaponCommonParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityParam> AbilityParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRoundParam> RoundParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSItemBoxSpawnParamForRound> ItemBoxSpawnParamForRoundArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRoundAdjustParam> RoundAdjustParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStormFinalParam> StormFinalParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttentionAdjustParam> AttentionAdjustParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttentionLevelParam> AttentionLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttentionScoreParam> AttentionScoreParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLotSpawnNumParam> LotSpawnNumParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLotItemCategoryParam> LotItemCategoryParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLotItemParam> LotItemParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLotWeaponParam> LotWeaponParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillParam> HeatSkillParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillTreeParam> HeatSkillTreeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatMoveSet> HeatMoveSetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPlayerRankRangeParam> PlayerRankRangeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSGeneralParam> GeneralParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRuleParam> RuleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRuleScheduleParam> RuleScheduleParamArray;
    
public:
    UELSSMasterData();
    UFUNCTION(BlueprintCallable)
    void SetRawData(UELSSMasterDataRawData* inData);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLevel(ULevel* inLevel, UWorld* inWorld);
    
    UFUNCTION(BlueprintCallable)
    void ConvertDataTableToArray();
    
};

