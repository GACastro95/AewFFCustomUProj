#include "ELSSSpreadTrap.h"
#include "Net/UnrealNetwork.h"

void AELSSSpreadTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSSpreadTrap, OwnerActor);
    DOREPLIFETIME(AELSSSpreadTrap, WholeRadius);
}

AELSSSpreadTrap::AELSSSpreadTrap() {
    this->OwnerActor = NULL;
    this->WholeRadius = 145.00f;
}

