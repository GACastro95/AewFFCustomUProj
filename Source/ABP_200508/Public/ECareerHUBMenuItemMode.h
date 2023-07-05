#pragma once
#include "CoreMinimal.h"
#include "ECareerHUBMenuItemMode.generated.h"

UENUM(BlueprintType)
enum class ECareerHUBMenuItemMode : uint8 {
    None,
    ItemSelect,
    UseOrPurchaseSelect,
};

