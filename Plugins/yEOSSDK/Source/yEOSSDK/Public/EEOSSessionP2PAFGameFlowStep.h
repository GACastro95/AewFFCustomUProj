#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAFGameFlowStep.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PAFGameFlowStep : uint8 {
    None,
    Initialized,
    BeginCheckLatency,
    EndCheckLatency,
    BeginSyncGameClock,
    EndSyncGameClock,
    BeginDistributeMatchData,
    EndDistributeMatchData,
    BeginInterchangeMatchData,
    EndInterchangeMatchData,
    Busy,
    Ready,
    BeginStartMatch,
    StartedMatch,
    BeginPauseMatch,
    PausedMatch,
    BeginResumeMatch,
    BeginFinishMatch,
    FinishedMatch,
    BeginSyncGameResult,
    EndSyncGameResult,
    BeginJoinInProgress,
    EndJoinInProgress,
    BeginQuitSession,
    EndQuitSession,
};

