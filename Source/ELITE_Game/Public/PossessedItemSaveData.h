#pragma once
#include "CoreMinimal.h"
#include "PossessedItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FPossessedItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossessedNum;
    
    FPossessedItemSaveData();
};

