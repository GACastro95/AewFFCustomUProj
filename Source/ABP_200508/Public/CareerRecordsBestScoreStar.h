#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerRecordsBestScoreStar.generated.h"

USTRUCT(BlueprintType)
struct FCareerRecordsBestScoreStar : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StarNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StarHalf;
    
    ABP_200508_API FCareerRecordsBestScoreStar();
};

