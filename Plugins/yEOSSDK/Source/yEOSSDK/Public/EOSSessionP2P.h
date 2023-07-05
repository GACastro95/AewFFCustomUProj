#pragma once
#include "CoreMinimal.h"
#include "EEOSNatType.h"
#include "EEOSSessionGameEventType.h"
#include "EEOSSessionHostMigrationStep.h"
#include "EEOSSessionP2PAdditionalFunctionTypeBits.h"
#include "EEOSUpdateType.h"
#include "EOSIDs.h"
#include "EOSNatP2PAPIVersionSettings.h"
#include "EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate.h"
#include "EOSSessionP2PDataSharingCompareDispatcherDelegate.h"
#include "EOSSessionP2PDataSharingReceivedDispatcherDelegate.h"
#include "EOSSessionP2PDataSharingSharedPacketDispatcherDelegate.h"
#include "EOSSessionP2PEventDispatcherDelegate.h"
#include "EOSSessionP2PHostMigrationEventDispatcherDelegate.h"
#include "EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate.h"
#include "SessionSchedule.h"
#include "EOSSessionP2P.generated.h"

class IEOSSessionP2PCallbackInterface;
class UEOSSessionP2PCallbackInterface;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSP2PPacketQueue;
class UEOSSession;
class UEOSSessionInfo;
class UEOSSessionP2PAdditionalFunctionBase;
class UEOSSessionP2PCallbackParam;
class UEOSSessionP2PPacketBase;
class UEOSSessionP2PPacketGeneratorBase;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionUserPacketMap;
class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2P : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PEventDispatcher SessionP2PEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PDataSharingSharedPacketDispatcher SessionP2PDataSharingSharedPacketDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PDataSharingReceivedDispatcher SessionP2PDataSharingReceivedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PDataSharingCompareDispatcher SessionP2PDataSharingCompareDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PBindPlayerMemberUpdatedDispatcher SessionP2PBindPlayerMemberUpdatedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PHostMigrationEventDispatcher SessionP2PHostMigrationEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher SessionP2PHostMigrationUpdatedLatencyInfoDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PPacketGeneratorBase* m_pcPacketGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSSessionUserPacketMap*> m_cUserMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSSessionP2PCallbackParam*> m_cCallbackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UEOSSessionP2PAdditionalFunctionBase*> m_cFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSession* m_pcSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionInfo* m_pcSessionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSP2PPacketQueue* m_pcPacketQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSessionSchedule> m_CloseSessionScheduleQueue;
    
public:
    UEOSSessionP2P();
    UFUNCTION(BlueprintCallable)
    bool Update();
    
    UFUNCTION(BlueprintCallable)
    bool UnregistCallbackInterface(TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface);
    
    UFUNCTION(BlueprintCallable)
    void SetupSocket(const FString& _strSocketID, uint8 _uChannelNo);
    
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    bool SetUpdateType(EEOSUpdateType _enType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSessionP2PAdditionalFunctionBits(uint8 _uSessionP2PAdditionalFunctionBits);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivedPacketMaxCacheNum(uint8 _uNum);
    
    UFUNCTION(BlueprintCallable)
    bool SetPacketGenerator(UEOSSessionP2PPacketGeneratorBase* _pcPacketGenerator);
    
    UFUNCTION(BlueprintCallable)
    bool SetEOSSession(UEOSSession* _pcSession);
    
    UFUNCTION(BlueprintCallable)
    bool SetCommunityInfo(UEOSCommunityInfoBase* _pcCommunityInfoBase);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSNatP2PAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestNatType();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLatencyCheck(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUserMap(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool RegistCallbackInterface(TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionSyncRequest();
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionGameStart();
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionGameSetup();
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionGameResume();
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionGamePause();
    
    UFUNCTION(BlueprintCallable)
    bool OnSessionGameEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsSynchronizedAllPlayerPackets();
    
    UFUNCTION(BlueprintCallable)
    bool IsSynchronizedAllPlayerPacket(int32 _sPacketType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalUserTheOwner() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHostMigratingNow();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoneSessionGameSetup();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoneSessionGamePause();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoneAllPlayerRegistedOnSession();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoneAllPlayerCheckLatency();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveP2PUser(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool HasActiveP2PUserMap();
    
    UFUNCTION(BlueprintCallable)
    bool GetUserMap(UEOSSessionUserPacketMap*& _pcUserPacketMap, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void GetTransferSize(int32& _rsSendSize, int32& _rsRecvSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfProductUserIDForOwnerUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSocketID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNatType GetNatType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionP2PAdditionalFunction(UEOSSessionP2PAdditionalFunctionBase*& _pcEOSSessionP2PAdditionalFnctionBase, EEOSSessionP2PAdditionalFunctionTypeBits _enSessionP2PAdditionalFunctionType);
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionInfo(UEOSSessionInfo*& _pcSessionInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetCopiedUserMap(TArray<UEOSSessionUserPacketMap*>& _pcCopiedUserMap);
    
    UFUNCTION(BlueprintCallable)
    int32 GetConnectedPearNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChannel() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllPlayerHostMigrationStep(EEOSSessionHostMigrationStep& _enHostMigrationStep);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllPlayerGameEvent(EEOSSessionGameEventType& _enRefEventType, bool _bIncludeHost);
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveUserMap(TArray<UEOSSessionUserPacketMap*>& _pcCopiedUserMap);
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveP2PProductUserIDList(TArray<FString>& _pcProductUserIDList);
    
    UFUNCTION(BlueprintCallable)
    FString GetAccountDisplayNameForSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccountDisplayNameForOwnerUser() const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateReceivePacket(UEOSSessionP2PPacketBase*& _pcPacket, int32 _sPacketType);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePacket(UEOSSessionP2PPacketBase*& _pcPacket, int32 _sPacketType);
    
    UFUNCTION(BlueprintCallable)
    bool CloseSocket();
    
    UFUNCTION(BlueprintCallable)
    bool CloseConnection(UEOSUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    bool AddUserMap(UEOSSessionUserPacketMap*& _pcUserPacketMap, UEOSCommunityUserBase* _pcCommunityUserBase);
    
};

