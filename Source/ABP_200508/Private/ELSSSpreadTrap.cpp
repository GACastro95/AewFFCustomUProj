#include "ELSSSpreadTrap.h"
#include "Net/UnrealNetwork.h"

AELSSSpreadTrap::AELSSSpreadTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerActor = NULL;
    this->WholeRadius = 145.00f;
}

void AELSSSpreadTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSSpreadTrap, OwnerActor);
    DOREPLIFETIME(AELSSSpreadTrap, WholeRadius);
}


