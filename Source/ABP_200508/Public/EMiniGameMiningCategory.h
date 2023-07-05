#pragma once
#include "CoreMinimal.h"
#include "EMiniGameMiningCategory.generated.h"

UENUM(BlueprintType)
enum class EMiniGameMiningCategory : uint8 {
    AllPlayCountByCareer,
    AllPlayCount,
    PlayTime,
    OnlinePlayCategory,
    OfflinePlayCategory,
    PlayCount,
    PlayCountOnline,
    PlayCountOffline,
    PlayCountLevel,
    WinCount,
    DrawCount,
    LoseCount,
    QuitCount,
    OnlineScore,
    OfflineScore,
    SelectBat,
};

