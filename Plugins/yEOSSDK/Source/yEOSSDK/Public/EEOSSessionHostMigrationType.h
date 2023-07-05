#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionHostMigrationType : uint8 {
    None,
    HostQuitGame,
    DisconnectedHost,
    HostMigration,
    HostMigrationError,
    HostMigrationSwitchHost,
    HostMigrationUpdateSession,
    HostMigrationRetry,
    HostMigrationErrorRetry,
    HostMigrationFromClient,
    HostMigrationFromClientRetry,
    RequestUpdateState,
};

