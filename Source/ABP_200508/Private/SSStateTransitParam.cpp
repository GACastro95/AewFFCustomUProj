#include "SSStateTransitParam.h"

FSSStateTransitParam::FSSStateTransitParam() {
    this->StateHash = 0;
    this->ServerTransitId = 0;
    this->MoveId = 0;
    this->MoveCommand = ESSMoveCommand::None;
    this->RequestID = 0;
    this->Timestamp = 0.00f;
    this->StartedRotationYaw = 0.00f;
    this->IdealRotationYaw = 0.00f;
    this->DesiredYaw = 0.00f;
    this->SpeedRate = 0.00f;
    this->MovementAdjustStateHash = 0;
    this->MovementAdjustPlayTime = 0.00f;
    this->FallReason = ESSFallReason::None;
    this->StartedInAir = false;
    this->Falling = false;
    this->DisableBlendOut = false;
    this->LandingStarted = false;
    this->SkipAutonomousRestart = false;
}

