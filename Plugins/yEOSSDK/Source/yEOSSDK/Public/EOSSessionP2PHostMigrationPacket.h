#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationClientResultType.h"
#include "EEOSSessionHostMigrationStep.h"
#include "EEOSSessionHostMigrationType.h"
#include "EOSSessionP2PSynchronizedPacketBase.h"
#include "EOSSessionP2PHostMigrationPacket.generated.h"

class UEOSSessionInfo;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PHostMigrationPacket : public UEOSSessionP2PSynchronizedPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PHostMigrationPacket();
    UFUNCTION(BlueprintCallable)
    bool SetSessionInfo(UEOSSessionInfo* _pcSessionInfo);
    
    UFUNCTION(BlueprintCallable)
    bool SetProductUserID(const FString& _strOldHostPUID, const FString& _strNextHostPUID, int32 _sPriorityIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetClientResultType(EEOSSessionHostMigrationClientResultType _enHostMigrationClientResultType);
    
    UFUNCTION(BlueprintCallable)
    bool Request(EEOSSessionHostMigrationType _enType, EEOSSessionHostMigrationStep _enStep);
    
    UFUNCTION(BlueprintCallable)
    FString GetOldHostProductUserID();
    
    UFUNCTION(BlueprintCallable)
    FString GetNextSessionID();
    
    UFUNCTION(BlueprintCallable)
    FString GetNextHostProductUserID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMemberNum();
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionHostMigrationType GetHostMigrationType();
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionHostMigrationStep GetHostMigrationStep();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentHostPriorityIndex();
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionHostMigrationClientResultType GetClientResultType();
    
};

