#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSKillScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FSSKillScoreParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    ABP_200508_API FSSKillScoreParam();
};

