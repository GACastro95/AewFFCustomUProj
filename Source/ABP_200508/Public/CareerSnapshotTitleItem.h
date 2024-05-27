#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapshotTitle.h"
#include "CareerSnapshotTitleItem.generated.h"

class UCareerSnapshot;

UCLASS(Blueprintable)
class UCareerSnapshotTitleItem : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnValueChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChanged OnValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCareerSnapshot*> TitleSnapshots;
    
public:
    UCareerSnapshotTitleItem();

    UFUNCTION(BlueprintCallable)
    void RemoveSnapshot(UCareerSnapshot* Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void Init(const FSnapshotTitle& NewTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeekText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCareerSnapshot*> GetSnapshots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSnapshotNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCareerSnapshot* GetRecentSnapshot() const;
    
    UFUNCTION(BlueprintCallable)
    void CollectSnapshots(TArray<UCareerSnapshot*>& Snapshots);
    
};

