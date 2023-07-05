#pragma once
#include "CoreMinimal.h"
#include "EEOSAutoCreationSessionP2PType.generated.h"

UENUM(BlueprintType)
enum class EEOSAutoCreationSessionP2PType : uint8 {
    NoUsed,
    GenerarSessionP2P,
    WithGameFlowManager,
};

