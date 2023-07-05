#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StPassiveSkillData_EffectDamage.generated.h"

USTRUCT(BlueprintType)
struct FStPassiveSkillData_EffectDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fFeet;
    
    ABP_200508_API FStPassiveSkillData_EffectDamage();
};

