#include "SSCharacterOptimizeLevelParam.h"

FSSCharacterOptimizeLevelParam::FSSCharacterOptimizeLevelParam() {
    this->Enable = false;
    this->RequiredDistance = 0.00f;
    this->DisableSubAnim = false;
    this->DisableFacialAnim = false;
    this->DisableClothingSimulation = false;
    this->DisableMorph = false;
    this->DisableCastShadowInsignificateMesh = false;
    this->DisableInsignificateMesh = false;
    this->MinLOD = 0;
    this->TickIntervalFrame = 0;
    this->TickIntervalFrameWhenNotRendered = 0;
    this->ActorTickIntervalMode = false;
    this->DisableLocalAttack = false;
    this->DisableMoveSmoothing = false;
    this->DisableProxyCollision = false;
    this->DisableMoveCollision = false;
    this->DisableSimulateMove = false;
    this->DisablePhysicsCollision = false;
    this->DisableSyncMotionCollision = false;
    this->DisableSyncMotionFloorTrace = false;
    this->DisableSound = false;
    this->DisableSlipTrace = false;
    this->MergedMesh = false;
    this->SimpleShadow = false;
    this->DisableShadow = false;
    this->DisableIndirectShadow = false;
}

