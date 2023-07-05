#pragma once
#include "CoreMinimal.h"
#include "ESSCameraPlaceType.generated.h"

UENUM(BlueprintType)
enum class ESSCameraPlaceType : uint8 {
    None,
    Default,
    CenterArena,
    Backyard,
    Room,
    Ring,
    Place06,
    Place07,
    Place08,
    Place09,
    Place10,
};

