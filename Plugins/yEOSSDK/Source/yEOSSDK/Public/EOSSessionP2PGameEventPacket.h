#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionGameEventRequestType.h"
#include "EEOSSessionGameEventType.h"
#include "EOSSessionP2PSynchronizedPacketBase.h"
#include "EOSSessionP2PGameEventPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PGameEventPacket : public UEOSSessionP2PSynchronizedPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PGameEventPacket();

    UFUNCTION(BlueprintCallable)
    bool Request(EEOSSessionGameEventType _enEOSSessionGameEventType);
    
    UFUNCTION(BlueprintCallable)
    bool GetRequest();
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionGameEventType GetGameEventType();
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionGameEventRequestType GetGameEventRequestType();
    
};

