#include "ELSSVehicleManager.h"
#include "Templates/SubclassOf.h"

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

AELSSVehicleManager::AELSSVehicleManager() {
}

