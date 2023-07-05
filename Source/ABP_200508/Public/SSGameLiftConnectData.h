#pragma once
#include "CoreMinimal.h"
#include "SSGameLiftConnectData.generated.h"

USTRUCT(BlueprintType)
struct FSSGameLiftConnectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString awsAccessKeyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString awsSecretAccessKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString awsTargetRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString awsAliasId;
    
    ABP_200508_API FSSGameLiftConnectData();
};

