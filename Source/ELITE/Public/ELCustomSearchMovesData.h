#pragma once
#include "CoreMinimal.h"
#include "MovesSituation.h"
#include "ELUnlockItemSaveData.h"
#include "UnlockableItemParam.h"
#include "ELCustomSearchMovesData.generated.h"

USTRUCT(BlueprintType)
struct FELCustomSearchMovesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemParam UnlockableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELUnlockItemSaveData UnlockItemSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovesSituation MovesSituation;
    
    ELITE_API FELCustomSearchMovesData();
};

