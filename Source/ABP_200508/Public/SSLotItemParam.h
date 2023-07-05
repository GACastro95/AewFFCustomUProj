#pragma once
#include "CoreMinimal.h"
#include "ESSSpawnItemCategory.h"
#include "SSLotParamBase.h"
#include "SSLotItemParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLotItemParam : public FSSLotParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSpawnItemCategory ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    ABP_200508_API FSSLotItemParam();
};

