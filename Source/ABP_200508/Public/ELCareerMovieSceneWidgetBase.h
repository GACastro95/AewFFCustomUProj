#pragma once
#include "CoreMinimal.h"
#include "CareerMovieSceneParam.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerMovieSceneWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerMovieSceneWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerMovieSceneWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEventOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovie();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateFlag(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitles(const FString& TextID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Prepare(const FCareerMovieSceneParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelHoldDecision();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSubtitles();
    
};

