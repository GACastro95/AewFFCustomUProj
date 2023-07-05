#pragma once
#include "CoreMinimal.h"
#include "PossessedItemParam.h"
#include "PossessedItemSaveData.h"
#include "ELRefPossessedItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FELRefPossessedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPossessedItemParam ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPossessedItemSaveData SaveData;
    
    ELITE_GAME_API FELRefPossessedItemInfo();
};

