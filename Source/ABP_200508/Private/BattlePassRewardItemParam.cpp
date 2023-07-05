#include "BattlePassRewardItemParam.h"

FBattlePassRewardItemParam::FBattlePassRewardItemParam() {
    this->SeasonNo = 0;
    this->Level = 0;
    this->ItemType = EBattlePassRewardItemType::None;
    this->IsNeedPremiumPass = false;
    this->ItemId = 0;
    this->ItemQuantity = 0;
}

