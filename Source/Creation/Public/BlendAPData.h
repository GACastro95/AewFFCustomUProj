#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "Components/SceneComponent.h"
#include "BlendSocketParam.h"
#include "BodyMorphParam.h"
#include "BlendAPData.generated.h"

class UBlendAPData;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class CREATION_API UBlendAPData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlendSocketParam> AttachSocketOffset;
    
    UBlendAPData();

    UFUNCTION(BlueprintCallable)
    static FTransform TryGetBlendedAPSocketTransform(USkeletalMeshComponent* MeshComp, const FName SocketName, const FBodyMorphParam& MorphParam, const TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable)
    static void TryGetBlendAPData(UBlendAPData*& BlendAPData, USkeletalMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void Rebuild();
    
    UFUNCTION(BlueprintCallable)
    void ApplyBlendAPData(USkeletalMeshComponent* MeshComp, float Slim, float Heavy, float Muscular);
    
};

