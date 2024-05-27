#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELGaugeStatusIcon.generated.h"

class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELGaugeStatusIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tex_KO_N;
    
public:
    UELGaugeStatusIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNativeParam(UWidgetAnimation* Out, UWidgetAnimation* In, UImage* Icon);
    
};

