#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSSystemMotionMapping.h"
#include "SSSystemMotionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSSystemMotionParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSystemMotionMapping Mapping;
    
    ABP_200508_API FSSSystemMotionParam();
};

