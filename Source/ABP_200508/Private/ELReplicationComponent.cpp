#include "ELReplicationComponent.h"

void UELReplicationComponent::EnableTickFunctions(bool bRPC, bool bReplication) {
}

UELReplicationComponent::UELReplicationComponent() {
    this->ReplicationManager = NULL;
    this->bTickRPC = false;
    this->bTickReplication = false;
}

