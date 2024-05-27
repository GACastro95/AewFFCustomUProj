#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSGuideIconType.h"
#include "SSGuideIconOnChangeDelegate.h"
#include "ELSSWidgetHUD_SSGuideIconContainer.generated.h"

class AActor;
class UELSSWidgetHUD_SSGuideIcon;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSGuideIconContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_SSGuideIcon*> IconArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGuideIconOnChange OnChangeActive;
    
public:
    UELSSWidgetHUD_SSGuideIconContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleMatchIcon(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleContainer(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetIconAll();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGuideIcon(AActor* InActor, ESSGuideIconType InIconType, bool inIsVisible);
    
};

