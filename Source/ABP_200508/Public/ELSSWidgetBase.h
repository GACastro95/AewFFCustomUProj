#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELSSWidgetBase.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UELSSWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalize();
    
};

