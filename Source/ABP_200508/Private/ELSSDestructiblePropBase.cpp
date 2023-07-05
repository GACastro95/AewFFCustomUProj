#include "ELSSDestructiblePropBase.h"
#include "DestructibleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AELSSDestructiblePropBase::Setup_Implementation() {
}

void AELSSDestructiblePropBase::SetRemainDurability(int32 Durability) {
}

void AELSSDestructiblePropBase::PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason) {
}

void AELSSDestructiblePropBase::OnRep_IsBroken() {
}

int32 AELSSDestructiblePropBase::GetRemainDurability() const {
    return 0;
}

int32 AELSSDestructiblePropBase::GetMaxDurability() const {
    return 0;
}

void AELSSDestructiblePropBase::Break_Imple() {
}

int32 AELSSDestructiblePropBase::AddDurability(int32 Value) {
    return 0;
}

void AELSSDestructiblePropBase::AddAttentionPoint(AActor* Actor) {
}

void AELSSDestructiblePropBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSDestructiblePropBase, IsBroken);
}

AELSSDestructiblePropBase::AELSSDestructiblePropBase() {
    this->DefaultSceneComponent = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->DestructibleComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleComponent"));
    this->DestructibleMeshAsset = NULL;
    this->SoundCue_Break = NULL;
    this->IsCopyMaterialToDM = false;
    this->IsPhysicsDP = false;
    this->DisableInvolveFeedbackReaction = false;
    this->ImpulseStrength = 1000.00f;
    this->DamageToPlayer = 5.00f;
    this->HitEffectLineTraceScale = 0.50f;
    this->IsBroken = false;
    this->AttentionPoint = 5;
    this->RemainDurability = 0;
    this->MaxDurability = 1;
}

