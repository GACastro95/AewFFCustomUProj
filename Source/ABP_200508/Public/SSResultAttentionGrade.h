#pragma once
#include "CoreMinimal.h"
#include "SSResultGradeABCParam.h"
#include "SSResultAttentionGrade.generated.h"

USTRUCT(BlueprintType)
struct FSSResultAttentionGrade : public FSSResultGradeABCParam {
    GENERATED_BODY()
public:
    ABP_200508_API FSSResultAttentionGrade();
};

