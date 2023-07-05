#pragma once
#include "CoreMinimal.h"
#include "ELSSServerInfoBuild.generated.h"

USTRUCT(BlueprintType)
struct FELSSServerInfoBuild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ssServerBuildVersion;
    
    ABP_200508_API FELSSServerInfoBuild();
};

