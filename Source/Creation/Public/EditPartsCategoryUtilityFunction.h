#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditPartsCategoryData.h"
#include "EditPartsCategoryDetails.h"
#include "EditPartsCategoryName.h"
#include "EditPartsCategoryUtilityFunction.generated.h"

UCLASS(Blueprintable)
class CREATION_API UEditPartsCategoryUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditPartsCategoryUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void GetPartsCategoryDetails(const FEditPartsCategoryName& CategoryName, FEditPartsCategoryDetails& EditPartsCategoryDetails);
    
    UFUNCTION(BlueprintCallable)
    static void GetPartsCategoryData(const FEditPartsCategoryName& CategoryName, FEditPartsCategoryData& Data, TSet<FEditPartsCategoryName>& Inheritance);
    
    UFUNCTION(BlueprintCallable)
    static void GetInheritance(const FEditPartsCategoryName& CategoryName, TSet<FEditPartsCategoryName>& Inheritance);
    
};

