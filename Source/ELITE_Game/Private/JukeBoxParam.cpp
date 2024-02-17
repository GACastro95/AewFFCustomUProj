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
    this->JukeBoxCue = NULL;
    this->JukeBoxCueInGame = NULL;
    this->UnlockItemId = 0;
    this->EnableStreamer = false;
    this->Entrance = false;
    this->GameOriginal = false;
    this->Premium = false;
    this->FreeDLC = false;
}

