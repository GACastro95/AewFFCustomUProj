#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELLoadingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_LOADINGSCREEN_API UELLoadingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UELLoadingWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayLoadingScreen();
    
};

