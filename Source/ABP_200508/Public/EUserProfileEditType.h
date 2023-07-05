#pragma once
#include "CoreMinimal.h"
#include "EUserProfileEditType.generated.h"

UENUM(BlueprintType)
enum class EUserProfileEditType : uint8 {
    PlayerIcon,
    PlayerIconBG,
    Badge,
    Decal,
};

