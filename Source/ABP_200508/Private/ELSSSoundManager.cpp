#include "ELSSSoundManager.h"

void AELSSSoundManager::StopLoopSE_Implementation(int32 loopSEUniqueId) {
}

void AELSSSoundManager::RequestLoad() {
}

void AELSSSoundManager::PlaySE_SpawnPickup(ESSSpawnPickupSE inSpawnPickupSE, UMeshComponent* inMeshComponent) {
}

void AELSSSoundManager::PlaySE_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent, bool inPlay2D) {
}

void AELSSSoundManager::PlaySE_Damage(ESSDamageSE inDamageSE, UMeshComponent* inMeshComponent, bool inPlay2D) {
}

int32 AELSSSoundManager::PlayLoop3DSE_OutAtomComponent_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent, UAtomComponent*& out_AtomComponent) {
    return 0;
}

int32 AELSSSoundManager::PlayLoop3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent) {
    return 0;
}

int32 AELSSSoundManager::PlayLoop2DSE_Implementation(const FString& CueName) {
    return 0;
}

void AELSSSoundManager::PlayAnnounce(ESSAnnounce inAnnounce) {
}

void AELSSSoundManager::Play3DSEAttached_ForString(const FString& CueName, UMeshComponent* inMeshComponent) {
}

void AELSSSoundManager::Play3DSEAtLocation_ForString(const FString& CueName, const FVector& InLocation) {
}

void AELSSSoundManager::Play3DSE_Implementation(USoundAtomCue* InCue, UMeshComponent* inMeshComponent) {
}

void AELSSSoundManager::Play2DSE_ForString(const FString& CueName) {
}

void AELSSSoundManager::Play2DSE_ForCueEvent(USoundAtomCue* InCue) {
}


bool AELSSSoundManager::IsLoadCompleted() const {
    return false;
}



void AELSSSoundManager::CompleteLoading() {
}

AELSSSoundManager::AELSSSoundManager() {
    this->LoopSEUniqueIdGenerator = 0;
    this->SoundData = NULL;
    this->StatusIsLoadCompleted = false;
}

