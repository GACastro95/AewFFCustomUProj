#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PConnectionStatus.h"
#include "EEOSP2PActiveFlag.h"
#include "EOSLockebleBase.h"
#include "EOSSessionUserPacketMap.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PPacketBase;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionUser;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionUserPacketMap : public UEOSLockebleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionUser* m_pcSessionUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSSessionP2PPacketBase*> m_cReceivedPackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UEOSSessionP2PPacketBase*> m_cSendPackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UEOSSessionP2PSynchronizedPacketBase*> m_cReceivedSynchronizedPackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UEOSSessionP2PSynchronizedPacketBase*> m_cSendSynchronizedPackets;
    
public:
    UEOSSessionUserPacketMap();

    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSSessionUser* _pcSessionUser);
    
    UFUNCTION(BlueprintCallable)
    bool SetP2PConnectionStatus(EEOSNatP2PConnectionStatus _enConnectionStatus);
    
    UFUNCTION(BlueprintCallable)
    bool SetP2PActiveFlag(EEOSP2PActiveFlag _enActiveFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsSynchronizedAllPlayerPackets(bool _bHost);
    
    UFUNCTION(BlueprintCallable)
    bool IsOwner(UEOSSessionP2P* _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool GetSessionUser(UEOSSessionUser*& _pcSessionUser);
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, UEOSSessionP2PSynchronizedPacketBase*> GetSendSynchronizedPackets();
    
    UFUNCTION(BlueprintCallable)
    bool GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, UEOSSessionP2PPacketBase*> GetSendPackets();
    
    UFUNCTION(BlueprintCallable)
    bool GetSendPacket(UEOSSessionP2PPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool GetReceivedPacket(TArray<UEOSSessionP2PPacketBase*>& _pcPackets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNatP2PConnectionStatus GetP2PConnectionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSP2PActiveFlag GetP2PActiveFlag() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindReceivedPacket(UEOSSessionP2PPacketBase*& _pcPackets, int32 _sPacketType, bool _bRemovePacket);
    
};

