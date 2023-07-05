#pragma once
#include "CoreMinimal.h"
#include "EELDebugMenu_MenuType.generated.h"

UENUM(BlueprintType)
enum class EELDebugMenu_MenuType : uint8 {
    None,
    MenuBar,
    ContextMenu,
    EELDebugMenu_MAX UMETA(Hidden),
};

