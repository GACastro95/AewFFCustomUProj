#pragma once
#include "CoreMinimal.h"
#include "ELMatchRecordsMatchResultInfo.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELMatchRecordsMatchResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfLoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDraws;
    
    FELMatchRecordsMatchResultInfo();
};

