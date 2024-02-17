#pragma once
#include "CoreMinimal.h"
#include "SSResultGradeABCParam.h"
#include "SSResultBallLevelGrade.generated.h"

USTRUCT(BlueprintType)
struct FSSResultBallLevelGrade : public FSSResultGradeABCParam {
    GENERATED_BODY()
public:
    ABP_200508_API FSSResultBallLevelGrade();
};

