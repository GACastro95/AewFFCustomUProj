#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "ELPlayerNumberHUD.generated.h"

class UELGeneralFontBase;
class UELTagMatchIconBase;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELPlayerNumberHUD : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideControllerID_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTimer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELGeneralFontBase*> GamerTagList_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> GamerTagHideAnimations_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELGeneralFontBase*> ControllerIDList_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> ControllerIDHideAnimations_N;
    
public:
    UELPlayerNumberHUD();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTagIcons(TArray<UELTagMatchIconBase*> InTagIcons);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetShowTimer_N();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePlayerNames_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetTopVisibility_N() const;
    
};

