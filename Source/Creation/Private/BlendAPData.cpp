#include "BlendAPData.h"

FTransform UBlendAPData::TryGetBlendedAPSocketTransform(USkeletalMeshComponent* MeshComp, const FName SocketName, const FBodyMorphParam& MorphParam, const TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return FTransform{};
}

void UBlendAPData::TryGetBlendAPData(UBlendAPData*& BlendAPData, USkeletalMesh* Mesh) {
}

void UBlendAPData::Rebuild() {
}

void UBlendAPData::ApplyBlendAPData(USkeletalMeshComponent* MeshComp, float Slim, float Heavy, float Muscular) {
}

UBlendAPData::UBlendAPData() {
}

