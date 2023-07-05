#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HomeTown.h"
#include "HomeTownID.h"
#include "FL_HomeTownUtility.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UFL_HomeTownUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_HomeTownUtility();
    UFUNCTION(BlueprintCallable)
    static FText GetHomeTownText(const FHomeTownID& HomeTownID, const bool bUpper, const bool bCountry, const bool bState, const bool bCity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetHomeTownKey(const FHomeTownID& HomeTownID, FName& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetHomeTownByID(const FHomeTownID& HomeTownID, FHomeTown& Out);
    
    UFUNCTION(BlueprintCallable)
    static void BreakHomeTownID(const FHomeTownID& HomeTownID, int32& OutCountry, int32& OutState, int32& OutCity);
    
};

