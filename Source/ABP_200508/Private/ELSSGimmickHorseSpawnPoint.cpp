#include "ELSSGimmickHorseSpawnPoint.h"
#include "Net/UnrealNetwork.h"

void AELSSGimmickHorseSpawnPoint::SpawnVehicle_Server_Implementation(AELSSPlayer* inInteractPlayer) {
}

void AELSSGimmickHorseSpawnPoint::SpawnVehicle(AELSSPlayer* inInteractPlayer) {
}

void AELSSGimmickHorseSpawnPoint::SetIsSpawned(bool NewIsSpawned) {
}


void AELSSGimmickHorseSpawnPoint::OnSpawned_Multicast_Implementation() {
}

void AELSSGimmickHorseSpawnPoint::OnRep_IsSpawned() {
}



void AELSSGimmickHorseSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSGimmickHorseSpawnPoint, isSpawned);
}

AELSSGimmickHorseSpawnPoint::AELSSGimmickHorseSpawnPoint() {
    this->InteractDuration = 1.00f;
    this->SpawnVehicleId = 11000;
    this->isSpawned = false;
    this->SpawnedSound = NULL;
}

