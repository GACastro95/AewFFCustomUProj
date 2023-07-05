#pragma once
#include "CoreMinimal.h"
#include "EMovesSettingMenuType.generated.h"

UENUM(BlueprintType)
enum class EMovesSettingMenuType : uint8 {
    Category,
    Normal,
    Advanced,
};

