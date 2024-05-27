#pragma once
#include "CoreMinimal.h"
#include "CreatePlayerSession_RequestParam.h"
#include "GLAPI_Base.h"
#include "OnCreatePlayerSessionSuccessDelegate.h"
#include "GLAPI_CreatePlayerSession.generated.h"

class UGLAPI_CreatePlayerSession;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_CreatePlayerSession : public UGLAPI_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatePlayerSessionSuccess OnSuccess;
    
    UGLAPI_CreatePlayerSession();

    UFUNCTION(BlueprintCallable)
    static UGLAPI_CreatePlayerSession* CreatePlayerSession(UGameLiftClientObject* client, const FCreatePlayerSession_RequestParam& requestParam);
    
};

