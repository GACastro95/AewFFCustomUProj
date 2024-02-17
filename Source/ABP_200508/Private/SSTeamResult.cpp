#include "SSTeamResult.h"

FSSTeamResult::FSSTeamResult() {
    this->FinishedType = ESSFinishedMatchType::None;
    this->TeamScore = 0;
    this->ScoreRanking = 0;
    this->SurvivorRanking = 0;
    this->TotalRanking = 0;
    this->AliveState = ESSTeamAliveState::Disabled;
    this->Synced = false;
}

