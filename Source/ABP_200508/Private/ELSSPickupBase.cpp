#include "ELSSPickupBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void AELSSPickupBase::UpdateLostTimer(float DeltaTime) {
}

FName AELSSPickupBase::ToAttachParamRowName() const {
    return NAME_None;
}

void AELSSPickupBase::SetPickupOwner(AELSSPlayer* NewOwner) {
}

void AELSSPickupBase::SetInternalVisible(bool flg) {
}

void AELSSPickupBase::SetExternalVisible(bool flg) {
}

void AELSSPickupBase::RefreshVisibility() {
}

bool AELSSPickupBase::PickupOnTouch(AActor* OtherActor) {
    return false;
}

bool AELSSPickupBase::PickupFailedOnFullInventory(AActor* OtherActor) {
    return false;
}

void AELSSPickupBase::Pickup_Implementation(AActor* OtherActor) {
}

void AELSSPickupBase::OnUnEquipCurrent() {
}

void AELSSPickupBase::OnRep_PickupTrans() {
}

void AELSSPickupBase::OnRep_PickupOwner() {
}

void AELSSPickupBase::OnRep_LaunchInfo() {
}

void AELSSPickupBase::OnRep_IsLaunchStop() {
}

void AELSSPickupBase::OnRep_IsCanTouch() {
}

void AELSSPickupBase::OnPickedup_Implementation(AActor* OtherActor) {
}

void AELSSPickupBase::OnLaunchStop(const FHitResult& ImpactResult) {
}

void AELSSPickupBase::OnInteractEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSPickupBase::OnInteractBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSPickupBase::OnEquipCurrent(AELSSPickupBase* lastPickup, AELSSPlayer* NewOwner) {
}

void AELSSPickupBase::OnCanTouch_Implementation(bool flg) {
}

void AELSSPickupBase::LostEffect_Impl() {
}

void AELSSPickupBase::LostEffect() {
}

void AELSSPickupBase::Launch(const FVector& Velocity, float GravityScale) {
}

bool AELSSPickupBase::IsBroken() const {
    return false;
}

int32 AELSSPickupBase::GetValueForInventoryIcon() const {
    return 0;
}

FVector AELSSPickupBase::GetMinimapLocation() const {
    return FVector{};
}

bool AELSSPickupBase::GetIsNeedInteract() const {
    return false;
}

bool AELSSPickupBase::DoInteract(AActor* OtherActor) {
    return false;
}

void AELSSPickupBase::DetachRarityEffect() {
}

void AELSSPickupBase::DestroyAfterLostEffect() {
}

bool AELSSPickupBase::CheckUpdateLostTimer() const {
    return false;
}

bool AELSSPickupBase::CheckCurrentEquipped() const {
    return false;
}

bool AELSSPickupBase::CanMinimapVisible() const {
    return false;
}

bool AELSSPickupBase::CanBePickup(const AActor* OtherActor, bool ignoreHasAuthority, bool& out_reasonIsFullInventory) const {
    return false;
}

void AELSSPickupBase::AttachRarityEffect() {
}

void AELSSPickupBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSPickupBase, DatabaseId);
    DOREPLIFETIME(AELSSPickupBase, LaunchInfo);
    DOREPLIFETIME(AELSSPickupBase, PickupTrans);
    DOREPLIFETIME(AELSSPickupBase, IsLaunchStop);
    DOREPLIFETIME(AELSSPickupBase, IsCanTouch);
    DOREPLIFETIME(AELSSPickupBase, PickupOwner);
    DOREPLIFETIME(AELSSPickupBase, SpawnedTime);
    DOREPLIFETIME(AELSSPickupBase, SpawnReason);
}

AELSSPickupBase::AELSSPickupBase() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->InteractCollision = CreateDefaultSubobject<USphereComponent>(TEXT("InteractCollision"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->PickupType = ESSPickupType::None;
    this->DatabaseId = 0;
    this->Rarity = ESSRarity::None;
    this->IsLaunchStop = false;
    this->IsCanTouch = false;
    this->PickupOwner = NULL;
    this->IsLastOwnerLocallyControlled = false;
    this->IsCurrentEquipped = false;
    this->RarityEffect = NULL;
    this->LostEffectDelaySec = 0.00f;
    this->DestroyAfterLostEffectDelaySec = 3.00f;
    this->CalledLostEffect = false;
    this->LostSec = 0.00f;
    this->LostTimer = 0.00f;
    this->bReservedLostByTimer = false;
    this->SpawnedTime = 0.00f;
    this->PlaySpawnedSEConditionTime = 0.50f;
    this->SpawnReason = ESSSpawnPickupReason::None;
}

