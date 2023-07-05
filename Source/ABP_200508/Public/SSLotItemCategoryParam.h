#pragma once
#include "CoreMinimal.h"
#include "ESSSpawnItemCategory.h"
#include "SSLotParamBase.h"
#include "SSLotItemCategoryParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLotItemCategoryParam : public FSSLotParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSpawnItemCategory Category;
    
    ABP_200508_API FSSLotItemCategoryParam();
};

