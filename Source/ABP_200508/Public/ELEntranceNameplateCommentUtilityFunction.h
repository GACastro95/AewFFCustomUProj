#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELMoves_Finisher.h"
#include "EBodyWeightType.h"
#include "EELBelt.h"
#include "EELEntranceNameplateCommentCompareType.h"
#include "EELEntranceNameplateCommentConditionType.h"
#include "EELEntranceNameplateCommentValueType.h"
#include "EELTeamID.h"
#include "EWrestlerID_N.h"
#include "WrestlingSkillParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELEntranceNameplateCommentUtilityFunction.generated.h"

class USaveDataObject_PlayerData;

UCLASS(Blueprintable)
class ABP_200508_API UELEntranceNameplateCommentUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELEntranceNameplateCommentUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static bool GetValueForReplaceParameter(EELEntranceNameplateCommentValueType ValueType, EWrestlerID_N WrestlerID, FGuid UID, EWrestlerID_N ManagerID, FGuid ManagerUID, EELBelt Belt, EBodyWeightType WeightType, EELTeamID TeamId, const FELMoves_Finisher& Finisher, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static USaveDataObject_PlayerData* GetCachedPlayerDataObject();
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertReplaceParameterToString(EELEntranceNameplateCommentValueType ValueType, const FString& WrestlerName, const FString& ManagerName, const FELMoves_Finisher& Finisher, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareWrestlerParameter(const USaveDataObject_PlayerData* PlayerData, EELEntranceNameplateCommentConditionType ConditionType, EELEntranceNameplateCommentCompareType CompareType, EWrestlerID_N WrestlerID, FGuid UID, const FWrestlingSkillParam& WrestlingSkillParam, int32 Value, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareTeamParameter(const USaveDataObject_PlayerData* PlayerData, EELEntranceNameplateCommentConditionType ConditionType, EELEntranceNameplateCommentCompareType CompareType, EELTeamID TeamId, int32 Value, bool& Success);
    
};

