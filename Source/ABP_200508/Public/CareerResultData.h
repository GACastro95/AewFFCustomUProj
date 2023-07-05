#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerRecordsInfo.h"
#include "ECareerResultType.h"
#include "CareerResultData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCareerResultData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerResultType resultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerRecordsInfo RecordsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ResultRankAssetPath;
    
    ABP_200508_API FCareerResultData();
};

