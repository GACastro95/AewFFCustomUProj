#include "ELSSAttackerComponent.h"
#include "Components/CapsuleComponent.h"

UELSSAttackerComponent::UELSSAttackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackCollisions.AddDefaulted(4);
    this->ParentComponent = NULL;
    this->BlendTimeCount = 0.00f;
    this->InvolveCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InvolveCollision"));
    this->InvolvePropDuration = 0.00f;
    this->InvolvePlayerDuration = 0.00f;
    this->TrampCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TrampCollision"));
    this->TrampVelocityDirectionFactor = 0.00f;
    this->TrampDuration = 0.80f;
    this->TrampVelocityCoef = 0.10f;
    this->TrampVelocityMax = 50.00f;
    this->bExecutingAttack = false;
}

void UELSSAttackerComponent::UpdateInvolveCollision() {
}

void UELSSAttackerComponent::UpdateCollisionShape() {
}

bool UELSSAttackerComponent::TryInvolve(AActor* inReceiveActor, FSSInvolveInfo& inInvolveInfo) {
    return false;
}

bool UELSSAttackerComponent::TryAttack(AActor* inReceiveActor, FSSAttackInfo& inAttackInfo, UPrimitiveComponent* inAtkCollision) {
    return false;
}

void UELSSAttackerComponent::SetupInvolve(AActor* AttackUser, AActor* AttackOwner) {
}

void UELSSAttackerComponent::SetParentComponent(USceneComponent* parentComp) {
}

void UELSSAttackerComponent::SetCollisionOffset(const FVector& Offset) {
}

void UELSSAttackerComponent::PerformInvolvePropOnly() {
}

void UELSSAttackerComponent::PerformInvolvePlayerOnly() {
}

void UELSSAttackerComponent::PerformInvolve() {
}

void UELSSAttackerComponent::OnEndOverlapTramp(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UELSSAttackerComponent::OnEndOverlapInvolve(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UELSSAttackerComponent::OnEndOverlapAttack(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UELSSAttackerComponent::OnBeginOverlapTramp(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UELSSAttackerComponent::OnBeginOverlapInvolve(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UELSSAttackerComponent::OnBeginOverlapAttack(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UELSSAttackerComponent::IsEnableInvolve() const {
    return false;
}

FSSInvolveInfo UELSSAttackerComponent::GetInvolveInfo() const {
    return FSSInvolveInfo{};
}

void UELSSAttackerComponent::ForceUpdateInvolveCollision() {
}

void UELSSAttackerComponent::ForceUpdate() {
}

void UELSSAttackerComponent::DeactivateAttack(int32 attackId) {
}

void UELSSAttackerComponent::ClearAttack() {
}

bool UELSSAttackerComponent::CheckDamage(AActor* inOtherActor, const FSSDamageEvent& inDamageEvent) {
    return false;
}

void UELSSAttackerComponent::ActivateAttack(const FSSAttackCollisionParam& inCollisionParam, const FSSAttackCollisionShapeBlend& inShapeBlend) {
}


