#pragma once
#include "CoreMinimal.h"
#include "EJIRAConditionType.generated.h"

UENUM(BlueprintType)
enum class EJIRAConditionType : uint8 {
    None,
    Field,
    Status,
    CurrentUser,
};

