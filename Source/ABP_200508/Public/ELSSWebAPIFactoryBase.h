#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSModeServerParam.h"
#include "SSServerEndpoint.h"
#include "CreateWebAPISettingDelegate.h"
#include "SSSuccessMatchData.h"
#include "WebRequestErrorDialogEventDelegate.h"
#include "ELSSWebAPIFactoryBase.generated.h"

class UELGameInstance;
class UELSSOnlineError;
class UELSSWebAPIFactoryBase;
class UELSSWebRequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSWebAPIFactoryBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateWebAPISetting onCreateWebAPISetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWebRequestErrorDialogEvent onSSWebAPIErrorDialogOpen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSuccessMatchData ssMatchSessionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UELSSWebRequestBase*> ssHttpRequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSOnlineError* ssOnlineError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSServerEndpoint> SSServerEndpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSModeServerParam ssModeServerEnvData;
    
public:
    UELSSWebAPIFactoryBase();

protected:
    UFUNCTION(BlueprintCallable)
    static void SetInstance(UELSSWebAPIFactoryBase* Instance);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    UELGameInstance* GetGameInstance();
    
};

