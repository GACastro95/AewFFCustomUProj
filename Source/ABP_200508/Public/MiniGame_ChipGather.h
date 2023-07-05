#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugChipType.h"
#include "MiniGame_ChipGather.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_ChipGather {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNobodyRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotGenerateBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedSpawnCoinPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameDebugChipType DropChipType;
    
    ABP_200508_API FMiniGame_ChipGather();
};

