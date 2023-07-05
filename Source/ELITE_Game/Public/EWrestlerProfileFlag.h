#pragma once
#include "CoreMinimal.h"
#include "EWrestlerProfileFlag.generated.h"

UENUM(BlueprintType)
enum class EWrestlerProfileFlag : uint8 {
    None,
    DisplayHeight,
    DisplayWeight,
    DisplayHomeTown = 0x4,
    DisplayBirthday = 0x8,
    EditableStreetClothes = 0x10,
};

