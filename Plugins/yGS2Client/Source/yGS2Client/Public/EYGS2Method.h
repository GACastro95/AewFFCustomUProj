#pragma once
#include "CoreMinimal.h"
#include "EYGS2Method.generated.h"

UENUM(BlueprintType)
enum class EYGS2Method : uint8 {
    Read,
    Create,
    Update,
    Delete,
};

