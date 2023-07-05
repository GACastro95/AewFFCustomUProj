#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SnapshotCaptureComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API USnapshotCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_TextureTarget;
    
    USnapshotCaptureComponent();
    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

