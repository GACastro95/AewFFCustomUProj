#pragma once
#include "CoreMinimal.h"
#include "SSResultGradeABCParam.h"
#include "SSResultFeverGrade.generated.h"

USTRUCT(BlueprintType)
struct FSSResultFeverGrade : public FSSResultGradeABCParam {
    GENERATED_BODY()
public:
    ABP_200508_API FSSResultFeverGrade();
};

