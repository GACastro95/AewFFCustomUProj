#pragma once
#include "CoreMinimal.h"
#include "ECareerScenarioNo.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerSnapshotMenuWidgetBase.generated.h"

class UCareerSnapshot;
class UCareerSnapshotScenarioItem;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerSnapshotMenuWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeleteMode;
    
public:
    UELCareerSnapshotMenuWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWaitSaveSnapshotNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDeleteModeOnce();
    
    UFUNCTION(BlueprintCallable)
    void ResetDeleteModeOnce();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemveAllShapshot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDelete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeItems(const UDataTable* TitleDataTable, const TArray<UCareerSnapshot*> Snapshots, TMap<ECareerScenarioNo, UCareerSnapshotScenarioItem*>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void FilterExistsSnapshot(const TArray<UCareerSnapshot*>& Snapshots, TArray<UCareerSnapshot*>& OutSnapshots);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Up();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Right();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Left();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Down();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateSnapshots(TArray<UCareerSnapshot*>& OutSnapshots);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallMoveCursor(int32 AddValue, bool IsEnabledLoop);
    
};

