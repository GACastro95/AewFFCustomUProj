#pragma once
#include "CoreMinimal.h"
#include "CareerRegularRewardInfo.h"
#include "ECareerPostCommandEventMark.h"
#include "ECareerUseTurnActonImage.h"
#include "CareerUseTurnSubMenuCursor.generated.h"

USTRUCT(BlueprintType)
struct FCareerUseTurnSubMenuCursor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerUseTurnActonImage eActionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerPostCommandEventMark EventMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InjuryRisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecisionCommandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerRegularRewardInfo RegularRewardInfo;
    
    ABP_200508_API FCareerUseTurnSubMenuCursor();
};

