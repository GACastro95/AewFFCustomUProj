#pragma once
#include "CoreMinimal.h"
#include "ESSRarity.h"
#include "SSLotParamBase.h"
#include "SSLotRarityParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLotRarityParam : public FSSLotParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRarity Rarity;
    
    ABP_200508_API FSSLotRarityParam();
};

