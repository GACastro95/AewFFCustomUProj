#pragma once
#include "CoreMinimal.h"
#include "YCreate_DebugMenuBase.h"
#include "YCAM_DebugMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UYCAM_DebugMenu : public UYCreate_DebugMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 menuId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewIdxNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewIdxJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDeleteDuplicateCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScreenShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNotThreadTickAsyncPlayer;
    
public:
    UYCAM_DebugMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsScreenShot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsNotThreadTickAsyncPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsEndless();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsDeleteDuplicateCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStopPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStartStrikeDistanceTest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStartPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStartDivingDistanceTest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStartDistanceTest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushStartAllTest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnablePlayingPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableCanStartPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableCAMMode();
    
    UFUNCTION(BlueprintCallable)
    void ConvertTexture2DToBuffer(const TSoftObjectPtr<UTexture2D>& Texture, TArray<uint8>& OutBuffer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyPreviewIdx();
    
};

