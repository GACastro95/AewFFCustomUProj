#include "JukeBoxParam.h"

FJukeBoxParam::FJukeBoxParam() {
    this->TrackingGroup = ETrackingGroupType::Main;
    this->WrestlerID = EWrestlerID_N::None;
    this->EntranceCueEvent = NULL;
    this->VictoryCueEvent = NULL;
    this->JukeBoxId = 0;
    this->UseCreate = false;
    this->JukeBox = false;
    this->DefaultSelect = false;
    this->JacketImage = NULL;
    this->JukeBoxCue = NULL;
    this->JukeBoxCueInGame = NULL;
    this->UnlockItemId = 0;
}

