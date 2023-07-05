#pragma once
#include "CoreMinimal.h"
#include "ECareerCity.h"
#include "EMiniGameCareerResult.h"
#include "EMiniGameID.h"
#include "MiniGameInfo.generated.h"

USTRUCT(BlueprintType)
struct FMiniGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMiniGameID> MiniGameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCareer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCity CareerCity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameCareerResult CareerResult;
    
    ABP_200508_API FMiniGameInfo();
};

