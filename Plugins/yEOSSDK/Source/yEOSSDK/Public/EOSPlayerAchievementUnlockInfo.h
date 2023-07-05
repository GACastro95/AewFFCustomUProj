#pragma once
#include "CoreMinimal.h"
#include "EOSPlayerAchievementUnlockInfo.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSPlayerAchievementUnlockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockTimeH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockTimeL;
    
    FEOSPlayerAchievementUnlockInfo();
};

