#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DescribePlayerSessions_RequestParam.h"
#include "EGameLiftActivateStatus.h"
#include "OnDescribePlayerSessionsSuccessDelegate.h"
#include "OnFOnDescribePlayerSessionsFailedDelegate.h"
#include "GLAPI_DescribePlayerSessions.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_DescribePlayerSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribePlayerSessionsSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOnDescribePlayerSessionsFailed OnFailed;
    
    UGLAPI_DescribePlayerSessions();

    UFUNCTION(BlueprintCallable)
    EGameLiftActivateStatus Activate(const FDescribePlayerSessions_RequestParam& requestParam);
    
};

