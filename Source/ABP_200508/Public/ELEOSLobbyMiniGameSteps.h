#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyMiniGameSteps.h"
#include "LobbyPacketBase.h"
#include "ELEOSLobbyMiniGameSteps.generated.h"

UCLASS(Blueprintable)
class UELEOSLobbyMiniGameSteps : public ULobbyPacketBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEOSLobbyMiniGameSteps Step;
    
    UELEOSLobbyMiniGameSteps();

};

