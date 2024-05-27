#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELCareerPlayerStatus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerPlayerStatus : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELCareerPlayerStatus();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSkillPointBuff(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSkillPoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateParameter(float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMomentumBuff(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInjury(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFinisherBuff(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCareerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInjury() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextWeek();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextRoadToPPV();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPPVLogoIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInAnimation();
    
};

