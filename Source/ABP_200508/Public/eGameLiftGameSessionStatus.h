#pragma once
#include "CoreMinimal.h"
#include "eGameLiftGameSessionStatus.generated.h"

UENUM(BlueprintType)
enum class eGameLiftGameSessionStatus : uint8 {
    eSTATE_Activating,
    eSTATE_Active,
    eSTATE_Error,
    eSTATE_NotSet,
    eSTATE_Terminating,
    eSTATE_Terminated,
    eSTATE_Not,
    eSTATE_MAX UMETA(Hidden),
};

