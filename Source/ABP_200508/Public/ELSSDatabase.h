#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSGuardBreakerType.h"
#include "ESSGuardReactionType.h"
#include "ESSHitEffectType.h"
#include "ESSResultGradeABC.h"
#include "SSAIPlayerParam.h"
#include "SSAIPlayerStampedeLevelParam.h"
#include "SSAttachParam.h"
#include "SSDamageReactionParam.h"
#include "SSEffectParam.h"
#include "SSFallParam.h"
#include "SSFgfBallLevelParam.h"
#include "SSFgfFieldPatternParam.h"
#include "SSGuardConditionParam.h"
#include "SSGuardReactionParam.h"
#include "SSHitEffectParam.h"
#include "SSItemResourceParam.h"
#include "SSPlayerStartLocatorParam.h"
#include "SSRuleAdjustParam.h"
#include "SSShieldParam.h"
#include "SSSystemMotionParam.h"
#include "SSUseItemParam.h"
#include "SSVehicleParam.h"
#include "SSVehicleSpawnParamForRound.h"
#include "SSVictoryCutsceneParam.h"
#include "SSWeaponGunParam.h"
#include "SSWeaponMeleeParam.h"
#include "SSWeaponParam.h"
#include "SSWeaponThrowParam.h"
#include "SSWeaponTrapParam.h"
#include "ELSSDatabase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELSSDatabase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HitEffectParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemResourceParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UseItemParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ShieldParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponMeleeParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponGunParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponThrowParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTrapParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleSpawnParamForRoundTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSVehicleSpawnParamForRound> VehicleSpawnParamForRoundArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttachParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SystemMotionParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageReactionParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIPlayerParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAIPlayerParam> AIPlayerParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIPlayerStampedeLevelParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAIPlayerStampedeLevelParam> AIPlayerStampedeLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GuardReactionParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSGuardReactionParam> GuardReactionParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GuardConditionParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSGuardConditionParam> GuardConditionParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FallParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSFallParam> FallParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultKillCountGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultAttentionGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultFeverGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultStarGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultJewelGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultBallLevelGradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VictoryCutsceneParamTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerStartLocatorParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPlayerStartLocatorParam> PlayerStartLocatorParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RuleAdjustParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRuleAdjustParam> RuleAdjustParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FgfFieldPatternParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSFgfFieldPatternParam> FgfFieldPatternParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FgfBallLevelParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSFgfBallLevelParam> FgfBallLevelParamArray;
    
public:
    AELSSDatabase();
    UFUNCTION(BlueprintCallable)
    bool GetWeaponTrapParam(int32 ID, FSSWeaponTrapParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponThrowParam(int32 ID, FSSWeaponThrowParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponParam(int32 ID, FSSWeaponParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponMeleeParam(int32 ID, FSSWeaponMeleeParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponGunParam(int32 ID, FSSWeaponGunParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetVictoryCutsceneParam(int32 ID, FSSVictoryCutsceneParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetVehicleParam(int32 ID, FSSVehicleParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetUseItemParam(const FName& RowName, FSSUseItemParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetSystemMotionParam(const FName& RowName, FSSSystemMotionParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetShieldParam(int32 ID, FSSShieldParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemResourceParam(int32 ID, FSSItemResourceParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetHitEffectParam(ESSHitEffectType Type, FSSHitEffectParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetGuardReactionParam(ESSGuardReactionType inGuardReaction, FSSGuardReactionParam& OutRow) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFallParam(float inHeightDiff, int32 inMaxLandLevel, FSSFallParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetEffectParam(const FName& RowName, FSSEffectParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetDamageReactionParam(const FName& RowName, FSSDamageReactionParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttachParam(const FName& RowName, FSSAttachParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetAIPlayerStampedeLevelParam(int32 ID, FSSAIPlayerStampedeLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetAIPlayerParam(int32 ID, FSSAIPlayerParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    float CalcResultStarGrade(int32 inScore);
    
    UFUNCTION(BlueprintCallable)
    ESSResultGradeABC CalcResultGradeFromKillCount(int32 inKillCount);
    
    UFUNCTION(BlueprintCallable)
    ESSResultGradeABC CalcResultGradeFromJewelPoint(int32 inJewelPoint);
    
    UFUNCTION(BlueprintCallable)
    ESSResultGradeABC CalcResultGradeFromFeverCount(int32 inFeverCount);
    
    UFUNCTION(BlueprintCallable)
    ESSResultGradeABC CalcResultGradeFromBallLevelPoint(int32 inBallLevelPoint);
    
    UFUNCTION(BlueprintCallable)
    ESSResultGradeABC CalcResultGradeFromAttentionPoint(int32 inAttentionPoint);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcResultAEWCash(int32 inScore);
    
    UFUNCTION(BlueprintCallable)
    ESSGuardReactionType CalcGuardReactionType(ESSGuardBreakerType inGuardBreakerType, int32 inGuardLevel) const;
    
};

