#include "ELAnimInstance_IK.h"

UELAnimInstance_IK::UELAnimInstance_IK() {
    this->bEnableIK = true;
    this->bDisableUpdate = false;
}


void UELAnimInstance_IK::TransformBoneSpaceLocation(FVector& BoneSpaceLocation, const FName BoneName, const FVector InLocation) const {
}

void UELAnimInstance_IK::StartLocationIK(EELIKPartType PartType, FELAttachCondition Condition, float BlendTime, float MaxBlendRate) {
}

void UELAnimInstance_IK::StartConstraintByType(const EELIKPartType PartType, const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate) {
}

void UELAnimInstance_IK::StartConstraintBySocket(const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate) {
}

void UELAnimInstance_IK::StartConstraint(const FName IKBoneName, const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate) {
}

void UELAnimInstance_IK::SetTargetLocation(EELIKPartType PartType, const FVector& Location) {
}

bool UELAnimInstance_IK::IsSupportNodeName(const FName NodeName) const {
    return false;
}

bool UELAnimInstance_IK::IsControlIK(const EELIKPartType PartType) const {
    return false;
}

void UELAnimInstance_IK::GetPartParam(FELCutsceneIKParameter& OutParam, const EELIKPartType PartType) const {
}

void UELAnimInstance_IK::GetIKParam(EELIKPartType PartType, FTransform& EffectTransform, float& BlendRate) const {
}

void UELAnimInstance_IK::GetEffectBoneLocation(FVector& Location, const EELIKPartType EffectBone, const TEnumAsByte<EBoneSpaces::Type> SpaceType) const {
}

void UELAnimInstance_IK::GetBoneTransform(FTransform& Transform, const FName BoneName) const {
}

void UELAnimInstance_IK::GetBoneLocation(FVector& Location, const FName BoneName, const TEnumAsByte<EBoneSpaces::Type> SpaceType) const {
}

FName UELAnimInstance_IK::GetBone2NodeName(const FName AnchorNodeName) {
    return NAME_None;
}

void UELAnimInstance_IK::FinishIK(EELIKPartType PartType, float BlendTime) {
}

void UELAnimInstance_IK::FinishConstraint(const FName AnchorNodeName, float BlendTime) {
}

void UELAnimInstance_IK::FinishAllIK(const float BlendTime) {
}

FName UELAnimInstance_IK::ConvertWrestlerAP2NodeName(const EWrestlerAP AttachPoint) const {
    return NAME_None;
}

FName UELAnimInstance_IK::ConvertPartType2NodeName(const EELIKPartType PartType) const {
    return NAME_None;
}


