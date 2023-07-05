#include "SSReplicatedClientResultData.h"

FSSReplicatedClientResultData::FSSReplicatedClientResultData() {
    this->Available = false;
    this->tallyStampiedRankPoint = 0;
    this->tallyStampiedKillPoint = 0;
    this->tallyStampiedFeverPoint = 0;
    this->tallyStampiedAttentionPoint = 0;
    this->tallyStampiedEXP = 0;
    this->tallyPlayerKillPoint = 0;
    this->tallyPlayerRankPoint = 0;
    this->tallyPlayerAttentionPoint = 0;
    this->tallyPlayerMatchCost = 0;
    this->tallyPlayerEXP = 0;
    this->tallyPlayerRank = 0;
}

