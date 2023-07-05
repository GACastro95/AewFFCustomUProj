#pragma once
#include "CoreMinimal.h"
#include "ECareerDebug_TextMode.generated.h"

UENUM(BlueprintType)
enum class ECareerDebug_TextMode : uint8 {
    Normal,
    StringKey,
    ECareerDebug_MAX UMETA(Hidden),
};

