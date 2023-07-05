#include "ELSSDebugMenuParam.h"

FELSSDebugMenuParam::FELSSDebugMenuParam() {
    this->PlayerWrestlerID = EWrestlerID_N::None;
    this->PlayerSpawnIndex = 0;
    this->ShufflePlayerStart = false;
    this->DisableAIOnStart = false;
    this->NumberOfPlayersRequiredToStart = 0;
    this->OverrideWrestlerNum = false;
    this->WrestlerNum = 0;
    this->PlayerDefaultSettingId = 0;
    this->Ability1 = 0;
    this->Ability2 = 0;
    this->Ability3 = 0;
    this->SkipReadyState = false;
}

