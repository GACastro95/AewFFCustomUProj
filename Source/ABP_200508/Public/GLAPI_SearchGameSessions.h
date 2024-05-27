#pragma once
#include "CoreMinimal.h"
#include "GLAPI_Base.h"
#include "OnSearchGameSessionsSuccessDelegate.h"
#include "GLAPI_SearchGameSessions.generated.h"

class UGLAPI_SearchGameSessions;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_SearchGameSessions : public UGLAPI_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchGameSessionsSuccess OnSuccess;
    
    UGLAPI_SearchGameSessions();

    UFUNCTION(BlueprintCallable)
    static UGLAPI_SearchGameSessions* SearchGameSessionsAPI(UGameLiftClientObject* client, const FString& fleetId, const FString& aliasID, const FString& filterExpression, const FString& sortExpression);
    
};

