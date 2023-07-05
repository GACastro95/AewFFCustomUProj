#pragma once
#include "CoreMinimal.h"
#include "EUserPrivilegeBit.generated.h"

UENUM(BlueprintType)
enum class EUserPrivilegeBit : uint8 {
    None,
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline = 0x4,
    CanUseUserGeneratedContent = 0x8,
    CanUserCrossPlay = 0x10,
    All = 0xFF,
};

