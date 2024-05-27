#pragma once
#include "CoreMinimal.h"
#include "EEOSPacketReliability.h"
#include "EOSCachedTransferReceivedDispatcherDelegate.h"
#include "EOSLockebleCommon.h"
#include "OESNatP2PCachedTransferEventDispatcherDelegate.h"
#include "EOSNatP2PCachedTransfer.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSNatP2PPacketBase;
class UEOSNatP2PReceiveBuffer;
class UEOSUserBase;
class UEOSUserContentBinary;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PCachedTransfer : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCachedTransferReceivedDispatcher ReceivedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOESNatP2PCachedTransferEventDispatcher CachedTransferEventDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSUserBase*> m_cUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PReceiveBuffer* m_pcReceiveBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* m_pcNatP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityInfoBase* m_pcCommnuityBase;
    
public:
    UEOSNatP2PCachedTransfer();

protected:
    UFUNCTION(BlueprintCallable)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetUsers(TArray<UEOSCommunityUserBase*> _pcUserBases);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSNatP2P* _pcNatP2P, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel);
    
    UFUNCTION(BlueprintCallable)
    bool SendPacket(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendContentBinary(const UEOSUserContentBinary* _pcData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendBinary(const UEOSNatP2PBinary* _pcData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendArray(const TArray<uint8>& _cData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUser(UEOSUserBase* _pcUserBase, bool _bSystemUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllUsers(bool _bSystemUpdate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceive(UEOSNatP2PBinary* _pcBinary, UEOSUserBase* _pcUserBase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameSocketID(const FString& _strSocketID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfOwnerProductUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSocketID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetChannel() const;
    
    UFUNCTION(BlueprintCallable)
    bool ContainsUser(UEOSUserBase* _pcUserBase);
    
    UFUNCTION(BlueprintCallable)
    bool ClearPacketQueue();
    
    UFUNCTION(BlueprintCallable)
    bool AddUser(UEOSUserBase* _pcUserBase, bool _bSystemUpdate);
    
};

