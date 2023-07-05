#include "CareerSchedule.h"

FCareerSchedule::FCareerSchedule() {
    this->Scenario = ECareerScenario::Prologue;
    this->Arena = ECareerArenaType::DARK;
    this->Venue = ECareerCity::None;
    this->Turn = 0;
    this->Transportation = ECareerCityMoveVehicleType::None;
}

