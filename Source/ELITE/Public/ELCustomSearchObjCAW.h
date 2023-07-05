#pragma once
#include "CoreMinimal.h"
#include "EELCustomSearch.h"
#include "ELCustomSearchEditPartsData.h"
#include "ELCustomSearchObjBase.h"
#include "ELCustomSearchObjCAW.generated.h"

UCLASS(Blueprintable)
class ELITE_API UELCustomSearchObjCAW : public UELCustomSearchObjBase {
    GENERATED_BODY()
public:
    UELCustomSearchObjCAW();
    UFUNCTION(BlueprintCallable)
    void SearchEditParts(const TArray<FELCustomSearchEditPartsData>& _EditData, const TSet<EELCustomSearch>& CustomSearchSet, TArray<FELCustomSearchEditPartsData>& outData);
    
};

