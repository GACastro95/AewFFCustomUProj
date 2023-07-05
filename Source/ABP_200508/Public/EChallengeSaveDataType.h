#pragma once
#include "CoreMinimal.h"
#include "EChallengeSaveDataType.generated.h"

UENUM(BlueprintType)
enum class EChallengeSaveDataType : uint8 {
    Daily,
    Weekly,
    Normal,
    Max,
};

