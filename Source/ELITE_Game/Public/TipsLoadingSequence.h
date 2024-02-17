#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETipsLoadingType.h"
#include "TipsLoadingSequence.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingSequence : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETipsLoadingType> Sequence;
    
    ELITE_GAME_API FTipsLoadingSequence();
};

