#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketTypeBP.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketTypeBP : uint8 {
    Sys_General,
    Sys_SessionEvent,
    Sys_Connection,
    Sys_LatencyCheck = 10,
    Sys_LatencyInfo,
    Sys_GameClock,
    Sys_AFMemberInfo = 30,
    Sys_AFHostMigration,
    Sys_AFGameFlow,
    App_GameEvent = 50,
    Unique_PlayerDataForSetup = 100,
    Sample_ObjectParam = 230,
    Sample_ShootingGameControl,
};

