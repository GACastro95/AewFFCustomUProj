#include "ActionQueryLeaderboard.h"

UActionQueryLeaderboard* UActionQueryLeaderboard::ActionQueryLeaderboard(UObject* WorldContextObject, const FString& Name, int32 Season, bool PlatformOnly, float ScoreScale, bool bForce) {
    return NULL;
}

void UActionQueryLeaderboard::Abort() {
}

UActionQueryLeaderboard::UActionQueryLeaderboard() {
    this->WorldContext = NULL;
    this->QueryScoreScale = 0.00f;
    this->QuerySeason = 0;
    this->QueryPlatformOnly = false;
    this->bForceQuery = false;
    this->Leaderboards = NULL;
}

