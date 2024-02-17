#pragma once
#include "CoreMinimal.h"
#include "ETitleMenu_QuickSettingsCommand.generated.h"

UENUM(BlueprintType)
enum class ETitleMenu_QuickSettingsCommand : uint8 {
    None,
    Button,
    Integer,
    Real,
    Boolean,
};

