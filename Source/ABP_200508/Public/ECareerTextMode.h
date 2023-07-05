#pragma once
#include "CoreMinimal.h"
#include "ECareerTextMode.generated.h"

UENUM(BlueprintType)
enum class ECareerTextMode : uint8 {
    DataTableKey,
    LocalizeKey,
    DataTableText,
    StringTableText,
};

