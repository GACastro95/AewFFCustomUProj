#pragma once
#include "CoreMinimal.h"
#include "EOSSearchResultsBase.h"
#include "EOSLobbySearchResults.generated.h"

class UEOSLobby;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLobbySearchResults : public UEOSSearchResultsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobby* m_pcLobby;
    
public:
    UEOSLobbySearchResults();

};

