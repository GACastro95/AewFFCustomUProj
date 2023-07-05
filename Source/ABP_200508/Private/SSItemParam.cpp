#include "SSItemParam.h"

FSSItemParam::FSSItemParam() {
    this->ID = 0;
    this->Rarity = ESSRarity::None;
    this->ItemType = ESSItemType::None;
    this->Value_1 = 0.00f;
    this->Value_2 = 0.00f;
    this->IsStock = false;
    this->TimeToTrigger = 0.00f;
    this->ScaleWhenDrop = 0.00f;
    this->IconImage = NULL;
}

