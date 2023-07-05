#pragma once
#include "CoreMinimal.h"
#include "ECareerSpecialReward.generated.h"

UENUM(BlueprintType)
enum class ECareerSpecialReward : uint8 {
    None,
    StoicWrestler,
    StrongWrestler,
    BestBoutMachine,
    GourmetWrestler,
    SightseeingMaster,
    SnapshotMaster,
    PromotionMaster,
    WorkoutMaster,
    MinigameMaster,
    AEWWorldChampion,
    AEWWomansWorldChampion,
    TNTChampion,
    TBSChampion,
    FTWChampion,
    AEWWorldTagChampion,
    BestInTheWorld,
    MAX,
};

