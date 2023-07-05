#pragma once
#include "CoreMinimal.h"
#include "EasyInstancedHelper.h"
#include "ELGeneralGameDebugBase.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELGeneralGameDebugBase : public UEasyInstancedHelper {
    GENERATED_BODY()
public:
    UELGeneralGameDebugBase();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UWorld* GetWorldForBP(const UObject* WorldContextObject) const;
    
};

