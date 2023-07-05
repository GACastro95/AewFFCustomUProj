#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketNotifyType.h"
#include "ELobbyPacketPrivateMatchNotify.h"
#include "LobbyPacketBase.h"
#include "LobbyPacketPrivateMatchNotify.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketPrivateMatchNotify : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Notify;
    
public:
    ULobbyPacketPrivateMatchNotify();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyPacketNotifyType GetNotifyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyPacketPrivateMatchNotify GetNotify() const;
    
};

