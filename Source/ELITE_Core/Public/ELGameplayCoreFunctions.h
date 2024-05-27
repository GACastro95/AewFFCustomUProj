#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBasicFunctionResult.h"
#include "Templates/SubclassOf.h"
#include "ELGameplayCoreFunctions.generated.h"

class AGameModeBase;
class AGameStateBase;
class UObject;

UCLASS(Blueprintable)
class ELITE_CORE_API UELGameplayCoreFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELGameplayCoreFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGameStateBase* GetGameStateAs(const UObject* WorldContextObject, const TSubclassOf<AGameStateBase> Class, EBasicFunctionResult& resultType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGameModeBase* GetGameModeAs(const UObject* WorldContextObject, const TSubclassOf<AGameModeBase> Class, EBasicFunctionResult& resultType);
    
    UFUNCTION(BlueprintCallable)
    static float GetAverageMS();
    
    UFUNCTION(BlueprintCallable)
    static float GetAverageFPS();
    
};

