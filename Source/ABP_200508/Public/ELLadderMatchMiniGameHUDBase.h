#pragma once
#include "CoreMinimal.h"
#include "ELUserWidget.h"
#include "EDisplayButtonIconType.h"
#include "ELLadderMatchMiniGameHUDBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELLadderMatchMiniGameHUDBase : public UELUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText String_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText String_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText String_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText String_Y;
    
public:
    UELLadderMatchMiniGameHUDBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(int32 Step, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonY(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonX(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonB(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonA(int32 PlayerIndex, EDisplayButtonIconType ButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnlockAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySucceedAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailedAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCancelAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallUnlockEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallSucceedEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallFailedEvent();
    
};

