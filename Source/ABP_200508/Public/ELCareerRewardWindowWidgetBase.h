#pragma once
#include "CoreMinimal.h"
#include "CareerRewardGet.h"
#include "ECareerRewardEffectType.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerRewardWindowWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerRewardWindowWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerRewardWindowWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTextNew(FCareerRewardGet stCareerRewardGet, bool bLast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupText(FName _StringID, const FString& _ReplaceSrcString, const FString& _ReplaceDstString, ECareerRewardEffectType _type);
    
};

