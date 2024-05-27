#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESSHeatSkillCategory.h"
#include "ESSWrestlerType.h"
#include "SSAbilityParam.h"
#include "SSHeatSkillParam.h"
#include "SSMenuFinisherParam.h"
#include "SSMoveParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerTypeParam.h"
#include "ELSSOutGameParamUtility.generated.h"

class AELSSOutGameDatabase;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELSSOutGameParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSOutGameParamUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSOutGameMenuFinisherParamCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameMenuFinisherParamByIndex(const UObject* WorldContextObject, int32 Index, FSSMenuFinisherParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameMenuFinisherParamById(const UObject* WorldContextObject, int32 inFinisherId, FSSMenuFinisherParam& OutRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameMenuFinisherParamArray(const UObject* WorldContextObject, TArray<FSSMenuFinisherParam>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSOutGameHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetSSOutGameHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSOutGameDatabase* GetSSOutGameDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSOutGameAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel);
    
};

