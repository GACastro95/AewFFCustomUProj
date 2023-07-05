#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerCommandHospitalReward.generated.h"

USTRUCT(BlueprintType)
struct FCareerCommandHospitalReward : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyHealPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedCareerMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessRate;
    
    ABP_200508_API FCareerCommandHospitalReward();
};

