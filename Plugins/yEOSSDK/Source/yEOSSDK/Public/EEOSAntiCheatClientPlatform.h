#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientPlatform.generated.h"

UENUM(BlueprintType)
enum class EEOSAntiCheatClientPlatform : uint8 {
    Unknown,
    Windows,
    Mac,
    Linux,
    Xbox,
    Playstation,
    Nintendo,
    iOS,
    Android,
};

