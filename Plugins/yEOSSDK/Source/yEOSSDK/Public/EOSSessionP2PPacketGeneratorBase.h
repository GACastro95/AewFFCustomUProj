#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSSessionP2PPacketGeneratorBase.generated.h"

class UEOSSessionP2PPacketBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PPacketGeneratorBase : public UEOSCommon {
    GENERATED_BODY()
public:
    UEOSSessionP2PPacketGeneratorBase();
    UFUNCTION(BlueprintCallable)
    bool CreatePacket(UEOSSessionP2PPacketBase*& _pcPacket, int32 _sPacketType);
    
};

