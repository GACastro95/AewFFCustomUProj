#include "ELCareerPlayerStatus.h"



void UELCareerPlayerStatus::UpdateParameter(float InDeltaTime) {
}








bool UELCareerPlayerStatus::IsInjury() const {
    return false;
}

FText UELCareerPlayerStatus::GetTextWeek() {
    return FText::GetEmpty();
}

FText UELCareerPlayerStatus::GetTextRoadToPPV() {
    return FText::GetEmpty();
}

FText UELCareerPlayerStatus::GetTextMotivation() {
    return FText::GetEmpty();
}

int32 UELCareerPlayerStatus::GetSkillPoint() {
    return 0;
}

int32 UELCareerPlayerStatus::GetPPVLogoIndex() {
    return 0;
}

int32 UELCareerPlayerStatus::GetMotivation() {
    return 0;
}

float UELCareerPlayerStatus::GetEnergyRate() {
    return 0.0f;
}

int32 UELCareerPlayerStatus::GetEnergy() {
    return 0;
}

int32 UELCareerPlayerStatus::GetCareerMoney() {
    return 0;
}



UELCareerPlayerStatus::UELCareerPlayerStatus() {
}

