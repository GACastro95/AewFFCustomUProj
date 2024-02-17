#pragma once
#include "CoreMinimal.h"
#include "SSTEAM_ECheckPlayerInTeam.generated.h"

UENUM(BlueprintType)
enum class SSTEAM_ECheckPlayerInTeam : uint8 {
    LEADER,
    MEMBER,
    OTHER,
};

