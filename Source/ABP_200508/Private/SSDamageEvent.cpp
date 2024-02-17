#include "SSDamageEvent.h"

FSSDamageEvent::FSSDamageEvent() {
    this->TeamId = 0;
    this->DamageReason = ESSDamageReason::None;
    this->DamageCoef = 0.00f;
    this->FixedDamage = 0.00f;
    this->AttentionCoef = 0.00f;
    this->AttackUser = NULL;
    this->HitDirMode = ESSAttackHitDirMode::Default;
    this->DisableReaction = false;
    this->LocalEffective = false;
}

