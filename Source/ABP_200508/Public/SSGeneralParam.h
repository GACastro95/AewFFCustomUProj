#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSGeneralParam.generated.h"

USTRUCT(BlueprintType)
struct FSSGeneralParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableSSAntiCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisallowedCheatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RuleExpiredAllowableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacingTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameServerShutdownTime_FromAfterGamePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameServerShutdownTime_FromGamePlay;
    
    ABP_200508_API FSSGeneralParam();
};

