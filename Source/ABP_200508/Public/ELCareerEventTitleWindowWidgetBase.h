#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerEventTitleWindowWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerEventTitleWindowWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerEventTitleWindowWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupText();
    
};

