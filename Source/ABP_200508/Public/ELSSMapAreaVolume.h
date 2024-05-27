#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCameraCorrectVolumeInfo.h"
#include "SSMapAreaVolumeInfo.h"
#include "ELSSMapAreaVolume.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSMapAreaVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMapAreaVolumeInfo AreaInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCameraCorrect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraCorrectVolumeInfo CameraCorrectInfo;
    
public:
    AELSSMapAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* inOtherActor);
    
};

