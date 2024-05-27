#include "ELSSVehicleManager.h"
#include "Templates/SubclassOf.h"

AELSSVehicleManager::AELSSVehicleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

AActor* AELSSVehicleManager::SpawnVehicleToLocator(int32 inVehicleId, AELSSLocator_Vehicle* inLocator) {
    return NULL;
}

void AELSSVehicleManager::SpawnVehicleFromRound(const FSSVehicleSpawnParamForRound& inSpawnParam) {
}

AActor* AELSSVehicleManager::SpawnVehicle(int32 inVehicleId, const FTransform& Transform) {
    return NULL;
}

void AELSSVehicleManager::OnTickRound(const FSSRoundParam& inRoundParam, float newRoundTime, float prevRoundTime) {
}

void AELSSVehicleManager::OnEndRound(const FSSRoundParam& inRoundParam) {
}

void AELSSVehicleManager::OnBeginRound(const FSSRoundParam& inRoundParam) {
}

void AELSSVehicleManager::LoadAsyncVehicleClasses() {
}

TSubclassOf<AActor> AELSSVehicleManager::GetVehicleClass(int32 inDatabaseId) {
    return NULL;
}


