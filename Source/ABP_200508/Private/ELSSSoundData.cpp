#include "ELSSSoundData.h"

void UELSSSoundData::SetOwner(AActor* inOwner) {
}


void UELSSSoundData::Initialize(AActor* inOwner) {
}

USoundAtomCue* UELSSSoundData::GetSoundAtomCue_SpawnPickup(ESSSpawnPickupSE inPickupSE) const {
    return NULL;
}


USoundAtomCue* UELSSSoundData::GetSoundAtomCue_Damage_Implementation(ESSDamageSE inDamageSE) const {
    return NULL;
}

UELSSSoundData::UELSSSoundData() {
    this->DamageSEDataTable = NULL;
    this->OwnerActor = NULL;
}

