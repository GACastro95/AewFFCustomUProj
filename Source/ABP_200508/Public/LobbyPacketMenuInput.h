#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketMenuInputSendType.h"
#include "ELobbyPacketMenuInputType.h"
#include "LobbyPacketBase.h"
#include "LobbyPacketMenuInput.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketMenuInput : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyPacketMenuInputType InputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyPacketMenuInputSendType SendType;
    
public:
    ULobbyPacketMenuInput();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyPacketMenuInputSendType GetSendType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyPacketMenuInputType GetInputValue() const;
    
};

