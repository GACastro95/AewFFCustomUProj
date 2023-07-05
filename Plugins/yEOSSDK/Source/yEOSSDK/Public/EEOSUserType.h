#pragma once
#include "CoreMinimal.h"
#include "EEOSUserType.generated.h"

UENUM(BlueprintType)
enum class EEOSUserType : uint8 {
    Local,
    Friend,
    Lobby,
    Session,
    Other,
};

