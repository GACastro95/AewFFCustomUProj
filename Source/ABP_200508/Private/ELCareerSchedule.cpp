#include "ELCareerSchedule.h"

AELCareerSchedule::AELCareerSchedule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void AELCareerSchedule::SetScenarioTable(ECareerScenario _Scenario) {
}

void AELCareerSchedule::SetScenario(ECareerScenario _Scenario) {
}

bool AELCareerSchedule::IsWeekStart() {
    return false;
}

bool AELCareerSchedule::IsPrologue() {
    return false;
}

bool AELCareerSchedule::IsFirstWeekStart() {
    return false;
}

bool AELCareerSchedule::IsDynamite() {
    return false;
}

bool AELCareerSchedule::IsChangeScenario() {
    return false;
}

int32 AELCareerSchedule::GetScheduleTurnMax() {
    return 0;
}

int32 AELCareerSchedule::GetScheduleTurn() {
    return 0;
}

ECareerScenario AELCareerSchedule::GetScenario() {
    return ECareerScenario::Prologue;
}

int32 AELCareerSchedule::GetProgressScenarioTurn() {
    return 0;
}

int32 AELCareerSchedule::GetPostCommandEventTableIndex(ECareerScenarioNo eScenarioNo) {
    return 0;
}

int32 AELCareerSchedule::GetCurrentWeek() {
    return 0;
}

FCareerSchedule AELCareerSchedule::GetCurrentScheduleData() {
    return FCareerSchedule{};
}

TArray<FCareerSchedule> AELCareerSchedule::GetCareerScheduleTableBase() {
    return TArray<FCareerSchedule>();
}

void AELCareerSchedule::CareerInitSaveScheduleParam(ECareerScenario _Scenario) {
}

void AELCareerSchedule::AddCareerScheduleData(FCareerSchedule _Data) {
}


