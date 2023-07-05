#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuState.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuState : uint8 {
    Initialize,
    Loading,
    Login,
    MenuSetup,
    Menu,
    Matching,
    ReturnToBaseGame,
    GoToInGame,
};

