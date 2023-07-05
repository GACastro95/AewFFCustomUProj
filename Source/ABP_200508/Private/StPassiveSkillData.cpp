#include "StPassiveSkillData.h"

FStPassiveSkillData::FStPassiveSkillData() {
    this->eTriggerType = EPassiveSkillTriggerType::All;
    this->fActiveSec = 0.00f;
    this->ActiveCount = 0;
    this->Particle = NULL;
    this->bOneShot = false;
    this->fCameraZoomSec = 0.00f;
    this->UseLoopAnimation = false;
    this->AddObjective = EELMatchScoreObjective::None;
}

