#pragma once
#include "CoreMinimal.h"
#include "SSResultGradeABCParam.h"
#include "SSResultKillCountGrade.generated.h"

USTRUCT(BlueprintType)
struct FSSResultKillCountGrade : public FSSResultGradeABCParam {
    GENERATED_BODY()
public:
    ABP_200508_API FSSResultKillCountGrade();
};

