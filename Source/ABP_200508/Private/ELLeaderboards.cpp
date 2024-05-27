#include "ELLeaderboards.h"

UELLeaderboards::UELLeaderboards() {
    this->ELStats = NULL;
    this->EOSLeaderboards = NULL;
    this->EOSFriend = NULL;
    this->EOSUser = NULL;
    this->EOSUserManager = NULL;
    this->LeaderboardStatNames.AddDefaulted(18);
    this->SeasonNum = 0;
    this->CurrentSeason = 0;
}

void UELLeaderboards::SetEOSLeaderboards(UEOSLeaderboard* InEOSLeaderboards) {
}

void UELLeaderboards::SetCurrentSeason(int32 Season) {
}

void UELLeaderboards::OnQueryLeaderboardsInfo(EEOSLeaderboardEvent EOSLeaderboardEvent, const TMap<FString, FEOSLeaderboardsDefinitionData>& LeaderboardDefinitionData) {
}

bool UELLeaderboards::HasLeaderboard(const FString& LeaderboardName, int32 Season, bool bPlatformOnly) const {
    return false;
}

bool UELLeaderboards::GetSeasonTime(int32 Season, FDateTime& StartTime, FDateTime& EndTime) const {
    return false;
}

int32 UELLeaderboards::GetSeasonNum() const {
    return 0;
}

bool UELLeaderboards::GetMonthlySeasonFromCurrent(int32& Season, int32 OffsetMonth) const {
    return false;
}

bool UELLeaderboards::GetLeaderboardId(const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FString& LeaderboardId) const {
    return false;
}

bool UELLeaderboards::GetCurrentSeason(int32& Season) const {
    return false;
}

bool UELLeaderboards::GetCurrentMonthlySeason(int32& Season) const {
    return false;
}

bool UELLeaderboards::FindCurrentSeason(int32& Season) const {
    return false;
}

void UELLeaderboards::ClearUserScoreCache(const TArray<FString>& ExcludeLeaderboardNames) {
}

void UELLeaderboards::ClearUserDataMap() {
}

void UELLeaderboards::ClearLeaderboardStatsCache(const TArray<FString>& ExcludeUserIds) {
}

void UELLeaderboards::ClearLeaderboardsCache(const TArray<FString>& ExcludeLeaderboardNames) {
}

void UELLeaderboards::ClearCache() {
}


