#include "ELSSAIController.h"

void AELSSAIController::UpdateHateActors(AActor* newActor) {
}

void AELSSAIController::StartBehaviourTree_Implementation() {
}

void AELSSAIController::SetupAI_Implementation() {
}

void AELSSAIController::SetDisableAI(bool Disable) {
}

void AELSSAIController::SetAddMovementInputToActorForward(float Time) {
}




float AELSSAIController::GetAddMovementInputToActorForwardTimer() const {
    return 0.0f;
}

bool AELSSAIController::CommandWeaponTrap() {
    return false;
}

bool AELSSAIController::CommandWeaponThrow() {
    return false;
}

bool AELSSAIController::CommandWeaponGunFire() {
    return false;
}

bool AELSSAIController::CommandUseItem() {
    return false;
}

bool AELSSAIController::CommandTaunt() {
    return false;
}

bool AELSSAIController::CommandStrike2(bool isHold) {
    return false;
}

bool AELSSAIController::CommandStrike1(bool isHold) {
    return false;
}

bool AELSSAIController::CommandMoveCurrentInventory(bool isRight) {
    return false;
}

bool AELSSAIController::CommandKoFinisher() {
    return false;
}

bool AELSSAIController::CommandJump() {
    return false;
}

bool AELSSAIController::CommandInteract() {
    return false;
}

bool AELSSAIController::CommandGuard(bool IsOn) {
    return false;
}

bool AELSSAIController::CommandGrapple(bool isHold) {
    return false;
}

bool AELSSAIController::CommandDashGrapple(bool isHold) {
    return false;
}

bool AELSSAIController::CommandAbility(int32 SlotIndex) {
    return false;
}

void AELSSAIController::ClearHateActors() {
}

AActor* AELSSAIController::CalcNewAITargetByHate() const {
    return NULL;
}

AELSSAIController::AELSSAIController() {
    this->MoveToFgfGoalObstructed = false;
    this->HateActorsMax = 1;
}

