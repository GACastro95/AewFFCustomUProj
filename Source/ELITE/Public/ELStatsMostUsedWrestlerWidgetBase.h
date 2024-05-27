#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatsUsedWrestler.h"
#include "ELStatsMostUsedWrestlerWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELStatsMostUsedWrestlerWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UELStatsMostUsedWrestlerWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UsedCount_Sort(TArray<FStatsUsedWrestler> _target, bool IsDesc, TArray<FStatsUsedWrestler>& _out);
    
};

