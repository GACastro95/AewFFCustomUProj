#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CareerSchedule.h"
#include "ECareerScenario.h"
#include "ECareerScenarioNo.h"
#include "ELCareerSchedule.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSchedule : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerSchedule> m_CareerScheduleTableBase;
    
public:
    AELCareerSchedule();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCareerPostCommandEventList(ECareerScenarioNo eScenarioNo);
    
    UFUNCTION(BlueprintCallable)
    void SetScenarioTable(ECareerScenario _Scenario);
    
    UFUNCTION(BlueprintCallable)
    void SetScenario(ECareerScenario _Scenario);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeekStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrologue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstWeekStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeScenario();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScheduleTurnMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScheduleTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenario GetScenario();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgressScenarioTurn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPostCommandEventTableIndex(ECareerScenarioNo eScenarioNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWeek();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerSchedule GetCurrentScheduleData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerSchedule> GetCareerScheduleTableBase();
    
    UFUNCTION(BlueprintCallable)
    void CareerInitSaveScheduleParam(ECareerScenario _Scenario);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerScheduleData(FCareerSchedule _Data);
    
};

