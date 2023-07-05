#pragma once
#include "CoreMinimal.h"
#include "ECareerPostCommandEventType.generated.h"

UENUM(BlueprintType)
enum class ECareerPostCommandEventType : uint8 {
    NONE,
    LIGHT_WORKOUT,
    STANDARD_ROUTINE,
    INTENSE_TRAINING,
    DINING,
    MEDICAL_TREATMENT_A,
    MEDICAL_TREATMENT_B,
    SIGHTSEEING,
    PRESS_CONFERENCE,
    TV_SHOW,
    AUTOGRAPH_SESSION,
    MINIGAME,
    DARK_MALE_SINGLE_A,
    DARK_MALE_SINGLE_B,
    DARK_MALE_TAG_A,
    DARK_MALE_TAG_B,
    DARK_FEMALE_SINGLE_A,
    DARK_FEMALE_SINGLE_B,
};

