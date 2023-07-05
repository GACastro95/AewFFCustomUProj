#include "CareerMatchCardCore.h"

FCareerMatchCardCore::FCareerMatchCardCore() {
    this->MatchType = ECareerMatchType::SINGLE;
    this->ArenaRank = ECareerArenaType::DARK;
    this->Player = EWrestlerID_N::None;
    this->Partner = EWrestlerID_N::None;
    this->OpponentA = EWrestlerID_N::None;
    this->OpponentB = EWrestlerID_N::None;
    this->OpponentC = EWrestlerID_N::None;
    this->OpponentD = EWrestlerID_N::None;
    this->Skill = 0;
    this->Money = 0;
    this->bChampionship = false;
}

