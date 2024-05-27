#pragma once
#include "CoreMinimal.h"
#include "EYGS2AnalyticsType.generated.h"

UENUM(BlueprintType)
enum class EYGS2AnalyticsType : uint8 {
    None,
    Offline,
    Createion = 50,
    Online = 100,
    Casual_MatchingInfo,
    Ranked_MatchingInfo,
    Private_MatchingInfo,
    Casual_CreatedLobby = 110,
    Casual_DeleteLobby,
    Casual_BeginSearchLobby,
    Casual_EndSearchLobby,
    Casual_BeginMatch,
    Casual_EndMatch,
    Ranked_CreatedLobby = 120,
    Ranked_DeleteLobby,
    Ranked_BeginSearchLobby,
    Ranked_EndSearchLobby,
    Ranked_BeginMatch,
    Ranked_EndMatch,
    Private_CreatedLobby = 130,
    Private_DeleteLobby,
    Private_BeginSearchLobby,
    Private_EndSearchLobby,
    Private_BeginMatch,
    Private_EndMatch,
    SS_Mode = 150,
    SS_MatchingInfo,
};

