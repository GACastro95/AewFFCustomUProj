#include "ChallengeProgressDetailInfo.h"

FChallengeProgressDetailInfo::FChallengeProgressDetailInfo() {
    this->ChallengeId = 0;
    this->PeriodType = EChallengePeriodType::Daily;
    this->OnlineModeOnly = false;
    this->NowAchievementCount = 0;
    this->MaxAchievementCount = 0;
    this->IsAchieved = false;
    this->RewardCash = 0;
    this->RewardBattlePassPoint = 0;
    this->RewardItemType = EBattlePassRewardItemType::None;
    this->RewardItemId = 0;
    this->TextFormatType = EChallengeTextFormatType::NoFormat;
    this->SSModeChallenge = false;
}

