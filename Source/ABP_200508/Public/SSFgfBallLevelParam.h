#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSFgfBallLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FSSFgfBallLevelParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    ABP_200508_API FSSFgfBallLevelParam();
};

