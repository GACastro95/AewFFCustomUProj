#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CareerPlayData.h"
#include "MatchPlayData.h"
#include "MiniGamePlayData.h"
#include "DataMiningUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UDataMiningUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataMiningUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteMiniGamePlayData(const UObject* WorldContextObject, const FMiniGamePlayData& SendData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteMatchPlayData(const UObject* WorldContextObject, const FMatchPlayData& SendData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteCareerPlayData(const UObject* WorldContextObject, const FCareerPlayData& SendData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendMiniGamePlayData(const UObject* WorldContextObject, const FMiniGamePlayData& _SendData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendMatchPlayData(const UObject* WorldContextObject, const FMatchPlayData& _SendData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendCareerPlayData(const UObject* WorldContextObject, const FCareerPlayData& _SendData);
    
};

