#include "MiniGame_HomeRunInfo.h"

FMiniGame_HomeRunInfo::FMiniGame_HomeRunInfo() {
    this->bIsRouletteMaxFixed = false;
    this->SplineIndex = 0;
    this->ThatBatterScore = 0;
    this->bAllBatterScoreEnable = false;
    this->HitFlag = EMiniGameDebugHitBallFlags::RadioButton_None;
    this->BatterAIFlag = EMiniGameDebugAIBatterFlags::RadioButton_None;
    this->PitcherAIFlag = EMiniGameDebugPitcherFlags::RadioButton_None;
    this->bAINotSupport = false;
    this->BatType = EMiniGameDebugBatType::List_None;
}

