#pragma once
#include "CoreMinimal.h"
#include "EEOSPacketReliability.h"
#include "EOSNatP2PCachedTransfer.h"
#include "EOSNatP2PQueueTransfer.generated.h"

class UEOSNatP2PPacketBase;
class UEOSP2PPacketQueue;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PQueueTransfer : public UEOSNatP2PCachedTransfer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSP2PPacketQueue* m_pcPacketQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSendPacketFromQueueOnUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sSendPacketNumMaxPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sSendPacketSizeMaxPerTick;
    
public:
    UEOSNatP2PQueueTransfer();
protected:
    UFUNCTION(BlueprintCallable)
    bool AddToSendPacketQueue(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability);
    
};

