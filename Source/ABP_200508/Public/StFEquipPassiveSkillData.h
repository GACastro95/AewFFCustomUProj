#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StPassiveSkillData.h"
#include "StFEquipPassiveSkillData.generated.h"

USTRUCT(BlueprintType)
struct FStFEquipPassiveSkillData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPassiveSkillData StPassiveSkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fTriggerSec;
    
    ABP_200508_API FStFEquipPassiveSkillData();
};

