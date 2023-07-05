#pragma once
#include "CoreMinimal.h"
#include "yEnCAAEditTarget.generated.h"

UENUM(BlueprintType)
enum class yEnCAAEditTarget : uint8 {
    None,
    ArenaSettingsRoot,
    ArenaMatchup,
    ArenaTransition,
    ArenaName,
    RingRoot,
    RingMat,
    RingRopeRoot,
    RingRopeAll,
    RingRope,
    RingCornerPostRoot,
    RingCornerPostAll,
    RingCornerPost,
    RingCornerJoint,
    RingTurnbuckleCoverRoot,
    RingTurnbuckleCoverAll,
    RingTurnbuckleCover,
    RingApron,
    RingSideRoot,
    RingSideMat,
    RingSideFloor,
    RingSideBarricade,
    StageRampRoot,
    StageRampStage,
    StageRampMovie,
    StageRampRamp,
    StageRampObjectRoot,
    StageRampObject,
    LightRoot,
    LightLEDRoot,
    LightLED,
    LightSLRoot,
    LightSL,
    LightEnvironment,
    Loadout,
    Finalize,
};

