#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PBinary.h"
#include "EOSNatP2PReceiveBuffer.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PReceiveBuffer : public UEOSNatP2PBinary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReceiveBuffer;
    
public:
    UEOSNatP2PReceiveBuffer();
};

