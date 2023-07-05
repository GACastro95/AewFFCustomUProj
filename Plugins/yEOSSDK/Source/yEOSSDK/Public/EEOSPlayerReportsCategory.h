#pragma once
#include "CoreMinimal.h"
#include "EEOSPlayerReportsCategory.generated.h"

UENUM(BlueprintType)
enum class EEOSPlayerReportsCategory : uint8 {
    Invalid,
    Cheating,
    Exploiting,
    OffensiveProfile,
    VerbalAbuse,
    Scamming,
    Spamming,
    Other,
};

