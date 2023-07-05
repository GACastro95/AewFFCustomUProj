#include "EditParts.h"

FEditParts::FEditParts() {
    this->UnlockItemId = 0;
    this->PartsID = 0;
    this->EditSlot = EEditPartsSlot::Unknown;
    this->AttireTypeCondition = EAttireCondition::Disable;
    this->GenderCondition = EGenderConditions::Disable;
    this->FaceTypeCondition = EFaceType::Default;
}

