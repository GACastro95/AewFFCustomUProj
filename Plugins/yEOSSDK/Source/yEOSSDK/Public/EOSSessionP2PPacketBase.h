#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketDirectionType.h"
#include "EEOSSessionPacketTypeBP.h"
#include "EOSLockebleCommon.h"
#include "EOSSessionP2PPacketBase.generated.h"

class UEOSSessionP2PPacketBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PPacketBase : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UEOSSessionP2PPacketBase();

    UFUNCTION(BlueprintCallable)
    bool UnsetUpdateFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetDiectionType(EEOSSessionPacketDirectionType _enDirectionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSynchronizedPacket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowDelayedDelivery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionPacketTypeBP GetPacketTypeBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionPacketDirectionType GetDiectionType() const;
    
    UFUNCTION(BlueprintCallable)
    bool CopyPacketData(UEOSSessionP2PPacketBase* _pcPacketBase);
    
};

