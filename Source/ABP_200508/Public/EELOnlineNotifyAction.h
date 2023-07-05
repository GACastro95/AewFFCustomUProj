#pragma once
#include "CoreMinimal.h"
#include "EELOnlineNotifyAction.generated.h"

UENUM(BlueprintType)
enum class EELOnlineNotifyAction : uint8 {
    None,
    JoinSession,
    GoToOnline,
    GoToOtherMenu,
};

