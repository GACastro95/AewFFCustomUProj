#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "yMenuInputParam.generated.h"

USTRUCT(BlueprintType)
struct FyMenuInputParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatFastestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatAcceleration;
    
    ABP_200508_API FyMenuInputParam();
};

