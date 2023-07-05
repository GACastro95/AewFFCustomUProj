#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSHitEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FSSHitEffectParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectDatabaseRowName;
    
    ABP_200508_API FSSHitEffectParam();
};

