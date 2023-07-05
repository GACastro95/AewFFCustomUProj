#pragma once
#include "CoreMinimal.h"
#include "ESSMoveCommand.h"
#include "SSHeatLevelUpChangedMove.generated.h"

USTRUCT(BlueprintType)
struct FSSHeatLevelUpChangedMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveCommand MoveCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveId;
    
    ABP_200508_API FSSHeatLevelUpChangedMove();
};

