#include "Sample_ThirdPersonProjectile.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

void ASample_ThirdPersonProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

ASample_ThirdPersonProjectile::ASample_ThirdPersonProjectile() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ExplosionEffect = NULL;
    this->DamageType = UDamageType::StaticClass();
    this->Damage = 10.00f;
}

