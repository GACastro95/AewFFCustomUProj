#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMatchScoreRankingsType.h"
#include "ELCommonTextUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELCommonTextUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELCommonTextUtilityFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetTextEntryBase(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetScoreRankingText(UObject* _pWorldContextObject, EMatchScoreRankingsType TargetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetOkText(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetNoneText(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetMonthText(UObject* _pWorldContextObject, int32 TargetMonth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetCommonTextFromKey(UObject* _pWorldContextObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FText GetBackText(UObject* _pWorldContextObject);
    
};

