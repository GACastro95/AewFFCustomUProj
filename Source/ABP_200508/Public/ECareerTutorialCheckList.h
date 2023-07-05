#pragma once
#include "CoreMinimal.h"
#include "ECareerTutorialCheckList.generated.h"

UENUM(BlueprintType)
enum class ECareerTutorialCheckList : uint8 {
    WelcomeToRTE,
    PrepareMatch,
    AboutBlock,
    AboutParameter,
    AboutShop,
    OpenDark,
    OpenRampage,
    JoinDarkOrder_1,
    JoinDarkOrder_2,
    NoTime_1,
    NoTime_2,
    NoTime_3,
    InjuryEvent,
    GauntletMatch_1,
    GauntletMatch_2,
    TimeLimit,
    AboutSnapShot,
    WorkoutFail_1,
    WrokoutSuccess_1,
    WrokoutSuccess_2,
    MatctReward,
    MatctAdvice_1,
    MatctAdvice_2,
    MatctAdvice_3,
    MatctAdvice_4,
    Dining,
    SightSeeing,
    Minigame,
    Promotion,
    SkillPointOver_1,
    SkillPointOver_2,
    Max,
};

