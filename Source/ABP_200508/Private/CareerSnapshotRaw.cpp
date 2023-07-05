#include "CareerSnapshotRaw.h"

FCareerSnapshotRaw::FCareerSnapshotRaw() {
    this->bExists = false;
    this->ScenarioNo = ECareerScenarioNo::None;
    this->Week = 0;
    this->Location = ECareerStageType::NONE;
    this->Turn = 0;
}

