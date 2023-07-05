#pragma once
#include "CoreMinimal.h"
#include "EBehaviorTreeType.generated.h"

UENUM(BlueprintType)
enum class EBehaviorTreeType : uint8 {
    None,
    Default,
    Stop,
    AfterMatch,
    AutoFinisher,
    StrikeGuard,
    GrappleGuard,
    Aggressive,
    HandsInPocket,
    PinCut,
    AutoSignature,
    AutoPinFlow,
    SubmissionCut,
    MatchResult,
};

