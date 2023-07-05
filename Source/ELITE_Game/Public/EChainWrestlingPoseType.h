#pragma once
#include "CoreMinimal.h"
#include "EChainWrestlingPoseType.generated.h"

UENUM(BlueprintType)
enum class EChainWrestlingPoseType : uint8 {
    None,
    ArmWringer,
    SideHeadlock,
    HammerLock,
    DownSideHeadLock,
};

