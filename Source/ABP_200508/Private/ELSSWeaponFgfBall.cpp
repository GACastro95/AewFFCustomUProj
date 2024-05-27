#include "ELSSWeaponFgfBall.h"
#include "Components/SceneComponent.h"
#include "ESSWeaponType.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponFgfBall::AELSSWeaponFgfBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponType = ESSWeaponType::FgfBall;
    this->LaunchType = ESSFgfLaunchType::None;
    this->InterpComponent = CreateDefaultSubobject<USceneComponent>(TEXT("InterpComponent"));
    this->GuideTargetOwnerActor = NULL;
    this->PassTargetActor = NULL;
    this->LastHoldPlayer = NULL;
    this->LaunchedTime = 0.00f;
    this->SpeedWithAttack = 1000.00f;
    this->PassTargetSearchRange = 1000.00f;
    this->DroppedTimeLimitCount = 0.00f;
    this->DroppedTimeLimitDuration = 25.00f;
    this->AimLaunchSpeed = 1500.00f;
    this->AimLaunchGravityScale = 0.20f;
    this->AimLaunchDuration = 1.00f;
    this->GuideTargetActor = NULL;
    this->ValidPassCountRemain = 0.00f;
    this->Level = 0;
    this->bAlly = false;
    this->InterpComponent->SetupAttachment(RootComponent);
}



void AELSSWeaponFgfBall::StopPassTarget() {
}


void AELSSWeaponFgfBall::OnRep_LaunchType() {
}

void AELSSWeaponFgfBall::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AELSSWeaponFgfBall::EnablePick() {
}

void AELSSWeaponFgfBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponFgfBall, LaunchType);
}


