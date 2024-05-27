#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELCareerWidgetBase.generated.h"

class AELCareerStateManager;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELCareerWidgetBase();

    UFUNCTION(BlueprintCallable)
    void InitBroadcastSetting(AELCareerStateManager* CareerStateManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidgetAnimationSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ClearBroadcastSetting();
    
};

