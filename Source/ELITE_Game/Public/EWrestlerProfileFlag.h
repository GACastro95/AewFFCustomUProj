#pragma once
#include "CoreMinimal.h"
#include "EWrestlerProfileFlag.generated.h"

UENUM(BlueprintType)
enum class EWrestlerProfileFlag : uint8 {
    None,
    DisplayHeight,
    DisplayWeight,
    DisplayHomeTown = 4,
    DisplayBirthday = 8,
    EditableStreetClothes = 16,
};

