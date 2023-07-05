#pragma once
#include "CoreMinimal.h"
#include "ELOSSFriendStatus.generated.h"

UENUM(BlueprintType)
enum class ELOSSFriendStatus : uint8 {
    Unknown,
    NotFound,
    Offline,
    Online,
    PlayingThisGame,
};

