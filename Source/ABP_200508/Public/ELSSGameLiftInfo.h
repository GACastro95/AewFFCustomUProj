#pragma once
#include "CoreMinimal.h"
#include "ELSSServerInfoBuild.h"
#include "ELSSGameLiftInfo.generated.h"

USTRUCT(BlueprintType)
struct FELSSGameLiftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSServerInfoBuild ssBuild;
    
    ABP_200508_API FELSSGameLiftInfo();
};

