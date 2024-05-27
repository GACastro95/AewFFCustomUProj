#pragma once
#include "CoreMinimal.h"
#include "CreateTeamParam.h"
#include "ELMainMenuWidgetBase.h"
#include "ELCATMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELCATMenuWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELCATMenuWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameCreateTeamParam(const FCreateTeamParam& A, const FCreateTeamParam& B);
    
};

