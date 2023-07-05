#pragma once
#include "CoreMinimal.h"
#include "ESaveDataDebugEvent.generated.h"

UENUM(BlueprintType)
enum class ESaveDataDebugEvent : uint8 {
    None,
    OnClick_Login,
    OnClick_Logout,
};

