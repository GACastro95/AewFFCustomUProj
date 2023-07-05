#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientViolationType.generated.h"

UENUM(BlueprintType)
enum class EEOSAntiCheatClientViolationType : uint8 {
    None,
    IntegrityCatalogNotFound,
    IntegrityCatalogError,
    IntegrityCatalogCertificateRevoked,
    IntegrityCatalogMissingMainExecutable,
    GameFileMismatch,
    RequiredGameFileNotFound,
    UnknownGameFileForbidden,
    SystemFileUntrusted,
    ForbiddenModuleLoaded,
    CorruptedMemory,
    ForbiddenToolDetected,
    InternalAntiCheatViolation,
    CorruptedNetworkMessageFlow,
    VirtualMachineNotAllowed,
    ForbiddenSystemConfiguration,
};

