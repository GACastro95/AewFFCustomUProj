#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ELSSWidgetBase.h"
#include "SSLogTextParam.h"
#include "ELSSWidgetHUD_SSLog.generated.h"

class UImage;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSLog : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LogIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HorizonalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogTextLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin NoIconMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin WithIconMargin;
    
public:
    UELSSWidgetHUD_SSLog();

    UFUNCTION(BlueprintCallable)
    void SetTextAndColorByList(const TArray<FSSLogTextParam>& inTextParam, UTexture2D* InIcon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLogTextVisible(bool InVisible, int32 InIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLogTextParam(const FSSLogTextParam& InParam, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetAnimationState();
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayInOutAnimation(bool InPlayIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShow();
    
};

