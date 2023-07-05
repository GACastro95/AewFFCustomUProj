#pragma once
#include "CoreMinimal.h"
#include "EEOSPacketReliability.h"
#include "EOSNatP2PPacketBase.h"
#include "ELNatP2PRPCPacket.generated.h"

class UELNetObjectMap;

UCLASS(Blueprintable)
class UELNatP2PRPCPacket : public UEOSNatP2PPacketBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELNetObjectMap* CurrentObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SentPacketSize;
    
public:
    UELNatP2PRPCPacket();
protected:
    UFUNCTION(BlueprintCallable)
    bool SendPacketBuffer(const TArray<uint8>& Buffer, EEOSPacketReliability Reliability);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSentPacketSize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSentPacketSize() const;
    
};

