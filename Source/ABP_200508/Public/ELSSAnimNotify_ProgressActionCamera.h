#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyBase.h"
#include "ESSActionCameraID.h"
#include "ELSSAnimNotify_ProgressActionCamera.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotify_ProgressActionCamera : public UELSSAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionCameraID ActionCameraID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewStep;
    
public:
    UELSSAnimNotify_ProgressActionCamera();

    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* inMeshComp, UAnimSequenceBase* InAnimation);
    
};

