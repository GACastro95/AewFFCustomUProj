#pragma once
#include "CoreMinimal.h"
#include "EMainMenuState.generated.h"

UENUM(BlueprintType)
enum class EMainMenuState : uint8 {
    EMainMenuState_Start,
    EMainMenuState_PlayNetwork,
    EMainMenuState_RecoveryData,
    EMainMenuState_Setup,
    EMainMenuState_Error,
    EMainMenuState_Login,
    EMainMenuState_Menu,
    EMainMenuState_End,
};

