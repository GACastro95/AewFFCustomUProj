#pragma once
#include "CoreMinimal.h"
#include "ELDownloadContentBelongInSeasonType.generated.h"

UENUM(BlueprintType)
enum class ELDownloadContentBelongInSeasonType : uint8 {
    None,
    PreOrderMatHardy,
    Season1,
    Season2,
    Season3,
    Season4,
    Num,
};

