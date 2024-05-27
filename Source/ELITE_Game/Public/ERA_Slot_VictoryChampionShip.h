#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_VictoryChampionShip.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_VictoryChampionShip : uint8 {
    RA_VIC_CHAMPION_NONE,
    RA_VIC_CHAMPION_DEF_AEW,
    RA_VIC_CHAMPION_DEF_TNT,
    RA_VIC_CHAMPION_DEF_AEW_WOMEN,
    RA_VIC_CHAMPION_DEF_AEW_TAG,
    RA_VIC_CHAMPION_DEF_FTW,
    RA_VIC_CHAMPION_NEW_AEW,
    RA_VIC_CHAMPION_NEW_TNT,
    RA_VIC_CHAMPION_NEW_AEW_WOMEN,
    RA_VIC_CHAMPION_NEW_AEW_TAG,
    RA_VIC_CHAMPION_NEW_FTW,
};

