#pragma once
#include "CoreMinimal.h"
#include "EYGS2AnalyticsType.generated.h"

UENUM(BlueprintType)
enum class EYGS2AnalyticsType : uint8 {
    None,
    Offline,
    Createion = 0x32,
    Online = 0x64,
    Casual_MatchingInfo,
    Ranked_MatchingInfo,
    Private_MatchingInfo,
    Casual_CreatedLobby = 0x6E,
    Casual_DeleteLobby,
    Casual_BeginSearchLobby,
    Casual_EndSearchLobby,
    Casual_BeginMatch,
    Casual_EndMatch,
    Ranked_CreatedLobby = 0x78,
    Ranked_DeleteLobby,
    Ranked_BeginSearchLobby,
    Ranked_EndSearchLobby,
    Ranked_BeginMatch,
    Ranked_EndMatch,
    Private_CreatedLobby = 0x82,
    Private_DeleteLobby,
    Private_BeginSearchLobby,
    Private_EndSearchLobby,
    Private_BeginMatch,
    Private_EndMatch,
    SS_Mode = 0x96,
    SS_MatchingInfo,
};

