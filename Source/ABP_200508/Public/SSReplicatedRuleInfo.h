#pragma once
#include "CoreMinimal.h"
#include "SSReplicatedRuleInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSReplicatedRuleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RuleScheduleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Expired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Synced;
    
    ABP_200508_API FSSReplicatedRuleInfo();
};

