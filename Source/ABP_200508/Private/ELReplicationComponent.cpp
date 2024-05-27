#include "ELReplicationComponent.h"

UELReplicationComponent::UELReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ReplicationManager = NULL;
    this->bTickRPC = false;
    this->bTickReplication = false;
}

void UELReplicationComponent::EnableTickFunctions(bool bRPC, bool bReplication) {
}


