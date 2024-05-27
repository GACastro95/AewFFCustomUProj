#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSAreaCountDownTextType.h"
#include "ELSSWidgetHUD_AreaCountDown.generated.h"

class UMaterialInstanceDynamic;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AreaCountDown : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountMinute_10Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountMinute_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_10Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowAreaCountDown;
    
public:
    UELSSWidgetHUD_AreaCountDown();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnnounceText(ESSAreaCountDownTextType InTextType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCountText(bool InIsMinute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyAreaShrinkText(ESSAreaCountDownTextType InTextType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyAreaCountDown(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType);
    
};

