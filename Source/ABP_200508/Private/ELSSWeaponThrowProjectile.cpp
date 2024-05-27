#include "ELSSWeaponThrowProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "ELSSWeaponUserDesignComponent.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponThrowProjectile::AELSSWeaponThrowProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->UserDesignComponent = CreateDefaultSubobject<UELSSWeaponUserDesignComponent>(TEXT("UserDesignComponent"));
    this->ProjectileType = ESSWeaponThrowProjectileType::None;
    this->OwnerWeapon = NULL;
    this->WeaponID = 0;
    this->MoveId = 0;
    this->TeamId = 0;
    this->State = ESSWeaponThrowProjectileState::Stocked;
    this->EffectRadius = 100.00f;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AELSSWeaponThrowProjectile::SetInternalVisible(bool flg) {
}

void AELSSWeaponThrowProjectile::SetExternalVisible(bool flg) {
}

void AELSSWeaponThrowProjectile::OnRep_State() {
}

void AELSSWeaponThrowProjectile::OnRep_LaunchInfo() {
}

void AELSSWeaponThrowProjectile::OnRep_HitInfo() {
}

void AELSSWeaponThrowProjectile::OnProjectileImpactForClient(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AELSSWeaponThrowProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AELSSWeaponThrowProjectile::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AELSSWeaponThrowProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponThrowProjectile, OwnerWeapon);
    DOREPLIFETIME(AELSSWeaponThrowProjectile, WeaponID);
    DOREPLIFETIME(AELSSWeaponThrowProjectile, MoveId);
    DOREPLIFETIME(AELSSWeaponThrowProjectile, State);
    DOREPLIFETIME(AELSSWeaponThrowProjectile, LaunchInfo);
    DOREPLIFETIME(AELSSWeaponThrowProjectile, HitInfo);
}


