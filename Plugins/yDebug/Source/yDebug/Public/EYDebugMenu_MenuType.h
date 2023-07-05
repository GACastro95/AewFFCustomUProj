#pragma once
#include "CoreMinimal.h"
#include "EYDebugMenu_MenuType.generated.h"

UENUM(BlueprintType)
enum class EYDebugMenu_MenuType : uint8 {
    None,
    MenuBar,
    ContextMenu,
    EYDebugMenu_MAX UMETA(Hidden),
};

