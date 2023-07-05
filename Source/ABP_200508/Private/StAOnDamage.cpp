#include "StAOnDamage.h"

FStAOnDamage::FStAOnDamage() {
    this->HP = 0.00f;
    this->Head = 0.00f;
    this->Arm = 0.00f;
    this->Body = 0.00f;
    this->Leg = 0.00f;
    this->Shock = 0.00f;
    this->ELITE = 0.00f;
    this->CriticalRate = 0.00f;
    this->InjuryRate = 0.00f;
    this->DamageReaction = EDamageReactionType_N::None;
    this->DownDamageReaction = false;
    this->Critical = false;
    this->WeaponDamage = false;
    this->ChestDamage = false;
    this->Reverse = false;
    this->AttackDir = EAOnDamageAttackDir_N::Front;
}

