#include "ChallengeAchievementParameter.h"

FChallengeAchievementParameter::FChallengeAchievementParameter() {
    this->UniqueID = 0;
    this->OnlineModeOnly = false;
    this->PeriodType = EChallengePeriodType::Daily;
    this->ActionType = EChallengeActionType::PlayMatch;
    this->MatchRuleType = EChallengeMatchRuleType::OneOnOne;
    this->UseWrestler = EWrestlerID_N::None;
    this->OpponentState = EChallengeOpponentState::None;
    this->CpuDifficultyType = EChallengeCpuDifficultyType::Easy;
    this->MatchEndConditionType = EChallengeMatchEndConditionType::None;
    this->HitSkillType = EChallengeHitSkillType::None;
    this->WinTheTitleType = EChallengeWinTheTitleType::None;
    this->OptionalValue = 0;
    this->AchievementCount = 0;
    this->RewardAEWCash = 0;
    this->RewardBattlePassPoint = 0;
    this->RewardItemType = EBattlePassRewardItemType::None;
    this->RewardItemId = 0;
    this->RewardItemNum = 0;
    this->TextFormatType = EChallengeTextFormatType::NoFormat;
}

