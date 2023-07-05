#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Actor.h"
#include "ESSAbilitySortType.h"
#include "ESSHeatSkillCategory.h"
#include "ESSWrestlerType.h"
#include "SSAbilityParam.h"
#include "SSHeatSkillIcon.h"
#include "SSHeatSkillParam.h"
#include "SSHeatSkillTreeParam.h"
#include "SSMenuFinisherParam.h"
#include "SSMoveParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerTypeParam.h"
#include "ELSSOutGameDatabase.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API AELSSOutGameDatabase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WrestlerParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WrestlerTypeParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityParam> AbilityParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeatSkillParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillParam> HeatSkillParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeatSkillTreeParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillTreeParam> HeatSkillTreeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeatSkillIconTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillIcon> HeatSkillIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MoveParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MenuFinisherParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMenuFinisherParam> MenuFinisherParamArray;
    
    AELSSOutGameDatabase();
    UFUNCTION(BlueprintCallable)
    bool GetWrestlerTypeParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWrestlerParam(EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void GetSortedAbilityParamArray(ESSAbilitySortType inSortType, TArray<FSSAbilityParam>& outAbilityParam);
    
    UFUNCTION(BlueprintCallable)
    bool GetMoveParamById(int32 MoveId, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMenuFinisherParamCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuFinisherParamByIndex(int32 Index, FSSMenuFinisherParam& OutRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuFinisherParamById(int32 inFinisherId, FSSMenuFinisherParam& OutRow) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMenuFinisherParamArray(TArray<FSSMenuFinisherParam>& outArray);
    
    UFUNCTION(BlueprintCallable)
    bool GetHeatSkillParam(int32 ID, FSSHeatSkillParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeatSkillIdFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHeatSkillIconTexture(int32 inHeatSkillId) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityParam(int32 ID, FSSAbilityParam& OutRow);
    
};

