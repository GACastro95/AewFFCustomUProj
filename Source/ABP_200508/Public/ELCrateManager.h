#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrateEjectingCompleteDelegateDelegate.h"
#include "CrateItemParam.h"
#include "CrateItemStateParam.h"
#include "EmissionItemParam.h"
#include "ELCrateManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELCrateManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_CrateItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCrateItemStateParam> m_CrateItemStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FEmissionItemParam> m_CrateEmissionItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrateItemStateParam> m_CrateEjectedItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrateItemStateParam> m_DebugForceEjectItemList;
    
public:
    UELCrateManager();

    UFUNCTION(BlueprintCallable)
    void UpdateRandomSeed();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEjectedItemData();
    
    UFUNCTION(BlueprintCallable)
    bool StartEjectingItems(const int32 _ejectCountNum, TArray<FCrateItemParam>& _resultItemList, FCrateEjectingCompleteDelegate OnResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetupCrateDataTable();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePossessedItem(bool Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnUnlockableItemPurchased(bool Successed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainCrateItemNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEjectedItemsRate();
    
    UFUNCTION(BlueprintCallable)
    void GetAllEjectItemParamList(TArray<FCrateItemStateParam>& _outList);
    
};

