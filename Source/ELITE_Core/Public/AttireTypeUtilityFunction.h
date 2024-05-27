#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAttireCondition.h"
#include "EAttireType.h"
#include "EditCondition.h"
#include "AttireTypeUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UAttireTypeUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttireTypeUtilityFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EvaluateBit(const EAttireType& Value, const int32 ConditionFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Evaluate(const EAttireType& Value, const EAttireCondition& Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EditCondition_Evaluate(const EAttireType& Value, const FEditCondition& Condition);
    
};

