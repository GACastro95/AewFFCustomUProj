#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELMapPlayerInfoWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMapPlayerInfoWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELMapPlayerInfoWidgetBase();
    UFUNCTION(BlueprintCallable)
    void UpdateParameter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInjury() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStrSkillPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStrMotivationLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStrEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStrCareerMoney();
    
};

