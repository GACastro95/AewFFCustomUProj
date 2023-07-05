#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerAffectMatchInjury.generated.h"

USTRUCT(BlueprintType)
struct FCareerAffectMatchInjury : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCalcHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCalcArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCalcBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCalcLeg;
    
    ABP_200508_API FCareerAffectMatchInjury();
};

