#include "SSDamageResult.h"

FSSDamageResult::FSSDamageResult() {
    this->ActualDamage = 0;
    this->MoveId = 0;
    this->AttackHitId = 0;
    this->ReactionYaw = 0;
    this->AttackOwner = NULL;
    this->AttackUser = NULL;
    this->StickAttachedWeapon = NULL;
    this->HitAttackerTimeStamp = 0.00f;
    this->GuardReactionType = ESSGuardReactionType::None;
    this->LocalEffective = false;
    this->NoReaction = false;
    this->BackDamage = false;
    this->AirDamage = false;
    this->ForceKoDamage = false;
    this->ForceDeadDamage = false;
    this->DetachVehicle = false;
}

