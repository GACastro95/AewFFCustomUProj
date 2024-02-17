#include "SSLocalTeamMemberStatus.h"

FSSLocalTeamMemberStatus::FSSLocalTeamMemberStatus() {
    this->IsLocalPlayer = false;
    this->KillCount = 0;
    this->FeverCount = 0;
    this->AttentionPoint = 0;
    this->MatchScore = 0;
    this->JewelPoint = 0;
    this->BallLevelPoint = 0;
    this->HeatLevel = 0;
    this->HeatLevelExpRate = 0.00f;
    this->Alived = false;
    this->Synced = false;
}

