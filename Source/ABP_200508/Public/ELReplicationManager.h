#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EELNetObjectGuid.h"
#include "ELNetworkGUID.h"
#include "ELReplicationManager.generated.h"

class UELNatP2PRPCPacket;
class UELNetObjectMap;
class UELReplicationState;
class UEOSCommunityInfoBase;
class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSSessionP2P;
class UEOSUserBase;

UCLASS(Blueprintable)
class UELReplicationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELNetObjectMap* NetObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* NatP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELNatP2PRPCPacket* P2PRPCPacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PCachedTransfer* P2PRPCTransfer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, UELReplicationState*> ReplicationObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuidSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentGuidIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SentPacketSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledReplication;
    
public:
    UELReplicationManager();
    UFUNCTION(BlueprintCallable)
    void UpdateSessionUsers(UEOSSessionP2P* InSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool SetupP2P(UEOSNatP2P* InNatP2P, UEOSNatP2PCachedTransfer* InNatP2PTransfer, UEOSCommunityInfoBase* InCommnuityBase, UEOSSessionP2P* InSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool SetReplicationObject(const UObject* Object, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    bool SetReplicationInterval(const UObject* Object, int32 Interval);
    
    UFUNCTION(BlueprintCallable)
    FELNetworkGUID SetGuidSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledReplication(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SendReplications(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseP2P();
    
    UFUNCTION(BlueprintCallable)
    void ProcessRPC(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveRPC(UEOSNatP2PCachedTransfer* Transfer, UEOSUserBase* UserBase, UEOSNatP2PBinary* P2PBinary);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingAllP2PConnections() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeReplicationObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSentPacketSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELNatP2PRPCPacket* GetRPCPacket() const;
    
    UFUNCTION(BlueprintCallable)
    FELNetworkGUID GetNextGuid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELNetworkGUID GetFirstGuid(int32 Seed) const;
    
    UFUNCTION(BlueprintCallable)
    UELNatP2PRPCPacket* CreateRPCPacket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELNetworkGUID CreateGuidFromSeedAndOffset(int32 Seed, int32 Offset) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddUniqueObjectToEmptyGuid(EELNetObjectGuid Guid, const UObject* Object, int32 Count, EELNetObjectGuid& OutGuid, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    bool AddUniqueObject(EELNetObjectGuid Guid, const UObject* Object, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    bool AddObject(FELNetworkGUID Guid, const UObject* Object, bool bReplicate);
    
};

