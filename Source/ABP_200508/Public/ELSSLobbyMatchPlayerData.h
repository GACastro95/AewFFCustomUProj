#pragma once
#include "CoreMinimal.h"
#include "ELSSLobbyMatchPlayerData.generated.h"

class AELSSPlayerController;
class AELSSPlayerState;

USTRUCT(BlueprintType)
struct FELSSLobbyMatchPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* matchPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* matchPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchPlayerId;
    
    ABP_200508_API FELSSLobbyMatchPlayerData();
};

