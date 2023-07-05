#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFinisher_RS_Direction.h"
#include "ELMoves.h"
#include "ELMovesSituation_SlotDetail.h"
#include "ELMoves_Finisher.h"
#include "MovesSituation.h"
#include "MovesSituation_SlotDetail.generated.h"

UCLASS(Blueprintable)
class CREATION_API UMovesSituation_SlotDetail : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovesSituation_SlotDetail();
private:
    UFUNCTION(BlueprintCallable)
    static void GetSlotDetailArray(const FMovesSituation& _Moves, TArray<FELMovesSituation_SlotDetail>& _SlotDetailArray);
    
    UFUNCTION(BlueprintCallable)
    static void FixFinisherType(UPARAM(Ref) FELMoves_Finisher& Finisher);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertMovesSlotNo(int32& _SlotNo, const FString& _CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertMovesData(UPARAM(Ref) FELMoves& _Moves, const FELMoves_Finisher& Finisher, EFinisher_RS_Direction RSDir);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertFinisherType();
    
};

