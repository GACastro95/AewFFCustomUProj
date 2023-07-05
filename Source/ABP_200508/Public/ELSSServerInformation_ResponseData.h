#pragma once
#include "CoreMinimal.h"
#include "ELSSGameLiftInfo.h"
#include "ELSSResponseBase.h"
#include "ELSSServerInformation_ResponseData.generated.h"

USTRUCT(BlueprintType)
struct FELSSServerInformation_ResponseData : public FELSSResponseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSGameLiftInfo ssGameLiftInfo;
    
    ABP_200508_API FELSSServerInformation_ResponseData();
};

