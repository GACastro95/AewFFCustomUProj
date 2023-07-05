#pragma once
#include "CoreMinimal.h"
#include "EPopupOnlineStatusType.generated.h"

UENUM(BlueprintType)
enum class EPopupOnlineStatusType : uint8 {
    None,
    Invitation,
    Completed_Join,
    Completed_Leave,
    Kick,
    Joined_OtherPlayer,
    Leaved_OtherPlayer,
    Kick_OtherPlayer,
    Promote_Me,
    Promote_Other,
};

