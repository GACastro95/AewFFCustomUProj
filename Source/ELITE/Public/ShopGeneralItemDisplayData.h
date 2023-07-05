#pragma once
#include "CoreMinimal.h"
#include "EShopGeneralItemDisplayType.h"
#include "ShopGeneralItemManageData.h"
#include "ShopGeneralItemDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FShopGeneralItemDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShopGeneralItemDisplayType DispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShopGeneralItemManageData> ItemManageDataList;
    
    ELITE_API FShopGeneralItemDisplayData();
};

