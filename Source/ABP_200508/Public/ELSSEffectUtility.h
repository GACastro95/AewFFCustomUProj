#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "ESSHitEffectType.h"
#include "Templates/SubclassOf.h"
#include "ELSSEffectUtility.generated.h"

class AActor;
class AELSSPoolDecalBase;
class UMeshComponent;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class ABP_200508_API UELSSEffectUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSEffectUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopEffectAndSinkToPool(const UObject* WorldContextObject, AActor* effectActor, int32 loopSEUniqueId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopDecalAndSinkToPool(const UObject* WorldContextObject, AELSSPoolDecalBase* effectActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* PlayHitEffectFromPoolToTransform(const UObject* WorldContextObject, ESSHitEffectType Type, bool isPlaySE, const FTransform& BaseTransform, UMeshComponent* playSound3DTargetMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* PlayEffectFromPoolWithSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, USceneComponent* baseObject, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* PlayEffectFromPoolWithLoopSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, USceneComponent* baseObject, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent, int32& out_loopSEUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* PlayEffectFromPoolToTransformWithSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, const FTransform& BaseTransform, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* PlayEffectFromPoolToTransformWithLoopSE(const UObject* WorldContextObject, const FName& EffectDatabaseRowName, const FTransform& BaseTransform, bool isPlaySE, UMeshComponent* playSE3DTargetMeshComponent, int32& out_loopSEUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPoolDecalBase* PlayDecalAttachedFromPool(const UObject* WorldContextObject, TSubclassOf<AELSSPoolDecalBase> DecalClass, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan, bool ifNotEnoughReuseWithoutAlloc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPoolDecalBase* PlayDecalAtLocationFromPool(const UObject* WorldContextObject, TSubclassOf<AELSSPoolDecalBase> DecalClass, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
};

