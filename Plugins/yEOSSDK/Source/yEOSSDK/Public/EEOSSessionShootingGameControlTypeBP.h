#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionShootingGameControlTypeBP.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionShootingGameControlTypeBP : uint8 {
    MoveFB,
    MoveLR,
    Run,
    Slow,
    Step,
    Jump,
    Crouch,
    Crawl,
    Turn,
    Down,
    Getup,
    Hide,
    Attack,
    Shoot,
    Guard,
    Barrier,
    Action,
    PickUp,
    Throw,
    Reload,
    GetOn,
    GetOff,
    Max = 32,
};

