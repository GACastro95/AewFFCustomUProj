#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELCommonLayout.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCommonLayout : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BaseCanvas;
    
public:
    UELCommonLayout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAllChildWidgets();
    
};

