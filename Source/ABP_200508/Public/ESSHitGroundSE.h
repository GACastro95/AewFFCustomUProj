#pragma once
#include "CoreMinimal.h"
#include "ESSHitGroundSE.generated.h"

UENUM(BlueprintType)
enum class ESSHitGroundSE : uint8 {
    None,
    footstep_walk,
    footstep_walk_end,
    footstep_run,
    footstep_run_end,
    footstep_stomp_weak,
    footstep_stomp_medium,
    footstep_stomp_strong,
    footstep_land_weak,
    footstep_land_medium,
    footstep_land_strong,
    groundimpact_sharp_weak,
    groundimpact_sharp_medium,
    groundimpact_sharp_strong,
    groundimpact_sharp_dive,
    groundimpact_blunt_weak,
    groundimpact_blunt_medium,
    groundimpact_blunt_strong,
    groundimpact_blunt_dive,
    ground_tap,
    ground_rolling,
};

