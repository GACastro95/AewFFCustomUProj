#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_SSSessionMemberIconContainer.generated.h"

class AActor;
class UELSSWidgetHUD_SSSessionMemberIcon;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSSessionMemberIconContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_SSSessionMemberIcon*> IconArray;
    
public:
    UELSSWidgetHUD_SSSessionMemberIconContainer();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleContainer(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplySessionMemberIcon(AActor* InActor, int32 InPlayerIndex, bool inIsVisible);
    
};

