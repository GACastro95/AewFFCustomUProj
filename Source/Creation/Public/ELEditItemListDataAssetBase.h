#pragma once
#include "CoreMinimal.h"
#include "ELDataAsset.h"
#include "ELEditItemListDataAssetBase.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class CREATION_API UELEditItemListDataAssetBase : public UELDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> EditItemListTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* EditItemListTable;
    
    UELEditItemListDataAssetBase();
    UFUNCTION(BlueprintCallable)
    void LoadDataTable(const TSoftObjectPtr<UDataTable>& Source, UDataTable*& DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ImportEditItems(const UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void ImportDataTable();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEditItemDataTable();
    
};

