#include "ELLeaderboardsUtility.h"

FDateTime UELLeaderboardsUtility::GetUserScoreQueryDateTime(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly) {
    return FDateTime{};
}

void UELLeaderboardsUtility::GetSubLeaderboardUserData(const TArray<FELLeaderboardUserData>& InUserDataArray, int32 StartIndex, int32 EndIndex, TArray<FELLeaderboardUserData>& OutUserDataArray) {
}

FDateTime UELLeaderboardsUtility::GetLeaderboardUserStatsQueryDateTime(const UObject* WorldContextObject, const FString& ProductUserID, int32 Season) {
    return FDateTime{};
}

UELLeaderboardUserStats* UELLeaderboardsUtility::GetLeaderboardUserStats(const UObject* WorldContextObject, const FString& UserId) {
    return NULL;
}

UELLeaderboardUserSeasonStats* UELLeaderboardsUtility::GetLeaderboardUserSeasonStats(const UObject* WorldContextObject, const FString& UserId, int32 Season) {
    return NULL;
}

FDateTime UELLeaderboardsUtility::GetLeaderboardQueryDateTime(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly) {
    return FDateTime{};
}

bool UELLeaderboardsUtility::GetLeaderboardProductUserIds(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, TArray<FString>& ProductUserIDs) {
    return false;
}

UELLeaderboards* UELLeaderboardsUtility::GetELLeaderboards(const UObject* WorldContextObject) {
    return NULL;
}

int32 UELLeaderboardsUtility::FindUserScoreRank(const UObject* WorldContextObject, const FString& UserId) {
    return 0;
}

int32 UELLeaderboardsUtility::FindUserLeaderboardRank(const UObject* WorldContextObject, const FString& UserId) {
    return 0;
}

int32 UELLeaderboardsUtility::FindUserData(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, const FString& UserId, FELLeaderboardUserData& UserData) {
    return 0;
}

int32 UELLeaderboardsUtility::FindMyUserScoreRank(const UObject* WorldContextObject) {
    return 0;
}

int32 UELLeaderboardsUtility::FindMyUserData(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, FELLeaderboardUserData& UserData) {
    return 0;
}

int32 UELLeaderboardsUtility::FindMyLeaderboardUserDataByLeaderboadName(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData) {
    return 0;
}

int32 UELLeaderboardsUtility::FindMyLeaderboardUserData(const UObject* WorldContextObject, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData) {
    return 0;
}

int32 UELLeaderboardsUtility::FindMyLeaderboardRank(const UObject* WorldContextObject) {
    return 0;
}

int32 UELLeaderboardsUtility::FindLeaderboardUserDataByLeaderboadName(const UObject* WorldContextObject, const FString& UserId, const FString& DisplayName, const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData) {
    return 0;
}

int32 UELLeaderboardsUtility::FindLeaderboardUserData(const UObject* WorldContextObject, const FString& UserId, const FString& DisplayName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData) {
    return 0;
}

UELLeaderboardsUtility::UELLeaderboardsUtility() {
}

