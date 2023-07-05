#pragma once
#include "CoreMinimal.h"
#include "ELSSLobbyMatchPlayerDataToClient.generated.h"

class AELSSPlayerState;

USTRUCT(BlueprintType)
struct FELSSLobbyMatchPlayerDataToClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* matchPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchPlayerId;
    
    ABP_200508_API FELSSLobbyMatchPlayerDataToClient();
};

