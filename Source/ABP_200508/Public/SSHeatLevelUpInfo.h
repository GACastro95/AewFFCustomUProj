#pragma once
#include "CoreMinimal.h"
#include "SSHeatLevelUpChangedMove.h"
#include "SSHeatLevelUpInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSHeatLevelUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatLevelUpChangedMove> ChangedMove;
    
    ABP_200508_API FSSHeatLevelUpInfo();
};

