#include "ELNetGameState.h"
#include "ELReplicationComponent.h"

AELNetGameState::AELNetGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ELNetRole = EELNetRole::ROLE_None;
    this->ReplicationRPCComponent = CreateDefaultSubobject<UELReplicationComponent>(TEXT("RPCComponent"));
    this->ReplicationPropertyComponent = CreateDefaultSubobject<UELReplicationComponent>(TEXT("ReplicationComponent"));
    this->ReplicationManager = NULL;
    this->WorldTimeSecondsFromStart = 0.00f;
    this->WorldRealTimeSecondsFromStart = 0.00f;
    this->RealDeltaTime = 0.00f;
    this->ScaledRealDeltaTime = 0.00f;
    this->RealDeltaTimeAverageInner = 0.10f;
}

bool AELNetGameState::ToggleUseFixedFrameRate() {
    return false;
}

void AELNetGameState::SetUseFixedFrameRate(bool bUseFixedFrameRate) {
}

void AELNetGameState::SetNetActorTickOrder(AActor* Actor) {
}

bool AELNetGameState::SetELNetTemporaryAuthorityBP(bool bEnabled) {
    return false;
}

void AELNetGameState::SetELNetModeBP(bool bEnabled) {
}

void AELNetGameState::SetELNetAuthorityBP(bool bEnabled) {
}

bool AELNetGameState::IsInELNetModeBP() {
    return false;
}

void AELNetGameState::InitializeWorldTimeSeconds() {
}

bool AELNetGameState::HasELNetExecAuthorityBP() {
    return false;
}

bool AELNetGameState::HasELNetAuthorityBP() {
    return false;
}

float AELNetGameState::GetWorldTimeSecondsFromStart() const {
    return 0.0f;
}

float AELNetGameState::GetWorldRealTimeSecondsFromStart() const {
    return 0.0f;
}

float AELNetGameState::GetScaledRealDeltaTime() const {
    return 0.0f;
}

UELReplicationManager* AELNetGameState::GetReplicationManager() {
    return NULL;
}

float AELNetGameState::GetRealDeltaTime() const {
    return 0.0f;
}

FELNetworkGUID AELNetGameState::GetNextReplicationGuid() {
    return FELNetworkGUID{};
}


