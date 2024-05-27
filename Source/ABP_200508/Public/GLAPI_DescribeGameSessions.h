#pragma once
#include "CoreMinimal.h"
#include "DescribeGameSessions_RequestParam.h"
#include "GLAPI_Base.h"
#include "OnDescribeGameSessionsSuccessDelegate.h"
#include "GLAPI_DescribeGameSessions.generated.h"

class UGLAPI_DescribeGameSessions;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_DescribeGameSessions : public UGLAPI_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribeGameSessionsSuccess OnSuccess;
    
    UGLAPI_DescribeGameSessions();

    UFUNCTION(BlueprintCallable)
    static UGLAPI_DescribeGameSessions* DescribePlayerSessions(UGameLiftClientObject* client, const FDescribeGameSessions_RequestParam& requestParam);
    
};

