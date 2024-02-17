#include "ELSSPreloadAssetInfoReplicator.h"
#include "Net/UnrealNetwork.h"

void AELSSPreloadAssetInfoReplicator::OnRep_PreloadAssetInfo() {
}

void AELSSPreloadAssetInfoReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSPreloadAssetInfoReplicator, PreloadAssetInfo);
}

AELSSPreloadAssetInfoReplicator::AELSSPreloadAssetInfoReplicator() {
}

