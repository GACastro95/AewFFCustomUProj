#pragma once
#include "CoreMinimal.h"
#include "EUserPrivilegeBit.generated.h"

UENUM(BlueprintType)
enum class EUserPrivilegeBit : uint8 {
    None,
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline = 4,
    CanUseUserGeneratedContent = 8,
    CanUserCrossPlay = 16,
    All = 255,
};

