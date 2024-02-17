#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_Type.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_Type : uint8 {
    None,
    MatchRules,
    Championship,
    Intro,
    TeamName,
    RosterName,
    NameOpen,
    NameClose,
    TagName,
    TagOpen,
    TagClose,
    Victory,
    VictoryChampionship,
};

