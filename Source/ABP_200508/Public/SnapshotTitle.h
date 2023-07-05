#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerScenarioNo.h"
#include "ECareerStageType.h"
#include "SnapshotTitle.generated.h"

USTRUCT(BlueprintType)
struct FSnapshotTitle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenarioNo ScenarioNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Week;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerStageType Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Turn;
    
    ABP_200508_API FSnapshotTitle();
};

