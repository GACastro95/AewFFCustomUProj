#include "ELMatchRecordsProfileInfo_BP.h"

FELMatchRecordsProfileInfo_BP::FELMatchRecordsProfileInfo_BP() {
    this->MatchScore = 0;
    this->MatchTime = 0.00f;
    this->MatchType = EMatchRecordsMatchType::OneOnOne;
    this->WeaponAttachCount = 0;
    this->TableCrushCount = 0;
    this->DropOnThumbtacksCount = 0;
    this->WasDroppedOnThumbtacksCount = 0;
    this->ExplosionCount = 0;
    this->TimeupExplosion = false;
    this->EliminateInBattleRoyalCount = 0;
    this->TotalDistance = 0.00f;
}

