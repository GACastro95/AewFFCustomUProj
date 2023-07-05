#include "ELSSOnlineTestAttackProjectile.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

void AELSSOnlineTestAttackProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AELSSOnlineTestAttackProjectile::AELSSOnlineTestAttackProjectile() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ExplosionEffect = NULL;
    this->DamageType = UDamageType::StaticClass();
    this->Damage = 10.00f;
    this->AttackUser = NULL;
}

