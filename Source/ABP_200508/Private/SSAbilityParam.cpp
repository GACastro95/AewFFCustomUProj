#include "SSAbilityParam.h"

FSSAbilityParam::FSSAbilityParam() {
    this->ID = 0;
    this->SortKey = 0;
    this->Opened = false;
    this->AIUsable = false;
    this->UnlockStampedeLevel = 0;
    this->Cost = 0;
    this->UseType = ESSAbilityUseType::Passive;
    this->Kind_1 = ESSAbilityKind::None;
    this->Value_1 = 0.00f;
    this->Kind_2 = ESSAbilityKind::None;
    this->Value_2 = 0.00f;
    this->CoolTime = 0.00f;
    this->EffectiveTime = 0.00f;
}

