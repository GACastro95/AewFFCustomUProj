#include "ELBeltParam.h"

FELBeltParam::FELBeltParam() {
    this->Belt = EELBelt::None;
    this->TagBelt = false;
    this->Man = false;
    this->Woman = false;
    this->Priority = 0;
    this->DefaultHolder = EWrestlerID_N::None;
    this->DefaultHolderMember = EWrestlerID_N::None;
    this->Year = 0;
    this->Month = 0;
    this->Day = 0;
    this->DefendCount = 0;
    this->ThumbnailTexture = NULL;
    this->WeaponID = 0;
}

