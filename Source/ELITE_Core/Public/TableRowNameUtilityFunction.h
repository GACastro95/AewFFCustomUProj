#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "TableRowName.h"
#include "TableRowNameUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UTableRowNameUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTableRowNameUtilityFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTableRowName ToTableRowName(const FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ToFName(const FTableRowName& TableRowName);
    
    UFUNCTION(BlueprintCallable)
    static FDataTableRowHandle ToDataTableRowHandle(const FTableRowName& TableRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqual_FName(const FTableRowName& TableRowName, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertToNameSet(const TSet<FTableRowName>& TableRowNameSet, TSet<FName>& NameSet);
    
};

