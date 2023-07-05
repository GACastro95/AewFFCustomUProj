#pragma once
#include "CoreMinimal.h"
#include "EnCatSelectItemMenuType.generated.h"

UENUM(BlueprintType)
enum class EnCatSelectItemMenuType : uint8 {
    MemberSelect,
    PresetCopy,
    Purchase,
    RingAnnounce,
    FanReaction,
};

