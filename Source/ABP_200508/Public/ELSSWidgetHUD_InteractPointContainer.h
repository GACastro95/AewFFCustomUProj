#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_InteractPointContainer.generated.h"

class AActor;
class UELSSWidgetHUD_InteractPoint;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_InteractPointContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_InteractPoint*> InteractPointArray;
    
public:
    UELSSWidgetHUD_InteractPointContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleContainer(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractPoint(AActor* InActor, bool inIsVisible);
    
};

