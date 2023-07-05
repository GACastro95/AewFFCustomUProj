#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGender.h"
#include "ELWrestlerProfile_CutScene.h"
#include "EWrestlerID_N.h"
#include "WrestlingSkillParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WrestlerMoves.h"
#include "WrestlerSetupParam.h"
#include "FL_SetupWrestlerUtilityFunctions.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_SetupWrestlerUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_SetupWrestlerUtilityFunctions();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerNameText(const FWrestlerSetupParam& SetupWrestler, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWrestlerID_N GetWrestlerID(const FWrestlerSetupParam& SetupWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetUID(const FWrestlerSetupParam& SetupWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSpokenNameText(const FWrestlerSetupParam& SetupWrestler, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSnsNameText(const FWrestlerSetupParam& SetupWrestler, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSkillParam(const FWrestlerSetupParam& SetupWrestler, FWrestlingSkillParam& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetShortNameText(const FWrestlerSetupParam& SetupWrestler, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNickNameText(const FWrestlerSetupParam& SetupWrestler, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiLineWrestlerNameText(const FWrestlerSetupParam& SetupWrestler, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesParam(const FWrestlerSetupParam& SetupWrestler, FWrestlerMoves& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGender GetGender(const FWrestlerSetupParam& SetupWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFightStyle(const FWrestlerSetupParam& SetupWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntranceParam(const FWrestlerSetupParam& SetupWrestler, FELWrestlerProfile_CutScene& Out);
    
};

