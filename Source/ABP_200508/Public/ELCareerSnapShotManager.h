#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELCareerSnapShotManager.generated.h"

class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSnapShotManager : public AActor {
    GENERATED_BODY()
public:
    AELCareerSnapShotManager();
protected:
    UFUNCTION(BlueprintCallable)
    void ResizeSnapshotResolutionFromPlatform(UTextureRenderTarget2D* pTextureRenderTarget2D);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSceneCaptureSourceFromPlatform(USceneCaptureComponent2D* pCaptureComponent2D);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureFrameBuffer();
    
};

