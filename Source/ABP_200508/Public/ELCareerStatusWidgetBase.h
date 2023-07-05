#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerStatusWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerStatusWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerStatusWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateToDynamiteSquareNum(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSkillPointNum(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMotivationLevel(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMatchLogo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFollowersNum(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCondition(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCareerMoneyNum(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAllWidget(bool _bAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetToDynamiteSquareNum(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPointNum(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMotivation(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowersNum(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCondition(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMoneyNum(int32 _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetToDynamiteSquareNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPointNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFollowersNumString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFollowersNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerMoneyNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChainUpdateAllWidget(bool _bAnimation);
    
};

