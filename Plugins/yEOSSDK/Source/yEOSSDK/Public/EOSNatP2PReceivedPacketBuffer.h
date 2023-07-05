#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PReceivedPacketBuffer.generated.h"

class UEOSNatP2PBinary;

USTRUCT(BlueprintType)
struct FEOSNatP2PReceivedPacketBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSNatP2PBinary*> PacketArray;
    
    YEOSSDK_API FEOSNatP2PReceivedPacketBuffer();
};

