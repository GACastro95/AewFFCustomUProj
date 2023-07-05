#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesEnvironmentGroggyEnv.h"
#include "ELMovesEnvironmentGroggySpecialState.h"
#include "ELMovesEnvironmentGroggy.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesEnvironmentGroggy : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv BarricadeGroggy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv ApronGroggy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggySpecialState BarricadeLeaningAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggySpecialState BarricadeSittingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv CornerPostAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv SteelStepFrontAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv SteelStepSideAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggyEnv MonitorAttack;
    
    FELMovesEnvironmentGroggy();
};

