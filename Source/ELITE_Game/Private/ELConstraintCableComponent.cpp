#include "ELConstraintCableComponent.h"

UELConstraintCableComponent::UELConstraintCableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckInsideOfMontageAnimNotifyState = false;
    this->KeyNamePrefix = TEXT("#");
}

void UELConstraintCableComponent::UpdateConstraintLocation_Implementation(const FName SocketName, const FVector SocketLocation, const AActor* Actor, const bool bDirX) {
}

void UELConstraintCableComponent::OnMontageEnded_Implementation(UAnimMontage* Montage, bool bInterrupted) {
}



void UELConstraintCableComponent::Constraint_Start(UAnimSequenceBase* Animation, const FName SocketName, AActor* RopeActor, const bool bDirX) {
}

void UELConstraintCableComponent::Constraint_FinishArray(UAnimSequenceBase* Animation, const TArray<FName>& SocketNames) {
}

void UELConstraintCableComponent::Constraint_Finish(UAnimSequenceBase* Animation, const FName SocketName) {
}

void UELConstraintCableComponent::AutoConstraintFinish(UAnimMontage* Montage, bool bInterrupted) {
}

void UELConstraintCableComponent::AllConstraint_Finish(UAnimSequenceBase* Animation) {
}


