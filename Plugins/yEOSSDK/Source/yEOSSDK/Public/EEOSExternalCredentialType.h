#pragma once
#include "CoreMinimal.h"
#include "EEOSExternalCredentialType.generated.h"

UENUM(BlueprintType)
enum class EEOSExternalCredentialType : uint8 {
    None,
    Epic,
    Steam,
    PSN,
    XboxLive,
    NintendoID,
    NintendoNSAID,
    GDK,
};

