#pragma once
#include "CoreMinimal.h"
#include "BattlePassRewardMenuParam.h"
#include "ELMenuWidgetBase.h"
#include "ELBattlePassMenuRewardWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELBattlePassMenuRewardWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELBattlePassMenuRewardWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeItem(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveCursorForMouse(bool IsLeft);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetNextBattePassRewardItemList(bool _isMoveLeft, TArray<FBattlePassRewardMenuParam>& _centerItemList, TArray<FBattlePassRewardMenuParam>& _leftItemList, TArray<FBattlePassRewardMenuParam>& _rightItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKeyRepeatCount();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentBattlePassRewardItemList(FBattlePassRewardMenuParam& _currentItem, TArray<FBattlePassRewardMenuParam>& _leftItemList, TArray<FBattlePassRewardMenuParam>& _rightItemList);
    
};

