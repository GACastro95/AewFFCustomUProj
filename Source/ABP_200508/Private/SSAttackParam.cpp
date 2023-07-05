#include "SSAttackParam.h"

FSSAttackParam::FSSAttackParam() {
    this->MoveId = 0;
    this->AttackHitId = 0;
    this->AttackType = ESSAttackType::None;
    this->GuardBreakerType = ESSGuardBreakerType::Default;
    this->AttackToDown = false;
    this->Damage = 0;
    this->AttentionPoint = 0;
    this->ReactionType = ESSReactionType::None;
    this->DirectionType = ESSAttackDirectionType::None;
    this->BlowPower = 0.00f;
    this->BlowAngle = 0.00f;
    this->BlowAngleYaw = 0.00f;
    this->DamageSE = ESSDamageSE::None;
    this->HitStopType = ESSHitStopType::None;
    this->CameraShakeType = ESSCameraShakeType::None;
    this->TransitMoveId = 0;
    this->LogIcon = ESSLogIconType::Skill;
    this->AttackCapsuleScaleRadius = 0.00f;
    this->AttackCapsuleScaleHeight = 0.00f;
}

