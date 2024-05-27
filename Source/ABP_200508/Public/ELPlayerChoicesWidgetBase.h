#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELPlayerChoicesWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELPlayerChoicesWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELPlayerChoicesWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTitleText(FText _TitleText);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleKey(const FString& _TitleKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerChoiceWidgetOpen(bool _bOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerChoicesText(TArray<FText> _PlayerChoicesText);
    
    UFUNCTION(BlueprintCallable)
    void SetDecision(bool _bDecision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerChoiceWidgetOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTitleKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetPlayerChoicesText();
    
};

