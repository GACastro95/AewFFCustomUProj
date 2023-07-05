#include "EOSLeaderboard.h"

void UEOSLeaderboard::SetLeaderboardApiVersion(FEOSLeaderboardAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSLeaderboard::RequestQueryUserScores(const TArray<FString>& _cLeaderboardIds, const TArray<FString>& _cProductUserIds) {
    return false;
}

bool UEOSLeaderboard::RequestQueryRanks(const FString& _strLeaderboardId) {
    return false;
}

bool UEOSLeaderboard::RequestQueryLeaderboardInfo() {
    return false;
}

bool UEOSLeaderboard::GetLeaderboardUserScoreDataFromCache(TArray<FEOSLeaderboardsUserScoreData>& _rstUserScoreData, const FString& _strLeaderboardId) {
    return false;
}

bool UEOSLeaderboard::GetLeaderboardRecordDataFromCache(TArray<FEOSLeaderboardsRecordData>& _rstRecordData, const FString& _strLeaderboardId) {
    return false;
}

bool UEOSLeaderboard::GetLeaderboardDefinitionDataFromCache(FEOSLeaderboardsDefinitionData& _rstDefinitionData, const FString& _strLeaderboardId) {
    return false;
}

UEOSLeaderboard::UEOSLeaderboard() {
}

