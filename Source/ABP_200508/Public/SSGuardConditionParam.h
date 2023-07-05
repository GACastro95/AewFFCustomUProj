#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSGuardReactionType.h"
#include "SSGuardConditionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSGuardConditionParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuardReactionType GuardLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuardReactionType GuardLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuardReactionType GuardLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuardReactionType GuardLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuardReactionType GuardLv5;
    
    ABP_200508_API FSSGuardConditionParam();
};

