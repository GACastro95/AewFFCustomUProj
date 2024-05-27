#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCameraCorrectVolumeInfo.h"
#include "ELSSCameraCorrectVolume.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSCameraCorrectVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraCorrectVolumeInfo CameraCorrectInfo;
    
public:
    AELSSCameraCorrectVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* inOtherActor);
    
};

