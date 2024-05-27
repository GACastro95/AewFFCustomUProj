#include "ELSSPreloadAssetInfoReplicator.h"
#include "Net/UnrealNetwork.h"

AELSSPreloadAssetInfoReplicator::AELSSPreloadAssetInfoReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AELSSPreloadAssetInfoReplicator::OnRep_PreloadAssetInfo() {
}

void AELSSPreloadAssetInfoReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSPreloadAssetInfoReplicator, PreloadAssetInfo);
}


