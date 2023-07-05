#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELSSAIUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSAIUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSAIUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetProbabilityIndexByWeighting(const UObject* WorldContextObject, const TArray<float>& probDatas);
    
};

