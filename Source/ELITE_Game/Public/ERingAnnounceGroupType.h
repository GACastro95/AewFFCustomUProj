#pragma once
#include "CoreMinimal.h"
#include "ERingAnnounceGroupType.generated.h"

UENUM(BlueprintType)
enum class ERingAnnounceGroupType : uint8 {
    Intro,
    ChampionShip,
    MatchRule,
    Victory,
    VictoryChampionShip,
    WrestlerName,
    TeamName,
    CustomName,
    Other,
};

