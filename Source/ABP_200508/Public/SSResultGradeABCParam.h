#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSResultGradeABC.h"
#include "SSResultGradeABCParam.generated.h"

USTRUCT(BlueprintType)
struct FSSResultGradeABCParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSResultGradeABC GradeABC;
    
    ABP_200508_API FSSResultGradeABCParam();
};

