#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionResponceType.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PGeneralPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PGeneralPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PGeneralPacket();

    UFUNCTION(BlueprintCallable)
    bool SetResponse(EEOSSessionResponceType _enResponceType);
    
};

