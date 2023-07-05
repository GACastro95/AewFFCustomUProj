#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesEnvironmentGroggyEnvRun.h"
#include "ELMovesEnvironmentGroggyEnvStand.h"
#include "ELMovesEnvironmentGroggyEnv.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesEnvironmentGroggyEnv : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnvStand Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnvRun Run;
    
    FELMovesEnvironmentGroggyEnv();
};

