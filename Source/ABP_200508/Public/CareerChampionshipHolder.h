#pragma once
#include "CoreMinimal.h"
#include "CareerChampionshipCore.h"
#include "CareerChampionshipHolder.generated.h"

USTRUCT(BlueprintType)
struct FCareerChampionshipHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore World_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore Womens_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore TNT_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore TagTeam_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore FTW_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipCore TBS_Championship;
    
    ABP_200508_API FCareerChampionshipHolder();
};

