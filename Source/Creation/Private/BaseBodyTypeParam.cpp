#include "BaseBodyTypeParam.h"

FBaseBodyTypeParam::FBaseBodyTypeParam() {
    this->BodyTypeID = 0;
    this->UnlockID = 0;
    this->GenderCondition = EGenderConditions::Disable;
    this->BodyBalance = 0.00f;
    this->StartOfSlim = 0.00f;
    this->StartOfHeavy = 0.00f;
    this->StartOfMuscular = 0.00f;
}

