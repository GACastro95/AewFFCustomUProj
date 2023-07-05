#pragma once
#include "CoreMinimal.h"
#include "ECareerDSSR.generated.h"

UENUM(BlueprintType)
enum class ECareerDSSR : uint8 {
    DSSR_1920x1080,
    DSSR_1600x900,
    DSSR_1280x720,
    DSSR_960x540,
    DSSR_MAX UMETA(Hidden),
};

