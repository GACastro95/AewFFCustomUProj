#include "ELSSOnlineTestCharacter.h"
#include "ELSSOnlineTestAttackProjectile.h"
#include "Net/UnrealNetwork.h"

AELSSOnlineTestCharacter::AELSSOnlineTestCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WrestlerID = EWrestlerID_N::None;
    this->CostumeID = 0;
    this->joinID = 0;
    this->HP = 0;
    this->LocalHP = 0;
    this->maxHP = 0;
    this->dead = false;
    this->AttackProjectileType = AELSSOnlineTestAttackProjectile::StaticClass();
    this->AfterDeadDuration = 3.50f;
}

void AELSSOnlineTestCharacter::SpawnAttackProjectile_RPC_Implementation() {
}

void AELSSOnlineTestCharacter::SetWrestlerMeshParam(EWrestlerID_N inWrestlerId, int32 inCostumeID) {
}


void AELSSOnlineTestCharacter::SetJoinID(int32 InID) {
}

void AELSSOnlineTestCharacter::OnRep_HP() {
}


bool AELSSOnlineTestCharacter::IsInputMove() const {
    return false;
}

bool AELSSOnlineTestCharacter::IsHPDead() const {
    return false;
}

bool AELSSOnlineTestCharacter::IsDeadForDestroy() const {
    return false;
}

int32 AELSSOnlineTestCharacter::GetJoinID() const {
    return 0;
}

void AELSSOnlineTestCharacter::ForceHPDead_Implementation() {
}

void AELSSOnlineTestCharacter::DamageLocal(int32 NewDamage) {
}

void AELSSOnlineTestCharacter::Damage_Implementation(int32 NewDamage) {
}

void AELSSOnlineTestCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSOnlineTestCharacter, WrestlerID);
    DOREPLIFETIME(AELSSOnlineTestCharacter, joinID);
    DOREPLIFETIME(AELSSOnlineTestCharacter, HP);
}


