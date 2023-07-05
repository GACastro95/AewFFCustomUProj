#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionNotificationType.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PEventPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PEventPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PEventPacket();
    UFUNCTION(BlueprintCallable)
    void SetNotificationWithPUID(EEOSSessionNotificationType _enNotificationType, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void SetNotificationType(EEOSSessionNotificationType _enNotificationType);
    
    UFUNCTION(BlueprintCallable)
    FString GetTargetProductUserID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionNotificationType GetNotificationType() const;
    
};

