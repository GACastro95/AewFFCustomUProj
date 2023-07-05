#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ELCareerDebugInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerDebugInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UELCareerDebugInfoWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushDebugMessage(const FString& rMessege, const FLinearColor& rColor);
    
};

