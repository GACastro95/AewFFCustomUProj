#include "ELSSActionStateBase.h"
#include "Templates/SubclassOf.h"

UELSSActionStateBase::UELSSActionStateBase() {
    this->SyncMode = ESSActionStateSyncMode::Predict;
    this->MontageSt = NULL;
    this->MontageLo = NULL;
    this->EnableMovement = false;
    this->FallLimitDuration = -1.00f;
    this->EnableUpperBodyAnim = false;
    this->ContinueInvolveParam = false;
    this->LastUpdatedMovementAdjustTime = 0.00f;
    this->RotationRateScale = 1.00f;
    this->CollisionHeightScale = 1.00f;
    this->CollisionRadiusScale = 1.00f;
    this->MaxLandingLevel = -1;
    this->DefaultTransitable = ESSActionTransitableCondition::Action;
    this->CancelTransitable = ESSActionTransitableCondition::ActionCancel;
    this->PlayingTime = 0.00f;
    this->OwnerComponent = NULL;
    this->AnimInstance = NULL;
    this->CurrentMontageReplaced = NULL;
    this->CurrentMontageBeforeReplace = NULL;
    this->ReservedMontage = NULL;
    this->EnableCancelTransit = false;
    this->EnableMovableTransit = false;
    this->FallTimeCount = 0.00f;
    this->LandingStarted = false;
    this->DisableBlendOut = false;
    this->DamageReceiverState = ESSDamageReceiverState::Default;
    this->RootMotionDisabled = false;
    this->InactiveMontageTimeCount = 0.00f;
}

void UELSSActionStateBase::UpdateMovementParam() {
}

void UELSSActionStateBase::StopMontage_Implementation(float BlendOutTime) {
}

void UELSSActionStateBase::SetMontageSt(UAnimMontage* inMontage) {
}

void UELSSActionStateBase::SetMontageLo(UAnimMontage* inMontage) {
}

void UELSSActionStateBase::SetEnableMovableTransit(bool Enable) {
}

void UELSSActionStateBase::SetEnableCancelTransit(bool Enable) {
}

void UELSSActionStateBase::ReserveMontage_Implementation(UAnimMontage* inMontage) {
}

void UELSSActionStateBase::PlayMontageBranch(EActionStateMontagePlayResult& Result, UAnimMontage* inCurrentMontage, UAnimMontage* inPlayMontage) {
}

void UELSSActionStateBase::PlayMontage_Implementation(UAnimMontage* inMontage) {
}

void UELSSActionStateBase::OnTick_Implementation(float DeltaTime) {
}

void UELSSActionStateBase::OnSimulateLand_Implementation() {
}

void UELSSActionStateBase::OnPrePlayFirstMontage_Implementation() {
}


void UELSSActionStateBase::OnNotifySyncOff_Implementation() {
}

void UELSSActionStateBase::OnNotifyMotionEnd_Implementation() {
}

void UELSSActionStateBase::OnNotifyJumpUp_Implementation() {
}

void UELSSActionStateBase::OnMovable_Implementation() {
}

void UELSSActionStateBase::OnLand_Implementation() {
}

void UELSSActionStateBase::OnEnd_Implementation() {
}

void UELSSActionStateBase::OnBegin_Implementation() {
}

void UELSSActionStateBase::NativeUpdate(float DeltaTime) {
}

bool UELSSActionStateBase::IsInAir_Implementation() const {
    return false;
}

bool UELSSActionStateBase::IsEnableUpperBodyAnim_Implementation() const {
    return false;
}

bool UELSSActionStateBase::IsEnablePickupVisible_Implementation() const {
    return false;
}

bool UELSSActionStateBase::IsEnableMovement_Implementation() const {
    return false;
}

bool UELSSActionStateBase::IsEnableFallCancel() const {
    return false;
}

bool UELSSActionStateBase::IsAffectedBySlip_Implementation() const {
    return false;
}

void UELSSActionStateBase::Initialize(UELSSActionStatePlayerComponent* inOwnerComponent, UAnimInstance* inAnimInstance) {
}

bool UELSSActionStateBase::IgnoreMovementCorrect_Implementation() const {
    return false;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStateBase::GetTransitableStateDefault(ESSActionTransitTrigger transitTrigger) const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStateBase::GetTransitableState_Implementation(ESSActionTransitTrigger transitTrigger) const {
    return NULL;
}

int32 UELSSActionStateBase::GetTransitableMove(ESSActionTransitTrigger transitTrigger, ESSMoveCommand& outMoveCommand) const {
    return 0;
}

ESSActionStateSyncMode UELSSActionStateBase::GetSyncMode_Implementation() const {
    return ESSActionStateSyncMode::Predict;
}

UAnimMontage* UELSSActionStateBase::GetReceiverMontage_Implementation(UAnimMontage* inAttackerMontage) {
    return NULL;
}

float UELSSActionStateBase::GetPlayingTime() const {
    return 0.0f;
}

AELSSPlayer* UELSSActionStateBase::GetOwnerPlayerCharacter() const {
    return NULL;
}

ACharacter* UELSSActionStateBase::GetOwnerCharacter() const {
    return NULL;
}

AActor* UELSSActionStateBase::GetOwnerActor() const {
    return NULL;
}

float UELSSActionStateBase::GetMoveSpeedScale_Implementation() const {
    return 0.0f;
}

int32 UELSSActionStateBase::GetMaxLandingLevel() const {
    return 0;
}

void UELSSActionStateBase::GetInvolveFeedbackDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const {
}

void UELSSActionStateBase::GetInvolveDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const {
}

UAnimMontage* UELSSActionStateBase::GetFirstMontage_Implementation() const {
    return NULL;
}

ESSDamageReceiverState UELSSActionStateBase::GetDamageReceiverState_Implementation() const {
    return ESSDamageReceiverState::Default;
}

FSSDamageReactionParam UELSSActionStateBase::GetDamageReactionParam() const {
    return FSSDamageReactionParam{};
}

UAnimMontage* UELSSActionStateBase::GetDamageReactionMontage() const {
    return NULL;
}

UAnimMontage* UELSSActionStateBase::GetDamageLandMontage() const {
    return NULL;
}

UAnimMontage* UELSSActionStateBase::GetDamageFallingMontage() const {
    return NULL;
}

ESSActionCameraID UELSSActionStateBase::GetCurrentMoveActionCameraID() const {
    return ESSActionCameraID::None;
}

UAnimMontage* UELSSActionStateBase::GetCurrentMontageReplaced() const {
    return NULL;
}

UAnimMontage* UELSSActionStateBase::GetCurrentMontage_Implementation() const {
    return NULL;
}

UELSSCharacterMovementComponent* UELSSActionStateBase::GetCharacterMovement() const {
    return NULL;
}

bool UELSSActionStateBase::DetectSituationHitReaction(const FHitResult& inHitResult) {
    return false;
}

void UELSSActionStateBase::Deactivate() {
}

bool UELSSActionStateBase::CheckOwnerLocallyControlled() const {
    return false;
}

bool UELSSActionStateBase::CanLand_Implementation() const {
    return false;
}

bool UELSSActionStateBase::CanDisappear_Implementation() const {
    return false;
}

void UELSSActionStateBase::Activate() {
}


