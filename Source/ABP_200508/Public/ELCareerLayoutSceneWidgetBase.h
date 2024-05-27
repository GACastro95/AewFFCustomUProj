#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerLayoutSceneWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerLayoutSceneWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerLayoutSceneWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLayoutScene();
    
};

