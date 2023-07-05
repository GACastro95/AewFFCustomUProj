#pragma once
#include "CoreMinimal.h"
#include "SSLotParamBase.h"
#include "SSLotSpawnNumParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLotSpawnNumParam : public FSSLotParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnNum;
    
    ABP_200508_API FSSLotSpawnNumParam();
};

