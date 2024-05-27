#include "ELSSWeaponTrapObject.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ELSSWeaponUserDesignComponent.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponTrapObject::AELSSWeaponTrapObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->UserDesignComponent = CreateDefaultSubobject<UELSSWeaponUserDesignComponent>(TEXT("UserDesignComponent"));
    this->CheckPutTriggerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCollision"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->GuideMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GuideMesh"));
    this->ObjectType = ESSWeaponTrapObjectType::None;
    this->objectOwner = NULL;
    this->ModeRep = ESSWeaponTrapMode::None;
    this->IsCanPutGuideVisiual = false;
    this->CheckPutTriggerProfileName = TEXT("SSCheckPutTrapTrigger");
    this->SoundCue_Put = NULL;
    this->HitEffectLineTraceScale = 0.50f;
    this->SoundCue_Hit = NULL;
    this->IsReserveDestroy = false;
    this->RemainDurability = 0;
    this->MaxDurability = 1;
    this->CheckPutTriggerCollision->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->GuideMesh->SetupAttachment(RootComponent);
}

void AELSSWeaponTrapObject::UpdateGuideVisual(bool NewCanPut) {
}

void AELSSWeaponTrapObject::Setup(AELSSPlayer* NewObjectOwner, ESSWeaponTrapMode Mode) {
}

void AELSSWeaponTrapObject::SetRemainDurability(int32 Durability) {
}

void AELSSWeaponTrapObject::SetObjectOwner(AELSSPlayer* NewOwner) {
}

void AELSSWeaponTrapObject::SetInternalVisible(bool flg) {
}

void AELSSWeaponTrapObject::SetGuideVisual_Implementation(bool NewCanPut) {
}

void AELSSWeaponTrapObject::SetExternalVisible(bool flg) {
}

bool AELSSWeaponTrapObject::ReserveDestroy() {
    return false;
}

void AELSSWeaponTrapObject::Put() {
}

void AELSSWeaponTrapObject::PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason) {
}

void AELSSWeaponTrapObject::OnRep_ObjectOwner(AELSSPlayer* lastOwner) {
}

void AELSSWeaponTrapObject::OnRep_Mode() {
}

int32 AELSSWeaponTrapObject::GetRemainDurability() const {
    return 0;
}

ESSWeaponTrapObjectType AELSSWeaponTrapObject::GetObjectType() const {
    return ESSWeaponTrapObjectType::None;
}

AELSSPlayer* AELSSWeaponTrapObject::GetObjectOwner() const {
    return NULL;
}

int32 AELSSWeaponTrapObject::GetMaxDurability() const {
    return 0;
}

bool AELSSWeaponTrapObject::GetIsBroken() const {
    return false;
}

bool AELSSWeaponTrapObject::GetIsAfterPut() const {
    return false;
}

void AELSSWeaponTrapObject::ChangeMode_Trap() {
}

void AELSSWeaponTrapObject::ChangeMode_Guide() {
}

void AELSSWeaponTrapObject::ChangeMode(ESSWeaponTrapMode Mode) {
}

bool AELSSWeaponTrapObject::CanPut() const {
    return false;
}

int32 AELSSWeaponTrapObject::AddDurability(int32 Value) {
    return 0;
}

void AELSSWeaponTrapObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponTrapObject, objectOwner);
    DOREPLIFETIME(AELSSWeaponTrapObject, ModeRep);
}


