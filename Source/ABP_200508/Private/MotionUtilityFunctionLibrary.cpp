#include "MotionUtilityFunctionLibrary.h"
#include "Templates/SubclassOf.h"

bool UMotionUtilityFunctionLibrary::IsExistAnimNotifyState(const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotifyState> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::IsExistAnimNotify(const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

void UMotionUtilityFunctionLibrary::GetMontageTransform(const ACharacter* Character, const UAnimMontage* Montage, const float Potision, FVector& Location, float& Yaw) {
}

void UMotionUtilityFunctionLibrary::GetMontageRootTransform(FTransform& Transform, const ACharacter* Character, const UAnimMontage* Montage) {
}

void UMotionUtilityFunctionLibrary::GetMontageMoveDirection(bool& NoneDirection, float& Direction, const ACharacter* Character, const UAnimMontage* Montage) {
}

FVector UMotionUtilityFunctionLibrary::GetMontageLocation(const ACharacter* Character, const UAnimMontage* Montage, float Potision) {
    return FVector{};
}

float UMotionUtilityFunctionLibrary::GetMontageDirection(const ACharacter* Character, const UAnimMontage* Montage, float Potision) {
    return 0.0f;
}

float UMotionUtilityFunctionLibrary::GetAnimNotifyStateDuration(const UAnimSequenceBase* AnimSequence, const UAnimNotifyState* AnimNotifyState) {
    return 0.0f;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotifyState(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotifyState> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotifys(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotifyNearestPosition(FAnimNotifyEvent& AnimNotifyEvent, const UAnimSequenceBase* AnimSequence, float AnimPos, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotifyInSlotAll(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotifyInSlot(FAnimNotifyEvent& AnimNotifyEvent, const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

bool UMotionUtilityFunctionLibrary::FindAnimNotify(FAnimNotifyEvent& AnimNotifyEvent, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter) {
    return false;
}

void UMotionUtilityFunctionLibrary::DisableRootMotion(const ACharacter* Character) {
}

FRotator UMotionUtilityFunctionLibrary::ConvertMotionBuilderEulerToUnrealEngineEuler(FVector Euler) {
    return FRotator{};
}

void UMotionUtilityFunctionLibrary::CallRefreshBoneTransforms(USkeletalMeshComponent* Mesh) {
}

UMotionUtilityFunctionLibrary::UMotionUtilityFunctionLibrary() {
}

