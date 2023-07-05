#pragma once
#include "CoreMinimal.h"
#include "UnavailableDlcWrestlerParam.h"
#include "UnavailableDlcData.generated.h"

USTRUCT(BlueprintType)
struct FUnavailableDlcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> UnlockableItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnavailableDlcWrestlerParam> WrestlerParams;
    
    ELITE_GAME_API FUnavailableDlcData();
};

