#include "ELSSItemBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ESSPickupType.h"
#include "Net/UnrealNetwork.h"

AELSSItemBase::AELSSItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupType = ESSPickupType::Item;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ItemType = ESSItemType::None;
    this->IsStock = false;
    this->DefaultMeshScale = 1.00f;
    this->ScaleWhenDrop = 1.00f;
    this->IsUsedItem = false;
    this->IsEnableAbsorbMovement = false;
    this->IsPerformAbsorbMovement = false;
    this->AbsorbMovementDelay = 0.14f;
    this->AbsorbMovementDuration = 0.30f;
    this->AbsorbMovementTimer = 0.00f;
    this->OriginalScale = 0.00f;
    this->AbsorbMovementEndScale = 0.30f;
    this->AbsorbMoveTo = NULL;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

bool AELSSItemBase::UseItem(AELSSPlayer* OtherActor) {
    return false;
}

void AELSSItemBase::StartAbsorbMovement(AActor* OtherActor) {
}

void AELSSItemBase::Setup_Implementation(const FSSItemParam& ItemParam) {
}

void AELSSItemBase::PerformAbsorbMovement(float DeltaTime) {
}

void AELSSItemBase::OnRep_AbsorbMoveTo() {
}

void AELSSItemBase::OnEndPerformAbsorbMovement() {
}

bool AELSSItemBase::GetIsUsedItem() const {
    return false;
}

void AELSSItemBase::AddStock(AELSSPlayer* OtherActor) {
}

void AELSSItemBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSItemBase, IsUsedItem);
    DOREPLIFETIME(AELSSItemBase, AbsorbMoveTo);
}


