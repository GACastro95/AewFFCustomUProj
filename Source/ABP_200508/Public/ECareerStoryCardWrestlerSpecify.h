#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryCardWrestlerSpecify.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryCardWrestlerSpecify : uint8 {
    None,
    Player,
    Partner,
    Rival,
    Date,
    OpponentA,
    OpponentB,
    OpponentC,
    OpponentD,
    Direct,
    DefaultPartner,
    All,
    HERO,
    SHY,
    CONFIOENT,
    ENIGMA,
    MONSTER,
    JERK,
};

