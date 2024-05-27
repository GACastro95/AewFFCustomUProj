#include "FL_PersonPramUtility.h"

UFL_PersonPramUtility::UFL_PersonPramUtility() {
}

FText UFL_PersonPramUtility::GetDisplayText(const EBodyWeightToWightClass BodyWeightRank) {
    return FText::GetEmpty();
}

EBodyWeightToWightClass UFL_PersonPramUtility::GetBodyWeightToWeightClass(const int32 BodyWeight) {
    return EBodyWeightToWightClass::Cruiser;
}

FText UFL_PersonPramUtility::GetBodyWeightText(const int32 Pounds, const bool bToKg, int32 Step) {
    return FText::GetEmpty();
}

FText UFL_PersonPramUtility::GetBodyHeightText(const float Inch, const bool bToM) {
    return FText::GetEmpty();
}

void UFL_PersonPramUtility::GetBirthMonthTextList(TArray<FText>& Out) {
}

FText UFL_PersonPramUtility::GenerateBirthDayText(int32 Month, int32 Day) {
    return FText::GetEmpty();
}


