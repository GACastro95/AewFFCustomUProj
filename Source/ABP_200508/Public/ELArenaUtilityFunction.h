#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArenaCustomizeParam.h"
#include "ELArenaUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELArenaUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELArenaUtilityFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareArenaCustomizeParam(const FArenaCustomizeParam& A, const FArenaCustomizeParam& B);
    
};

