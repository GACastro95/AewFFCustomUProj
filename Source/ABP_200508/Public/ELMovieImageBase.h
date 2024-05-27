#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMoviePlayerEvent.h"
#include "ELMovieImageBase.generated.h"

class UELMoviePlayerBase;
class UImage;
class UManaTexture;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMovieImageBase : public UUserWidget {
    GENERATED_BODY()
public:
    UELMovieImageBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StopMovie_N();
    
    UFUNCTION(BlueprintCallable)
    void StartPrepare_N(int32 MovieSlotID, const FName& MovieDataID, bool Loop, bool InAutoPlay, float& FadeInTime, float& FadeOutTime, float& TotalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupTextureSimple_N(UImage* TargetImage, int32 MovieSlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTextureImpl(UImage* TargetImage, int32 SlotNo, bool Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetupTexture_N(UImage* TargetImage, int32 MovieSlotID);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureList(TArray<UManaTexture*> InTextureList);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerEventSetVisibleOnly(EMoviePlayerEvent EventType, UELMoviePlayerBase* MoviePlayerBase);
    
protected:
    UFUNCTION(BlueprintCallable)
    UELMoviePlayerBase* GetMoviePlayer();
    
};

