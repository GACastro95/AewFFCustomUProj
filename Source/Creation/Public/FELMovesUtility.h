#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELMoves.h"
#include "ELMoves_Finisher.h"
#include "ELMoves_Finisher_Part.h"
#include "FELMovesUtility.generated.h"

class APlayerStart;
class UAnimMontage;
class UDataTable;

UCLASS(Blueprintable)
class CREATION_API UFELMovesUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFELMovesUtility();

private:
    UFUNCTION(BlueprintCallable)
    static void SortPlayerStartArray(UPARAM(Ref) TArray<APlayerStart*>& PlayerStartArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FELMoves& _Moves, int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFinisherValue(UPARAM(Ref) FELMoves_Finisher& _Finisher, int32 Index, const FELMoves_Finisher_Part Data);
    
    UFUNCTION(BlueprintCallable)
    static void SaveMovesDataTable(UDataTable* UpdateTable, const FELMoves& _Moves, const FString& RowName);
    
    UFUNCTION(BlueprintCallable)
    static void SaveMovesData(const FELMoves& _Moves, const FString& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRateScale(const UAnimMontage* AnimationSequence, float& RateScale);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArray(UPARAM(Ref) FELMoves& _Moves, TArray<int32>& _OutArray);
    
};

