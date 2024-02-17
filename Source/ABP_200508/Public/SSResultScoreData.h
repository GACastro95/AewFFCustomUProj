#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSResultScoreData.generated.h"

USTRUCT(BlueprintType)
struct FSSResultScoreData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    ABP_200508_API FSSResultScoreData();
};

