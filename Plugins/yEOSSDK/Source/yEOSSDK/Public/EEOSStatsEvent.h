#pragma once
#include "CoreMinimal.h"
#include "EEOSStatsEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSStatsEvent : uint8 {
    IngestStat,
    IngestStatErr,
    QueryStat,
    QueryStatErr,
};

