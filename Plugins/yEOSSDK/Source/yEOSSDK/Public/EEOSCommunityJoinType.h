#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityJoinType.generated.h"

UENUM(BlueprintType)
enum class EEOSCommunityJoinType : uint8 {
    Own,
    Search,
    Invite,
    Other,
};

