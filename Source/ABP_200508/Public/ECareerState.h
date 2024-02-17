#pragma once
#include "CoreMinimal.h"
#include "ECareerState.generated.h"

UENUM(BlueprintType)
enum class ECareerState : uint8 {
    ECareerState_None,
    ECareerState_TurnCheck_Init,
    ECareerState_TurnCheck_1st,
    ECareerState_TurnCheck_2nd,
    ECareerState_StageStart,
    ECareerState_StatusWidgetUpdate,
    ECareerState_Week,
    ECareerState_WeekStart,
    ECareerState_CheckSnapshot,
    ECareerState_ShowSnapshot,
    ECareerState_MainMenu,
    ECareerState_MainMenuInformation,
    ECareerState_MainMenuTutorial,
    ECareerState_MainMenu_Select,
    ECareerState_MenuChoiceAction,
    ECareerState_MenuTraning,
    ECareerState_MenuRestaurant,
    ECareerState_MenuHospital,
    ECareerState_MenuPromotion,
    ECareerState_MenuOtherAction,
    ECareerState_MenuDarkMatch,
    ECareerState_MenuDynamiteMatch,
    ECareerState_MenuOtherOption,
    ECareerState_Snapshot,
    ECareerState_SnapshotTake,
    ECareerState_TutorialArchive,
    ECareerState_WrestlerSettings,
    ECareerState_OpenDialog_SaveAndExit,
    ECareerState_SaveAndExit,
    ECareerState_OpenDialog_GotoDynamite_TurnSkip,
    ECareerState_SaveAndExit_OutAnimation,
    ECareerState_GotoDynamite_OutAnimation,
    ECareerState_GotoDynamite,
    ECareerState_MenuActionResultEnd,
    ECareerState_VehicleMoveCity,
    ECareerState_CommandEnd,
    ECareerState_LevelChange,
    ECareerState_CareerModeEndCheck,
    ECareerState_OpenDialog_ResultMessage,
    ECareerState_CheckSpecialReward,
    ECareerState_ShowSpecialReward,
    ECareerState_OpenDialog_CareerModeEnd,
    ECareerState_OpenDialog_GetAEWCash,
    ECareerState_TotalResult,
    ECareerState_Result,
    ECareerState_End,
    ECareerState_MAX UMETA(Hidden),
};

