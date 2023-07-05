#pragma once
#include "CoreMinimal.h"
#include "EEOSLoginStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSLoginStatus : uint8 {
    NotLoggedin,
    LoginLocalProfile,
    Loggedin,
};

