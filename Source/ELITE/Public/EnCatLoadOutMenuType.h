#pragma once
#include "CoreMinimal.h"
#include "EnCatLoadOutMenuType.generated.h"

UENUM(BlueprintType)
enum class EnCatLoadOutMenuType : uint8 {
    None,
    Profile,
    Member01,
    Member02,
    MoveSet,
    Entrance,
    Done,
};

