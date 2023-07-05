#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSDamageSE.h"
#include "SSGuardReactionParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSSGuardReactionParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinueGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDamageSE DamageSEOverride;
    
    ABP_200508_API FSSGuardReactionParam();
};

