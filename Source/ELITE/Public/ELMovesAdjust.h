#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELMoves.h"
#include "ELMoves_Finisher.h"
#include "WrestlerMoves.h"
#include "ELMovesAdjust.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class ELITE_API UELMovesAdjust : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MovesSituationDT;
    
public:
    UELMovesAdjust();
    UFUNCTION(BlueprintCallable)
    bool AdjustWrestlerMoves(FWrestlerMoves& _Result, const FWrestlerMoves& _WrestlerMoves, const FWrestlerMoves& _TemplateMoves, const TSet<int32>& _UnlockIDList);
    
    UFUNCTION(BlueprintCallable)
    bool AdjustELMoves_Finisher(FELMoves_Finisher& _Result, const FELMoves_Finisher& _WrestlerMoves, const FELMoves_Finisher& _TemplateMoves, const TSet<int32>& _UnlockIDList);
    
    UFUNCTION(BlueprintCallable)
    bool AdjustELMoves(FELMoves& _Result, const FELMoves& _WrestlerMoves, const FELMoves& _TemplateMoves, const TSet<int32>& _UnlockIDList);
    
};

