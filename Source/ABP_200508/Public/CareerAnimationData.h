#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCareerAnimationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> CareerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fHiddenTime;
    
    ABP_200508_API FCareerAnimationData();
};

