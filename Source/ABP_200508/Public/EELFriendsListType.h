#pragma once
#include "CoreMinimal.h"
#include "EELFriendsListType.generated.h"

UENUM(BlueprintType)
enum class EELFriendsListType : uint8 {
    Default,
    OnlinePlayers,
    InGamePlayers,
    InGameAndSessionPlayers,
};

