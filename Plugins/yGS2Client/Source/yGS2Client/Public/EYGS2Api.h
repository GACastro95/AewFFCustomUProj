#pragma once
#include "CoreMinimal.h"
#include "EYGS2Api.generated.h"

UENUM(BlueprintType)
enum class EYGS2Api : uint8 {
    None,
    GetInfo,
    Ping,
    AppAuth,
    UserAuth,
    RegistUser,
    GetSSInfo,
    GetPlayerData,
    SetPlayerData,
    PurchaseHistory,
    ConsumeGold,
    ConsumeItem,
    UserItems,
    BattlePass,
    UserStats,
    RankMatchRecord,
    ShopItems,
    Events,
    SetSSPlayerData,
    GetSSPlayerData,
    SetSSGameStart,
    SetSSGameResult,
    SetSSSessionResult,
    GetSSMasterData,
    Analytics,
};

