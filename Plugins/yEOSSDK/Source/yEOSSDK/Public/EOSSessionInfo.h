#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionNotificationType.h"
#include "EEOSSessionState.h"
#include "EOSCommunityInfoBase.h"
#include "EOSSessionInfo.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PPacketBase;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionInfo : public UEOSCommunityInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UEOSSessionP2PPacketBase*> m_cSendPackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2P* m_pcSessionP2P;
    
public:
    UEOSSessionInfo();
    UFUNCTION(BlueprintCallable)
    bool SetHostMigrationTarget(bool _bIsHostMigrationTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetEOSSessionP2P(UEOSSessionP2P* _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool SendSessionEventPacket(EEOSSessionNotificationType _enNotificationType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool SendQuitGameOnSession();
    
    UFUNCTION(BlueprintCallable)
    bool SendConnectionPacket(UEOSUserBase* _pcUserBase, bool _bNewJoinInUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresenceEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHostMigrationTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostMigrationSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowJoinInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStringOfSessionID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionState GetSessionState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, UEOSSessionP2PPacketBase*> GetSendPackets();
    
    UFUNCTION(BlueprintCallable)
    bool GetSendPacket(UEOSSessionP2PPacketBase*& _pcPacketBase, int32 _sPacketType);
    
    UFUNCTION(BlueprintCallable)
    bool GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    FString GetHostAddress();
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionP2P(UEOSSessionP2P*& _pcSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    FString GetBucketID();
    
    UFUNCTION(BlueprintCallable)
    bool DestroySessionP2P();
    
};

