#include "MiniGame_ChipGather.h"

FMiniGame_ChipGather::FMiniGame_ChipGather() {
    this->bIsNobodyRing = false;
    this->bIsNotGenerateBomb = false;
    this->FixedSpawnCoinPosition = 0;
    this->DropChipType = EMiniGameDebugChipType::ChipGather_SpawnCoin;
}

