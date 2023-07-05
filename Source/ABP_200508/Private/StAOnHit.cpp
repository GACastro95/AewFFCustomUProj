#include "StAOnHit.h"

FStAOnHit::FStAOnHit() {
    this->Actor = NULL;
    this->AtkSeesawState = ESeesawRelationType_N::Neutral;
    this->DefSeesawState = ESeesawRelationType_N::Neutral;
    this->DamageLv = 0;
    this->SpecialType = ESpecialMovesType::None;
    this->DownValue = 0;
    this->EliteMeterState = EEliteMeterStateType_N::Neutral;
    this->GroggyValue = 0;
    this->HitEffectValue = 0;
    this->MovesSlot = 0;
    this->MovesTableType = EMovesDataTableType_N::StandStrike;
    this->MovesCategory = 0;
    this->AttackKind = EReserveReversalType::None;
}

