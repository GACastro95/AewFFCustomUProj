#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOSSessionP2PCallbackInterface.generated.h"

class UEOSSessionInfo;
class UEOSSessionP2P;
class UEOSSessionP2PPacketBase;

UINTERFACE(Blueprintable)
class YEOSSDK_API UEOSSessionP2PCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class YEOSSDK_API IEOSSessionP2PCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionSyncRequest(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionSetup(UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionLogout();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionGameStart(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionGameSetup(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionGameResume(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionGamePause(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionGameEnd(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSessionDispose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnReceivedSessionPacket(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDoneSessionGameSetup(UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDoneSessionGamePause(UEOSSessionInfo* SessionInfo);
    
};

