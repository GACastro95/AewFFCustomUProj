#pragma once
#include "CoreMinimal.h"
#include "ELBattlePassMenuChallengeWidgetBase.h"
#include "ELSSModeRewardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSModeRewardWidget : public UELBattlePassMenuChallengeWidgetBase {
    GENERATED_BODY()
public:
    UELSSModeRewardWidget();

    UFUNCTION(BlueprintCallable)
    void OperationStickUpDown(const bool IsUp);
    
};

