#pragma once
#include "CoreMinimal.h"
#include "CreateGameSession_RequestParam.h"
#include "GLAPI_Base.h"
#include "OnCreateGameSessionSuccessDelegate.h"
#include "GLAPI_CreateGameSession.generated.h"

class UGLAPI_CreateGameSession;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_CreateGameSession : public UGLAPI_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateGameSessionSuccess onCreateGameSession_Success;
    
    UGLAPI_CreateGameSession();
    UFUNCTION(BlueprintCallable)
    static UGLAPI_CreateGameSession* CreateGameSessionAPI(UGameLiftClientObject* client, FCreateGameSession_RequestParam createConfig);
    
};

