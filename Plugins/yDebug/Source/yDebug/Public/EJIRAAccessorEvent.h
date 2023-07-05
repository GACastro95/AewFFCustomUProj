#pragma once
#include "CoreMinimal.h"
#include "EJIRAAccessorEvent.generated.h"

UENUM(BlueprintType)
enum class EJIRAAccessorEvent : uint8 {
    SearchEnd,
    SearchFailed,
    Appended,
    AppendFailed,
    Updated,
    UpdateFailed,
    Deleted,
    DeleteFailed,
};

