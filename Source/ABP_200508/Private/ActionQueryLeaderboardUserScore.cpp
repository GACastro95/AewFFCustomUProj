#include "ActionQueryLeaderboardUserScore.h"

UActionQueryLeaderboardUserScore::UActionQueryLeaderboardUserScore() {
    this->WorldContextObject = NULL;
    this->ScoreScale = 0.00f;
    this->QuerySeason = 0;
    this->QueryPlatformOnly = false;
    this->bForce = false;
    this->Leaderboards = NULL;
}

UActionQueryLeaderboardUserScore* UActionQueryLeaderboardUserScore::ActionQueryLeaderboardUserScore(UObject* NewWorldContextObject, const TArray<FString>& NewUserIds, const FString& Name, int32 Season, bool PlatformOnly, float NewScoreScale, bool NewBForce) {
    return NULL;
}

void UActionQueryLeaderboardUserScore::Abort() {
}


