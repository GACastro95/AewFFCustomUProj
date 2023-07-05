#include "ELMatchRecordsProfileInfo.h"

FELMatchRecordsProfileInfo::FELMatchRecordsProfileInfo() {
    this->MatchScoreAverage = 0.00f;
    this->MatchScoreMax = 0;
    this->MatchTime_Longest = 0.00f;
    this->MatchTime_Shortest = 0.00f;
    this->WeaponAttachCount = 0;
    this->TableCrushCount = 0;
    this->DropOnThumbtacksCount = 0;
    this->WasDroppedOnThumbtacksCount = 0;
    this->ExplosionCount = 0;
    this->TimeupExplosionCount = 0;
    this->EliminateInBattleRoyalCount = 0;
    this->BattleRoyalWinCount = 0;
    this->LastBattleRoyalWinner = EWrestlerID_N::None;
    this->TotalDistance = 0.00f;
    this->WiningStreakForOnline = 0;
}

