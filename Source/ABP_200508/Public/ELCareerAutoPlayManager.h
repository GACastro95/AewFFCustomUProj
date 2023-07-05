#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECareerAutoPlay_MatchResult.h"
#include "ECareerDebug_AutoPlayType.h"
#include "ECareerScenario.h"
#include "ELCareerAutoPlayManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELCareerAutoPlayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable_AutoPlay_Scenario_Setting;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable_AutoPlay_Scenario_Detail[5];
    
public:
    UELCareerAutoPlayManager();
protected:
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Scenario_Setting(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Scenario_Detail(ECareerScenario Index, UDataTable* pDataTable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadDataTable();
    
    UFUNCTION(BlueprintCallable)
    ECareerAutoPlay_MatchResult GetScenarioDetailWinInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetScenarioDetailChoiceNo(const FString& TitleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerDebug_AutoPlayType GetAutoPlayType() const;
    
};

