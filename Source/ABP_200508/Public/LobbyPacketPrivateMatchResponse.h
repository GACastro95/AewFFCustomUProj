#pragma once
#include "CoreMinimal.h"
#include "LobbyPacketBase.h"
#include "LobbyPacketPrivateMatchResponse.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketPrivateMatchResponse : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Accept;
    
public:
    ULobbyPacketPrivateMatchResponse();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccept() const;
    
};

