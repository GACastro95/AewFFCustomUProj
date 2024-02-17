#pragma once
#include "CoreMinimal.h"
#include "SSResultGradeABCParam.h"
#include "SSResultJewelGrade.generated.h"

USTRUCT(BlueprintType)
struct FSSResultJewelGrade : public FSSResultGradeABCParam {
    GENERATED_BODY()
public:
    ABP_200508_API FSSResultJewelGrade();
};

