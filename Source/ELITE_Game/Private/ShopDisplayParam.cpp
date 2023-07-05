#include "ShopDisplayParam.h"

FShopDisplayParam::FShopDisplayParam() {
    this->ID = 0;
    this->DisplayCategory = EShopDisplayCategory::None;
    this->ItemType = EShopDisplayItemType::None;
    this->UniqueItemId = 0;
    this->PickUpItem = false;
}

