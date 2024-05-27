#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditPersonParam.h"
#include "EGender.h"
#include "EELBelt.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EELDisplayBeltType.h"
#include "ELBeltParam.h"
#include "ELTitleHolder.h"
#include "ELTitleWrestlerSelectParam.h"
#include "ELTitleUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELTitleUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELTitleUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static bool SortByPriority(TArray<EELBelt>& Out, const TArray<EELBelt>& In, bool PrioritizeTagBelt);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTitleHolderAtEditWrestler(EELBelt Belt, bool TagMember, FEditPersonParam EditPersonParam);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTitleHolder_Tag(EELBelt Belt, EWrestlerID_N WrestlerID_0, FGuid UID_0, EWrestlerID_N WrestlerID_1, FGuid UID_1);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTitleHolder_Single(EELBelt Belt, EWrestlerID_N WrestlerID, FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTitleHolder(EELBelt Belt, bool TagMember, EWrestlerID_N WrestlerID, FGuid UID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeBeltInfoForUpdateTitleHolder_Tag(TArray<FELTitleWrestlerSelectParam>& WinnerWrestlers, TArray<EELBelt>& BeltList, const TArray<FELTitleWrestlerSelectParam>& WrestlerList, int32 WinnerTeamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeBeltInfoForUpdateTitleHolder(FELTitleWrestlerSelectParam& WinnerWrestler, TArray<EELBelt>& BeltList, TArray<EELBelt>& DefendBeltList, const TArray<FELTitleWrestlerSelectParam>& WrestlerList, int32 WinnerTeamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidBelt(EELBelt BeltType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameTitleHolderParam(const FELTitleHolder _paramA, const FELTitleHolder _paramB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EELBelt> GetWrestlerAttachedBelts(EWrestlerID_N WrestlerID, FGuid UID, bool PrioritizeTagBelt);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EELBelt> GetTitleList(EWrestlerID_N WrestlerID, FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FELTitleHolder> GetTitleHolder(EELBelt Belt);
    
    UFUNCTION(BlueprintCallable)
    static EELBelt GetHighestPriorityBelt(EWrestlerID_N WrestlerID, FGuid UID, bool PrioritizeTagBelt);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EELBelt> GetEnableBeltList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetDisplayTitleHolderText(UObject* _pWorldContextObject, EELBelt BeltType, EELDisplayBeltType DisplayBeltType, EGender Gender, bool ValidNewLine);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDefendCount(EELBelt TargetBelt);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBeltParam(FELBeltParam& BeltParam, EELBelt Belt);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ExecuteFailSafeTitleHolder(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteTeam(FGuid TeamUID);
    
    UFUNCTION(BlueprintCallable)
    static void DefendTitleHolder(EELBelt TargetBelt);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTitleHolder(EELBelt Belt);
    
    UFUNCTION(BlueprintCallable)
    static void CheckChangedMyWrestlerEditParam(const FEditPersonParam NewMyWrestlerEditParam, const FEditPersonParam PrevMyWrestlerEditParam);
    
    UFUNCTION(BlueprintCallable)
    static bool CanChallengedTheTitleAtEditWrestler(EELBelt Belt, FEditPersonParam EditPersonParam);
    
    UFUNCTION(BlueprintCallable)
    static bool CanChallengedTheTitle(EELBelt Belt, EWrestlerID_N WrestlerID, FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static void BreakupTeam(FGuid TeamUID);
    
};

