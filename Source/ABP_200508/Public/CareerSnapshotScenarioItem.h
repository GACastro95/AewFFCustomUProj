#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECareerScenarioNo.h"
#include "CareerSnapshotScenarioItem.generated.h"

class UCareerSnapshot;
class UCareerSnapshotTitleItem;
class UDataTable;

UCLASS(Blueprintable)
class UCareerSnapshotScenarioItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCareerSnapshotTitleItem*> TitleItems;
    
public:
    UCareerSnapshotScenarioItem();
    UFUNCTION(BlueprintCallable)
    void RemoveSnapshot(UCareerSnapshot* Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void Init(ECareerScenarioNo No);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedTitlesNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTitlesNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTitleItems(TArray<UCareerSnapshotTitleItem*>& OutTitleItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSnapshotsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetScenarioText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenarioNo GetScenarioNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCareerSnapshot* GetRecentSnapshot() const;
    
    UFUNCTION(BlueprintCallable)
    void ConstractTitles(const UDataTable* TitleDataTable);
    
    UFUNCTION(BlueprintCallable)
    void CollectSnapshots(const TArray<UCareerSnapshot*>& Snapshots);
    
};

