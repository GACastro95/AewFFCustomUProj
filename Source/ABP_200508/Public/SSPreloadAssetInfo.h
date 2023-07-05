#pragma once
#include "CoreMinimal.h"
#include "SSPreloadAssetPlayerInfo.h"
#include "SSPreloadAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSPreloadAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Synced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPreloadAssetPlayerInfo> PlayerInfos;
    
    ABP_200508_API FSSPreloadAssetInfo();
};

