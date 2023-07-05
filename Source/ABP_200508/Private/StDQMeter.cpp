#include "StDQMeter.h"

FStDQMeter::FStDQMeter() {
    this->Limit_DQ = 0.00f;
    this->DownValue = 0.00f;
    this->AddValue_WeaponAttack = 0.00f;
    this->AddValue_ManagerDisturbance = 0.00f;
    this->AddValue_ManagerWeapon = 0.00f;
    this->AddValue_ManagerApron = 0.00f;
    this->Limit_PreDQ = 0.00f;
    this->Limit_Anger = 0.00f;
    this->WrestlerID = EWrestlerID_N::None;
}

