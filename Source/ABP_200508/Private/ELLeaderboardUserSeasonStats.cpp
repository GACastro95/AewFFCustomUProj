#include "ELLeaderboardUserSeasonStats.h"

void UELLeaderboardUserSeasonStats::UpdateRequestDateTime() {
}

void UELLeaderboardUserSeasonStats::UpdateQueryDateTime() {
}

int32 UELLeaderboardUserSeasonStats::GetStat(const FString& StatName, int32 DefaultValue) const {
    return 0;
}

void UELLeaderboardUserSeasonStats::GetLeaderboardSSRankPoint(int32& SSRankPoint) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardPlayerRankPoint(int32& PlayerRankPoint) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardPlayerRank(int32& PlayerRank, int32& PlayerRankPoint) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardPlayerIcon(int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardPlayerExternalAccountId(FString& AccountId) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardPlayerBadges(TArray<int32>& Badges) const {
}

void UELLeaderboardUserSeasonStats::GetLeaderboardBattlePassPoint(int32& BattlePassPoint) const {
}

FDateTime UELLeaderboardUserSeasonStats::GetLastRequestDateTime() const {
    return FDateTime{};
}

FDateTime UELLeaderboardUserSeasonStats::GetLastQueryDateTime() const {
    return FDateTime{};
}

bool UELLeaderboardUserSeasonStats::FindStat(const FString& StatName, int32& Value) const {
    return false;
}

UELLeaderboardUserSeasonStats::UELLeaderboardUserSeasonStats() {
}

