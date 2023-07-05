#include "PossessedItemParam.h"

FPossessedItemParam::FPossessedItemParam() {
    this->UniqueID = 0;
    this->ItemType = EPossessedItemType::None;
    this->ExtendTarget = EPossessedItemExtendTarget::None;
    this->LinkWrestlerID = EWrestlerID_N::None;
    this->ConsumeTarget = EPossessedItemConsumeTarget::None;
    this->InitialPossessNum = 0;
    this->MaxNum = 0;
    this->ItemPrice = 0;
}

