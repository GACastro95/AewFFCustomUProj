#pragma once
#include "CoreMinimal.h"
#include "ESSRarity.h"
#include "SSLotParamBase.h"
#include "SSLotWeaponParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLotWeaponParam : public FSSLotParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    ABP_200508_API FSSLotWeaponParam();
};

