#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameLiftActivateStatus.h"
#include "OnStartGameSessionPlacementDelegate.h"
#include "OnStartGameSessionPlacementFailedDelegate.h"
#include "StartGameSessionPlace_RequestParam.h"
#include "GLAPI_StartGameSessionPlace.generated.h"

class UGLAPI_StartGameSessionPlace;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_StartGameSessionPlace : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGameSessionPlacement onSuccess_Request;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGameSessionPlacementFailed OnFailed;
    
    UGLAPI_StartGameSessionPlace();
    UFUNCTION(BlueprintCallable)
    static UGLAPI_StartGameSessionPlace* StartGameSessionPlacementAPItoRequestParam(UGameLiftClientObject* client);
    
    UFUNCTION(BlueprintCallable)
    EGameLiftActivateStatus Activate_RequestParam(FStartGameSessionPlace_RequestParam Request);
    
};

