#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELMatchScore_MatchType.h"
#include "ELMatchScore_EvaluationParam.generated.h"

USTRUCT(BlueprintType)
struct FELMatchScore_EvaluationParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELMatchScore_MatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MovesPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MatchEvaluation;
    
    ABP_200508_API FELMatchScore_EvaluationParam();
};

