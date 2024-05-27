#include "ELSSShieldBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "ESSPickupType.h"
#include "Net/UnrealNetwork.h"

AELSSShieldBase::AELSSShieldBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupType = ESSPickupType::Shield;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->MaxDurability = 0;
    this->RemainDurability = 0;
    this->IsEnableAbsorbMovement = false;
    this->IsPerformAbsorbMovement = false;
    this->AbsorbMovementDelay = 0.14f;
    this->AbsorbMovementDuration = 0.30f;
    this->AbsorbMovementTimer = 0.00f;
    this->OriginalScale = 0.00f;
    this->AbsorbMovementEndScale = 0.30f;
    this->AbsorbMoveTo = NULL;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AELSSShieldBase::StartAbsorbMovement(AActor* OtherActor) {
}

void AELSSShieldBase::Setup_Implementation(const FSSShieldParam& shieldParam) {
}

void AELSSShieldBase::SetRemainDurability(int32 Durability) {
}

void AELSSShieldBase::PerformAbsorbMovement(float DeltaTime) {
}

void AELSSShieldBase::OnRep_RemainDurability() {
}

void AELSSShieldBase::OnRep_AbsorbMoveTo() {
}

void AELSSShieldBase::OnEndPerformAbsorbMovement() {
}

float AELSSShieldBase::GetRemainDurabilityRatio() const {
    return 0.0f;
}

int32 AELSSShieldBase::GetRemainDurability() const {
    return 0;
}

int32 AELSSShieldBase::AddDurabilityByRate(float Rate) {
    return 0;
}

int32 AELSSShieldBase::AddDurability(int32 Value) {
    return 0;
}

void AELSSShieldBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSShieldBase, RemainDurability);
    DOREPLIFETIME(AELSSShieldBase, AbsorbMoveTo);
}


