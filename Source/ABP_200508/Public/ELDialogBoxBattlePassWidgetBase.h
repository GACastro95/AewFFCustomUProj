#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "LevelProgressRateParam.h"
#include "ELDialogBoxBattlePassWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELDialogBoxBattlePassWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELDialogBoxBattlePassWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void Setup(int32 _addPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateBattlePassPoint(bool _Successed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceEndDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgressRateNum() const;
    
    UFUNCTION(BlueprintCallable)
    FLevelProgressRateParam GetLevelProgressRateParam(int32 _Index, bool& _findParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndDialog();
    
};

