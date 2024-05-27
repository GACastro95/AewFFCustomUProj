#include "ELSSOnlineTestAttackProjectile.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AELSSOnlineTestAttackProjectile::AELSSOnlineTestAttackProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ExplosionEffect = NULL;
    this->DamageType = UDamageType::StaticClass();
    this->Damage = 10.00f;
    this->AttackUser = NULL;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AELSSOnlineTestAttackProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


