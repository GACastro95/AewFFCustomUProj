#pragma once
#include "CoreMinimal.h"
#include "EEditPartsSlot.h"
#include "EEditTexTarget.h"
#include "Engine/DataTable.h"
#include "ELCustomSearchEditPartsAttireData.generated.h"

USTRUCT(BlueprintType)
struct FELCustomSearchEditPartsAttireData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEditPartsSlot> m_EditPartsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEditTexTarget> m_EditTexTarget;
    
    ELITE_API FELCustomSearchEditPartsAttireData();
};

