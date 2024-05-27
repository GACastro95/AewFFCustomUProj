#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerEventScreenEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerEventScreenEffect : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerEventScreenEffect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInAnimation();
    
};

