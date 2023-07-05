#pragma once
#include "CoreMinimal.h"
#include "EYGS2DebugMenuCommand.generated.h"

UENUM(BlueprintType)
enum class EYGS2DebugMenuCommand : uint8 {
    None,
    GetInfo,
    Ping,
    AppAuth,
    UserAuth,
    GetPlayerData,
    GetUserItems,
    PurchaseHistory,
    FindPurchaseHistory,
    CreatePurchaseHistory,
    ConsumeGold,
    ConsumeGoldHistory,
    CreateConsumeGold,
    ConsumeItem,
    ConsumeItemHistory,
    CreateConsumeItem,
    GetBattlePassData,
    UpdateBattlePassData,
    SetUserStats,
    GetUserStats,
    GetShopItems,
    SetUserStats_SampleStruct,
    GetUserStats_SampleStruct,
    AddEvent,
    DBG_SetPlayerData,
    DBG_Reset,
    SetSSPlayerData,
    GetSSPlayerData,
    Max,
};

