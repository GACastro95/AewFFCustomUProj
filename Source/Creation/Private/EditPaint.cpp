#include "EditPaint.h"

FEditPaint::FEditPaint() {
    this->UnlockItemId = 0;
    this->PaintID = 0;
    this->Target = EEditTexTarget::Skin;
    this->AttireTypeCondition = EAttireCondition::Disable;
    this->GenderCondition = EGenderConditions::Disable;
}

