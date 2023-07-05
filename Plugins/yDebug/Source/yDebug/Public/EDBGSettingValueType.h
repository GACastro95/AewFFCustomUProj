#pragma once
#include "CoreMinimal.h"
#include "EDBGSettingValueType.generated.h"

UENUM(BlueprintType)
enum class EDBGSettingValueType : uint8 {
    Bool,
    Int,
    Float,
    String,
};

