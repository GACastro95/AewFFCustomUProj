#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketSyncProcType.h"
#include "EEOSSessionPacketSyncState.h"
#include "EEOSSessionPacketTransfterState.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PSynchronizedPacketBase.generated.h"

class UEOSSessionP2PSynchronizedPacketBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PSynchronizedPacketBase : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PSynchronizedPacketBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateFrameCount();
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRetryCount(uint8 _uMaxRetryCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFrameCount(int32 _sMaxFrameCount);
    
    UFUNCTION(BlueprintCallable)
    bool SendForHostMigration(int32 _uPacketIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Retry();
    
    UFUNCTION(BlueprintCallable)
    bool ResetRetry();
    
    UFUNCTION(BlueprintCallable)
    bool RequestForResult(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool IsReply();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedToSendByHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedToSendByClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedToMigrateWhenHostMigration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionPacketTransfterState GetTransferState() const;
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionPacketSyncProcType GetSyncProcType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionPacketSyncState GetPacketSyncState() const;
    
    UFUNCTION(BlueprintCallable)
    bool Compare(UEOSSessionP2PSynchronizedPacketBase* _pstPacketBase);
    
};

