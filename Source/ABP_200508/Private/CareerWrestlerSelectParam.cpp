#include "CareerWrestlerSelectParam.h"

FCareerWrestlerSelectParam::FCareerWrestlerSelectParam() {
    this->WrestlerID = EWrestlerID_N::None;
    this->TeamNo = 0;
    this->Attire = 0;
    this->CostumeID = 0;
    this->bManager = false;
    this->bAI = false;
    this->AIDifficulity = 0;
    this->AIFightStyle = 0;
    this->ContorollerID = 0;
    this->CasinoBattleRoyal_Zugara = 0;
    this->CasinoBattleRoyal_Number = 0;
    this->bCasualMode = false;
    this->fCoreHP = 0.00f;
    this->fHeadHP = 0.00f;
    this->fArmHP = 0.00f;
    this->fBodyHP = 0.00f;
    this->fLegHP = 0.00f;
    this->fMomentum = 0.00f;
    this->fMomentumUpRate = 0.00f;
    this->bAllFinisher = false;
    this->bDarkSkinMode = false;
    this->bEntranceAttireMode = false;
    this->bPlainAttireMode = false;
    this->bInvader = false;
    this->InvaderInTime = 0;
    this->ECareerStartOfMatch = ECareerStartOfMatch::Default;
}

