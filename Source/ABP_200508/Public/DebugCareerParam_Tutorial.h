#pragma once
#include "CoreMinimal.h"
#include "DebugCareerParam_Tutorial.generated.h"

USTRUCT(BlueprintType)
struct FDebugCareerParam_Tutorial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RequestNumber;
    
    ABP_200508_API FDebugCareerParam_Tutorial();
};

