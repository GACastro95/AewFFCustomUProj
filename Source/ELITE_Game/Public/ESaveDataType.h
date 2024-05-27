#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataType : uint8 {
    Unknown,
    GameSystem,
    PlayerData,
    OnlineInfo,
    JukeBox,
    Achievement,
    MiniGame,
    Jpeg = 10,
    PNG,
    UGC_Room = 50,
    UGC_Wrestler,
    UGC_Arena,
    UGC_Team = 54,
    CareerMode = 100,
    CareerModeSnapshot,
    CareerModeSystem,
    SSMode = 110,
    Tournament = 115,
    Max = 255,
    KindStart = GameSystem,
    KindEnd = Jpeg,
};

