#include "ELSSWeaponGunBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponGunBullet::AELSSWeaponGunBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->BulletOwner = NULL;
    this->TeamId = 0;
    this->MoveId = 0;
    this->WeaponID = 0;
    this->DoneHit = false;
    this->BallisticEffectActor = NULL;
    this->OverrideDecalThickness = 0.00f;
    this->PlayDecalDelaySec = 0.00f;
    this->IgnoreGravityTimeRemain = 0.00f;
    this->IgnoreGravityTime = 1.00f;
    this->BeforeHitCollisionProfile = TEXT("BlockAllDynamic");
    this->BeforeHitGravityScale = 1.00f;
    this->AfterHitCollisionProfile = TEXT("PhysicsActor");
    this->AfterHitGravityScale = 1.00f;
    this->AfterHitLifeSpan = 1.00f;
    this->StaticMesh->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AELSSWeaponGunBullet::Setup(AELSSPlayer* inAttackUser, int32 inWeaponId, int32 inMoveId, int32 inStateHash) {
}

void AELSSWeaponGunBullet::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AELSSWeaponGunBullet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponGunBullet, BulletOwner);
    DOREPLIFETIME(AELSSWeaponGunBullet, TeamId);
    DOREPLIFETIME(AELSSWeaponGunBullet, MoveId);
    DOREPLIFETIME(AELSSWeaponGunBullet, WeaponID);
}


