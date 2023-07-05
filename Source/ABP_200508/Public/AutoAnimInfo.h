#pragma once
#include "CoreMinimal.h"
#include "MovesSituation.h"
#include "AutoAnimInfo.generated.h"

USTRUCT(BlueprintType)
struct FAutoAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovesSituation Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryItemID;
    
    ABP_200508_API FAutoAnimInfo();
};

