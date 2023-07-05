#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeCompleteState.h"
#include "ChallengeProgressSaveData.generated.h"

USTRUCT(BlueprintType)
struct FChallengeProgressSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCompleteState m_DailyCompleteState[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCompleteState m_WeeklyCompleteState[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCompleteState m_NormalCompleteState[400];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCompleteState m_SecretCompleteState[200];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_StartDailyDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_StartWeeklyDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_StartNormalDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_StartSecretDate;
    
    ABP_200508_API FChallengeProgressSaveData();
};

