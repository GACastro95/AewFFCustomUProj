#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PConnectionPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PConnectionPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PConnectionPacket();

    UFUNCTION(BlueprintCallable)
    void SetParams(const FString& _strSessionName, const FString& _strDisplayName, const FString& _strProductUserID, const FString& _strEpicAccountID, bool _bNewJoinInUser);
    
    UFUNCTION(BlueprintCallable)
    bool IsNewJoinInUser();
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionName();
    
    UFUNCTION(BlueprintCallable)
    FString GetProductUserID();
    
    UFUNCTION(BlueprintCallable)
    FString GetEpicAccountID();
    
    UFUNCTION(BlueprintCallable)
    FString GetAccountDisplayName();
    
};

