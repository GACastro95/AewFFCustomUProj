#pragma once
#include "CoreMinimal.h"
#include "SSModeServerParam.h"
#include "SSOnlineAppServerConnectData.generated.h"

USTRUCT(BlueprintType)
struct FSSOnlineAppServerConnectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSModeServerParam datServerEnv;
    
    ABP_200508_API FSSOnlineAppServerConnectData();
};

