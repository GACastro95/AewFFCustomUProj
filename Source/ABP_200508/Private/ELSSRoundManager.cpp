#include "ELSSRoundManager.h"
#include "Net/UnrealNetwork.h"

AELSSRoundManager::AELSSRoundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StormActor = NULL;
    this->StormActorClass = NULL;
    this->StormRandomSeed = 0;
    this->ElapsedTimeRep = 0.00f;
    this->ElapsedTimeLocal = 0.00f;
    this->RoundTotalTimeRep = 0.00f;
    this->RoundTotalTimeLocal = 0.00f;
    this->CurrentRoundIndex = -1;
    this->RoundState = ESSRoundState::Default;
    this->RoundBeginTime = 0.00f;
    this->RoundSpeed = 1.00f;
    this->UIManagerActor = NULL;
}

void AELSSRoundManager::StartRound0() {
}

void AELSSRoundManager::StartReadyState() {
}

void AELSSRoundManager::SetUIManagerActor(AActor* InActor) {
}

void AELSSRoundManager::OnTickRound_Implementation(const FSSRoundParam& inRoundParam, float inNewRoundTime, float inPrevRoundTime) {
}

void AELSSRoundManager::OnRep_RoundTotalTime() {
}

void AELSSRoundManager::OnRep_ElapsedTime() {
}

void AELSSRoundManager::OnEndRound_Implementation(const FSSRoundParam& inRoundParam) {
}

void AELSSRoundManager::OnBeginRound_Implementation(const FSSRoundParam& inRoundParam) {
}

bool AELSSRoundManager::IsRoundFinal() const {
    return false;
}


AELSSStorm* AELSSRoundManager::GetStorm() const {
    return NULL;
}

ESSRound AELSSRoundManager::GetCurrentRound() const {
    return ESSRound::Round0;
}

void AELSSRoundManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSRoundManager, StormRandomSeed);
    DOREPLIFETIME(AELSSRoundManager, ElapsedTimeRep);
    DOREPLIFETIME(AELSSRoundManager, RoundTotalTimeRep);
    DOREPLIFETIME(AELSSRoundManager, RoundSpeed);
}


