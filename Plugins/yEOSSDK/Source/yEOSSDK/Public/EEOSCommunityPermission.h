#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityPermission.generated.h"

UENUM(BlueprintType)
enum class EEOSCommunityPermission : uint8 {
    Public,
    Friends,
    Invite,
};

