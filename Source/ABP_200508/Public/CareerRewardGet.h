#pragma once
#include "CoreMinimal.h"
#include "ECareerRewardEffectType.h"
#include "ECareerRewardGetType.h"
#include "CareerRewardGet.generated.h"

USTRUCT(BlueprintType)
struct FCareerRewardGet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerRewardGetType eRewardGetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerRewardEffectType eEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleTextKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageTextKeyID;
    
    ABP_200508_API FCareerRewardGet();
};

