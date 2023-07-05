#pragma once
#include "CoreMinimal.h"
#include "eSSGameMatchMakeState.generated.h"

UENUM(BlueprintType)
enum class eSSGameMatchMakeState : uint8 {
    eSSGameMatchMakeState_Stay,
    eSSGameMatchMakeState_MatchMake,
    eSSGameMatchMakeState_MatchCheck,
    eSSGameMatchMakeState_MatchUpdate,
    eSSGameMatchMakeState_TimeOut,
    eSSGameMatchMakeState_StartCancel,
    eSSGameMatchMakeState_Cancel,
    eSSGameMatchMakeState_CancelFailed,
    eSSGameMatchMakeState_Placing,
    eSSGameMatchMakeState_Active,
    eSSGameMatchMakeState_Error,
    eSSGameMatchMakeState_Restart,
    eSSGameMatchMakeState_Failed,
};

