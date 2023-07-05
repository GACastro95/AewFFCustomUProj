#pragma once
#include "CoreMinimal.h"
#include "ESSDebugStringCategory.generated.h"

UENUM(BlueprintType)
enum class ESSDebugStringCategory : uint8 {
    Default,
    OneFrame,
    ThreeSeconds,
    GameSession,
    Version,
    API,
    NetworkError,
    UniqueError,
    DiffPlayerData,
    DebugStatus,
    RTT,
    ActionStatePlayer,
    RoundInfo,
    MapAreaInfo,
    GameFlow,
    ClientFlow,
    LobbyState,
    OnRepLog_ElapsedTime,
    RPCTest,
    Result,
    NotifyDebugCommand,
    MatchMake,
    MatchMakeRegion,
    DataLoading,
    SSMainMenu,
    Tips,
    TitleStorage,
    Max,
};

