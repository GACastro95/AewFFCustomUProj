#include "ELOnlineRankCalculator.h"

UELOnlineRankCalculator::UELOnlineRankCalculator() {
    this->RankArray.AddDefaulted(11);
    this->SSPlayerRankTable.AddDefaulted(12);
    this->WinPoint = 10;
    this->LosePoint = -4;
    this->WinStreakCoeff = 0.00f;
    this->WinStreakCoeff2 = 1.00f;
    this->LoseStreakCoeff = -1.00f;
    this->LoseStreakCoeff2 = 0.00f;
    this->RankDiffWinBonus = 10;
    this->RankDiffLosePenalty = -10;
    this->LeaderboardRankMax = 100;
    this->RankPointMax = 999999990;
}

int32 UELOnlineRankCalculator::GetSSPlayerRankFromPlayerRankPoint(int32 RankPoint, int32 LeaderboardRank) const {
    return 0;
}

float UELOnlineRankCalculator::GetRankPointRatio(int32 Rank, int32 RankPoint) const {
    return 0.0f;
}

FName UELOnlineRankCalculator::GetRankName(int32 Rank) const {
    return NAME_None;
}

FName UELOnlineRankCalculator::GetRankGroupName(int32 Rank) const {
    return NAME_None;
}

int32 UELOnlineRankCalculator::GetRankFromRankPoint(int32 RankPoint, int32 LeaderboardRank) const {
    return 0;
}

int32 UELOnlineRankCalculator::ClampRankPoint(int32 RankPoint) {
    return 0;
}

bool UELOnlineRankCalculator::CalcRank(int32& Rank, int32& RankPoint, int32 AddRankPoint, int32 LeaderboardRank) {
    return false;
}

int32 UELOnlineRankCalculator::CalcAddPoint(bool Win, bool Lose, int32 WinStreak, int32 LoseStreak, int32 RankDiff) {
    return 0;
}


