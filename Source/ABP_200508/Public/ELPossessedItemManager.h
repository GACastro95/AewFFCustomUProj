#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AddPossessItemQuantity.h"
#include "ELRefPossessedItemInfo.h"
#include "EPossessedItemConsumeTarget.h"
#include "EPossessedItemExtendTarget.h"
#include "EPossessedItemType.h"
#include "PossessedItemParam.h"
#include "PossessedItemSaveData.h"
#include "UpdateItemQuantityCompleteDelegateDelegate.h"
#include "ELPossessedItemManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELPossessedItemManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPossessedItemParam> m_ItemParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateItemQuantityCompleteDelegate m_UpdateItemQuantityCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPossessedItemSaveData> m_ReserveUpdateItemQuantitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FELRefPossessedItemInfo> m_ItemInfoMap;
    
public:
    UELPossessedItemManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void SetupPossessedItemDataTable(TSoftObjectPtr<UDataTable> _itemDT, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void GetPossessedItemSaveDataFromIdList(TArray<int32> _targetItemIdList, TArray<FPossessedItemSaveData>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetPossessedItemSaveDataFromID(int32 _targetItemId, FPossessedItemSaveData& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetPossessedItemInfoFromIdList(TArray<int32> _targetItemIdList, TArray<FPossessedItemParam>& ItemParamList, TArray<FPossessedItemSaveData>& ItemSaveDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetPossessedItemInfoFromID(int32 _targetItemId, FPossessedItemParam& ItemParam, FPossessedItemSaveData& ItemSaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemParamFromItemType(TArray<FPossessedItemParam>& _outResultList, EPossessedItemType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void GetItemParamFromID(TArray<FPossessedItemParam>& _outResultList, TArray<int32> _targetIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetExtendItemParamFromTarget(TArray<FPossessedItemParam>& _outResultList, EPossessedItemExtendTarget _targetType);
    
    UFUNCTION(BlueprintCallable)
    void GetConsumeItemParamFromTarget(FPossessedItemParam& _outResultList, EPossessedItemConsumeTarget _targetType);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemSaveData(TArray<FPossessedItemSaveData>& _outResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemParam(TArray<FPossessedItemParam>& _outResultList);
    
    UFUNCTION(BlueprintCallable)
    void AddItemQuantity(TArray<FAddPossessItemQuantity> _addItem, FUpdateItemQuantityCompleteDelegate OnResultDelegate);
    
};

