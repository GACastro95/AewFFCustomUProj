#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSLotParamBase.generated.h"

USTRUCT(BlueprintType)
struct FSSLotParamBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotWeight;
    
    ABP_200508_API FSSLotParamBase();
};

