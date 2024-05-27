#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSFgfMapAreaVolumeInfo.h"
#include "ELSSFgfMapAreaVolume.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSFgfMapAreaVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSFgfMapAreaVolumeInfo FgfMapAreaInfo;
    
public:
    AELSSFgfMapAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* inOtherActor);
    
};

