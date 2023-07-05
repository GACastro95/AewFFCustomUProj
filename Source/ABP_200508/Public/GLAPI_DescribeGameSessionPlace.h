#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameLiftActivateStatus.h"
#include "OnDescribeGameSessionPlacementFailedDelegate.h"
#include "OnDescribeGameSessionPlacementSuccessDelegate.h"
#include "GLAPI_DescribeGameSessionPlace.generated.h"

class UGLAPI_DescribeGameSessionPlace;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_DescribeGameSessionPlace : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribeGameSessionPlacementSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribeGameSessionPlacementFailed OnFailed;
    
    UGLAPI_DescribeGameSessionPlace();
    UFUNCTION(BlueprintCallable)
    static UGLAPI_DescribeGameSessionPlace* DescribeGameSessionPlacementAPI(UGameLiftClientObject* client, const FString& GameSessionPlacementId);
    
    UFUNCTION(BlueprintCallable)
    EGameLiftActivateStatus Activate();
    
};

