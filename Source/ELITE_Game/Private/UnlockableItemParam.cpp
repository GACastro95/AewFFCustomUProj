#include "UnlockableItemParam.h"

FUnlockableItemParam::FUnlockableItemParam() {
    this->UniqueID = 0;
    this->UnlockCategory = EUnlockItemCategory::Arena;
    this->DefaultUnlocked = false;
    this->Rarity = EUnlockableItemRarityType::Common;
    this->OptionalSortNo = 0;
    this->ShopItem = false;
    this->DefaultStockStatus = false;
    this->InStockTiming = 0;
    this->CurrencyType = EUnlockableItemCurrencyType::Cash;
    this->ItemPrice = 0;
    this->HideUnlockCondition = false;
    this->CrateItem = false;
    this->FreeB_PassItem = false;
    this->PremiumB_PassItem = false;
    this->ChallengeItem = false;
    this->EnableChangeColor = false;
    this->DefaultNewUnlocked = false;
    this->NeedAdditionalCondition = false;
}

