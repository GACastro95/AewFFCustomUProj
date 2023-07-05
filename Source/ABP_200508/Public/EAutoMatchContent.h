#pragma once
#include "CoreMinimal.h"
#include "EAutoMatchContent.generated.h"

UENUM(BlueprintType)
enum class EAutoMatchContent : uint8 {
    AutoMatch,
    MatchType,
    Arena,
    RosterType1,
    Roster1,
    RosterType2,
    Roster2,
    RosterType3,
    Roster3,
    RosterType4,
    Roster4,
    MatchCount,
    AutoMatchEndTime,
    TableName,
    AutoMatchContentMax,
};

