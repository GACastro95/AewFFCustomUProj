#pragma once
#include "CoreMinimal.h"
#include "MovesSituation.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovesSituationFunction.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UMovesSituationFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovesSituationFunction();
    UFUNCTION(BlueprintCallable)
    static void SearchSpecialDataArray(UPARAM(Ref) TArray<FMovesSituation>& OutKeys, const TArray<FMovesSituation>& SortedMovesSituetionArray, bool bIsFinisher, bool bIsTeamFinisher);
    
    UFUNCTION(BlueprintCallable)
    static void SearchDataArray(UPARAM(Ref) TArray<FMovesSituation>& OutKeys, const TArray<FMovesSituation>& SortedMovesSituetionArray, TArray<int32> inCategory);
    
    UFUNCTION(BlueprintCallable)
    static void GetSortedMovesSituationArray(UPARAM(Ref) TArray<FMovesSituation>& outDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDataTableIndex(const UDataTable* _Table, const FMovesSituation& _key);
    
};

