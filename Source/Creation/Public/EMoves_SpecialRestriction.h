#pragma once
#include "CoreMinimal.h"
#include "EMoves_SpecialRestriction.generated.h"

UENUM(BlueprintType)
enum class EMoves_SpecialRestriction : uint8 {
    None,
    Special,
    Finisher,
    Signature,
};

