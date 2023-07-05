#include "Sample_ThirdPersonCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Sample_ThirdPersonProjectile.h"

float ASample_ThirdPersonCharacter::TakeDamage(float DamageTaken, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

void ASample_ThirdPersonCharacter::StopFire() {
}

void ASample_ThirdPersonCharacter::StartFire() {
}

void ASample_ThirdPersonCharacter::SetCurrentHealth(float healthValue) {
}

void ASample_ThirdPersonCharacter::OnRep_CurrentHealth() {
}

void ASample_ThirdPersonCharacter::OnHealthUpdate() {
}

bool ASample_ThirdPersonCharacter::IsDead() const {
    return false;
}

void ASample_ThirdPersonCharacter::HandleFire_Implementation() {
}

float ASample_ThirdPersonCharacter::GetMaxHealth() const {
    return 0.0f;
}

float ASample_ThirdPersonCharacter::GetHealthRate() const {
    return 0.0f;
}

float ASample_ThirdPersonCharacter::GetCurrentHealth() const {
    return 0.0f;
}

void ASample_ThirdPersonCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASample_ThirdPersonCharacter, CurrentHealth);
}

ASample_ThirdPersonCharacter::ASample_ThirdPersonCharacter() {
    this->MaxHealth = 1000.00f;
    this->CurrentHealth = 1000.00f;
    this->ProjectileClass = ASample_ThirdPersonProjectile::StaticClass();
    this->FireRate = 0.25f;
}

