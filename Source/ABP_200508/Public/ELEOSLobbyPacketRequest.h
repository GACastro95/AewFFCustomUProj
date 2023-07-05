#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyPacketRequestType.h"
#include "LobbyPacketBase.h"
#include "ELEOSLobbyPacketRequest.generated.h"

class UObject;

UCLASS(Blueprintable)
class UELEOSLobbyPacketRequest : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEOSLobbyPacketRequestType RequestType;
    
public:
    UELEOSLobbyPacketRequest();
    UFUNCTION(BlueprintCallable)
    void SetData(EELEOSLobbyPacketRequestType Type, UObject* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELEOSLobbyPacketRequestType GetRequestType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetRequestData() const;
    
};

