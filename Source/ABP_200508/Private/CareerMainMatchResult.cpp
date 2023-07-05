#include "CareerMainMatchResult.h"

FCareerMainMatchResult::FCareerMainMatchResult() {
    this->ScenarioPart = ECareerScenarioPart::NONE;
    this->Winner = EWrestlerID_N::None;
    this->Loser = EWrestlerID_N::None;
    this->Win = false;
}

