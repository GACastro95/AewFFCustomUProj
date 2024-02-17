#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuSubLevel.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuSubLevel : uint8 {
    None,
    Common,
    Stadium,
    PartyLobby,
    Shop_Common,
    Shop_Preview,
    Shop_Entrance,
    WrestlerSelect,
    WeaponPreview,
    FinisherPreview,
    Max,
};

