#pragma once
#include "CoreMinimal.h"
#include "EELCustomSearch.h"
#include "ELCustomSearchMovesData.h"
#include "ELCustomSearchObjBase.h"
#include "ELCustomSearchObjCAM.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class ELITE_API UELCustomSearchObjCAM : public UELCustomSearchObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UObject*> m_ItemInfoMap;
    
    UELCustomSearchObjCAM();
    UFUNCTION(BlueprintCallable)
    void SearchMoves(const TArray<FELCustomSearchMovesData>& _MovesData, const TSet<EELCustomSearch>& CustomSearchSet, const TArray<int32>& _CategoryList, TArray<FELCustomSearchMovesData>& outData);
    
    UFUNCTION(BlueprintCallable)
    void GetMenuData(const UDataTable* _MenuTable, const UDataTable* _MenuDetailTable, const TArray<int32>& _InCategory, TArray<int32>& _outCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetMenuCategory(const UDataTable* _CategoryTable, const TSet<EELCustomSearch>& CustomSearchSet, TArray<int32>& _outCategory);
    
};

