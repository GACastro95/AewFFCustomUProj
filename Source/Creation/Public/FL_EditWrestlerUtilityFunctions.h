#pragma once
#include "CoreMinimal.h"
#include "ELWrestlerProfile.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttireData.h"
#include "AttireParam.h"
#include "EEditPartsSlot.h"
#include "RosterInfoParam.h"
#include "WrestlerMoves.h"
#include "FL_EditWrestlerUtilityFunctions.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_EditWrestlerUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_EditWrestlerUtilityFunctions();
    UFUNCTION(BlueprintCallable)
    static void UpdateCompatiable(UPARAM(Ref) FAttireData& AttireData, UPARAM(Ref) TSet<EEditPartsSlot>& ExcludeParts, const TSet<FName>& ExcludeCategories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerMovesData(const FName& _WrestlerName, FWrestlerMoves& _OutMoves);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertWrestlerProfile_To_PersonalInfoData(const FELWrestlerProfile& _InProfile, const FWrestlerMoves& _InMoves, FRosterInfoParam& _OutInfoData);
    
    UFUNCTION(BlueprintCallable)
    static void Append_AttireParam(const FAttireParam& A, const FAttireParam& B, FAttireParam& Out);
    
    UFUNCTION(BlueprintCallable)
    static void Append_AttireData(const FAttireData& A, const FAttireData& B, FAttireData& Out);
    
};

