#include "SSAttentionAdjustParam.h"

FSSAttentionAdjustParam::FSSAttentionAdjustParam() {
    this->AttentionLevelMax = 0;
    this->AttentionPointMax = 0;
    this->ExpItemIntervalPoint = 0;
    this->AttentionGaugePointMax = 0;
    this->AttentionSubGaugeNum = 0;
    this->NegativePenaltyBeginTime = 0.00f;
    this->NegativePenaltyDownValue = 0;
    this->NegativePenaltyDownInterval = 0.00f;
    this->FeverTimeConditionLevel = 0;
    this->FeverTimeDuration = 0.00f;
    this->FeverTimeExpItemInterval = 0.00f;
    this->AddAttention_HitAttack = 0;
    this->AddAttention_Throw = 0;
    this->AddAttention_Destructible = 0;
    this->AddAttention_KO = 0;
    this->AddAttention_Finisher = 0;
    this->AddAttention_Taunt = 0;
    this->AddAttention_VehicleMoving = 0;
    this->AddAttentionIntervalWhenVehicleMoving = 0.00f;
    this->AddAttention_VehicleMovingSpeedKph = 0.00f;
    this->AddAttention_HorseMoving = 0;
    this->AddAttentionIntervalWhenHorseMoving = 0.00f;
    this->AddAttention_HorseMovingSpeedKph = 0.00f;
    this->AddAttention_FgfGoal = 0.00f;
    this->AddAttention_FgfGoalTeamMember = 0.00f;
    this->AddAttention_FgfPassSuccess = 0.00f;
    this->AddAttention_FgfBallStole = 0.00f;
    this->AddAttention_FgfDefenseSuccess = 0.00f;
    this->AnnounceAttentionLevel = 0;
    this->AttentionCoolTimeByTaunt = 0.00f;
    this->AnnounceAttentionPoint = 0;
}

