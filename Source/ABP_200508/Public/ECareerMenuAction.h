#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuAction.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuAction : uint8 {
    None,
    MainMenu_DynamiteMatch,
    MainMenu_ViewStats,
    MainMenu_Snapshot,
    Training_LightWorkout,
    Training_StandardRoutine,
    Training_IntenseTraining,
    Restaurant_HighGradeRestaurant,
    Restaurant_FirstFood,
    Restaurant_Catering,
    Restaurant_RegionFood,
    Hospital_MedicalTreatmentA,
    Hospital_MedicalTreatmentB,
    Promotion_FanEvent,
    Promotion_TVShow,
    Promotion_MovieAppearance,
    Promotion_AutographSession,
    Promotion_PressConference,
    OtherAction_SightSeeing,
    OtherAction_Casino,
    OtherAction_Minigame,
    Match_AEWDynamite,
    Match_AEWDark,
    Match_AEWElevation,
    OtherOptions_WrestlerSettings,
    OtherOptions_ViewStats,
    OtherOptions_AEWRanking,
    OtherOptions_UseItems,
    OtherOptions_TemShop,
    OtherOptions_SaveAndExit,
};

