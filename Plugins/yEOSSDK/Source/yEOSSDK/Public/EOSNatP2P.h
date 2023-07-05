#pragma once
#include "CoreMinimal.h"
#include "EEOSNatType.h"
#include "EEOSPacketReliability.h"
#include "EEOSUpdateType.h"
#include "EEOSUserType.h"
#include "EOSIDs.h"
#include "EOSNatP2PAPIVersionSettings.h"
#include "EOSNatP2PEventDispatcherDelegate.h"
#include "EOSNatP2PReceivePacketDispatcherDelegate.h"
#include "EOSNatP2P.generated.h"

class UEOSCommunityInfoBase;
class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PPacketBase;
class UEOSUserBase;
class UEOSUserBaseWithCountMap;
class UEOSUserContentBinary;
class UEOSUserManager;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2P : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSNatP2PEventDispatcher P2PEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSNatP2PReceivePacketDispatcher P2PReceivePacketDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_cAcceptSocketIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSUserBaseWithCountMap*> m_cUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, int32> m_cRequestChanneles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* m_pcUserManager;
    
public:
    UEOSNatP2P();
    UFUNCTION(BlueprintCallable)
    bool Update();
    
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    bool SetUpdateType(EEOSUpdateType _enType);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetUserType(EEOSUserType _enUserType);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyTransferUpdates(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSNatP2PAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceptAnyUser(bool _bAccept);
    
    UFUNCTION(BlueprintCallable)
    bool SendPacket(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendContentBinary(const UEOSUserContentBinary* _pcData, const UEOSUserBase* _pcUser, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendBinary(const UEOSNatP2PBinary* _pcData, const UEOSUserBase* _pcUser, const FString& _strSocketID, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendArray(const TArray<uint8>& _cData, const UEOSUserBase* _pcUser, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _enReliability);
    
    UFUNCTION(BlueprintCallable)
    bool RequestNatType();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUserById(const FString& _strUserId);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUser(UEOSUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRequestChannel(uint8 _uChannel);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAcceptSocket(const FString& _strSocketID);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeP2PCachedTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel, int32 _sOptionBits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNatType GetNatType() const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateP2PCachedTransfer(UEOSNatP2PCachedTransfer*& _pcCachedTransfer, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel, int32 _sOptionBits);
    
    UFUNCTION(BlueprintCallable)
    bool AddUser(UEOSUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    bool AddTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    bool AddRequestChannel(uint8 _uChannel);
    
    UFUNCTION(BlueprintCallable)
    bool AddAcceptSocket(const FString& _strSocketID);
    
};

