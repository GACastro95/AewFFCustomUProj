#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerDiningType.h"
#include "ECareerPostCommandEventType.h"
#include "ECareerScenarioMatchTiming.h"
#include "ELCareerBalanceAdjustParam.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerBalanceAdjustParam : public AActor {
    GENERATED_BODY()
public:
    AELCareerBalanceAdjustParam();
    UFUNCTION(BlueprintCallable)
    void SetDataTable_WorkOut_Reward_SuccessRate(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_WorkOut_Reward_SkillPoint(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_WorkOut_Reward_Energy(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_WinBonus_SkillPoint(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_WinBonus_CareerMoney(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_ScoreBonus_SkillPoint(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_ScoreBonus_CareerMoney(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_Motivation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_Hospital(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_Energy(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Reward_Dining(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Records_ScenarioPercent(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Records_BestScoreStar(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue_WorkOut_Reward_ChangeSkillPoint(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue_WorkOut_Reward_ChangeEnagy(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue_Records_ScoreStar_StarValue(int32 _ScoreValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue_Records_ScoreStar_HalfStarBool(int32 _ScoreValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue_Records_Scenario_PercentValue(ECareerScenarioMatchTiming _ScenarioPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue_Dining_Reward_EnagyHealValue(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerDiningType GetType_Dining_Reward_DiningType(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRate_WorkOut_Reward_SuccessRate(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRate_Hospital_Reward_SuccessRate(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRate_Hospital_Reward_NeedCareerMoney(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRate_Hospital_Reward_EnagyHealPercent(ECareerPostCommandEventType _CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetKey_Dining_Reward_Description(ECareerPostCommandEventType _CommandType);
    
};

