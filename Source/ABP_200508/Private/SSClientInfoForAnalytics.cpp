#include "SSClientInfoForAnalytics.h"

FSSClientInfoForAnalytics::FSSClientInfoForAnalytics() {
    this->DataVersion = 0;
    this->ChangeList = 0;
    this->MatchGroupId = 0;
    this->ContinuousSSPlayCount = 0;
    this->ContinuousSSPlayCountTotal = 0;
    this->ContinuousSSPlayTime = 0.00f;
    this->ContinuousSSPlayTimeTotal = 0.00f;
    this->Synced = false;
}

