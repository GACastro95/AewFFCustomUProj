#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ESSWrestlerType.h"
#include "SSWrestlerSettings.generated.h"

USTRUCT(BlueprintType)
struct FSSWrestlerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditWrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWrestlerType EditWrestlerType;
    
    ABP_200508_API FSSWrestlerSettings();
};

