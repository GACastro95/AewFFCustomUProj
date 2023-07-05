#pragma once
#include "CoreMinimal.h"
#include "ECareerLevelInfo.generated.h"

UENUM(BlueprintType)
enum class ECareerLevelInfo : uint8 {
    Career_Level_None,
    Career_Level_Hub,
    Career_Level_Map,
    Career_Level_Event,
    Career_Level_CutScene,
    Career_Level_MovieScene,
    Career_Level_Minigame,
    Career_Level_LayoutScene,
    Career_Level_OtherMenu,
    Career_Level_StartSequence,
    Career_Level_MAX UMETA(Hidden),
};

