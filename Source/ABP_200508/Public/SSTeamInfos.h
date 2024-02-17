#pragma once
#include "CoreMinimal.h"
#include "SSTeamInfo.h"
#include "SSTeamInfos.generated.h"

USTRUCT(BlueprintType)
struct FSSTeamInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTeamInfo> Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Synced;
    
    ABP_200508_API FSSTeamInfos();
};

