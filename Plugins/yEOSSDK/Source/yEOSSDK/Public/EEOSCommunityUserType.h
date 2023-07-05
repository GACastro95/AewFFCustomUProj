#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityUserType.generated.h"

UENUM(BlueprintType)
enum class EEOSCommunityUserType : uint8 {
    Public,
    Invite,
    Presence,
};

