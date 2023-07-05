#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationStep.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionHostMigrationStep : uint8 {
    None,
    BeginMigration,
    BeforeDestorySession,
    DestorySession,
    WaitDestorySession,
    BeforeCreateSession,
    CreateSession,
    WaitCreateSession,
    MigratePlayers,
    WaitMigratePlayers,
    ExchangeData,
    WaitExchangeData,
    FixedMigration,
    Timeout,
    Canceled,
};

