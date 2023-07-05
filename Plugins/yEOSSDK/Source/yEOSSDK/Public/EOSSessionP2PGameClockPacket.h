#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PGameClockPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PGameClockPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PGameClockPacket();
};

