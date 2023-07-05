#pragma once
#include "CoreMinimal.h"
#include "EShopDisplayItemType.h"
#include "Engine/DataTable.h"
#include "CrateItemParam.generated.h"

USTRUCT(BlueprintType)
struct FCrateItemParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmissionRateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShopDisplayItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    ABP_200508_API FCrateItemParam();
};

