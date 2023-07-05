#pragma once
#include "CoreMinimal.h"
#include "EOSStatProgress.h"
#include "EOSPlayerAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSPlayerAchievementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockTimeH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockTimeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSStatProgress> StatProgresses;
    
    FEOSPlayerAchievementInfo();
};

