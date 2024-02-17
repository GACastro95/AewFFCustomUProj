#include "SSRuleParam.h"

FSSRuleParam::FSSRuleParam() {
    this->ID = 0;
    this->RuleType = ESSRuleType::BattleRoyale;
    this->TeamType = ESSTeamType::Single;
    this->DataGroup = 0;
    this->MaxPlayersInParty = 0;
    this->MaxPlayersInGameSession = 0;
    this->VictoryCondition = ESSVictoryCondition::Survival;
    this->RespawnType = ESSRespawnType::None;
    this->RespawnLocationType = ESSRespawnLocationType::Default;
    this->MatchmakeType = ESSMatchmakeType::Default;
    this->RuleResourceId = 0;
    this->IsComingSoon = false;
}

