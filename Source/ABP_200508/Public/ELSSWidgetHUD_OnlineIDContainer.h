#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_OnlineIDContainer.generated.h"

class AActor;
class UELSSWidgetHUD_OnlineID;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_OnlineIDContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_OnlineID*> OnlineIDArray;
    
public:
    UELSSWidgetHUD_OnlineIDContainer();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleContainer(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOnlineID(AActor* InActor, const FString& InOnlineID, bool inIsVisible, bool InHasCarrot);
    
};

