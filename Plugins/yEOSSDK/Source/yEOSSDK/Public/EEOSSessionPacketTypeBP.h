#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketTypeBP.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketTypeBP : uint8 {
    Sys_General,
    Sys_SessionEvent,
    Sys_Connection,
    Sys_LatencyCheck = 0xA,
    Sys_LatencyInfo,
    Sys_GameClock,
    Sys_AFMemberInfo = 0x1E,
    Sys_AFHostMigration,
    Sys_AFGameFlow,
    App_GameEvent = 0x32,
    Unique_PlayerDataForSetup = 0x64,
    Sample_ObjectParam = 0xE6,
    Sample_ShootingGameControl,
};

