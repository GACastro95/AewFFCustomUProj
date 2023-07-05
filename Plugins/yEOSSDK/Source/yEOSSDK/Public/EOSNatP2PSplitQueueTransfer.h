#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PQueueTransfer.h"
#include "EOSNatP2PReceivedPacketBuffer.h"
#include "EOSNatP2PSplitPacketCache.h"
#include "EOSNatP2PSplitQueueTransferConnectionState.h"
#include "EOSNatP2PSplitQueueTransfer.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PSplitQueueTransfer : public UEOSNatP2PQueueTransfer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSNatP2PSplitPacketCache> m_cReceivedSplitPacketMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSNatP2PReceivedPacketBuffer> m_cReceivedPacketMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sCurrentSendPacketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaitAllP2PConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaitingAllP2PConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSNatP2PSplitQueueTransferConnectionState> m_cConnectionStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sCompressionPacketSizeThreshold;
    
public:
    UEOSNatP2PSplitQueueTransfer();
};

