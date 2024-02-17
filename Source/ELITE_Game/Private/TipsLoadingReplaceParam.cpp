#include "TipsLoadingReplaceParam.h"

FTipsLoadingReplaceParam::FTipsLoadingReplaceParam() {
    this->DLCLoading = false;
    this->DLC_ReplaceCategory = ETipsLoadingCategory::BaseGame;
    this->UserTipsLoading = false;
    this->UserTips_ReplaceCategory = ETipsLoadingCategory::BaseGame;
    this->CommunityWrestlerLoading = false;
    this->CommunityWrestler_ReplaceCategory = ETipsLoadingCategory::BaseGame;
    this->TitleDLCLoading = false;
    this->TitleDLC_ReplaceCategory = ETipsLoadingCategory::BaseGame;
}

