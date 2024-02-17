#pragma once
#include "CoreMinimal.h"
#include "ECareerEventState.generated.h"

UENUM(BlueprintType)
enum class ECareerEventState : uint8 {
    ECareerEventState_None,
    ECareerEventState_WaitFadeIn,
    ECareerEventState_EventStart,
    ECareerEventState_EventTitle,
    ECareerEventState_EventTitleWait,
    ECareerEventState_EventTitleEnd,
    ECareerEventState_EventContinue,
    ECareerEventState_EventContinue_CheckTutorial,
    ECareerEventState_EventMessageStart,
    ECareerEventState_EventMessage,
    ECareerEventState_EventMessageEnd,
    ECareerEventState_EventChoices,
    ECareerEventState_EventChoicesEnd,
    ECareerEventState_EventEndCheck,
    ECareerEventState_EventSkip_StartFadeOut,
    ECareerEventState_EventSkip_Message,
    ECareerEventState_EventSkip_StartFadeIn,
    ECareerEventState_EventSkip_NextState,
    ECareerEventState_EventResult,
    ECareerEventState_EventResultEnd,
    ECareerEventState_RewardPrepare,
    ECareerEventState_RewardGet,
    ECareerEventState_RewardEnd,
    ECareerEventState_SnapShotStart,
    ECareerEventState_SnapShotPrepare,
    ECareerEventState_SnapShotTimeAdjust,
    ECareerEventState_SnapShotCapture,
    ECareerEventState_SnapShotCapture_Wait,
    ECareerEventState_SnapShotTake,
    ECareerEventState_SnapShotEnd,
    ECareerEventState_SelectDatePartner,
    ECareerEventState_ReportMenu,
    ECareerEventState_StoryEndCheck,
    ECareerEventState_CheckTutorial,
    ECareerEventState_StoryEnd,
    ECareerEventState_MAX UMETA(Hidden),
};

