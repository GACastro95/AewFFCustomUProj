#include "ELUnlockItemSaveData.h"

FELUnlockItemSaveData::FELUnlockItemSaveData() {
    this->ID = 0;
    this->Category = EUnlockItemCategory::Arena;
    this->IsNew = false;
    this->Purchased = false;
    this->IsFavorite = false;
    this->Stocked = false;
    this->IsNewlyAvailable = false;
}

