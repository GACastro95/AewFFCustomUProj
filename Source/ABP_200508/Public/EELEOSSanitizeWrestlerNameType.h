#pragma once
#include "CoreMinimal.h"
#include "EELEOSSanitizeWrestlerNameType.generated.h"

UENUM(BlueprintType)
enum class EELEOSSanitizeWrestlerNameType : uint8 {
    RingNameText,
    MultilineRingNameText,
    ShortNameText,
    SpokenNameText,
    NickNameText,
    SnsAccountText,
};

