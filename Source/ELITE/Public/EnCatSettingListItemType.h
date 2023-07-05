#pragma once
#include "CoreMinimal.h"
#include "EnCatSettingListItemType.generated.h"

UENUM(BlueprintType)
enum class EnCatSettingListItemType : uint8 {
    TeamName,
    SNSName,
    AnnouncerName,
    FanReaction,
    Purchase,
};

