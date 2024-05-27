#include "ELSSGimmickHorseSpawnPoint.h"
#include "Net/UnrealNetwork.h"

AELSSGimmickHorseSpawnPoint::AELSSGimmickHorseSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InteractDuration = 1.00f;
    this->SpawnVehicleId = 11000;
    this->isSpawned = false;
    this->SpawnedSound = NULL;
}

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


