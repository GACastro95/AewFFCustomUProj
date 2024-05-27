#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECharacterType.h"
#include "EWrestlerID_N.h"
#include "WrestlerIDUtilityFunctions.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UWrestlerIDUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWrestlerIDUtilityFunctions();

    UFUNCTION(BlueprintCallable)
    static void SwitchCharacterType(const EWrestlerID_N ID, ECharacterType& resultType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidID(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRosterIDImpl(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRosterID(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRefereeIDImpl(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRefereeID(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNpcIDImpl(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNpcID(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditWrestlerIDImpl(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditWrestlerID(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCommunityWrestlerIDImpl(const EWrestlerID_N ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCommunityWrestlerID(const EWrestlerID_N ID);
    
};

