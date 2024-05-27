#include "ELLeaderboardUserStats.h"

UELLeaderboardUserStats::UELLeaderboardUserStats() {
}

UELLeaderboardUserSeasonStats* UELLeaderboardUserStats::GetUserSeasonStats(int32 Season) const {
    return NULL;
}

int32 UELLeaderboardUserStats::GetStat(const FString& StatName, int32 Season, int32 DefaultValue) const {
    return 0;
}

void UELLeaderboardUserStats::GetLeaderboardSSRankPoint(int32& SSRankPoint) const {
}

void UELLeaderboardUserStats::GetLeaderboardPlayerRankPoint(int32& PlayerRankPoint) const {
}

void UELLeaderboardUserStats::GetLeaderboardPlayerRank(int32& PlayerRank, int32& PlayerRankPoint) const {
}

void UELLeaderboardUserStats::GetLeaderboardPlayerIcon(int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) const {
}

void UELLeaderboardUserStats::GetLeaderboardPlayerExternalAccountId(FString& AccountId) const {
}

void UELLeaderboardUserStats::GetLeaderboardPlayerBadges(TArray<int32>& Badges) const {
}

void UELLeaderboardUserStats::GetLeaderboardBattlePassPoint(int32& BattlePassPoint) const {
}

bool UELLeaderboardUserStats::FindStat(const FString& StatName, int32 Season, int32& Value) const {
    return false;
}

bool UELLeaderboardUserStats::FindLatestStat(const FString& StatName, int32& Value) const {
    return false;
}


