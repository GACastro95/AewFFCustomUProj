#pragma once
#include "CoreMinimal.h"
#include "EELOnlineModeType.generated.h"

UENUM(BlueprintType)
enum class EELOnlineModeType : uint8 {
    OnlineModeType_RANKED,
    OnlineModeType_PARTY,
    OnlineModeType_CASUAL,
    OnlineModeType_MINIGAME,
    None,
};

