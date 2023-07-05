#include "ELSSEffectUtility.h"
#include "Templates/SubclassOf.h"

void UELSSEffectUtility::StopEffectAndSinkToPool(const UObject* WorldContextObject, AActor* effectActor, int32 loopSEUniqueId) {
}

void UELSSEffectUtility::StopDecalAndSinkToPool(const UObject* WorldContextObject, AELSSPoolDecalBase* effectActor) {
}

AActor* UELSSEffectUtility::PlayHitEffectFromPoolToTransform(const UObject* WorldContextObject, ESSHitEffectType Type, bool isPlaySE, const FTransform& BaseTransform, UMeshComponent* playSound3DTargetMeshComponent) {
    return NULL;
}

AActor* UELSSEffectUtility::PlayEffectFromPoolWithSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, USceneComponent* baseObject, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent) {
    return NULL;
}

AActor* UELSSEffectUtility::PlayEffectFromPoolWithLoopSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, USceneComponent* baseObject, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent, int32& out_loopSEUniqueId) {
    return NULL;
}

AActor* UELSSEffectUtility::PlayEffectFromPoolToTransformWithSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, const FTransform& BaseTransform, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent) {
    return NULL;
}

AActor* UELSSEffectUtility::PlayEffectFromPoolToTransformWithLoopSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, const FTransform& BaseTransform, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent, int32& out_loopSEUniqueId) {
    return NULL;
}

AELSSPoolDecalBase* UELSSEffectUtility::PlayDecalAttachedFromPool(const UObject* WorldContextObject, TSubclassOf<AELSSPoolDecalBase> DecalClass, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan, bool ifNotEnoughReuseWithoutAlloc) {
    return NULL;
}

AELSSPoolDecalBase* UELSSEffectUtility::PlayDecalAtLocationFromPool(const UObject* WorldContextObject, TSubclassOf<AELSSPoolDecalBase> DecalClass, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

UELSSEffectUtility::UELSSEffectUtility() {
}

