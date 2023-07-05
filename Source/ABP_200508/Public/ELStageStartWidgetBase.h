#pragma once
#include "CoreMinimal.h"
#include "ELCareerLayoutSceneWidgetBase.h"
#include "ELStageStartWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELStageStartWidgetBase : public UELCareerLayoutSceneWidgetBase {
    GENERATED_BODY()
public:
    UELStageStartWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTextSubject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTextBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieNo();
    
};

