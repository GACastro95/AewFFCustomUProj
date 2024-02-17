#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSAnimNotifyBase.h"
#include "ESSStationalCameraBaseTransformMode.h"
#include "ESSStationalCameraEaseType.h"
#include "ELSSAnimNotify_Camera.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotify_Camera : public UELSSAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraLocatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSStationalCameraEaseType InterpEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSStationalCameraBaseTransformMode BaseTransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseTransformSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BaseTransformOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseTransformOffsetLocation;
    
public:
    UELSSAnimNotify_Camera();
    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

