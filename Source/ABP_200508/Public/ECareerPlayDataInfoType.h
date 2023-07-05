#pragma once
#include "CoreMinimal.h"
#include "ECareerPlayDataInfoType.generated.h"

UENUM(BlueprintType)
enum class ECareerPlayDataInfoType : uint8 {
    Finished,
    MainMenu,
    StartWrestlerInfo,
    StartWrestlerType,
    StartDificulty,
    StartVegetarian,
    PurchaseItem,
    UseItem,
    SkillParameter,
    SkillAction,
    SkillPassive,
    PPVRemainingTurn,
    SelectHubMenu,
    Snapshot,
    EventCutScene,
    TransitionScenario,
    PartnerWrestlerID,
    SelectStory,
};

