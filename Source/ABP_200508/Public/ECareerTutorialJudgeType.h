#pragma once
#include "CoreMinimal.h"
#include "ECareerTutorialJudgeType.generated.h"

UENUM(BlueprintType)
enum class ECareerTutorialJudgeType : uint8 {
    None,
    EventName,
    OpenDarkMenu,
    OpenRampageMenu,
    SnapShot,
    WorkoutFail,
    WorkoutSuccess,
    MatchReward,
    MatchAdvice,
    Dining,
    SightSeeing,
    Minigame,
    Promotion,
    SkillPointOver,
};

