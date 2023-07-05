#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameLiftActivateStatus.h"
#include "ESSGameLiftConnectType.h"
#include "OnErrorDelegate.h"
#include "SSGameLiftConnectData.h"
#include "GLAPI_Base.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnError onRequestError;
    
    UGLAPI_Base();
    UFUNCTION(BlueprintCallable)
    static FSSGameLiftConnectData GetGameLiftConnectData(const ESSGameLiftConnectType accsessTarget);
    
    UFUNCTION(BlueprintCallable)
    EGameLiftActivateStatus Activate();
    
};

