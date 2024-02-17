#pragma once
#include "CoreMinimal.h"
#include "SSFgfMatchInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSFgfMatchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TigerTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FgfFieldPatternId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Synced;
    
    ABP_200508_API FSSFgfMatchInfo();
};

