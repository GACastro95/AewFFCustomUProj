#pragma once
#include "CoreMinimal.h"
#include "EEOSRelayControl.generated.h"

UENUM(BlueprintType)
enum class EEOSRelayControl : uint8 {
    NoRelays,
    AllowRelays,
    ForceRelays,
};

