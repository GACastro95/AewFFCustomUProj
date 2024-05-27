#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseBodyTypeName.h"
#include "BodyAdjustParam.h"
#include "EditBodyParam.h"
#include "EditBodyUtilityFunction.generated.h"

UCLASS(Blueprintable)
class CREATION_API UEditBodyUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditBodyUtilityFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBaseBodyTypeName MakeLiteralBaseBodyTypeName(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static FBodyAdjustParam ConvertToBodyAdjustParam(const FEditBodyParam& EditBodyParam);
    
};

