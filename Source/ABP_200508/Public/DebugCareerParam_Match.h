#pragma once
#include "CoreMinimal.h"
#include "DebugCareerParam_Match.generated.h"

USTRUCT(BlueprintType)
struct FDebugCareerParam_Match {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LoserIndex;
    
    ABP_200508_API FDebugCareerParam_Match();
};

