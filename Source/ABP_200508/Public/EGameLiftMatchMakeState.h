#pragma once
#include "CoreMinimal.h"
#include "EGameLiftMatchMakeState.generated.h"

UENUM(BlueprintType)
enum class EGameLiftMatchMakeState : uint8 {
    eGameLiftMatchMakeState_Begin,
    eGameLiftMatchMakeState_SearchSession,
    eGameLiftMatchMakeState_NewSession,
    eGameLiftMatchMakeState_JoinGameSession,
    eGameLiftMatchMakeState_JoinPlayerSession,
    eGameLiftMatchMakeState_SessionStart,
    eGameLiftMatchMakeState_RandomMatching,
    eGameLiftMatchMakeState_MAX UMETA(Hidden),
};

